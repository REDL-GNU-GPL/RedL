#!/bin/bash
sudo apt-get install gcc g++ gpp glade libgtk-3-dev pkg-config libglade2-dev -y
sudo sh -c "echo 'PATH=\$PATH:/var/redl/' >> ~/.bashrc"
sudo sh -c "echo 'export PATH' >> ~/.bashrc"
cp -r redl /var/

g++ /var/redl/redl.cpp -o /var/redl/redl

