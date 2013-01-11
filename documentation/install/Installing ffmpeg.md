## Installing ffmpeg

To install `ffmpeg` on your linux machine, create a shell file and paste the following lines in there. Then simply run it.

**ffmpeg.sh**

```sh
yum erase ffmpeg x264 x264-devel
yum install gcc git make nasm pkgconfig wget
mkdir ffmpeg-source

# yasm
cd ffmpeg-source
wget http://www.tortall.net/projects/yasm/releases/yasm-1.2.0.tar.gz
tar xzvf yasm-1.2.0.tar.gz
cd yasm-1.2.0
./configure
make
make install

# x.264
cd ..
git clone git://git.videolan.org/x264
cd x264
./configure --enable-static
make
make install

# lame
cd ..
wget http://downloads.sourceforge.net/project/lame/lame/3.99/lame-3.99.5.tar.gz
tar xzvf lame-3.99.5.tar.gz
cd lame-3.99.5
./configure --disable-shared --enable-nasm
make
make install

# libogg
cd ..
wget http://downloads.xiph.org/releases/ogg/libogg-1.3.0.tar.gz
tar xzvf libogg-1.3.0.tar.gz
cd libogg-1.3.0
./configure --disable-shared
make
make install

# liborvis
cd ..
wget http://downloads.xiph.org/releases/vorbis/libvorbis-1.3.3.tar.gz
tar xzvf libvorbis-1.3.3.tar.gz
cd libvorbis-1.3.3
./configure --disable-shared
make
make install

# libvpx
cd ..
git clone http://git.chromium.org/webm/libvpx.git
cd libvpx
./configure
make
make install

# zlib
cd ..
wget http://zlib.net/zlib-1.2.7.tar.gz
tar xzvf zlib-1.2.7.tar.gz
cd zlib-1.2.7
./configure
make
make install

# ffmpeg
cd ..
git clone git://source.ffmpeg.org/ffmpeg
cd ffmpeg
./configure --enable-gpl --enable-libmp3lame --enable-libvorbis --enable-libvpx --enable-libx264
make
make install
```
