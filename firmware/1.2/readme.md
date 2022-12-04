# Panagaea Keybaord

This is a modular type split keyboard consisting of three parts: main keys, pinkeys, and thumb keys. The name comes from the ancient continents, each of which shows a separate continent. As a feature, it has a mechanism to adjust the position of those modules. Furthermore, Pangaea defines specifications for creating extended components so that you can combine components or create new ones.

The firmware is written with QMK.

Keyboard Maintainer:
  [@otahinosame](https://twitter.com/otahinosame), [@e3w2q](https://twitter.com/e3w2q), and [@k2___________](https://twitter.com/@k2___________)

## How to build
```
$ qmk compile -kb pangaea -km default
```

The default keymap is tested with QMK Firmware 0.18.17. (Nov 27, 2022)

Limitations:
 - Only left side rotatay encoder supported.
 - No push button of the rotatay encoder implemented.


## How to flash
```
$ qmk flash -kb pangaea -km default
```


If you want to try to use other keymaps, for example,

```
$ qmk flash -kb pangaea -km otahinosame
```

Please refer the details in keymaps directory.
