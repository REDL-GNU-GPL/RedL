#!/bin/bash
sudo apt-get install gcc gpp g++

sudo rmdir /bin/bin
sudo rmdir /bin/libs
sudo rm /bin/redl.cpp

sudo mv bin /bin/
sudo mv libs /bin/
sudo mv redl.cpp /bin/
g++ /bin/redl.cpp -o /bin/redl
echo "ALL COMPLEATE GO REBOOT SYSTEM"  
