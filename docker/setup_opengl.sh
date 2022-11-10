cd /tmp
git clone https://github.com/glfw/glfw.git
cd glfw
git checkout 3.3.8
mkdir build
cd build
cmake ..
make -j "$(nproc)"
echo "build glfw successful."