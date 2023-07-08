sudo apt update
sudo apt install libappindicator1 libnm0 libtcmalloc-minimal4
sudo nano /etc/profile.d/steam_client.sh
cd
wget https://steamcdn-a.akamaihd.net/client/installer/steam.deb
sudo chmod +x steam.deb 
sudo apt install ./steam.deb