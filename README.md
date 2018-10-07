# AzPainter

> Copyright (C) 2013-2018 Azel <azelpg@gmail.com>
>
> http://azsky2.html.xdomain.jp/linux/azpainter.html

AzPainter is mainly full color painting software for illustration drawing.

## Reviews

* in English
  * https://azworldweb.wordpress.com
* in Brazilian Portuguese
  * https://aznosekai.wordpress.com
* in Russian
  * http://zenway.ru/page/azpainter

## Packaging status


Currently packages & build instructions available only for Unix-like OS: 

- [BSD-based](https://github.com/Symbian9/azpainter/wiki/Packaging-status#bsd-based-os)
- [Linux-based](https://github.com/Symbian9/azpainter/wiki/Packaging-status#linux-based-os)
- [macOS](https://github.com/Symbian9/azpainter/wiki/Packaging-status#macos)

All available packages listed on [wiki-page](https://github.com/symbian9/azpainter/wiki/Packaging-status).

> [AppImage](https://github.com/Symbian9/azpainter/releases/tag/continuous) [![Build status](https://travis-ci.org/Symbian9/azpainter.svg?branch=master)](https://travis-ci.org/Symbian9/azpainter) (`master`)
> 
> NOTE: Continuous AppImage-builds not yet usable & used only for testing purpose!

## Code status

[![Coverity Scan Build Status](https://scan.coverity.com/projects/13683/badge.svg)](https://scan.coverity.com/projects/symbian9-azpainter)

## Operating environment

- [X Window System](http://x.org/) (X11R6 or later)
  - (X11R 7.5 or later when you want to recognize pen pressure)
- Unix-like OS (BSD-based, Linux-based, macOS, etc.)

> NOTE! MS Windows OS is not supported officially, but you could try compile & run AzPainter using Cygwin/X or Xming tools. Details on [wiki-page](https://github.com/Symbian9/azpainter/wiki/Packaging-status#windows).

## What you need to compile

- gcc
- make
- automake
- Xlib       (libX11)
- Xext       (libXext)
- XInput2    (libXi)
- freetype2  (libfreetype)
- fontconfig (libfontconfig)
- zlib
- libpng
- libjpeg

### Required packages in each distribution

* Debian/Ubuntu
    ```
    gcc make automake libx11-dev libxext-dev libxi-dev libfreetype6-dev libfontconfig1-dev zlib1g-dev libjpeg-dev
    ```
  * Debian 9.0 / Ubuntu 16.10 or later
    ```
    libpng-dev
    ```
  * before Debian 8.0 / Ubuntu 16.04
    ```
    libpng12-dev
    ```
* RedHat
    ```
    gcc make automake libX11-devel libXext-devel libXi-devel libfreetype6-devel libfontconfig-devel zlib-devel libpng-devel libjpeg-devel
    ```
* Arch Linux
  > Generally already it has been installed.

## Compile and install

Download & unpack tarball of [latest sources release](https:/github.com/symbian9/azpainter/releases/latest).

```
$ ./configure
$ make
$ sudo make install-strip
```

It will be installed in the `/usr/local` by default.

When `./configure` to specify at the options, you can change the settings.

## Install to /usr

```
$ ./configure --prefix=/usr
```

### If you can not find the header files of freetype

Please specify the location of the header files in the `--with-freetype-dir` option property:

```
$ ./configure --with-freetype-dir=/usr/include/freetype2
```

### Setting files

```
~/.azpainter
```

## How to use

Shortcut to the "graphics" category of the main menu of the desktop
has been created, you can start from there.

If you want to start from the terminal, you can start with the following command.

```
$ azpainter
```
