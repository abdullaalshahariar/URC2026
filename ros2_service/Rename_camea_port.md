### Find Harwdare id
```
lsusb
```
#### Example
ubuntu@ubuntu:~$ lsusb
Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
Bus 002 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub
Bus 002 Device 002: ID 174c:2362 ASMedia Technology Inc. Ugreen Storage Device
Bus 003 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
Bus 003 Device 002: ID 0408:5481 Quanta Computer, Inc. HP Wide Vision HD Camera
Bus 003 Device 003: ID 13d3:3567 IMC Networks Wireless_Device
Bus 003 Device 005: ID *046d:0825* Logitech, Inc. Webcam C270
Bus 004 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub
ubuntu@ubuntu:~$ 

In this case 046d:0825 for webcam

### Get serial number
```
lsusb -v -d <hardware_id> | grep iSerial
```

#### Example
ubuntu@ubuntu:~$ lsusb -v -d 046d:0825 | grep iSerial
Couldn't open device, some information will be missing
  iSerial                 2 *47AACB50*

### Create custom udev rule for camera
```
sudo nano /etc/udev/rules.d/99-camera.rules
```
paste in the file
```
SUBSYSTEM=="video4linux", ATTRS{idVendor}=="046d", ATTRS{idProduct}=="0825", SYMLINK+="left_camera"
```

### Make os aware new udev rule
```
sudo udevadm control --reload-rules
sudo udevadm trigger
```

### Check
```
v4l2-ctl --device=/dev/left_camera --all
```