#!/opt/homebrew/bin/zsh

echo '------------------------------------'
echo $TODAY
echo '------------------------------------'
mkdir ~/src/$TODAY/
cd ~/src/$TODAY/
echo '------------------------------------'
git clone --recursive https://github.com/qmk/qmk_firmware.git
cd ~/src/$TODAY/qmk_firmware/
ls -l ~/src/$TODAY/qmk_firmware/
echo '------------------------------------'
qmk setup
echo $TODAY
echo '------------------------------------'
echo $PANGAEA_HOME
echo $QMK_HOME
echo '------------------------------------'
ls $PANGAEA_HOME/
cp -r $PANGAEA_HOME/ ~/src/$TODAY/qmk_firmware/keyboards/pangaea/
ls -l ~/src/$TODAY/qmk_firmware/keyboards/ | grep pangaea
