#!/bin/bash
sudo apt-get install gcc gpp g++
sudo mv bin /bin/
sudo mv libs /bin/
sudo mv redl.cpp /bin/
g++ /bin/redl.cpp -o /bin/redl
echo "ALL COMPLEATE GO REBOOT SYSTEM"  
