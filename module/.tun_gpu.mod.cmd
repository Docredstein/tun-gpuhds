savedcmd_tun_gpu.mod := printf '%s\n'   tun_gpu_main.o tun_gpu_devmem.o | awk '!x[$$0]++ { print("./"$$0) }' > tun_gpu.mod
