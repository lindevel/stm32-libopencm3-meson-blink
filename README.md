# Usage
1. Install arm-none-eabi-gcc, meson and libopencm3([package for Arch Linux](https://archlinux.org/packages/community/any/libopencm3/), [for other distros see this PKGBUILD file](https://github.com/archlinux/svntogit-community/blob/packages/libopencm3/trunk/PKGBUILD))
2. Configure: `meson build --cross-file cross-file.txt`
3. Build: `ninja -C build`
4. (Optional) Flash with UART: `ninja -C build flash` (On Arch Linux, you need to add your user to the uucp group or just run with sudo)