xhc-whb04b-6 Treiber
====================
In diesem Ordner liegt die compilierte binaer Datei für linuxcnc 2.7.x  um
das Handrad xhc-whb04b-6 zu betreiben.

Es stammt aus dem linuxcnc Port von ctbenergy

-> https://github.com/ctbenergy/linuxcnc/tree/2.7-feature-xhc-whb04b-6

Im Ogiginal ist das Modul von rubienr  für Machinekit geschrieben worden.

https://github.com/rubienr/machinekit 


UDEV

The xhc-whb04b-6 executable needs permission for reading the pendant’s USB device. There may be the need for additional udev rules. If so, this file
```
/etc/udev/rules.d/99-xhc-whb04b-6.rules
```
should be created with the single line
```
ATTR{idProduct}=="eb93", ATTR{idVendor}=="10ce", MODE="0666", OWNER="root", GROUP="plugdev"
```
