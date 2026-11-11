#ifndef _UAPI_TUN_GPU_H
#define _UAPI_TUN_GPU_H

#include <linux/types.h>

/* The metadata prepended to every network header written to /dev/gpu_tun */
struct gpu_tun_metadata {
	__u32 header_len; /* Size of the MAC/IP/TCP header in bytes */
	__u32 payload_len; /* Size of the payload in VRAM */
	__u64 vram_offset; /* Offset inside the devmem dma-buf */
	__u32 flags; /* E.g., checksum offload flags */
};

#endif
