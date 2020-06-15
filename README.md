# Dynamic Acceleration Kernel

## Overview

The purpose of this customized kernel is to provide a flexible way for speeding up system clock and therefore reduce the amount of real time required to run simulations. A more detailed explanation can be found [here](https://elinux.org/images/6/6d/Linux_Kernel_Acceleration_for_Long-term_Testing.pdf).

## Disclaimer

The changes made to this kernel source originated from [the work](https://github.com/ystk/dynamic-acceleration) of Yoshitake Kobayashi.

## The Original Full Kernel Source

This repository originated from a copy of the CentOS kernel source 2.6.32-754.28.1.el6.x86_64 which can be found [here](http://vault.centos.org/6.10/updates/Source/SPackages/kernel-2.6.32-754.28.1.el6.src.rpm). If there is a need to start from scratch, follow [this guide](https://wiki.centos.org/HowTos/I_need_the_Kernel_Source) for CentOS 6.

## Making Patches

Git's `format-patch` command can be used to make patches for the kernel. It is recommended to provide a range of commits as `<revision range>`; the format is `<start commit hash>..<end commit hash>`, example:

```
git format-patch a7c14c5cdb2c1607e61ec8355621ac357a20dfec..14ca78e17b2373230659e13176c074630f93f728
```

Note that the commit specified by the first hash (`a7c14c5...` in the example) will not be included in the resulting patch.

## Building

Majority of the build process follows [this guide](https://wiki.centos.org/HowTos/Custom_Kernel).

### Additional Building Steps

* When using `rpmbuild`, the ABI must be disabled by providing `--without kabichk`.

* In addition to building the kernel for the specific architecture, i.e., `x86_64`, it is necessary to also build the kernel firmware by running a second `rpmbuild` with `--target='noarch'`; details are in [this post](https://forums.centos.org/viewtopic.php?t=50162#p213016).
