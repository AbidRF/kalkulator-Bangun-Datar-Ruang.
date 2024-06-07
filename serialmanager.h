#ifndef SERIALMANAGER_H
#define SERIALMANAGER_H

#include <QObject>
#include <QSerialPort>

class SerialManager : public QObject
{
    Q_OBJECT
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)

public:
    explicit SerialManager(QObject *parent = nullptr);
    ~SerialManager();

    float roll() const;
    void setRoll(float newRoll);

    float pitch() const;
    void setPitch(float newPitch);

    float yaw() const;
    void setYaw(float newYaw);

signals:
    void rollChanged();
    void pitchChanged();
    void yawChanged();

public slots:
    void readyRead();

private:
    QSerialPort m_serial;
    bool m_connectStatus;
    float m_roll;
    float m_pitch;
    float m_yaw;
};

#endif // SERIALMANAGER_H
