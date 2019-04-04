#!/bin/bash
read -p 'Direc name: ' name
sudo mkdir $name
echo Your directory $name is being created
thefile=`find . -type f -name "*.py"`
mv $thefile ~/$name
