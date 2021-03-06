/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef MLX5_ABI_USER_H
#define MLX5_ABI_USER_H
#include <linux/types.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MLX5_QP_FLAG_SIGNATURE = 1 << 0,
  MLX5_QP_FLAG_SCATTER_CQE = 1 << 1,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MLX5_SRQ_FLAG_SIGNATURE = 1 << 0,
};
enum {
  MLX5_WQ_FLAG_SIGNATURE = 1 << 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MLX5_IB_UVERBS_ABI_VERSION 1
struct mlx5_ib_alloc_ucontext_req {
  __u32 total_num_uuars;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 num_low_latency_uuars;
};
struct mlx5_ib_alloc_ucontext_req_v2 {
  __u32 total_num_uuars;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 num_low_latency_uuars;
  __u32 flags;
  __u32 comp_mask;
  __u8 max_cqe_version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 reserved0;
  __u16 reserved1;
  __u32 reserved2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum mlx5_ib_alloc_ucontext_resp_mask {
  MLX5_IB_ALLOC_UCONTEXT_RESP_MASK_CORE_CLOCK_OFFSET = 1UL << 0,
};
enum mlx5_user_cmds_supp_uhw {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MLX5_USER_CMDS_SUPP_UHW_QUERY_DEVICE = 1 << 0,
};
struct mlx5_ib_alloc_ucontext_resp {
  __u32 qp_tab_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 bf_reg_size;
  __u32 tot_uuars;
  __u32 cache_line_size;
  __u16 max_sq_desc_sz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 max_rq_desc_sz;
  __u32 max_send_wqebb;
  __u32 max_recv_wr;
  __u32 max_srq_recv_wr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 num_ports;
  __u16 reserved1;
  __u32 comp_mask;
  __u32 response_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 cqe_version;
  __u8 cmds_supp_uhw;
  __u16 reserved2;
  __u64 hca_core_clock_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mlx5_ib_alloc_pd_resp {
  __u32 pdn;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mlx5_ib_tso_caps {
  __u32 max_tso;
  __u32 supported_qpts;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mlx5_ib_rss_caps {
  __u64 rx_hash_fields_mask;
  __u8 rx_hash_function;
  __u8 reserved[7];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mlx5_ib_query_device_resp {
  __u32 comp_mask;
  __u32 response_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct mlx5_ib_tso_caps tso_caps;
  struct mlx5_ib_rss_caps rss_caps;
};
struct mlx5_ib_create_cq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 buf_addr;
  __u64 db_addr;
  __u32 cqe_size;
  __u32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mlx5_ib_create_cq_resp {
  __u32 cqn;
  __u32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mlx5_ib_resize_cq {
  __u64 buf_addr;
  __u16 cqe_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 reserved0;
  __u32 reserved1;
};
struct mlx5_ib_create_srq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 buf_addr;
  __u64 db_addr;
  __u32 flags;
  __u32 reserved0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 uidx;
  __u32 reserved1;
};
struct mlx5_ib_create_srq_resp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 srqn;
  __u32 reserved;
};
struct mlx5_ib_create_qp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 buf_addr;
  __u64 db_addr;
  __u32 sq_wqe_count;
  __u32 rq_wqe_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rq_wqe_shift;
  __u32 flags;
  __u32 uidx;
  __u32 reserved0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 sq_buf_addr;
};
enum mlx5_rx_hash_function_flags {
  MLX5_RX_HASH_FUNC_TOEPLITZ = 1 << 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum mlx5_rx_hash_fields {
  MLX5_RX_HASH_SRC_IPV4 = 1 << 0,
  MLX5_RX_HASH_DST_IPV4 = 1 << 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MLX5_RX_HASH_SRC_IPV6 = 1 << 2,
  MLX5_RX_HASH_DST_IPV6 = 1 << 3,
  MLX5_RX_HASH_SRC_PORT_TCP = 1 << 4,
  MLX5_RX_HASH_DST_PORT_TCP = 1 << 5,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  MLX5_RX_HASH_SRC_PORT_UDP = 1 << 6,
  MLX5_RX_HASH_DST_PORT_UDP = 1 << 7
};
struct mlx5_ib_create_qp_rss {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 rx_hash_fields_mask;
  __u8 rx_hash_function;
  __u8 rx_key_len;
  __u8 reserved[6];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 rx_hash_key[128];
  __u32 comp_mask;
  __u32 reserved1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mlx5_ib_create_qp_resp {
  __u32 uuar_index;
};
struct mlx5_ib_alloc_mw {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 comp_mask;
  __u8 num_klms;
  __u8 reserved1;
  __u16 reserved2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mlx5_ib_create_wq {
  __u64 buf_addr;
  __u64 db_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rq_wqe_count;
  __u32 rq_wqe_shift;
  __u32 user_index;
  __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 comp_mask;
  __u32 reserved;
};
struct mlx5_ib_create_wq_resp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 response_length;
  __u32 reserved;
};
struct mlx5_ib_create_rwq_ind_tbl_resp {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 response_length;
  __u32 reserved;
};
struct mlx5_ib_modify_wq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 comp_mask;
  __u32 reserved;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
