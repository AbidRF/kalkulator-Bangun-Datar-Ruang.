import QtQuick
import QtQuick3D
import QtQuick.Window
import com.company.serialmanager 1.0

Window {
  id: root
  width: 540
  height: 480
  visible: true
  title: qsTr("Accelerometer Data Visualizer")

  SerialManager {
    id: serialManager
    onRollChanged: {
      cubeModel.eulerRotation.x = -roll;
      textRollValue.text = roll.toFixed(2)
    }
    onPitchChanged: {
      cubeModel.eulerRotation.z = (-1.0) * -pitch;
      textPitchValue.text = pitch.toFixed(2)
    }
    onYawChanged: {
      cubeModel.eulerRotation.y = -yaw;
      textYawValue.text = yaw.toFixed(2)
    }
  }

  Node {
    id: standAloneScene
    Model {
      id: cubeModel
      position: Qt.vector3d(0, 0, 0)
      scale: Qt.vector3d(2, 0.5, 1)
      source: "#Cube"
      materials: [
        DefaultMaterial {
          diffuseMap: Texture {
            sourceItem: Item {
              anchors.fill: parent
              Rectangle {
                anchors.fill: parent
                color: "white"
              }
              Image {
                anchors.fill: parent
                source: "qrc:/Images/chip.jpg"
              }
            }
          }
        }
      ]
    }
  }

  View3D {
    id: view
    anchors.fill: parent
    environment: SceneEnvironment {
      clearColor: "#222222"
      backgroundMode: SceneEnvironment.Color
      antialiasingMode: SceneEnvironment.SSAA
      antialiasingQuality: SceneEnvironment.VeryHigh
    }
    importScene: standAloneScene
    PerspectiveCamera {
      position: Qt.vector3d(0, 200, 300)
      eulerRotation.x: -30
    }

    DirectionalLight {
      eulerRotation.x: -30
      eulerRotation.y: -70
    }
  }

  Text {
    id: textRoll
    x: root.width / 2 - 60
    y: 20
    visible: true
    text: qsTr("Roll:")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }

  Text {
    id: textRollValue
    x: textRoll.x + 80
    y: textRoll.y
    visible: true
    text: qsTr("0")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }

  Text {
    id: textPitch
    x: root.width / 2 - 60
    y: 50
    visible: true
    text: qsTr("Pitch:")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }

  Text {
    id: textPitchValue
    x: textPitch.x + 80
    y: textPitch.y
    visible: true
    text: qsTr("0")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }

  Text {
    id: textYaw
    x: root.width / 2 - 60
    y: 80
    visible: true
    text: qsTr("Yaw:")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }

  Text {
    id: textYawValue
    x: textYaw.x + 80
    y: textYaw.y
    visible: true
    text: qsTr("0")
    font.pixelSize: 20
    horizontalAlignment: Text.AlignLeft
    color: "white"
  }
}
