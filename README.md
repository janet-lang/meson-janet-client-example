# Meson Janet Client Example

This project is an example of how to use [Janet](https://janet-lang.org) as a dependency
in a project that is using the [Meson](https:/mesonbuild.com) build system. Janet is
a subproject and is automatically fetched from git when building via meson. If janet
has been installed on the build machine, Meson will use that copy instead. This behavior
can easily be changed.

For more information, see [the manual page on Meson subprojects](https://mesonbuild.com/Subprojects.html).

## Building

```sh
meson setup build
ninja -C build
```

## Running

```sh
./build/client
```
