#include <QDebug>
#include "serialmanager.h"

SerialManager::SerialManager(QObject *parent)
    : QObject{parent}, m_roll(0.0f), m_pitch(0.0f), m_yaw(0.0f)
{
    m_connectStatus = false;
    qDebug() << "Connecting with Serial Port";
    m_serial.setBaudRate(QSerialPort::Baud9600);
    m_serial.setDataBits(QSerialPort::Data8);
    m_serial.setParity(QSerialPort::NoParity);
    m_serial.setStopBits(QSerialPort::OneStop);
    m_serial.setFlowControl(QSerialPort::NoFlowControl);
    m_serial.setPortName("COM4");
    if (m_serial.open(QIODevice::ReadWrite))
    {
        m_connectStatus = true;
        qDebug() << "Serial Port Opened Successfully";
        m_serial.write("Hello World from Qt\r\n");
        // Connect Signal and Slots
        connect(&m_serial, SIGNAL(readyRead()), this, SLOT(readyRead()));
    }
    else
    {
        m_connectStatus = false;
        qDebug() << "Unable to open the Selected Serial Port" << m_serial.error();
    }
}

SerialManager::~SerialManager()
{
    // If serial port is open close it
    if (m_serial.isOpen())
    {
        m_serial.close();
    }
}

void SerialManager::readyRead()
{
    QByteArray serialData;
    float tempRoll;
    float tempPitch;
    float tempYaw;
    bool ok;

    if (m_serial.canReadLine())
    {
        serialData = m_serial.readLine();
        QString serialDataString(serialData);
        QStringList parts = serialDataString.split(",");

        if (parts.size() == 3)
        {
            tempRoll = parts[0].toFloat(&ok);
            if (ok)
            {
                tempPitch = parts[1].toFloat(&ok);
                if (ok)
                {
                    tempYaw = parts[2].toFloat(&ok);
                    if (ok)
                    {
                        // Balik tanda jika diperlukan
                        setRoll(-tempRoll);
                        setPitch(-tempPitch);
                        setYaw(-tempYaw);
                    }
                }
            }
        }
    }
}

float SerialManager::roll() const
{
    return m_roll;
}

void SerialManager::setRoll(float newRoll)
{
    if (qFuzzyCompare(m_roll, newRoll))
        return;
    m_roll = newRoll;
    emit rollChanged();
}

float SerialManager::pitch() const
{
    return m_pitch;
}

void SerialManager::setPitch(float newPitch)
{
    if (qFuzzyCompare(m_pitch, newPitch))
        return;
    m_pitch = newPitch;
    emit pitchChanged();
}

float SerialManager::yaw() const
{
    return m_yaw;
}

void SerialManager::setYaw(float newYaw)
{
    if (qFuzzyCompare(m_yaw, newYaw))
        return;
    m_yaw = newYaw;
    emit yawChanged();
}
