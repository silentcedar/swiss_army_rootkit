#ifndef __PER_CPU_START
#define __PER_CPU_START 0x0000000000000000
#endif

#ifndef IRQ_STACK_UNION
#define IRQ_STACK_UNION 0x0000000000000000
#endif

#ifndef GDT_PAGE
#define GDT_PAGE 0x0000000000009000
#endif

#ifndef ESPFIX_WADDR
#define ESPFIX_WADDR 0x000000000000a000
#endif

#ifndef ESPFIX_STACK
#define ESPFIX_STACK 0x000000000000a008
#endif

#ifndef CPU_INFO
#define CPU_INFO 0x000000000000a040
#endif

#ifndef CPU_LLC_SHARED_MAP
#define CPU_LLC_SHARED_MAP 0x000000000000a140
#endif

#ifndef CPU_CORE_MAP
#define CPU_CORE_MAP 0x000000000000a180
#endif

#ifndef CPU_SIBLING_MAP
#define CPU_SIBLING_MAP 0x000000000000a1c0
#endif

#ifndef CPU_LLC_ID
#define CPU_LLC_ID 0x000000000000a200
#endif

#ifndef THIS_CPU_OFF
#define THIS_CPU_OFF 0x000000000000a208
#endif

#ifndef CPU_NUMBER
#define CPU_NUMBER 0x000000000000a210
#endif

#ifndef X86_BIOS_CPU_APICID
#define X86_BIOS_CPU_APICID 0x000000000000a214
#endif

#ifndef X86_CPU_TO_APICID
#define X86_CPU_TO_APICID 0x000000000000a216
#endif

#ifndef XEN_VCPU_INFO
#define XEN_VCPU_INFO 0x000000000000a2c0
#endif

#ifndef XEN_VCPU
#define XEN_VCPU 0x000000000000a300
#endif

#ifndef XEN_MC_IRQ_FLAGS
#define XEN_MC_IRQ_FLAGS 0x000000000000a340
#endif

#ifndef XEN_CURRENT_CR3
#define XEN_CURRENT_CR3 0x000000000000af90
#endif

#ifndef XEN_CR3
#define XEN_CR3 0x000000000000af98
#endif

#ifndef RSP_SCRATCH
#define RSP_SCRATCH 0x000000000000b200
#endif

#ifndef IRQ_REGS
#define IRQ_REGS 0x000000000000b208
#endif

#ifndef VECTOR_IRQ
#define VECTOR_IRQ 0x000000000000b280
#endif

#ifndef CPU_DR7
#define CPU_DR7 0x000000000000b980
#endif

#ifndef DEBUG_IDT_CTR
#define DEBUG_IDT_CTR 0x000000000000b9c0
#endif

#ifndef DEBUG_STACK_USAGE
#define DEBUG_STACK_USAGE 0x000000000000b9c4
#endif

#ifndef ORIG_IST
#define ORIG_IST 0x000000000000b9e0
#endif

#ifndef FPU_OWNER_TASK
#define FPU_OWNER_TASK 0x000000000000ba18
#endif

#ifndef __PREEMPT_COUNT
#define __PREEMPT_COUNT 0x000000000000ba20
#endif

#ifndef IRQ_COUNT
#define IRQ_COUNT 0x000000000000ba24
#endif

#ifndef IRQ_STACK_PTR
#define IRQ_STACK_PTR 0x000000000000ba28
#endif

#ifndef CURRENT_TASK
#define CURRENT_TASK 0x000000000000ba40
#endif

#ifndef KERNEL_STACK
#define KERNEL_STACK 0x000000000000ba48
#endif

#ifndef CPU_HW_EVENTS
#define CPU_HW_EVENTS 0x000000000000bc80
#endif

#ifndef MCE_DEVICE
#define MCE_DEVICE 0x000000000000cf00
#endif

#ifndef MCE_POLL_COUNT
#define MCE_POLL_COUNT 0x000000000000cf98
#endif

#ifndef INJECTM
#define INJECTM 0x000000000000d080
#endif

#ifndef MCE_POLL_BANKS
#define MCE_POLL_BANKS 0x000000000000d100
#endif

#ifndef MCE_EXCEPTION_COUNT
#define MCE_EXCEPTION_COUNT 0x000000000000d198
#endif

#ifndef KPROBE_CTLBLK
#define KPROBE_CTLBLK 0x000000000000e500
#endif

#ifndef CURRENT_KPROBE
#define CURRENT_KPROBE 0x000000000000e628
#endif

#ifndef X86_CPU_TO_NODE_MAP
#define X86_CPU_TO_NODE_MAP 0x000000000000e708
#endif

#ifndef PROCESS_COUNTS
#define PROCESS_COUNTS 0x000000000000e740
#endif

#ifndef KSOFTIRQD
#define KSOFTIRQD 0x000000000000e770
#endif

#ifndef SD_ASYM
#define SD_ASYM 0x000000000000e7c0
#endif

#ifndef SD_BUSY
#define SD_BUSY 0x000000000000e7c8
#endif

#ifndef SD_NUMA
#define SD_NUMA 0x000000000000e7d0
#endif

#ifndef SD_LLC_ID
#define SD_LLC_ID 0x000000000000e7d8
#endif

#ifndef SD_LLC_SIZE
#define SD_LLC_SIZE 0x000000000000e7dc
#endif

#ifndef SD_LLC
#define SD_LLC 0x000000000000e7e0
#endif

#ifndef KERNEL_CPUSTAT
#define KERNEL_CPUSTAT 0x000000000000e800
#endif

#ifndef KSTAT
#define KSTAT 0x000000000000e860
#endif

#ifndef LOAD_BALANCE_MASK
#define LOAD_BALANCE_MASK 0x000000000000e8c0
#endif

#ifndef CPU_DEAD_IDLE
#define CPU_DEAD_IDLE 0x000000000000e980
#endif

#ifndef PRINTK_FUNC
#define PRINTK_FUNC 0x000000000000e9b0
#endif

#ifndef HRTIMER_BASES
#define HRTIMER_BASES 0x0000000000010ac0
#endif

#ifndef TICK_CPU_DEVICE
#define TICK_CPU_DEVICE 0x0000000000010f00
#endif

#ifndef FTRACE_CPU_DISABLED
#define FTRACE_CPU_DISABLED 0x0000000000012268
#endif

#ifndef __PERF_REGS
#define __PERF_REGS 0x00000000000122c0
#endif

#ifndef NUMA_NODE
#define NUMA_NODE 0x00000000000126b0
#endif

#ifndef DIRTY_THROTTLE_LEAKS
#define DIRTY_THROTTLE_LEAKS 0x00000000000126b4
#endif

#ifndef VM_EVENT_STATES
#define VM_EVENT_STATES 0x0000000000012980
#endif

#ifndef AVC_CACHE_STATS
#define AVC_CACHE_STATS 0x0000000000013040
#endif

#ifndef PROCESSORS
#define PROCESSORS 0x00000000000131c8
#endif

#ifndef XEN_IN_PREEMPTIBLE_HCALL
#define XEN_IN_PREEMPTIBLE_HCALL 0x0000000000013200
#endif

#ifndef CPUIDLE_DEV
#define CPUIDLE_DEV 0x0000000000013780
#endif

#ifndef CPUIDLE_DEVICES
#define CPUIDLE_DEVICES 0x00000000000138f0
#endif

#ifndef XMIT_RECURSION
#define XMIT_RECURSION 0x0000000000013ad8
#endif

#ifndef IRQ_STAT
#define IRQ_STAT 0x0000000000013d40
#endif

#ifndef CPU_TSS
#define CPU_TSS 0x0000000000013dc0
#endif

#ifndef CPU_TLBSTATE
#define CPU_TLBSTATE 0x0000000000016080
#endif

#ifndef RUNQUEUES
#define RUNQUEUES 0x00000000000168c0
#endif

#ifndef RCU_QS_CTR
#define RCU_QS_CTR 0x0000000000017380
#endif

#ifndef RCU_BH_DATA
#define RCU_BH_DATA 0x00000000000173c0
#endif

#ifndef RCU_SCHED_DATA
#define RCU_SCHED_DATA 0x0000000000017540
#endif

#ifndef SOFTNET_DATA
#define SOFTNET_DATA 0x00000000000177c0
#endif

#ifndef __PER_CPU_END
#define __PER_CPU_END 0x0000000000017998
#endif

#ifndef _TEXT
#define _TEXT 0xffffffff81000000
#endif

#ifndef STARTUP_64
#define STARTUP_64 0xffffffff81000000
#endif

#ifndef SECONDARY_STARTUP_64
#define SECONDARY_STARTUP_64 0xffffffff81000110
#endif

#ifndef START_CPU0
#define START_CPU0 0xffffffff810001b0
#endif

#ifndef _STEXT
#define _STEXT 0xffffffff810001c8
#endif

#ifndef HYPERCALL_PAGE
#define HYPERCALL_PAGE 0xffffffff81001000
#endif

#ifndef DO_ONE_INITCALL
#define DO_ONE_INITCALL 0xffffffff81002070
#endif

#ifndef NAME_TO_DEV_T
#define NAME_TO_DEV_T 0xffffffff810022c0
#endif

#ifndef CALIBRATE_DELAY
#define CALIBRATE_DELAY 0xffffffff810027c0
#endif

#ifndef XEN_HVM_NEED_LAPIC
#define XEN_HVM_NEED_LAPIC 0xffffffff810033f0
#endif

#ifndef XEN_VCPU_RESTORE
#define XEN_VCPU_RESTORE 0xffffffff81004750
#endif

#ifndef XEN_RUNNING_ON_VERSION_OR_LATER
#define XEN_RUNNING_ON_VERSION_OR_LATER 0xffffffff81004840
#endif

#ifndef XEN_COPY_TRAP_INFO
#define XEN_COPY_TRAP_INFO 0xffffffff81004860
#endif

#ifndef XEN_SETUP_SHARED_INFO
#define XEN_SETUP_SHARED_INFO 0xffffffff81004890
#endif

#ifndef XEN_SETUP_VCPU_INFO_PLACEMENT
#define XEN_SETUP_VCPU_INFO_PLACEMENT 0xffffffff81004900
#endif

#ifndef XEN_PANIC_HANDLER_INIT
#define XEN_PANIC_HANDLER_INIT 0xffffffff810049b0
#endif

#ifndef XEN_ENABLE_SYSENTER
#define XEN_ENABLE_SYSENTER 0xffffffff810049e0
#endif

#ifndef XEN_ENABLE_SYSCALL
#define XEN_ENABLE_SYSCALL 0xffffffff81004a40
#endif

#ifndef XEN_MC_FLUSH
#define XEN_MC_FLUSH 0xffffffff81004ae0
#endif

#ifndef __XEN_MC_ENTRY
#define __XEN_MC_ENTRY 0xffffffff81004c80
#endif

#ifndef XEN_MC_EXTEND_ARGS
#define XEN_MC_EXTEND_ARGS 0xffffffff81004df0
#endif

#ifndef XEN_MC_CALLBACK
#define XEN_MC_CALLBACK 0xffffffff81004f90
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_PTE_VAL
#define __RAW_CALLEE_SAVE_XEN_PTE_VAL 0xffffffff81005060
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_PGD_VAL
#define __RAW_CALLEE_SAVE_XEN_PGD_VAL 0xffffffff8100507e
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_MAKE_PTE
#define __RAW_CALLEE_SAVE_XEN_MAKE_PTE 0xffffffff8100509c
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_MAKE_PGD
#define __RAW_CALLEE_SAVE_XEN_MAKE_PGD 0xffffffff810050ba
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_PMD_VAL
#define __RAW_CALLEE_SAVE_XEN_PMD_VAL 0xffffffff810050d8
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_MAKE_PMD
#define __RAW_CALLEE_SAVE_XEN_MAKE_PMD 0xffffffff810050f6
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_PUD_VAL
#define __RAW_CALLEE_SAVE_XEN_PUD_VAL 0xffffffff81005114
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_MAKE_PUD
#define __RAW_CALLEE_SAVE_XEN_MAKE_PUD 0xffffffff81005132
#endif

#ifndef XEN_UNMAP_DOMAIN_MFN_RANGE
#define XEN_UNMAP_DOMAIN_MFN_RANGE 0xffffffff810054f0
#endif

#ifndef ARBITRARY_VIRT_TO_MACHINE
#define ARBITRARY_VIRT_TO_MACHINE 0xffffffff81005b10
#endif

#ifndef XEN_SET_DOMAIN_PTE
#define XEN_SET_DOMAIN_PTE 0xffffffff81006f10
#endif

#ifndef XEN_CREATE_CONTIGUOUS_REGION
#define XEN_CREATE_CONTIGUOUS_REGION 0xffffffff81008f40
#endif

#ifndef XEN_DESTROY_CONTIGUOUS_REGION
#define XEN_DESTROY_CONTIGUOUS_REGION 0xffffffff81009100
#endif

#ifndef ARBITRARY_VIRT_TO_MFN
#define ARBITRARY_VIRT_TO_MFN 0xffffffff810093c0
#endif

#ifndef MAKE_LOWMEM_PAGE_READONLY
#define MAKE_LOWMEM_PAGE_READONLY 0xffffffff810093e0
#endif

#ifndef MAKE_LOWMEM_PAGE_READWRITE
#define MAKE_LOWMEM_PAGE_READWRITE 0xffffffff81009420
#endif

#ifndef SET_PTE_MFN
#define SET_PTE_MFN 0xffffffff81009460
#endif

#ifndef XEN_PTEP_MODIFY_PROT_START
#define XEN_PTEP_MODIFY_PROT_START 0xffffffff81009490
#endif

#ifndef XEN_PTEP_MODIFY_PROT_COMMIT
#define XEN_PTEP_MODIFY_PROT_COMMIT 0xffffffff81009500
#endif

#ifndef XEN_PTE_VAL
#define XEN_PTE_VAL 0xffffffff810096d0
#endif

#ifndef XEN_PGD_VAL
#define XEN_PGD_VAL 0xffffffff81009700
#endif

#ifndef XEN_MAKE_PTE
#define XEN_MAKE_PTE 0xffffffff81009730
#endif

#ifndef XEN_MAKE_PGD
#define XEN_MAKE_PGD 0xffffffff81009750
#endif

#ifndef XEN_PMD_VAL
#define XEN_PMD_VAL 0xffffffff81009770
#endif

#ifndef XEN_MAKE_PMD
#define XEN_MAKE_PMD 0xffffffff810097a0
#endif

#ifndef XEN_PUD_VAL
#define XEN_PUD_VAL 0xffffffff810097c0
#endif

#ifndef XEN_MAKE_PUD
#define XEN_MAKE_PUD 0xffffffff810097f0
#endif

#ifndef XEN_MM_PIN_ALL
#define XEN_MM_PIN_ALL 0xffffffff81009810
#endif

#ifndef XEN_MM_UNPIN_ALL
#define XEN_MM_UNPIN_ALL 0xffffffff810098b0
#endif

#ifndef XEN_READ_CR2_DIRECT
#define XEN_READ_CR2_DIRECT 0xffffffff81009940
#endif

#ifndef XEN_FLUSH_TLB_ALL
#define XEN_FLUSH_TLB_ALL 0xffffffff81009950
#endif

#ifndef XEN_REMAP_DOMAIN_MFN_RANGE
#define XEN_REMAP_DOMAIN_MFN_RANGE 0xffffffff81009ca0
#endif

#ifndef XEN_REMAP_DOMAIN_MFN_ARRAY
#define XEN_REMAP_DOMAIN_MFN_ARRAY 0xffffffff81009ce0
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_SAVE_FL
#define __RAW_CALLEE_SAVE_XEN_SAVE_FL 0xffffffff81009d20
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_RESTORE_FL
#define __RAW_CALLEE_SAVE_XEN_RESTORE_FL 0xffffffff81009d3e
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_IRQ_DISABLE
#define __RAW_CALLEE_SAVE_XEN_IRQ_DISABLE 0xffffffff81009d5c
#endif

#ifndef __RAW_CALLEE_SAVE_XEN_IRQ_ENABLE
#define __RAW_CALLEE_SAVE_XEN_IRQ_ENABLE 0xffffffff81009d7a
#endif

#ifndef XEN_FORCE_EVTCHN_CALLBACK
#define XEN_FORCE_EVTCHN_CALLBACK 0xffffffff81009df0
#endif

#ifndef XEN_SAVE_FL
#define XEN_SAVE_FL 0xffffffff81009e00
#endif

#ifndef XEN_RESTORE_FL
#define XEN_RESTORE_FL 0xffffffff81009e20
#endif

#ifndef XEN_IRQ_DISABLE
#define XEN_IRQ_DISABLE 0xffffffff81009e60
#endif

#ifndef XEN_IRQ_ENABLE
#define XEN_IRQ_ENABLE 0xffffffff81009e70
#endif

#ifndef XEN_CLOCKSOURCE_READ
#define XEN_CLOCKSOURCE_READ 0xffffffff81009eb0
#endif

#ifndef XEN_VCPU_STOLEN
#define XEN_VCPU_STOLEN 0xffffffff8100a2d0
#endif

#ifndef XEN_SETUP_RUNSTATE_INFO
#define XEN_SETUP_RUNSTATE_INFO 0xffffffff8100a2f0
#endif

#ifndef XEN_TEARDOWN_TIMER
#define XEN_TEARDOWN_TIMER 0xffffffff8100a360
#endif

#ifndef XEN_SETUP_TIMER
#define XEN_SETUP_TIMER 0xffffffff8100a3b0
#endif

#ifndef XEN_SETUP_CPU_CLOCKEVENTS
#define XEN_SETUP_CPU_CLOCKEVENTS 0xffffffff8100a4d0
#endif

#ifndef XEN_TIMER_RESUME
#define XEN_TIMER_RESUME 0xffffffff8100a4f0
#endif

#ifndef XEN_IRQ_ENABLE_DIRECT
#define XEN_IRQ_ENABLE_DIRECT 0xffffffff8100a560
#endif

#ifndef XEN_IRQ_ENABLE_DIRECT_RELOC
#define XEN_IRQ_ENABLE_DIRECT_RELOC 0xffffffff8100a575
#endif

#ifndef XEN_IRQ_ENABLE_DIRECT_END
#define XEN_IRQ_ENABLE_DIRECT_END 0xffffffff8100a579
#endif

#ifndef XEN_IRQ_DISABLE_DIRECT
#define XEN_IRQ_DISABLE_DIRECT 0xffffffff8100a580
#endif

#ifndef XEN_IRQ_DISABLE_DIRECT_END
#define XEN_IRQ_DISABLE_DIRECT_END 0xffffffff8100a589
#endif

#ifndef XEN_SAVE_FL_DIRECT
#define XEN_SAVE_FL_DIRECT 0xffffffff8100a590
#endif

#ifndef XEN_SAVE_FL_DIRECT_END
#define XEN_SAVE_FL_DIRECT_END 0xffffffff8100a59e
#endif

#ifndef XEN_RESTORE_FL_DIRECT
#define XEN_RESTORE_FL_DIRECT 0xffffffff8100a5a0
#endif

#ifndef XEN_RESTORE_FL_DIRECT_RELOC
#define XEN_RESTORE_FL_DIRECT_RELOC 0xffffffff8100a5bb
#endif

#ifndef XEN_RESTORE_FL_DIRECT_END
#define XEN_RESTORE_FL_DIRECT_END 0xffffffff8100a5bf
#endif

#ifndef XEN_ADJUST_EXCEPTION_FRAME
#define XEN_ADJUST_EXCEPTION_FRAME 0xffffffff8100a5e0
#endif

#ifndef XEN_IRET
#define XEN_IRET 0xffffffff8100a5f0
#endif

#ifndef XEN_IRET_RELOC
#define XEN_IRET_RELOC 0xffffffff8100a5f3
#endif

#ifndef XEN_IRET_END
#define XEN_IRET_END 0xffffffff8100a5f7
#endif

#ifndef XEN_SYSEXIT
#define XEN_SYSEXIT 0xffffffff8100a600
#endif

#ifndef XEN_SYSEXIT_RELOC
#define XEN_SYSEXIT_RELOC 0xffffffff8100a60e
#endif

#ifndef XEN_SYSEXIT_END
#define XEN_SYSEXIT_END 0xffffffff8100a612
#endif

#ifndef XEN_SYSRET64
#define XEN_SYSRET64 0xffffffff8100a620
#endif

#ifndef XEN_SYSRET64_RELOC
#define XEN_SYSRET64_RELOC 0xffffffff8100a647
#endif

#ifndef XEN_SYSRET64_END
#define XEN_SYSRET64_END 0xffffffff8100a64b
#endif

#ifndef XEN_SYSRET32
#define XEN_SYSRET32 0xffffffff8100a650
#endif

#ifndef XEN_SYSRET32_RELOC
#define XEN_SYSRET32_RELOC 0xffffffff8100a674
#endif

#ifndef XEN_SYSRET32_END
#define XEN_SYSRET32_END 0xffffffff8100a678
#endif

#ifndef XEN_SYSCALL_TARGET
#define XEN_SYSCALL_TARGET 0xffffffff8100a680
#endif

#ifndef XEN_SYSCALL32_TARGET
#define XEN_SYSCALL32_TARGET 0xffffffff8100a6a0
#endif

#ifndef XEN_SYSENTER_TARGET
#define XEN_SYSENTER_TARGET 0xffffffff8100a6c0
#endif

#ifndef ARCH_GNTTAB_MAP_SHARED
#define ARCH_GNTTAB_MAP_SHARED 0xffffffff8100a6e0
#endif

#ifndef ARCH_GNTTAB_UNMAP
#define ARCH_GNTTAB_UNMAP 0xffffffff8100a790
#endif

#ifndef ARCH_GNTTAB_INIT
#define ARCH_GNTTAB_INIT 0xffffffff8100a800
#endif

#ifndef XEN_ARCH_PRE_SUSPEND
#define XEN_ARCH_PRE_SUSPEND 0xffffffff8100a8d0
#endif

#ifndef XEN_ARCH_POST_SUSPEND
#define XEN_ARCH_POST_SUSPEND 0xffffffff8100ab90
#endif

#ifndef XEN_ARCH_RESUME
#define XEN_ARCH_RESUME 0xffffffff8100adc0
#endif

#ifndef XEN_ARCH_SUSPEND
#define XEN_ARCH_SUSPEND 0xffffffff8100ade0
#endif

#ifndef XEN_HAS_PV_DEVICES
#define XEN_HAS_PV_DEVICES 0xffffffff8100ae30
#endif

#ifndef XEN_HAS_PV_AND_LEGACY_DISK_DEVICES
#define XEN_HAS_PV_AND_LEGACY_DISK_DEVICES 0xffffffff8100ae60
#endif

#ifndef XEN_HAS_PV_DISK_DEVICES
#define XEN_HAS_PV_DISK_DEVICES 0xffffffff8100aed0
#endif

#ifndef XEN_HAS_PV_NIC_DEVICES
#define XEN_HAS_PV_NIC_DEVICES 0xffffffff8100aee0
#endif

#ifndef XEN_UNPLUG_EMULATED_DEVICES
#define XEN_UNPLUG_EMULATED_DEVICES 0xffffffff8100aef0
#endif

#ifndef GET_PHYS_TO_MACHINE
#define GET_PHYS_TO_MACHINE 0xffffffff8100afd0
#endif

#ifndef XEN_SETUP_MFN_LIST_LIST
#define XEN_SETUP_MFN_LIST_LIST 0xffffffff8100b200
#endif

#ifndef __SET_PHYS_TO_MACHINE
#define __SET_PHYS_TO_MACHINE 0xffffffff8100b2e0
#endif

#ifndef SET_PHYS_TO_MACHINE
#define SET_PHYS_TO_MACHINE 0xffffffff8100b430
#endif

#ifndef SET_FOREIGN_P2M_MAPPING
#define SET_FOREIGN_P2M_MAPPING 0xffffffff8100bb90
#endif

#ifndef CLEAR_FOREIGN_P2M_MAPPING
#define CLEAR_FOREIGN_P2M_MAPPING 0xffffffff8100bf90
#endif

#ifndef CPU_BRINGUP_AND_IDLE
#define CPU_BRINGUP_AND_IDLE 0xffffffff8100fee0
#endif

#ifndef XEN_SEND_IPI_MASK
#define XEN_SEND_IPI_MASK 0xffffffff81010c00
#endif

#ifndef XEN_SEND_IPI_ALL
#define XEN_SEND_IPI_ALL 0xffffffff81010c90
#endif

#ifndef XEN_SEND_IPI_SELF
#define XEN_SEND_IPI_SELF 0xffffffff81010d20
#endif

#ifndef XEN_SEND_IPI_MASK_ALLBUTSELF
#define XEN_SEND_IPI_MASK_ALLBUTSELF 0xffffffff81010db0
#endif

#ifndef XEN_SEND_IPI_ALLBUTSELF
#define XEN_SEND_IPI_ALLBUTSELF 0xffffffff81010ec0
#endif

#ifndef PCI_XEN_SWIOTLB_INIT_LATE
#define PCI_XEN_SWIOTLB_INIT_LATE 0xffffffff81010ee0
#endif

#ifndef SET_PERSONALITY_IA32
#define SET_PERSONALITY_IA32 0xffffffff81011080
#endif

#ifndef __SHOW_REGS
#define __SHOW_REGS 0xffffffff81011180
#endif

#ifndef RELEASE_THREAD
#define RELEASE_THREAD 0xffffffff81011400
#endif

#ifndef START_THREAD
#define START_THREAD 0xffffffff81011440
#endif

#ifndef START_THREAD_IA32
#define START_THREAD_IA32 0xffffffff81011460
#endif

#ifndef __SWITCH_TO
#define __SWITCH_TO 0xffffffff810114a0
#endif

#ifndef SET_PERSONALITY_64BIT
#define SET_PERSONALITY_64BIT 0xffffffff81011a50
#endif

#ifndef GET_WCHAN
#define GET_WCHAN 0xffffffff81011ad0
#endif

#ifndef DO_ARCH_PRCTL
#define DO_ARCH_PRCTL 0xffffffff81011b70
#endif

#ifndef COPY_THREAD
#define COPY_THREAD 0xffffffff81011f20
#endif

#ifndef SYS_ARCH_PRCTL
#define SYS_ARCH_PRCTL 0xffffffff81012190
#endif

#ifndef KSTK_ESP
#define KSTK_ESP 0xffffffff810121b0
#endif

#ifndef RESTORE_SIGCONTEXT
#define RESTORE_SIGCONTEXT 0xffffffff810121d0
#endif

#ifndef SETUP_SIGCONTEXT
#define SETUP_SIGCONTEXT 0xffffffff81012350
#endif

#ifndef DO_NOTIFY_RESUME
#define DO_NOTIFY_RESUME 0xffffffff81012fd0
#endif

#ifndef SIGNAL_FAULT
#define SIGNAL_FAULT 0xffffffff81013060
#endif

#ifndef SYS_RT_SIGRETURN
#define SYS_RT_SIGRETURN 0xffffffff81013150
#endif

#ifndef SYS32_X32_RT_SIGRETURN
#define SYS32_X32_RT_SIGRETURN 0xffffffff81013210
#endif

#ifndef SYNC_REGS
#define SYNC_REGS 0xffffffff810132d0
#endif

#ifndef FIXUP_BAD_IRET
#define FIXUP_BAD_IRET 0xffffffff81013610
#endif

#ifndef DO_INT3
#define DO_INT3 0xffffffff81013670
#endif

#ifndef DO_GENERAL_PROTECTION
#define DO_GENERAL_PROTECTION 0xffffffff810137b0
#endif

#ifndef DO_DEBUG
#define DO_DEBUG 0xffffffff81013910
#endif

#ifndef MATH_STATE_RESTORE
#define MATH_STATE_RESTORE 0xffffffff81013bd0
#endif

#ifndef DO_DEVICE_NOT_AVAILABLE
#define DO_DEVICE_NOT_AVAILABLE 0xffffffff81013da0
#endif

#ifndef IST_ENTER
#define IST_ENTER 0xffffffff81013dd0
#endif

#ifndef IST_EXIT
#define IST_EXIT 0xffffffff81013e00
#endif

#ifndef IST_BEGIN_NON_ATOMIC
#define IST_BEGIN_NON_ATOMIC 0xffffffff81013e40
#endif

#ifndef IST_END_NON_ATOMIC
#define IST_END_NON_ATOMIC 0xffffffff81013e90
#endif

#ifndef DO_DIVIDE_ERROR
#define DO_DIVIDE_ERROR 0xffffffff81013eb0
#endif

#ifndef DO_OVERFLOW
#define DO_OVERFLOW 0xffffffff81013ee0
#endif

#ifndef DO_INVALID_OP
#define DO_INVALID_OP 0xffffffff81013f10
#endif

#ifndef DO_COPROCESSOR_SEGMENT_OVERRUN
#define DO_COPROCESSOR_SEGMENT_OVERRUN 0xffffffff81013f40
#endif

#ifndef DO_INVALID_TSS
#define DO_INVALID_TSS 0xffffffff81013f70
#endif

#ifndef DO_SEGMENT_NOT_PRESENT
#define DO_SEGMENT_NOT_PRESENT 0xffffffff81013fa0
#endif

#ifndef DO_STACK_SEGMENT
#define DO_STACK_SEGMENT 0xffffffff81013fd0
#endif

#ifndef DO_ALIGNMENT_CHECK
#define DO_ALIGNMENT_CHECK 0xffffffff81014000
#endif

#ifndef DO_DOUBLE_FAULT
#define DO_DOUBLE_FAULT 0xffffffff81014030
#endif

#ifndef DO_BOUNDS
#define DO_BOUNDS 0xffffffff81014140
#endif

#ifndef DO_COPROCESSOR_ERROR
#define DO_COPROCESSOR_ERROR 0xffffffff810141f0
#endif

#ifndef DO_SIMD_COPROCESSOR_ERROR
#define DO_SIMD_COPROCESSOR_ERROR 0xffffffff81014210
#endif

#ifndef DO_SPURIOUS_INTERRUPT_BUG
#define DO_SPURIOUS_INTERRUPT_BUG 0xffffffff81014230
#endif

#ifndef ACK_BAD_IRQ
#define ACK_BAD_IRQ 0xffffffff81014440
#endif

#ifndef ARCH_SHOW_INTERRUPTS
#define ARCH_SHOW_INTERRUPTS 0xffffffff81014490
#endif

#ifndef ARCH_IRQ_STAT_CPU
#define ARCH_IRQ_STAT_CPU 0xffffffff81014ca0
#endif

#ifndef ARCH_IRQ_STAT
#define ARCH_IRQ_STAT 0xffffffff81014d50
#endif

#ifndef __SMP_X86_PLATFORM_IPI
#define __SMP_X86_PLATFORM_IPI 0xffffffff81014d60
#endif

#ifndef SMP_X86_PLATFORM_IPI
#define SMP_X86_PLATFORM_IPI 0xffffffff81014d90
#endif

#ifndef SMP_KVM_POSTED_INTR_IPI
#define SMP_KVM_POSTED_INTR_IPI 0xffffffff81014df0
#endif

#ifndef SMP_TRACE_X86_PLATFORM_IPI
#define SMP_TRACE_X86_PLATFORM_IPI 0xffffffff81014e40
#endif

#ifndef CHECK_IRQ_VECTORS_FOR_CPU_DISABLE
#define CHECK_IRQ_VECTORS_FOR_CPU_DISABLE 0xffffffff81014f10
#endif

#ifndef FIXUP_IRQS
#define FIXUP_IRQS 0xffffffff81015170
#endif

#ifndef HANDLE_IRQ
#define HANDLE_IRQ 0xffffffff810153f0
#endif

#ifndef DUMP_TRACE
#define DUMP_TRACE 0xffffffff81015420
#endif

#ifndef SHOW_STACK_LOG_LVL
#define SHOW_STACK_LOG_LVL 0xffffffff810156d0
#endif

#ifndef SHOW_REGS
#define SHOW_REGS 0xffffffff81015850
#endif

#ifndef IS_VALID_BUGADDR
#define IS_VALID_BUGADDR 0xffffffff81015a50
#endif

#ifndef PROFILE_PC
#define PROFILE_PC 0xffffffff81015aa0
#endif

#ifndef SYS_IOPERM
#define SYS_IOPERM 0xffffffff81015b10
#endif

#ifndef SYS_IOPL
#define SYS_IOPL 0xffffffff81015c90
#endif

#ifndef SYS_IOPL
#define SYS_IOPL 0xffffffff81015c90
#endif

#ifndef INIT_NEW_CONTEXT
#define INIT_NEW_CONTEXT 0xffffffff81016100
#endif

#ifndef DESTROY_CONTEXT
#define DESTROY_CONTEXT 0xffffffff810161f0
#endif

#ifndef SYS_MODIFY_LDT
#define SYS_MODIFY_LDT 0xffffffff81016230
#endif

#ifndef OOPS_END
#define OOPS_END 0xffffffff81016430
#endif

#ifndef __DIE
#define __DIE 0xffffffff81016560
#endif

#ifndef PRINT_CONTEXT_STACK
#define PRINT_CONTEXT_STACK 0xffffffff81016640
#endif

#ifndef OOPS_BEGIN
#define OOPS_BEGIN 0xffffffff81016730
#endif

#ifndef PRINT_CONTEXT_STACK_BP
#define PRINT_CONTEXT_STACK_BP 0xffffffff81016800
#endif

#ifndef PRINTK_ADDRESS
#define PRINTK_ADDRESS 0xffffffff810168e0
#endif

#ifndef SHOW_TRACE_LOG_LVL
#define SHOW_TRACE_LOG_LVL 0xffffffff81016910
#endif

#ifndef SHOW_TRACE
#define SHOW_TRACE 0xffffffff81016960
#endif

#ifndef SHOW_STACK
#define SHOW_STACK 0xffffffff81016980
#endif

#ifndef DIE
#define DIE 0xffffffff810169d0
#endif

#ifndef LOCAL_TOUCH_NMI
#define LOCAL_TOUCH_NMI 0xffffffff81016a40
#endif

#ifndef __REGISTER_NMI_HANDLER
#define __REGISTER_NMI_HANDLER 0xffffffff81016dd0
#endif

#ifndef UNREGISTER_NMI_HANDLER
#define UNREGISTER_NMI_HANDLER 0xffffffff81016f80
#endif

#ifndef DO_NMI
#define DO_NMI 0xffffffff810172f0
#endif

#ifndef STOP_NMI
#define STOP_NMI 0xffffffff81017450
#endif

#ifndef RESTART_NMI
#define RESTART_NMI 0xffffffff81017460
#endif

#ifndef DEFAULT_CPU_PRESENT_TO_APICID
#define DEFAULT_CPU_PRESENT_TO_APICID 0xffffffff810174e0
#endif

#ifndef DEFAULT_CHECK_PHYS_APICID_PRESENT
#define DEFAULT_CHECK_PHYS_APICID_PRESENT 0xffffffff81017530
#endif

#ifndef X86_INIT_NOOP
#define X86_INIT_NOOP 0xffffffff81017580
#endif

#ifndef IOMMU_SHUTDOWN_NOOP
#define IOMMU_SHUTDOWN_NOOP 0xffffffff81017590
#endif

#ifndef ARCH_SETUP_MSI_IRQS
#define ARCH_SETUP_MSI_IRQS 0xffffffff810175c0
#endif

#ifndef ARCH_TEARDOWN_MSI_IRQS
#define ARCH_TEARDOWN_MSI_IRQS 0xffffffff810175e0
#endif

#ifndef ARCH_TEARDOWN_MSI_IRQ
#define ARCH_TEARDOWN_MSI_IRQ 0xffffffff81017600
#endif

#ifndef ARCH_RESTORE_MSI_IRQS
#define ARCH_RESTORE_MSI_IRQS 0xffffffff81017620
#endif

#ifndef VECTOR_USED_BY_PERCPU_IRQ
#define VECTOR_USED_BY_PERCPU_IRQ 0xffffffff81017b60
#endif

#ifndef ARCH_JUMP_LABEL_TRANSFORM
#define ARCH_JUMP_LABEL_TRANSFORM 0xffffffff81017c20
#endif

#ifndef ARCH_JUMP_LABEL_TRANSFORM_STATIC
#define ARCH_JUMP_LABEL_TRANSFORM_STATIC 0xffffffff81017d20
#endif

#ifndef SMP_IRQ_WORK_INTERRUPT
#define SMP_IRQ_WORK_INTERRUPT 0xffffffff81017e90
#endif

#ifndef SMP_TRACE_IRQ_WORK_INTERRUPT
#define SMP_TRACE_IRQ_WORK_INTERRUPT 0xffffffff81017ed0
#endif

#ifndef ARCH_IRQ_WORK_RAISE
#define ARCH_IRQ_WORK_RAISE 0xffffffff81017f70
#endif

#ifndef PCI_BIOSROM_SIZE
#define PCI_BIOSROM_SIZE 0xffffffff81018370
#endif

#ifndef PCI_MAP_BIOSROM
#define PCI_MAP_BIOSROM 0xffffffff810183a0
#endif

#ifndef PCI_UNMAP_BIOSROM
#define PCI_UNMAP_BIOSROM 0xffffffff810183e0
#endif

#ifndef ALIGN_VDSO_ADDR
#define ALIGN_VDSO_ADDR 0xffffffff81018460
#endif

#ifndef SYS_MMAP
#define SYS_MMAP 0xffffffff810184a0
#endif

#ifndef SYS_MMAP
#define SYS_MMAP 0xffffffff810184a0
#endif

#ifndef ARCH_GET_UNMAPPED_AREA
#define ARCH_GET_UNMAPPED_AREA 0xffffffff810184d0
#endif

#ifndef ARCH_GET_UNMAPPED_AREA_TOPDOWN
#define ARCH_GET_UNMAPPED_AREA_TOPDOWN 0xffffffff810186f0
#endif

#ifndef UPDATE_VSYSCALL_TZ
#define UPDATE_VSYSCALL_TZ 0xffffffff810188f0
#endif

#ifndef UPDATE_VSYSCALL
#define UPDATE_VSYSCALL 0xffffffff81018910
#endif

#ifndef EMULATE_VSYSCALL
#define EMULATE_VSYSCALL 0xffffffff81018d70
#endif

#ifndef GET_GATE_VMA
#define GET_GATE_VMA 0xffffffff81019110
#endif

#ifndef IN_GATE_AREA
#define IN_GATE_AREA 0xffffffff81019150
#endif

#ifndef IN_GATE_AREA_NO_MM
#define IN_GATE_AREA_NO_MM 0xffffffff81019190
#endif

#ifndef INIT_ESPFIX_AP
#define INIT_ESPFIX_AP 0xffffffff810194c0
#endif

#ifndef E820_ANY_MAPPED
#define E820_ANY_MAPPED 0xffffffff81019780
#endif

#ifndef DMA_SUPPORTED
#define DMA_SUPPORTED 0xffffffff810197f0
#endif

#ifndef DMA_SET_MASK
#define DMA_SET_MASK 0xffffffff810198b0
#endif

#ifndef DMA_GENERIC_ALLOC_COHERENT
#define DMA_GENERIC_ALLOC_COHERENT 0xffffffff81019950
#endif

#ifndef DMA_GENERIC_FREE_COHERENT
#define DMA_GENERIC_FREE_COHERENT 0xffffffff81019ab0
#endif

#ifndef FORCE_HPET_RESUME
#define FORCE_HPET_RESUME 0xffffffff8101a470
#endif

#ifndef ARCH_UNREGISTER_CPU
#define ARCH_UNREGISTER_CPU 0xffffffff8101a650
#endif

#ifndef ALTERNATIVES_SMP_MODULE_DEL
#define ALTERNATIVES_SMP_MODULE_DEL 0xffffffff8101a750
#endif

#ifndef ALTERNATIVES_TEXT_RESERVED
#define ALTERNATIVES_TEXT_RESERVED 0xffffffff8101a7e0
#endif

#ifndef TEXT_POKE_EARLY
#define TEXT_POKE_EARLY 0xffffffff8101a860
#endif

#ifndef APPLY_ALTERNATIVES
#define APPLY_ALTERNATIVES 0xffffffff8101a8a0
#endif

#ifndef APPLY_PARAVIRT
#define APPLY_PARAVIRT 0xffffffff8101b050
#endif

#ifndef TEXT_POKE
#define TEXT_POKE 0xffffffff8101b080
#endif

#ifndef ALTERNATIVES_SMP_MODULE_ADD
#define ALTERNATIVES_SMP_MODULE_ADD 0xffffffff8101b2b0
#endif

#ifndef ALTERNATIVES_ENABLE_SMP
#define ALTERNATIVES_ENABLE_SMP 0xffffffff8101b420
#endif

#ifndef POKE_INT3_HANDLER
#define POKE_INT3_HANDLER 0xffffffff8101b560
#endif

#ifndef TEXT_POKE_BP
#define TEXT_POKE_BP 0xffffffff8101b5b0
#endif

#ifndef AOUT_DUMP_DEBUGREGS
#define AOUT_DUMP_DEBUGREGS 0xffffffff8101b840
#endif

#ifndef HW_BREAKPOINT_RESTORE
#define HW_BREAKPOINT_RESTORE 0xffffffff8101b910
#endif

#ifndef ENCODE_DR7
#define ENCODE_DR7 0xffffffff8101b9a0
#endif

#ifndef DECODE_DR7
#define DECODE_DR7 0xffffffff8101b9d0
#endif

#ifndef ARCH_INSTALL_HW_BREAKPOINT
#define ARCH_INSTALL_HW_BREAKPOINT 0xffffffff8101ba10
#endif

#ifndef ARCH_UNINSTALL_HW_BREAKPOINT
#define ARCH_UNINSTALL_HW_BREAKPOINT 0xffffffff8101bb30
#endif

#ifndef ARCH_CHECK_BP_IN_KERNELSPACE
#define ARCH_CHECK_BP_IN_KERNELSPACE 0xffffffff8101bc20
#endif

#ifndef ARCH_BP_GENERIC_FIELDS
#define ARCH_BP_GENERIC_FIELDS 0xffffffff8101bcd0
#endif

#ifndef ARCH_VALIDATE_HWBKPT_SETTINGS
#define ARCH_VALIDATE_HWBKPT_SETTINGS 0xffffffff8101bd80
#endif

#ifndef FLUSH_PTRACE_HW_BREAKPOINT
#define FLUSH_PTRACE_HW_BREAKPOINT 0xffffffff8101beb0
#endif

#ifndef HW_BREAKPOINT_EXCEPTIONS_NOTIFY
#define HW_BREAKPOINT_EXCEPTIONS_NOTIFY 0xffffffff8101bf00
#endif

#ifndef HW_BREAKPOINT_PMU_READ
#define HW_BREAKPOINT_PMU_READ 0xffffffff8101c050
#endif

#ifndef NATIVE_READ_TSC
#define NATIVE_READ_TSC 0xffffffff8101c060
#endif

#ifndef CHECK_TSC_UNSTABLE
#define CHECK_TSC_UNSTABLE 0xffffffff8101c070
#endif

#ifndef CHECK_TSC_DISABLED
#define CHECK_TSC_DISABLED 0xffffffff8101c080
#endif

#ifndef RECALIBRATE_CPU_KHZ
#define RECALIBRATE_CPU_KHZ 0xffffffff8101c090
#endif

#ifndef MARK_TSC_UNSTABLE
#define MARK_TSC_UNSTABLE 0xffffffff8101c140
#endif

#ifndef CYC2NS_READ_BEGIN
#define CYC2NS_READ_BEGIN 0xffffffff8101c580
#endif

#ifndef CYC2NS_READ_END
#define CYC2NS_READ_END 0xffffffff8101c590
#endif

#ifndef NATIVE_SCHED_CLOCK
#define NATIVE_SCHED_CLOCK 0xffffffff8101c5a0
#endif

#ifndef SCHED_CLOCK
#define SCHED_CLOCK 0xffffffff8101c630
#endif

#ifndef NATIVE_CALIBRATE_TSC
#define NATIVE_CALIBRATE_TSC 0xffffffff8101c640
#endif

#ifndef TSC_SAVE_SCHED_CLOCK_STATE
#define TSC_SAVE_SCHED_CLOCK_STATE 0xffffffff8101cc00
#endif

#ifndef TSC_RESTORE_SCHED_CLOCK_STATE
#define TSC_RESTORE_SCHED_CLOCK_STATE 0xffffffff8101cc20
#endif

#ifndef UNSYNCHRONIZED_TSC
#define UNSYNCHRONIZED_TSC 0xffffffff8101ccf0
#endif

#ifndef CALIBRATE_DELAY_IS_KNOWN
#define CALIBRATE_DELAY_IS_KNOWN 0xffffffff8101cd70
#endif

#ifndef TRY_MSR_CALIBRATE_TSC
#define TRY_MSR_CALIBRATE_TSC 0xffffffff8101ce40
#endif

#ifndef NATIVE_IO_DELAY
#define NATIVE_IO_DELAY 0xffffffff8101cf90
#endif

#ifndef RTC_CMOS_READ
#define RTC_CMOS_READ 0xffffffff8101cfd0
#endif

#ifndef RTC_CMOS_WRITE
#define RTC_CMOS_WRITE 0xffffffff8101cfe0
#endif

#ifndef MACH_SET_RTC_MMSS
#define MACH_SET_RTC_MMSS 0xffffffff8101cff0
#endif

#ifndef MACH_GET_CMOS_TIME
#define MACH_GET_CMOS_TIME 0xffffffff8101d1e0
#endif

#ifndef UPDATE_PERSISTENT_CLOCK
#define UPDATE_PERSISTENT_CLOCK 0xffffffff8101d390
#endif

#ifndef READ_PERSISTENT_CLOCK
#define READ_PERSISTENT_CLOCK 0xffffffff8101d3b0
#endif

#ifndef ARCH_REMOVE_RESERVATIONS
#define ARCH_REMOVE_RESERVATIONS 0xffffffff8101d3d0
#endif

#ifndef IDLE_NOTIFIER_REGISTER
#define IDLE_NOTIFIER_REGISTER 0xffffffff8101d4e0
#endif

#ifndef IDLE_NOTIFIER_UNREGISTER
#define IDLE_NOTIFIER_UNREGISTER 0xffffffff8101d500
#endif

#ifndef DEFAULT_IDLE
#define DEFAULT_IDLE 0xffffffff8101d520
#endif

#ifndef ARCH_DUP_TASK_STRUCT
#define ARCH_DUP_TASK_STRUCT 0xffffffff8101d810
#endif

#ifndef FREE_THREAD_XSTATE
#define FREE_THREAD_XSTATE 0xffffffff8101d980
#endif

#ifndef ARCH_RELEASE_TASK_STRUCT
#define ARCH_RELEASE_TASK_STRUCT 0xffffffff8101d9b0
#endif

#ifndef ARCH_TASK_CACHE_INIT
#define ARCH_TASK_CACHE_INIT 0xffffffff8101d9e0
#endif

#ifndef EXIT_THREAD
#define EXIT_THREAD 0xffffffff8101da20
#endif

#ifndef FLUSH_THREAD
#define FLUSH_THREAD 0xffffffff8101db30
#endif

#ifndef DISABLE_TSC
#define DISABLE_TSC 0xffffffff8101dd10
#endif

#ifndef GET_TSC_MODE
#define GET_TSC_MODE 0xffffffff8101dd50
#endif

#ifndef SET_TSC_MODE
#define SET_TSC_MODE 0xffffffff8101dd80
#endif

#ifndef __SWITCH_TO_XTRA
#define __SWITCH_TO_XTRA 0xffffffff8101ddf0
#endif

#ifndef ENTER_IDLE
#define ENTER_IDLE 0xffffffff8101df90
#endif

#ifndef EXIT_IDLE
#define EXIT_IDLE 0xffffffff8101dfc0
#endif

#ifndef ARCH_CPU_IDLE_ENTER
#define ARCH_CPU_IDLE_ENTER 0xffffffff8101e010
#endif

#ifndef ARCH_CPU_IDLE_EXIT
#define ARCH_CPU_IDLE_EXIT 0xffffffff8101e040
#endif

#ifndef ARCH_CPU_IDLE_DEAD
#define ARCH_CPU_IDLE_DEAD 0xffffffff8101e080
#endif

#ifndef ARCH_CPU_IDLE
#define ARCH_CPU_IDLE 0xffffffff8101e0a0
#endif

#ifndef XEN_SET_DEFAULT_IDLE
#define XEN_SET_DEFAULT_IDLE 0xffffffff8101e0c0
#endif

#ifndef STOP_THIS_CPU
#define STOP_THIS_CPU 0xffffffff8101e0e0
#endif

#ifndef AMD_E400_REMOVE_CPU
#define AMD_E400_REMOVE_CPU 0xffffffff8101e120
#endif

#ifndef SELECT_IDLE_ROUTINE
#define SELECT_IDLE_ROUTINE 0xffffffff8101e140
#endif

#ifndef ARCH_ALIGN_STACK
#define ARCH_ALIGN_STACK 0xffffffff8101e200
#endif

#ifndef ARCH_RANDOMIZE_BRK
#define ARCH_RANDOMIZE_BRK 0xffffffff8101e260
#endif

#ifndef IRQ_FPU_USABLE
#define IRQ_FPU_USABLE 0xffffffff8101e290
#endif

#ifndef FPU_FINIT
#define FPU_FINIT 0xffffffff8101e320
#endif

#ifndef __KERNEL_FPU_BEGIN
#define __KERNEL_FPU_BEGIN 0xffffffff8101e350
#endif

#ifndef UNLAZY_FPU
#define UNLAZY_FPU 0xffffffff8101e400
#endif

#ifndef INIT_FPU
#define INIT_FPU 0xffffffff8101e560
#endif

#ifndef __KERNEL_FPU_END
#define __KERNEL_FPU_END 0xffffffff8101e610
#endif

#ifndef KERNEL_FPU_DISABLE
#define KERNEL_FPU_DISABLE 0xffffffff8101e790
#endif

#ifndef KERNEL_FPU_ENABLE
#define KERNEL_FPU_ENABLE 0xffffffff8101e7d0
#endif

#ifndef FPU_INIT
#define FPU_INIT 0xffffffff8101e7e0
#endif

#ifndef FPREGS_ACTIVE
#define FPREGS_ACTIVE 0xffffffff8101e890
#endif

#ifndef XFPREGS_ACTIVE
#define XFPREGS_ACTIVE 0xffffffff8101e8b0
#endif

#ifndef XFPREGS_GET
#define XFPREGS_GET 0xffffffff8101e8d0
#endif

#ifndef XFPREGS_SET
#define XFPREGS_SET 0xffffffff8101e980
#endif

#ifndef XSTATEREGS_GET
#define XSTATEREGS_GET 0xffffffff8101ea50
#endif

#ifndef XSTATEREGS_SET
#define XSTATEREGS_SET 0xffffffff8101eb40
#endif

#ifndef CONVERT_FROM_FXSR
#define CONVERT_FROM_FXSR 0xffffffff8101ec30
#endif

#ifndef CONVERT_TO_FXSR
#define CONVERT_TO_FXSR 0xffffffff8101edc0
#endif

#ifndef FPREGS_GET
#define FPREGS_GET 0xffffffff8101ee60
#endif

#ifndef DUMP_FPU
#define DUMP_FPU 0xffffffff8101ef60
#endif

#ifndef FPREGS_SET
#define FPREGS_SET 0xffffffff8101efb0
#endif

#ifndef FPU_DETECT
#define FPU_DETECT 0xffffffff8101f0b0
#endif

#ifndef GET_XSAVE_ADDR
#define GET_XSAVE_ADDR 0xffffffff8101f120
#endif

#ifndef __SANITIZE_I387_STATE
#define __SANITIZE_I387_STATE 0xffffffff8101f210
#endif

#ifndef SAVE_XSTATE_SIG
#define SAVE_XSTATE_SIG 0xffffffff8101f370
#endif

#ifndef __RESTORE_XSTATE_SIG
#define __RESTORE_XSTATE_SIG 0xffffffff8101f590
#endif

#ifndef SETUP_XSTATE_COMP
#define SETUP_XSTATE_COMP 0xffffffff8101fb50
#endif

#ifndef XSAVE_INIT
#define XSAVE_INIT 0xffffffff8101fc50
#endif

#ifndef REGS_QUERY_REGISTER_OFFSET
#define REGS_QUERY_REGISTER_OFFSET 0xffffffff81021500
#endif

#ifndef REGS_QUERY_REGISTER_NAME
#define REGS_QUERY_REGISTER_NAME 0xffffffff81021560
#endif

#ifndef PTRACE_DISABLE
#define PTRACE_DISABLE 0xffffffff810215a0
#endif

#ifndef ARCH_PTRACE
#define ARCH_PTRACE 0xffffffff810215c0
#endif

#ifndef COMPAT_ARCH_PTRACE
#define COMPAT_ARCH_PTRACE 0xffffffff810218c0
#endif

#ifndef UPDATE_REGSET_XSTATE_INFO
#define UPDATE_REGSET_XSTATE_INFO 0xffffffff81021d50
#endif

#ifndef TASK_USER_REGSET_VIEW
#define TASK_USER_REGSET_VIEW 0xffffffff81021d70
#endif

#ifndef USER_SINGLE_STEP_SIGINFO
#define USER_SINGLE_STEP_SIGINFO 0xffffffff81021da0
#endif

#ifndef SEND_SIGTRAP
#define SEND_SIGTRAP 0xffffffff81021ee0
#endif

#ifndef SYSCALL_TRACE_ENTER_PHASE1
#define SYSCALL_TRACE_ENTER_PHASE1 0xffffffff81021f50
#endif

#ifndef SYSCALL_TRACE_ENTER_PHASE2
#define SYSCALL_TRACE_ENTER_PHASE2 0xffffffff810220b0
#endif

#ifndef SYSCALL_TRACE_ENTER
#define SYSCALL_TRACE_ENTER 0xffffffff81022300
#endif

#ifndef SYSCALL_TRACE_LEAVE
#define SYSCALL_TRACE_LEAVE 0xffffffff81022370
#endif

#ifndef DO_SET_THREAD_AREA
#define DO_SET_THREAD_AREA 0xffffffff81022760
#endif

#ifndef SYS_SET_THREAD_AREA
#define SYS_SET_THREAD_AREA 0xffffffff81022860
#endif

#ifndef SYS_SET_THREAD_AREA
#define SYS_SET_THREAD_AREA 0xffffffff81022860
#endif

#ifndef DO_GET_THREAD_AREA
#define DO_GET_THREAD_AREA 0xffffffff81022890
#endif

#ifndef SYS_GET_THREAD_AREA
#define SYS_GET_THREAD_AREA 0xffffffff81022900
#endif

#ifndef SYS_GET_THREAD_AREA
#define SYS_GET_THREAD_AREA 0xffffffff81022900
#endif

#ifndef REGSET_TLS_ACTIVE
#define REGSET_TLS_ACTIVE 0xffffffff81022930
#endif

#ifndef REGSET_TLS_GET
#define REGSET_TLS_GET 0xffffffff81022970
#endif

#ifndef REGSET_TLS_SET
#define REGSET_TLS_SET 0xffffffff81022aa0
#endif

#ifndef CONVERT_IP_TO_LINEAR
#define CONVERT_IP_TO_LINEAR 0xffffffff81022b70
#endif

#ifndef SET_TASK_BLOCKSTEP
#define SET_TASK_BLOCKSTEP 0xffffffff81022c30
#endif

#ifndef USER_ENABLE_SINGLE_STEP
#define USER_ENABLE_SINGLE_STEP 0xffffffff81022ea0
#endif

#ifndef USER_ENABLE_BLOCK_STEP
#define USER_ENABLE_BLOCK_STEP 0xffffffff81022ec0
#endif

#ifndef USER_DISABLE_SINGLE_STEP
#define USER_DISABLE_SINGLE_STEP 0xffffffff81022ee0
#endif

#ifndef SAVE_STACK_TRACE
#define SAVE_STACK_TRACE 0xffffffff81023010
#endif

#ifndef SAVE_STACK_TRACE_TSK
#define SAVE_STACK_TRACE_TSK 0xffffffff81023060
#endif

#ifndef SAVE_STACK_TRACE_REGS
#define SAVE_STACK_TRACE_REGS 0xffffffff81023130
#endif

#ifndef SAVE_STACK_TRACE_USER
#define SAVE_STACK_TRACE_USER 0xffffffff81023180
#endif

#ifndef AMD_GET_L3_DISABLE_SLOT
#define AMD_GET_L3_DISABLE_SLOT 0xffffffff81023d90
#endif

#ifndef AMD_SET_L3_DISABLE_SLOT
#define AMD_SET_L3_DISABLE_SLOT 0xffffffff81023e90
#endif

#ifndef CACHE_GET_PRIV_GROUP
#define CACHE_GET_PRIV_GROUP 0xffffffff810240a0
#endif

#ifndef INIT_AMD_CACHEINFO
#define INIT_AMD_CACHEINFO 0xffffffff81024180
#endif

#ifndef INIT_INTEL_CACHEINFO
#define INIT_INTEL_CACHEINFO 0xffffffff81024210
#endif

#ifndef INIT_CACHE_LEVEL
#define INIT_CACHE_LEVEL 0xffffffff810247c0
#endif

#ifndef POPULATE_CACHE_LEAVES
#define POPULATE_CACHE_LEAVES 0xffffffff810247f0
#endif

#ifndef INIT_SCATTERED_CPUID_FEATURES
#define INIT_SCATTERED_CPUID_FEATURES 0xffffffff81024820
#endif

#ifndef DETECT_EXTENDED_TOPOLOGY
#define DETECT_EXTENDED_TOPOLOGY 0xffffffff81024920
#endif

#ifndef __STATIC_CPU_HAS_SAFE
#define __STATIC_CPU_HAS_SAFE 0xffffffff81024b00
#endif

#ifndef IS_DEBUG_STACK
#define IS_DEBUG_STACK 0xffffffff81024d00
#endif

#ifndef DEBUG_STACK_SET_ZERO
#define DEBUG_STACK_SET_ZERO 0xffffffff81024d40
#endif

#ifndef DEBUG_STACK_RESET
#define DEBUG_STACK_RESET 0xffffffff81024da0
#endif

#ifndef LOAD_PERCPU_SEGMENT
#define LOAD_PERCPU_SEGMENT 0xffffffff81024e30
#endif

#ifndef SWITCH_TO_NEW_GDT
#define SWITCH_TO_NEW_GDT 0xffffffff81024e60
#endif

#ifndef CPU_DETECT_CACHE_SIZES
#define CPU_DETECT_CACHE_SIZES 0xffffffff81024eb0
#endif

#ifndef DETECT_HT
#define DETECT_HT 0xffffffff81024f90
#endif

#ifndef CPU_DETECT
#define CPU_DETECT 0xffffffff81025120
#endif

#ifndef GET_CPU_CAP
#define GET_CPU_CAP 0xffffffff810251f0
#endif

#ifndef IDENTIFY_SECONDARY_CPU
#define IDENTIFY_SECONDARY_CPU 0xffffffff810258f0
#endif

#ifndef PRINT_CPU_INFO
#define PRINT_CPU_INFO 0xffffffff81025920
#endif

#ifndef PRINT_CPU_MSR
#define PRINT_CPU_MSR 0xffffffff81025a30
#endif

#ifndef SYSCALL_INIT
#define SYSCALL_INIT 0xffffffff81025a50
#endif

#ifndef CPU_INIT
#define CPU_INIT 0xffffffff81025af0
#endif

#ifndef X86_INIT_RDRAND
#define X86_INIT_RDRAND 0xffffffff81025e90
#endif

#ifndef X86_MATCH_CPU
#define X86_MATCH_CPU 0xffffffff81025ee0
#endif

#ifndef VIDE
#define VIDE 0xffffffff81026ef0
#endif

#ifndef AMD_GET_NB_ID
#define AMD_GET_NB_ID 0xffffffff81026f00
#endif

#ifndef SET_DR_ADDR_MASK
#define SET_DR_ADDR_MASK 0xffffffff81027bc0
#endif

#ifndef PERF_CHECK_MICROCODE
#define PERF_CHECK_MICROCODE 0xffffffff81027fc0
#endif

#ifndef PERF_GET_X86_PMU_CAPABILITY
#define PERF_GET_X86_PMU_CAPABILITY 0xffffffff81028090
#endif

#ifndef PERF_ASSIGN_EVENTS
#define PERF_ASSIGN_EVENTS 0xffffffff810280d0
#endif

#ifndef EVENTS_SYSFS_SHOW
#define EVENTS_SYSFS_SHOW 0xffffffff810283e0
#endif

#ifndef X86_PERF_EVENT_UPDATE
#define X86_PERF_EVENT_UPDATE 0xffffffff810289f0
#endif

#ifndef X86_PMU_STOP
#define X86_PMU_STOP 0xffffffff81028a90
#endif

#ifndef X86_RESERVE_HARDWARE
#define X86_RESERVE_HARDWARE 0xffffffff81028c90
#endif

#ifndef X86_RELEASE_HARDWARE
#define X86_RELEASE_HARDWARE 0xffffffff81029050
#endif

#ifndef HW_PERF_LBR_EVENT_DESTROY
#define HW_PERF_LBR_EVENT_DESTROY 0xffffffff81029110
#endif

#ifndef X86_ADD_EXCLUSIVE
#define X86_ADD_EXCLUSIVE 0xffffffff81029130
#endif

#ifndef X86_DEL_EXCLUSIVE
#define X86_DEL_EXCLUSIVE 0xffffffff810291e0
#endif

#ifndef X86_SETUP_PERFCTR
#define X86_SETUP_PERFCTR 0xffffffff810291f0
#endif

#ifndef X86_PMU_HW_CONFIG
#define X86_PMU_HW_CONFIG 0xffffffff810293a0
#endif

#ifndef X86_PMU_DISABLE_ALL
#define X86_PMU_DISABLE_ALL 0xffffffff81029570
#endif

#ifndef X86_PMU_ENABLE_ALL
#define X86_PMU_ENABLE_ALL 0xffffffff81029650
#endif

#ifndef X86_SCHEDULE_EVENTS
#define X86_SCHEDULE_EVENTS 0xffffffff81029720
#endif

#ifndef X86_PERF_EVENT_SET_PERIOD
#define X86_PERF_EVENT_SET_PERIOD 0xffffffff810299c0
#endif

#ifndef X86_PMU_ENABLE_EVENT
#define X86_PMU_ENABLE_EVENT 0xffffffff81029c40
#endif

#ifndef PERF_EVENT_PRINT_DEBUG
#define PERF_EVENT_PRINT_DEBUG 0xffffffff81029cc0
#endif

#ifndef X86_PMU_HANDLE_IRQ
#define X86_PMU_HANDLE_IRQ 0xffffffff81029f80
#endif

#ifndef PERF_EVENTS_LAPIC_INIT
#define PERF_EVENTS_LAPIC_INIT 0xffffffff8102a0e0
#endif

#ifndef X86_EVENT_SYSFS_SHOW
#define X86_EVENT_SYSFS_SHOW 0xffffffff8102a440
#endif

#ifndef ARCH_PERF_UPDATE_USERPAGE
#define ARCH_PERF_UPDATE_USERPAGE 0xffffffff8102a5a0
#endif

#ifndef PERF_CALLCHAIN_KERNEL
#define PERF_CALLCHAIN_KERNEL 0xffffffff8102a650
#endif

#ifndef PERF_CALLCHAIN_USER
#define PERF_CALLCHAIN_USER 0xffffffff8102a6c0
#endif

#ifndef PERF_INSTRUCTION_POINTER
#define PERF_INSTRUCTION_POINTER 0xffffffff8102a910
#endif

#ifndef PERF_MISC_FLAGS
#define PERF_MISC_FLAGS 0xffffffff8102a9a0
#endif

#ifndef AMD_PMU_ENABLE_VIRT
#define AMD_PMU_ENABLE_VIRT 0xffffffff8102aac0
#endif

#ifndef AMD_PMU_DISABLE_VIRT
#define AMD_PMU_DISABLE_VIRT 0xffffffff8102ab00
#endif

#ifndef INTEL_PMU_LBR_RESET
#define INTEL_PMU_LBR_RESET 0xffffffff8102dd30
#endif

#ifndef INTEL_PMU_LBR_SCHED_TASK
#define INTEL_PMU_LBR_SCHED_TASK 0xffffffff8102dd50
#endif

#ifndef INTEL_PMU_LBR_ENABLE
#define INTEL_PMU_LBR_ENABLE 0xffffffff8102df60
#endif

#ifndef INTEL_PMU_LBR_DISABLE
#define INTEL_PMU_LBR_DISABLE 0xffffffff8102e030
#endif

#ifndef INTEL_PMU_LBR_ENABLE_ALL
#define INTEL_PMU_LBR_ENABLE_ALL 0xffffffff8102e110
#endif

#ifndef INTEL_PMU_LBR_DISABLE_ALL
#define INTEL_PMU_LBR_DISABLE_ALL 0xffffffff8102e1d0
#endif

#ifndef INTEL_PMU_LBR_READ
#define INTEL_PMU_LBR_READ 0xffffffff8102e200
#endif

#ifndef INTEL_PMU_SETUP_LBR_FILTER
#define INTEL_PMU_SETUP_LBR_FILTER 0xffffffff8102e670
#endif

#ifndef INTEL_PMU_LBR_INIT_HSW
#define INTEL_PMU_LBR_INIT_HSW 0xffffffff8102e7a0
#endif

#ifndef INIT_DEBUG_STORE_ON_CPU
#define INIT_DEBUG_STORE_ON_CPU 0xffffffff8102f2b0
#endif

#ifndef FINI_DEBUG_STORE_ON_CPU
#define FINI_DEBUG_STORE_ON_CPU 0xffffffff8102f300
#endif

#ifndef RELEASE_DS_BUFFERS
#define RELEASE_DS_BUFFERS 0xffffffff8102f350
#endif

#ifndef RESERVE_DS_BUFFERS
#define RESERVE_DS_BUFFERS 0xffffffff8102f400
#endif

#ifndef INTEL_PMU_ENABLE_BTS
#define INTEL_PMU_ENABLE_BTS 0xffffffff8102f840
#endif

#ifndef INTEL_PMU_DISABLE_BTS
#define INTEL_PMU_DISABLE_BTS 0xffffffff8102f8b0
#endif

#ifndef INTEL_PMU_DRAIN_BTS_BUFFER
#define INTEL_PMU_DRAIN_BTS_BUFFER 0xffffffff8102f910
#endif

#ifndef INTEL_PEBS_CONSTRAINTS
#define INTEL_PEBS_CONSTRAINTS 0xffffffff8102fab0
#endif

#ifndef INTEL_PMU_PEBS_ENABLE
#define INTEL_PMU_PEBS_ENABLE 0xffffffff8102fb30
#endif

#ifndef INTEL_PMU_PEBS_DISABLE
#define INTEL_PMU_PEBS_DISABLE 0xffffffff8102fbb0
#endif

#ifndef INTEL_PMU_PEBS_ENABLE_ALL
#define INTEL_PMU_PEBS_ENABLE_ALL 0xffffffff8102fc60
#endif

#ifndef INTEL_PMU_PEBS_DISABLE_ALL
#define INTEL_PMU_PEBS_DISABLE_ALL 0xffffffff8102fca0
#endif

#ifndef PERF_RESTORE_DEBUG_STORE
#define PERF_RESTORE_DEBUG_STORE 0xffffffff8102fce0
#endif

#ifndef PERF_GUEST_GET_MSRS
#define PERF_GUEST_GET_MSRS 0xffffffff8102fdd0
#endif

#ifndef INTEL_EVENT_SYSFS_SHOW
#define INTEL_EVENT_SYSFS_SHOW 0xffffffff8102fea0
#endif

#ifndef INTEL_PMU_SAVE_AND_RESTART
#define INTEL_PMU_SAVE_AND_RESTART 0xffffffff81031910
#endif

#ifndef X86_GET_EVENT_CONSTRAINTS
#define X86_GET_EVENT_CONSTRAINTS 0xffffffff81031db0
#endif

#ifndef ALLOCATE_SHARED_REGS
#define ALLOCATE_SHARED_REGS 0xffffffff81031e20
#endif

#ifndef INTEL_PT_INTERRUPT
#define INTEL_PT_INTERRUPT 0xffffffff81034df0
#endif

#ifndef INTEL_BTS_ENABLE_LOCAL
#define INTEL_BTS_ENABLE_LOCAL 0xffffffff81035990
#endif

#ifndef INTEL_BTS_DISABLE_LOCAL
#define INTEL_BTS_DISABLE_LOCAL 0xffffffff810359d0
#endif

#ifndef INTEL_BTS_INTERRUPT
#define INTEL_BTS_INTERRUPT 0xffffffff81035a10
#endif

#ifndef UNCORE_EVENT_SHOW
#define UNCORE_EVENT_SHOW 0xffffffff810366b0
#endif

#ifndef UNCORE_EVENT_TO_PMU
#define UNCORE_EVENT_TO_PMU 0xffffffff810366e0
#endif

#ifndef UNCORE_PMU_TO_BOX
#define UNCORE_PMU_TO_BOX 0xffffffff810366f0
#endif

#ifndef UNCORE_EVENT_TO_BOX
#define UNCORE_EVENT_TO_BOX 0xffffffff81036e50
#endif

#ifndef UNCORE_MSR_READ_COUNTER
#define UNCORE_MSR_READ_COUNTER 0xffffffff81036e70
#endif

#ifndef UNCORE_GET_CONSTRAINT
#define UNCORE_GET_CONSTRAINT 0xffffffff81036e90
#endif

#ifndef UNCORE_PUT_CONSTRAINT
#define UNCORE_PUT_CONSTRAINT 0xffffffff81036f90
#endif

#ifndef UNCORE_SHARED_REG_CONFIG
#define UNCORE_SHARED_REG_CONFIG 0xffffffff81036fd0
#endif

#ifndef UNCORE_PERF_EVENT_UPDATE
#define UNCORE_PERF_EVENT_UPDATE 0xffffffff81037020
#endif

#ifndef UNCORE_PMU_EVENT_READ
#define UNCORE_PMU_EVENT_READ 0xffffffff810370c0
#endif

#ifndef UNCORE_PMU_START_HRTIMER
#define UNCORE_PMU_START_HRTIMER 0xffffffff81037400
#endif

#ifndef UNCORE_PMU_CANCEL_HRTIMER
#define UNCORE_PMU_CANCEL_HRTIMER 0xffffffff81037900
#endif

#ifndef SNB_UNCORE_CPU_INIT
#define SNB_UNCORE_CPU_INIT 0xffffffff81038070
#endif

#ifndef SNB_UNCORE_PCI_INIT
#define SNB_UNCORE_PCI_INIT 0xffffffff810380a0
#endif

#ifndef IVB_UNCORE_PCI_INIT
#define IVB_UNCORE_PCI_INIT 0xffffffff810380e0
#endif

#ifndef HSW_UNCORE_PCI_INIT
#define HSW_UNCORE_PCI_INIT 0xffffffff81038120
#endif

#ifndef NHM_UNCORE_CPU_INIT
#define NHM_UNCORE_CPU_INIT 0xffffffff81038160
#endif

#ifndef SNBEP_UNCORE_CPU_INIT
#define SNBEP_UNCORE_CPU_INIT 0xffffffff81039c50
#endif

#ifndef SNBEP_UNCORE_PCI_INIT
#define SNBEP_UNCORE_PCI_INIT 0xffffffff81039c80
#endif

#ifndef IVBEP_UNCORE_CPU_INIT
#define IVBEP_UNCORE_CPU_INIT 0xffffffff81039cc0
#endif

#ifndef IVBEP_UNCORE_PCI_INIT
#define IVBEP_UNCORE_PCI_INIT 0xffffffff81039cf0
#endif

#ifndef HSWEP_UNCORE_CPU_INIT
#define HSWEP_UNCORE_CPU_INIT 0xffffffff81039d30
#endif

#ifndef HSWEP_UNCORE_PCI_INIT
#define HSWEP_UNCORE_PCI_INIT 0xffffffff81039db0
#endif

#ifndef NHMEX_UNCORE_CPU_INIT
#define NHMEX_UNCORE_CPU_INIT 0xffffffff8103b8a0
#endif

#ifndef REGISTER_MCE_WRITE_CALLBACK
#define REGISTER_MCE_WRITE_CALLBACK 0xffffffff8103b9a0
#endif

#ifndef MCE_CHRDEV_WRITE
#define MCE_CHRDEV_WRITE 0xffffffff8103b9b0
#endif

#ifndef MCE_REGISTER_DECODE_CHAIN
#define MCE_REGISTER_DECODE_CHAIN 0xffffffff8103bdb0
#endif

#ifndef MCE_UNREGISTER_DECODE_CHAIN
#define MCE_UNREGISTER_DECODE_CHAIN 0xffffffff8103bef0
#endif

#ifndef MCE_NOTIFY_IRQ
#define MCE_NOTIFY_IRQ 0xffffffff8103cf30
#endif

#ifndef MCE_SETUP
#define MCE_SETUP 0xffffffff8103d700
#endif

#ifndef MCE_LOG
#define MCE_LOG 0xffffffff8103d7e0
#endif

#ifndef MACHINE_CHECK_POLL
#define MACHINE_CHECK_POLL 0xffffffff8103d940
#endif

#ifndef DO_MACHINE_CHECK
#define DO_MACHINE_CHECK 0xffffffff8103ddd0
#endif

#ifndef MCE_AVAILABLE
#define MCE_AVAILABLE 0xffffffff8103e870
#endif

#ifndef MCE_LOG_THERM_THROT_EVENT
#define MCE_LOG_THERM_THROT_EVENT 0xffffffff8103e890
#endif

#ifndef MCE_TIMER_KICK
#define MCE_TIMER_KICK 0xffffffff8103e8d0
#endif

#ifndef MCHECK_CPU_INIT
#define MCHECK_CPU_INIT 0xffffffff8103e920
#endif

#ifndef MCE_DISABLE_BANK
#define MCE_DISABLE_BANK 0xffffffff8103edf0
#endif

#ifndef MCE_GET_DEBUGFS_DIR
#define MCE_GET_DEBUGFS_DIR 0xffffffff8103ee50
#endif

#ifndef MCE_INTEL_CMCI_POLL
#define MCE_INTEL_CMCI_POLL 0xffffffff8103f640
#endif

#ifndef MCE_INTEL_HCPU_UPDATE
#define MCE_INTEL_HCPU_UPDATE 0xffffffff8103f6a0
#endif

#ifndef CMCI_RECHECK
#define CMCI_RECHECK 0xffffffff8103f6d0
#endif

#ifndef CMCI_INTEL_ADJUST_TIMER
#define CMCI_INTEL_ADJUST_TIMER 0xffffffff8103f750
#endif

#ifndef CMCI_CLEAR
#define CMCI_CLEAR 0xffffffff8103f820
#endif

#ifndef CMCI_REDISCOVER
#define CMCI_REDISCOVER 0xffffffff8103f890
#endif

#ifndef CMCI_REENABLE
#define CMCI_REENABLE 0xffffffff8103f8d0
#endif

#ifndef CMCI_DISABLE_BANK
#define CMCI_DISABLE_BANK 0xffffffff8103f900
#endif

#ifndef MCE_INTEL_FEATURE_INIT
#define MCE_INTEL_FEATURE_INIT 0xffffffff8103f960
#endif

#ifndef MCE_AMD_FEATURE_INIT
#define MCE_AMD_FEATURE_INIT 0xffffffff81040890
#endif

#ifndef SMP_THRESHOLD_INTERRUPT
#define SMP_THRESHOLD_INTERRUPT 0xffffffff81040af0
#endif

#ifndef SMP_TRACE_THRESHOLD_INTERRUPT
#define SMP_TRACE_THRESHOLD_INTERRUPT 0xffffffff81040b30
#endif

#ifndef SMP_THERMAL_INTERRUPT
#define SMP_THERMAL_INTERRUPT 0xffffffff81041300
#endif

#ifndef SMP_TRACE_THERMAL_INTERRUPT
#define SMP_TRACE_THERMAL_INTERRUPT 0xffffffff81041340
#endif

#ifndef INTEL_INIT_THERMAL
#define INTEL_INIT_THERMAL 0xffffffff810413f0
#endif

#ifndef APEI_MCE_REPORT_MEM_ERROR
#define APEI_MCE_REPORT_MEM_ERROR 0xffffffff81041780
#endif

#ifndef APEI_WRITE_MCE
#define APEI_WRITE_MCE 0xffffffff81041810
#endif

#ifndef APEI_READ_MCE
#define APEI_READ_MCE 0xffffffff81041a90
#endif

#ifndef APEI_CHECK_MCE
#define APEI_CHECK_MCE 0xffffffff81041c80
#endif

#ifndef APEI_CLEAR_MCE
#define APEI_CLEAR_MCE 0xffffffff81041ca0
#endif

#ifndef PHYS_WC_TO_MTRR_INDEX
#define PHYS_WC_TO_MTRR_INDEX 0xffffffff81041cc0
#endif

#ifndef SET_MTRR_OPS
#define SET_MTRR_OPS 0xffffffff81041e30
#endif

#ifndef MTRR_ADD_PAGE
#define MTRR_ADD_PAGE 0xffffffff81041e50
#endif

#ifndef MTRR_ADD
#define MTRR_ADD 0xffffffff810422e0
#endif

#ifndef ARCH_PHYS_WC_ADD
#define ARCH_PHYS_WC_ADD 0xffffffff81042340
#endif

#ifndef MTRR_DEL_PAGE
#define MTRR_DEL_PAGE 0xffffffff810423a0
#endif

#ifndef MTRR_DEL
#define MTRR_DEL 0xffffffff81042560
#endif

#ifndef ARCH_PHYS_WC_DEL
#define ARCH_PHYS_WC_DEL 0xffffffff810425c0
#endif

#ifndef MTRR_AP_INIT
#define MTRR_AP_INIT 0xffffffff81042610
#endif

#ifndef MTRR_SAVE_STATE
#define MTRR_SAVE_STATE 0xffffffff81042680
#endif

#ifndef SET_MTRR_APS_DELAYED_INIT
#define SET_MTRR_APS_DELAYED_INIT 0xffffffff810426c0
#endif

#ifndef MTRR_APS_INIT
#define MTRR_APS_INIT 0xffffffff810426f0
#endif

#ifndef MTRR_BP_RESTORE
#define MTRR_BP_RESTORE 0xffffffff81042760
#endif

#ifndef MTRR_ATTRIB_TO_STR
#define MTRR_ATTRIB_TO_STR 0xffffffff81043340
#endif

#ifndef GENERIC_GET_FREE_REGION
#define GENERIC_GET_FREE_REGION 0xffffffff81043360
#endif

#ifndef GENERIC_VALIDATE_ADD_PAGE
#define GENERIC_VALIDATE_ADD_PAGE 0xffffffff81043410
#endif

#ifndef MTRR_TYPE_LOOKUP
#define MTRR_TYPE_LOOKUP 0xffffffff810438d0
#endif

#ifndef FILL_MTRR_VAR_RANGE
#define FILL_MTRR_VAR_RANGE 0xffffffff81043990
#endif

#ifndef MTRR_WRMSR
#define MTRR_WRMSR 0xffffffff810439c0
#endif

#ifndef MTRR_SAVE_FIXED_RANGES
#define MTRR_SAVE_FIXED_RANGES 0xffffffff81043d70
#endif

#ifndef POSITIVE_HAVE_WRCOMB
#define POSITIVE_HAVE_WRCOMB 0xffffffff810440a0
#endif

#ifndef MICROCODE_SANITY_CHECK
#define MICROCODE_SANITY_CHECK 0xffffffff81044e20
#endif

#ifndef GET_MATCHING_SIG
#define GET_MATCHING_SIG 0xffffffff81045070
#endif

#ifndef GET_MATCHING_MICROCODE
#define GET_MATCHING_MICROCODE 0xffffffff81045130
#endif

#ifndef APPLY_MICROCODE_AMD
#define APPLY_MICROCODE_AMD 0xffffffff81045210
#endif

#ifndef __APPLY_MICROCODE_AMD
#define __APPLY_MICROCODE_AMD 0xffffffff81045450
#endif

#ifndef LOAD_MICROCODE_AMD
#define LOAD_MICROCODE_AMD 0xffffffff81045490
#endif

#ifndef LOAD_UCODE_AP
#define LOAD_UCODE_AP 0xffffffff81045a00
#endif

#ifndef RELOAD_EARLY_MICROCODE
#define RELOAD_EARLY_MICROCODE 0xffffffff81045ab0
#endif

#ifndef SAVE_MC_FOR_EARLY
#define SAVE_MC_FOR_EARLY 0xffffffff81045f10
#endif

#ifndef LOAD_UCODE_INTEL_AP
#define LOAD_UCODE_INTEL_AP 0xffffffff81046120
#endif

#ifndef RELOAD_UCODE_INTEL
#define RELOAD_UCODE_INTEL 0xffffffff81046190
#endif

#ifndef LOAD_UCODE_AMD_AP
#define LOAD_UCODE_AMD_AP 0xffffffff81046450
#endif

#ifndef RELOAD_UCODE_AMD
#define RELOAD_UCODE_AMD 0xffffffff810465a0
#endif

#ifndef AVAIL_TO_RESRV_PERFCTR_NMI_BIT
#define AVAIL_TO_RESRV_PERFCTR_NMI_BIT 0xffffffff81046600
#endif

#ifndef RELEASE_PERFCTR_NMI
#define RELEASE_PERFCTR_NMI 0xffffffff81046630
#endif

#ifndef RELEASE_EVNTSEL_NMI
#define RELEASE_EVNTSEL_NMI 0xffffffff810466c0
#endif

#ifndef RESERVE_EVNTSEL_NMI
#define RESERVE_EVNTSEL_NMI 0xffffffff81046750
#endif

#ifndef RESERVE_PERFCTR_NMI
#define RESERVE_PERFCTR_NMI 0xffffffff81046800
#endif

#ifndef GET_IBS_CAPS
#define GET_IBS_CAPS 0xffffffff81046aa0
#endif

#ifndef INIT_HYPERVISOR
#define INIT_HYPERVISOR 0xffffffff81047790
#endif

#ifndef HV_REMOVE_VMBUS_IRQ
#define HV_REMOVE_VMBUS_IRQ 0xffffffff810477c0
#endif

#ifndef HV_SETUP_VMBUS_IRQ
#define HV_SETUP_VMBUS_IRQ 0xffffffff81047800
#endif

#ifndef HYPERV_VECTOR_HANDLER
#define HYPERV_VECTOR_HANDLER 0xffffffff81047920
#endif

#ifndef ACPI_REGISTER_GSI
#define ACPI_REGISTER_GSI 0xffffffff81047970
#endif

#ifndef ACPI_UNREGISTER_GSI
#define ACPI_UNREGISTER_GSI 0xffffffff81047990
#endif

#ifndef ACPI_UNMAP_CPU
#define ACPI_UNMAP_CPU 0xffffffff810479e0
#endif

#ifndef ACPI_UNREGISTER_IOAPIC
#define ACPI_UNREGISTER_IOAPIC 0xffffffff81047a30
#endif

#ifndef ACPI_GSI_TO_IRQ
#define ACPI_GSI_TO_IRQ 0xffffffff81047c50
#endif

#ifndef ACPI_REGISTER_IOAPIC
#define ACPI_REGISTER_IOAPIC 0xffffffff81047d40
#endif

#ifndef ACPI_ISA_IRQ_TO_GSI
#define ACPI_ISA_IRQ_TO_GSI 0xffffffff81047e10
#endif

#ifndef ACPI_IOAPIC_REGISTERED
#define ACPI_IOAPIC_REGISTERED 0xffffffff81047e40
#endif

#ifndef __ACPI_ACQUIRE_GLOBAL_LOCK
#define __ACPI_ACQUIRE_GLOBAL_LOCK 0xffffffff81047e70
#endif

#ifndef __ACPI_RELEASE_GLOBAL_LOCK
#define __ACPI_RELEASE_GLOBAL_LOCK 0xffffffff81047ea0
#endif

#ifndef X86_ACPI_ENTER_SLEEP_STATE
#define X86_ACPI_ENTER_SLEEP_STATE 0xffffffff81047ec0
#endif

#ifndef X86_ACPI_SUSPEND_LOWLEVEL
#define X86_ACPI_SUSPEND_LOWLEVEL 0xffffffff81047ee0
#endif

#ifndef WAKEUP_LONG64
#define WAKEUP_LONG64 0xffffffff81048020
#endif

#ifndef DO_SUSPEND_LOWLEVEL
#define DO_SUSPEND_LOWLEVEL 0xffffffff81048080
#endif

#ifndef ARCH_APEI_ENABLE_CMCFF
#define ARCH_APEI_ENABLE_CMCFF 0xffffffff810481a0
#endif

#ifndef ARCH_APEI_REPORT_MEM_ERROR
#define ARCH_APEI_REPORT_MEM_ERROR 0xffffffff81048210
#endif

#ifndef ARCH_APEI_FLUSH_TLB_ONE
#define ARCH_APEI_FLUSH_TLB_ONE 0xffffffff81048230
#endif

#ifndef ACPI_PROCESSOR_FFH_CSTATE_PROBE
#define ACPI_PROCESSOR_FFH_CSTATE_PROBE 0xffffffff81048240
#endif

#ifndef ACPI_PROCESSOR_FFH_CSTATE_ENTER
#define ACPI_PROCESSOR_FFH_CSTATE_ENTER 0xffffffff810483d0
#endif

#ifndef ACPI_PROCESSOR_POWER_INIT_BM_CHECK
#define ACPI_PROCESSOR_POWER_INIT_BM_CHECK 0xffffffff810484a0
#endif

#ifndef NATIVE_MACHINE_SHUTDOWN
#define NATIVE_MACHINE_SHUTDOWN 0xffffffff810485f0
#endif

#ifndef MACHINE_REAL_RESTART
#define MACHINE_REAL_RESTART 0xffffffff810486e0
#endif

#ifndef MACHINE_POWER_OFF
#define MACHINE_POWER_OFF 0xffffffff81048740
#endif

#ifndef MACHINE_SHUTDOWN
#define MACHINE_SHUTDOWN 0xffffffff81048760
#endif

#ifndef MACHINE_EMERGENCY_RESTART
#define MACHINE_EMERGENCY_RESTART 0xffffffff81048780
#endif

#ifndef MACHINE_RESTART
#define MACHINE_RESTART 0xffffffff810487a0
#endif

#ifndef MACHINE_HALT
#define MACHINE_HALT 0xffffffff810487c0
#endif

#ifndef MACHINE_CRASH_SHUTDOWN
#define MACHINE_CRASH_SHUTDOWN 0xffffffff810487e0
#endif

#ifndef NMI_SHOOTDOWN_CPUS
#define NMI_SHOOTDOWN_CPUS 0xffffffff81048800
#endif

#ifndef NATIVE_SEND_CALL_FUNC_SINGLE_IPI
#define NATIVE_SEND_CALL_FUNC_SINGLE_IPI 0xffffffff81048b00
#endif

#ifndef NATIVE_SEND_CALL_FUNC_IPI
#define NATIVE_SEND_CALL_FUNC_IPI 0xffffffff81048c30
#endif

#ifndef SMP_REBOOT_INTERRUPT
#define SMP_REBOOT_INTERRUPT 0xffffffff81048e40
#endif

#ifndef SMP_RESCHEDULE_INTERRUPT
#define SMP_RESCHEDULE_INTERRUPT 0xffffffff81048e80
#endif

#ifndef SMP_TRACE_RESCHEDULE_INTERRUPT
#define SMP_TRACE_RESCHEDULE_INTERRUPT 0xffffffff81048eb0
#endif

#ifndef SMP_CALL_FUNCTION_INTERRUPT
#define SMP_CALL_FUNCTION_INTERRUPT 0xffffffff81048f50
#endif

#ifndef SMP_TRACE_CALL_FUNCTION_INTERRUPT
#define SMP_TRACE_CALL_FUNCTION_INTERRUPT 0xffffffff81048f90
#endif

#ifndef SMP_CALL_FUNCTION_SINGLE_INTERRUPT
#define SMP_CALL_FUNCTION_SINGLE_INTERRUPT 0xffffffff81049030
#endif

#ifndef SMP_TRACE_CALL_FUNCTION_SINGLE_INTERRUPT
#define SMP_TRACE_CALL_FUNCTION_SINGLE_INTERRUPT 0xffffffff81049070
#endif

#ifndef CPU_COREGROUP_MASK
#define CPU_COREGROUP_MASK 0xffffffff81049180
#endif

#ifndef SMP_STORE_CPU_INFO
#define SMP_STORE_CPU_INFO 0xffffffff81049290
#endif

#ifndef SET_CPU_SIBLING_MAP
#define SET_CPU_SIBLING_MAP 0xffffffff810492e0
#endif

#ifndef __INQUIRE_REMOTE_APIC
#define __INQUIRE_REMOTE_APIC 0xffffffff81049980
#endif

#ifndef WAKEUP_SECONDARY_CPU_VIA_NMI
#define WAKEUP_SECONDARY_CPU_VIA_NMI 0xffffffff81049af0
#endif

#ifndef SMP_ANNOUNCE
#define SMP_ANNOUNCE 0xffffffff81049bf0
#endif

#ifndef COMMON_CPU_UP
#define COMMON_CPU_UP 0xffffffff81049c40
#endif

#ifndef NATIVE_CPU_UP
#define NATIVE_CPU_UP 0xffffffff81049ca0
#endif

#ifndef ARCH_DISABLE_SMP_SUPPORT
#define ARCH_DISABLE_SMP_SUPPORT 0xffffffff8104a700
#endif

#ifndef ARCH_ENABLE_NONBOOT_CPUS_BEGIN
#define ARCH_ENABLE_NONBOOT_CPUS_BEGIN 0xffffffff8104a720
#endif

#ifndef ARCH_ENABLE_NONBOOT_CPUS_END
#define ARCH_ENABLE_NONBOOT_CPUS_END 0xffffffff8104a740
#endif

#ifndef CPU_DISABLE_COMMON
#define CPU_DISABLE_COMMON 0xffffffff8104a760
#endif

#ifndef NATIVE_CPU_DISABLE
#define NATIVE_CPU_DISABLE 0xffffffff8104a9c0
#endif

#ifndef COMMON_CPU_DIE
#define COMMON_CPU_DIE 0xffffffff8104a9f0
#endif

#ifndef NATIVE_CPU_DIE
#define NATIVE_CPU_DIE 0xffffffff8104aa40
#endif

#ifndef PLAY_DEAD_COMMON
#define PLAY_DEAD_COMMON 0xffffffff8104aa60
#endif

#ifndef NATIVE_PLAY_DEAD
#define NATIVE_PLAY_DEAD 0xffffffff8104aab0
#endif

#ifndef CHECK_TSC_SYNC_SOURCE
#define CHECK_TSC_SYNC_SOURCE 0xffffffff8104ad60
#endif

#ifndef CHECK_TSC_SYNC_TARGET
#define CHECK_TSC_SYNC_TARGET 0xffffffff8104aed0
#endif

#ifndef SETUP_APIC_EILVT
#define SETUP_APIC_EILVT 0xffffffff8104b370
#endif

#ifndef NATIVE_APIC_WAIT_ICR_IDLE
#define NATIVE_APIC_WAIT_ICR_IDLE 0xffffffff8104b910
#endif

#ifndef NATIVE_SAFE_APIC_WAIT_ICR_IDLE
#define NATIVE_SAFE_APIC_WAIT_ICR_IDLE 0xffffffff8104b940
#endif

#ifndef NATIVE_APIC_ICR_WRITE
#define NATIVE_APIC_ICR_WRITE 0xffffffff8104b9a0
#endif

#ifndef NATIVE_APIC_ICR_READ
#define NATIVE_APIC_ICR_READ 0xffffffff8104ba00
#endif

#ifndef LAPIC_GET_MAXLVT
#define LAPIC_GET_MAXLVT 0xffffffff8104ba40
#endif

#ifndef SETUP_SECONDARY_APIC_CLOCK
#define SETUP_SECONDARY_APIC_CLOCK 0xffffffff8104ba70
#endif

#ifndef SETUP_PROFILING_TIMER
#define SETUP_PROFILING_TIMER 0xffffffff8104ba90
#endif

#ifndef CLEAR_LOCAL_APIC
#define CLEAR_LOCAL_APIC 0xffffffff8104baa0
#endif

#ifndef DISABLE_LOCAL_APIC
#define DISABLE_LOCAL_APIC 0xffffffff8104bd50
#endif

#ifndef LAPIC_SHUTDOWN
#define LAPIC_SHUTDOWN 0xffffffff8104bf60
#endif

#ifndef SETUP_LOCAL_APIC
#define SETUP_LOCAL_APIC 0xffffffff8104bfb0
#endif

#ifndef APIC_AP_SETUP
#define APIC_AP_SETUP 0xffffffff8104c310
#endif

#ifndef X2APIC_SETUP
#define X2APIC_SETUP 0xffffffff8104c340
#endif

#ifndef SMP_SPURIOUS_INTERRUPT
#define SMP_SPURIOUS_INTERRUPT 0xffffffff8104c440
#endif

#ifndef SMP_TRACE_SPURIOUS_INTERRUPT
#define SMP_TRACE_SPURIOUS_INTERRUPT 0xffffffff8104c4c0
#endif

#ifndef SMP_ERROR_INTERRUPT
#define SMP_ERROR_INTERRUPT 0xffffffff8104c5b0
#endif

#ifndef SMP_TRACE_ERROR_INTERRUPT
#define SMP_TRACE_ERROR_INTERRUPT 0xffffffff8104c6d0
#endif

#ifndef DISCONNECT_BSP_APIC
#define DISCONNECT_BSP_APIC 0xffffffff8104c870
#endif

#ifndef GENERIC_PROCESSOR_INFO
#define GENERIC_PROCESSOR_INFO 0xffffffff8104c940
#endif

#ifndef HARD_SMP_PROCESSOR_ID
#define HARD_SMP_PROCESSOR_ID 0xffffffff8104cbc0
#endif

#ifndef DEFAULT_INIT_APIC_LDR
#define DEFAULT_INIT_APIC_LDR 0xffffffff8104cc00
#endif

#ifndef DEFAULT_CPU_MASK_TO_APICID_AND
#define DEFAULT_CPU_MASK_TO_APICID_AND 0xffffffff8104cc70
#endif

#ifndef APIC_IS_CLUSTERED_BOX
#define APIC_IS_CLUSTERED_BOX 0xffffffff8104cd00
#endif

#ifndef DEFAULT_SEND_IPI_MASK_SEQUENCE_PHYS
#define DEFAULT_SEND_IPI_MASK_SEQUENCE_PHYS 0xffffffff8104d050
#endif

#ifndef DEFAULT_SEND_IPI_MASK_ALLBUTSELF_PHYS
#define DEFAULT_SEND_IPI_MASK_ALLBUTSELF_PHYS 0xffffffff8104d140
#endif

#ifndef LOCK_VECTOR_LOCK
#define LOCK_VECTOR_LOCK 0xffffffff8104d680
#endif

#ifndef UNLOCK_VECTOR_LOCK
#define UNLOCK_VECTOR_LOCK 0xffffffff8104d6a0
#endif

#ifndef IRQ_CFG
#define IRQ_CFG 0xffffffff8104d6b0
#endif

#ifndef IRQD_CFG
#define IRQD_CFG 0xffffffff8104d6e0
#endif

#ifndef ALLOC_IRQ_AND_CFG_AT
#define ALLOC_IRQ_AND_CFG_AT 0xffffffff8104d6f0
#endif

#ifndef ASSIGN_IRQ_VECTOR
#define ASSIGN_IRQ_VECTOR 0xffffffff8104d780
#endif

#ifndef CLEAR_IRQ_VECTOR
#define CLEAR_IRQ_VECTOR 0xffffffff8104d7e0
#endif

#ifndef SETUP_VECTOR_IRQ
#define SETUP_VECTOR_IRQ 0xffffffff8104d940
#endif

#ifndef APIC_RETRIGGER_IRQ
#define APIC_RETRIGGER_IRQ 0xffffffff8104da90
#endif

#ifndef APIC_SET_AFFINITY
#define APIC_SET_AFFINITY 0xffffffff8104db10
#endif

#ifndef SEND_CLEANUP_VECTOR
#define SEND_CLEANUP_VECTOR 0xffffffff8104dc30
#endif

#ifndef SMP_IRQ_MOVE_CLEANUP_INTERRUPT
#define SMP_IRQ_MOVE_CLEANUP_INTERRUPT 0xffffffff8104dcc0
#endif

#ifndef IRQ_COMPLETE_MOVE
#define IRQ_COMPLETE_MOVE 0xffffffff8104dde0
#endif

#ifndef APIC_ACK_EDGE
#define APIC_ACK_EDGE 0xffffffff8104de20
#endif

#ifndef IRQ_FORCE_COMPLETE_MOVE
#define IRQ_FORCE_COMPLETE_MOVE 0xffffffff8104de60
#endif

#ifndef ARCH_SETUP_HWIRQ
#define ARCH_SETUP_HWIRQ 0xffffffff8104deb0
#endif

#ifndef ARCH_TEARDOWN_HWIRQ
#define ARCH_TEARDOWN_HWIRQ 0xffffffff8104df60
#endif

#ifndef HW_NMI_GET_SAMPLE_PERIOD
#define HW_NMI_GET_SAMPLE_PERIOD 0xffffffff8104e0c0
#endif

#ifndef ARCH_TRIGGER_ALL_CPU_BACKTRACE
#define ARCH_TRIGGER_ALL_CPU_BACKTRACE 0xffffffff8104e0e0
#endif

#ifndef SAVE_IOAPIC_ENTRIES
#define SAVE_IOAPIC_ENTRIES 0xffffffff8104e6c0
#endif

#ifndef NATIVE_IOAPIC_SET_AFFINITY
#define NATIVE_IOAPIC_SET_AFFINITY 0xffffffff8104eb00
#endif

#ifndef MPC_IOAPIC_ID
#define MPC_IOAPIC_ID 0xffffffff8104f040
#endif

#ifndef MPC_IOAPIC_ADDR
#define MPC_IOAPIC_ADDR 0xffffffff8104f060
#endif

#ifndef MP_IOAPIC_GSI_ROUTING
#define MP_IOAPIC_GSI_ROUTING 0xffffffff8104f080
#endif

#ifndef MP_PIN_TO_GSI
#define MP_PIN_TO_GSI 0xffffffff8104f0a0
#endif

#ifndef DISABLE_IOAPIC_SUPPORT
#define DISABLE_IOAPIC_SUPPORT 0xffffffff8104f0c0
#endif

#ifndef MP_SAVE_IRQ
#define MP_SAVE_IRQ 0xffffffff8104f0f0
#endif

#ifndef IO_APIC_EOI
#define IO_APIC_EOI 0xffffffff8104f1e0
#endif

#ifndef NATIVE_IO_APIC_READ
#define NATIVE_IO_APIC_READ 0xffffffff8104f220
#endif

#ifndef NATIVE_IO_APIC_WRITE
#define NATIVE_IO_APIC_WRITE 0xffffffff8104f260
#endif

#ifndef NATIVE_IO_APIC_MODIFY
#define NATIVE_IO_APIC_MODIFY 0xffffffff8104f2a0
#endif

#ifndef NATIVE_EOI_IOAPIC_PIN
#define NATIVE_EOI_IOAPIC_PIN 0xffffffff8104f2e0
#endif

#ifndef EOI_IOAPIC_IRQ
#define EOI_IOAPIC_IRQ 0xffffffff8104f360
#endif

#ifndef MASK_IOAPIC_ENTRIES
#define MASK_IOAPIC_ENTRIES 0xffffffff8104f510
#endif

#ifndef RESTORE_IOAPIC_ENTRIES
#define RESTORE_IOAPIC_ENTRIES 0xffffffff8104f5c0
#endif

#ifndef NATIVE_SETUP_IOAPIC_ENTRY
#define NATIVE_SETUP_IOAPIC_ENTRY 0xffffffff8104f6c0
#endif

#ifndef NATIVE_IO_APIC_PRINT_ENTRIES
#define NATIVE_IO_APIC_PRINT_ENTRIES 0xffffffff8104f740
#endif

#ifndef INTEL_IR_IO_APIC_PRINT_ENTRIES
#define INTEL_IR_IO_APIC_PRINT_ENTRIES 0xffffffff8104f840
#endif

#ifndef IOAPIC_ZAP_LOCKS
#define IOAPIC_ZAP_LOCKS 0xffffffff8104f950
#endif

#ifndef NATIVE_DISABLE_IO_APIC
#define NATIVE_DISABLE_IO_APIC 0xffffffff8104f960
#endif

#ifndef DISABLE_IO_APIC
#define DISABLE_IO_APIC 0xffffffff8104fa00
#endif

#ifndef ARCH_DYNIRQ_LOWER_BOUND
#define ARCH_DYNIRQ_LOWER_BOUND 0xffffffff8104fa30
#endif

#ifndef MP_FIND_IOAPIC
#define MP_FIND_IOAPIC 0xffffffff8104fa50
#endif

#ifndef MP_FIND_IOAPIC_PIN
#define MP_FIND_IOAPIC_PIN 0xffffffff8104fab0
#endif

#ifndef ACPI_GET_OVERRIDE_IRQ
#define ACPI_GET_OVERRIDE_IRQ 0xffffffff8104fb20
#endif

#ifndef MP_REGISTER_IOAPIC
#define MP_REGISTER_IOAPIC 0xffffffff8104fc70
#endif

#ifndef MP_UNREGISTER_IOAPIC
#define MP_UNREGISTER_IOAPIC 0xffffffff810501b0
#endif

#ifndef MP_IOAPIC_REGISTERED
#define MP_IOAPIC_REGISTERED 0xffffffff81050340
#endif

#ifndef MP_IRQDOMAIN_MAP
#define MP_IRQDOMAIN_MAP 0xffffffff81050390
#endif

#ifndef MP_MAP_GSI_TO_IRQ
#define MP_MAP_GSI_TO_IRQ 0xffffffff810506e0
#endif

#ifndef IO_APIC_GET_PCI_IRQ_VECTOR
#define IO_APIC_GET_PCI_IRQ_VECTOR 0xffffffff81050830
#endif

#ifndef MP_IRQDOMAIN_UNMAP
#define MP_IRQDOMAIN_UNMAP 0xffffffff81050a40
#endif

#ifndef MP_UNMAP_IRQ
#define MP_UNMAP_IRQ 0xffffffff81050b30
#endif

#ifndef MP_SET_GSI_ATTR
#define MP_SET_GSI_ATTR 0xffffffff81050bf0
#endif

#ifndef NATIVE_COMPOSE_MSI_MSG
#define NATIVE_COMPOSE_MSI_MSG 0xffffffff81050f30
#endif

#ifndef SETUP_MSI_IRQ
#define SETUP_MSI_IRQ 0xffffffff81051010
#endif

#ifndef NATIVE_SETUP_MSI_IRQS
#define NATIVE_SETUP_MSI_IRQS 0xffffffff810510e0
#endif

#ifndef NATIVE_TEARDOWN_MSI_IRQ
#define NATIVE_TEARDOWN_MSI_IRQ 0xffffffff810511c0
#endif

#ifndef ARCH_SETUP_DMAR_MSI
#define ARCH_SETUP_DMAR_MSI 0xffffffff810511e0
#endif

#ifndef DEFAULT_SETUP_HPET_MSI
#define DEFAULT_SETUP_HPET_MSI 0xffffffff81051240
#endif

#ifndef ARCH_SETUP_HT_IRQ
#define ARCH_SETUP_HT_IRQ 0xffffffff81051380
#endif

#ifndef FLAT_INIT_APIC_LDR
#define FLAT_INIT_APIC_LDR 0xffffffff81052220
#endif

#ifndef APIC_SEND_IPI_SELF
#define APIC_SEND_IPI_SELF 0xffffffff81052820
#endif

#ifndef PREPARE_FTRACE_RETURN
#define PREPARE_FTRACE_RETURN 0xffffffff81052aa0
#endif

#ifndef FTRACE_ARCH_CODE_MODIFY_PREPARE
#define FTRACE_ARCH_CODE_MODIFY_PREPARE 0xffffffff81052c70
#endif

#ifndef FTRACE_ARCH_CODE_MODIFY_POST_PROCESS
#define FTRACE_ARCH_CODE_MODIFY_POST_PROCESS 0xffffffff81052c90
#endif

#ifndef FTRACE_MAKE_NOP
#define FTRACE_MAKE_NOP 0xffffffff81052cb0
#endif

#ifndef FTRACE_MAKE_CALL
#define FTRACE_MAKE_CALL 0xffffffff81052d40
#endif

#ifndef FTRACE_MODIFY_CALL
#define FTRACE_MODIFY_CALL 0xffffffff81052d80
#endif

#ifndef FTRACE_UPDATE_FTRACE_FUNC
#define FTRACE_UPDATE_FTRACE_FUNC 0xffffffff81052da0
#endif

#ifndef FTRACE_INT3_HANDLER
#define FTRACE_INT3_HANDLER 0xffffffff81052e10
#endif

#ifndef FTRACE_REPLACE_CODE
#define FTRACE_REPLACE_CODE 0xffffffff81052e90
#endif

#ifndef ARCH_FTRACE_UPDATE_CODE
#define ARCH_FTRACE_UPDATE_CODE 0xffffffff81053210
#endif

#ifndef ARCH_FTRACE_UPDATE_TRAMPOLINE
#define ARCH_FTRACE_UPDATE_TRAMPOLINE 0xffffffff81053230
#endif

#ifndef ARCH_FTRACE_TRAMPOLINE_FUNC
#define ARCH_FTRACE_TRAMPOLINE_FUNC 0xffffffff81053490
#endif

#ifndef ARCH_FTRACE_TRAMPOLINE_FREE
#define ARCH_FTRACE_TRAMPOLINE_FREE 0xffffffff81053550
#endif

#ifndef FTRACE_ENABLE_FTRACE_GRAPH_CALLER
#define FTRACE_ENABLE_FTRACE_GRAPH_CALLER 0xffffffff81053580
#endif

#ifndef FTRACE_DISABLE_FTRACE_GRAPH_CALLER
#define FTRACE_DISABLE_FTRACE_GRAPH_CALLER 0xffffffff810535b0
#endif

#ifndef TRACE_CLOCK_X86_TSC
#define TRACE_CLOCK_X86_TSC 0xffffffff810535e0
#endif

#ifndef MACHINE_KEXEC_PREPARE
#define MACHINE_KEXEC_PREPARE 0xffffffff81053680
#endif

#ifndef MACHINE_KEXEC_CLEANUP
#define MACHINE_KEXEC_CLEANUP 0xffffffff81053a10
#endif

#ifndef MACHINE_KEXEC
#define MACHINE_KEXEC 0xffffffff81053a30
#endif

#ifndef ARCH_CRASH_SAVE_VMCOREINFO
#define ARCH_CRASH_SAVE_VMCOREINFO 0xffffffff81053bd0
#endif

#ifndef RELOCATE_KERNEL
#define RELOCATE_KERNEL 0xffffffff81054000
#endif

#ifndef NATIVE_MACHINE_CRASH_SHUTDOWN
#define NATIVE_MACHINE_CRASH_SHUTDOWN 0xffffffff81054350
#endif

#ifndef COPY_OLDMEM_PAGE
#define COPY_OLDMEM_PAGE 0xffffffff81054510
#endif

#ifndef SYNTHESIZE_RELJUMP
#define SYNTHESIZE_RELJUMP 0xffffffff810545c0
#endif

#ifndef SYNTHESIZE_RELCALL
#define SYNTHESIZE_RELCALL 0xffffffff810545e0
#endif

#ifndef ARCH_PREPARE_KRETPROBE
#define ARCH_PREPARE_KRETPROBE 0xffffffff81054600
#endif

#ifndef KRETPROBE_TRAMPOLINE
#define KRETPROBE_TRAMPOLINE 0xffffffff81054625
#endif

#ifndef JPROBE_RETURN
#define JPROBE_RETURN 0xffffffff81054670
#endif

#ifndef JPROBE_RETURN_END
#define JPROBE_RETURN_END 0xffffffff8105468d
#endif

#ifndef SETJMP_PRE_HANDLER
#define SETJMP_PRE_HANDLER 0xffffffff810546d0
#endif

#ifndef KPROBE_FAULT_HANDLER
#define KPROBE_FAULT_HANDLER 0xffffffff81054770
#endif

#ifndef KPROBE_EXCEPTIONS_NOTIFY
#define KPROBE_EXCEPTIONS_NOTIFY 0xffffffff810548a0
#endif

#ifndef LONGJMP_BREAK_HANDLER
#define LONGJMP_BREAK_HANDLER 0xffffffff81054900
#endif

#ifndef TRAMPOLINE_HANDLER
#define TRAMPOLINE_HANDLER 0xffffffff81054a10
#endif

#ifndef KPROBE_INT3_HANDLER
#define KPROBE_INT3_HANDLER 0xffffffff81054e40
#endif

#ifndef KPROBE_DEBUG_HANDLER
#define KPROBE_DEBUG_HANDLER 0xffffffff81055150
#endif

#ifndef CAN_BOOST
#define CAN_BOOST 0xffffffff81055220
#endif

#ifndef RECOVER_PROBED_INSTRUCTION
#define RECOVER_PROBED_INSTRUCTION 0xffffffff81055380
#endif

#ifndef __COPY_INSTRUCTION
#define __COPY_INSTRUCTION 0xffffffff81055530
#endif

#ifndef ARCH_PREPARE_KPROBE
#define ARCH_PREPARE_KPROBE 0xffffffff81055700
#endif

#ifndef ARCH_ARM_KPROBE
#define ARCH_ARM_KPROBE 0xffffffff810557e0
#endif

#ifndef ARCH_DISARM_KPROBE
#define ARCH_DISARM_KPROBE 0xffffffff81055810
#endif

#ifndef ARCH_REMOVE_KPROBE
#define ARCH_REMOVE_KPROBE 0xffffffff81055830
#endif

#ifndef ARCH_WITHIN_KPROBE_BLACKLIST
#define ARCH_WITHIN_KPROBE_BLACKLIST 0xffffffff81055870
#endif

#ifndef ARCH_TRAMPOLINE_KPROBE
#define ARCH_TRAMPOLINE_KPROBE 0xffffffff810558b0
#endif

#ifndef OPTPROBE_TEMPLATE_ENTRY
#define OPTPROBE_TEMPLATE_ENTRY 0xffffffff810558c0
#endif

#ifndef OPTPROBE_TEMPLATE_VAL
#define OPTPROBE_TEMPLATE_VAL 0xffffffff810558e0
#endif

#ifndef OPTPROBE_TEMPLATE_CALL
#define OPTPROBE_TEMPLATE_CALL 0xffffffff810558ea
#endif

#ifndef OPTPROBE_TEMPLATE_END
#define OPTPROBE_TEMPLATE_END 0xffffffff8105591f
#endif

#ifndef SETUP_DETOUR_EXECUTION
#define SETUP_DETOUR_EXECUTION 0xffffffff810559c0
#endif

#ifndef __RECOVER_OPTPROBED_INSN
#define __RECOVER_OPTPROBED_INSN 0xffffffff81055be0
#endif

#ifndef ARCH_CHECK_OPTIMIZED_KPROBE
#define ARCH_CHECK_OPTIMIZED_KPROBE 0xffffffff81055ca0
#endif

#ifndef ARCH_WITHIN_OPTIMIZED_KPROBE
#define ARCH_WITHIN_OPTIMIZED_KPROBE 0xffffffff81055d10
#endif

#ifndef ARCH_REMOVE_OPTIMIZED_KPROBE
#define ARCH_REMOVE_OPTIMIZED_KPROBE 0xffffffff81055d40
#endif

#ifndef ARCH_PREPARE_OPTIMIZED_KPROBE
#define ARCH_PREPARE_OPTIMIZED_KPROBE 0xffffffff81055d80
#endif

#ifndef ARCH_OPTIMIZE_KPROBES
#define ARCH_OPTIMIZE_KPROBES 0xffffffff81055fb0
#endif

#ifndef ARCH_UNOPTIMIZE_KPROBE
#define ARCH_UNOPTIMIZE_KPROBE 0xffffffff810560a0
#endif

#ifndef ARCH_UNOPTIMIZE_KPROBES
#define ARCH_UNOPTIMIZE_KPROBES 0xffffffff810560e0
#endif

#ifndef KPROBE_FTRACE_HANDLER
#define KPROBE_FTRACE_HANDLER 0xffffffff81056170
#endif

#ifndef SKIP_SINGLESTEP
#define SKIP_SINGLESTEP 0xffffffff81056280
#endif

#ifndef ARCH_PREPARE_KPROBE_FTRACE
#define ARCH_PREPARE_KPROBE_FTRACE 0xffffffff810562e0
#endif

#ifndef MODULE_ALLOC
#define MODULE_ALLOC 0xffffffff81056300
#endif

#ifndef APPLY_RELOCATE_ADD
#define APPLY_RELOCATE_ADD 0xffffffff81056370
#endif

#ifndef MODULE_FINALIZE
#define MODULE_FINALIZE 0xffffffff810564a0
#endif

#ifndef MODULE_ARCH_CLEANUP
#define MODULE_ARCH_CLEANUP 0xffffffff810565f0
#endif

#ifndef DF_DEBUG
#define DF_DEBUG 0xffffffff81056610
#endif

#ifndef IS_HPET_ENABLED
#define IS_HPET_ENABLED 0xffffffff810568c0
#endif

#ifndef HPET_REGISTER_IRQ_HANDLER
#define HPET_REGISTER_IRQ_HANDLER 0xffffffff81056a10
#endif

#ifndef HPET_UNREGISTER_IRQ_HANDLER
#define HPET_UNREGISTER_IRQ_HANDLER 0xffffffff81056a60
#endif

#ifndef HPET_SET_ALARM_TIME
#define HPET_SET_ALARM_TIME 0xffffffff81056ab0
#endif

#ifndef HPET_RTC_DROPPED_IRQ
#define HPET_RTC_DROPPED_IRQ 0xffffffff81056b20
#endif

#ifndef HPET_RTC_INTERRUPT
#define HPET_RTC_INTERRUPT 0xffffffff81057260
#endif

#ifndef HPET_SET_PERIODIC_FREQ
#define HPET_SET_PERIODIC_FREQ 0xffffffff810575e0
#endif

#ifndef HPET_RTC_TIMER_INIT
#define HPET_RTC_TIMER_INIT 0xffffffff810576b0
#endif

#ifndef HPET_SET_RTC_IRQ_BIT
#define HPET_SET_RTC_IRQ_BIT 0xffffffff810577b0
#endif

#ifndef HPET_MASK_RTC_IRQ_BIT
#define HPET_MASK_RTC_IRQ_BIT 0xffffffff81057830
#endif

#ifndef EVT_TO_HPET_DEV
#define EVT_TO_HPET_DEV 0xffffffff810578a0
#endif

#ifndef HPET_READL
#define HPET_READL 0xffffffff810578b0
#endif

#ifndef HPET_MSI_UNMASK
#define HPET_MSI_UNMASK 0xffffffff810578c0
#endif

#ifndef HPET_MSI_MASK
#define HPET_MSI_MASK 0xffffffff81057900
#endif

#ifndef HPET_MSI_WRITE
#define HPET_MSI_WRITE 0xffffffff81057940
#endif

#ifndef HPET_MSI_READ
#define HPET_MSI_READ 0xffffffff81057980
#endif

#ifndef HPET_DISABLE
#define HPET_DISABLE 0xffffffff810579c0
#endif

#ifndef AMD_FLUSH_GARTS
#define AMD_FLUSH_GARTS 0xffffffff81057b00
#endif

#ifndef AMD_CACHE_NORTHBRIDGES
#define AMD_CACHE_NORTHBRIDGES 0xffffffff81057df0
#endif

#ifndef AMD_GET_MMCONFIG_RANGE
#define AMD_GET_MMCONFIG_RANGE 0xffffffff81057e20
#endif

#ifndef AMD_GET_SUBCACHES
#define AMD_GET_SUBCACHES 0xffffffff81057eb0
#endif

#ifndef AMD_SET_SUBCACHES
#define AMD_SET_SUBCACHES 0xffffffff81057f40
#endif

#ifndef KVM_READ_AND_RESET_PF_REASON
#define KVM_READ_AND_RESET_PF_REASON 0xffffffff81058180
#endif

#ifndef KVM_ASYNC_PF_TASK_WAIT
#define KVM_ASYNC_PF_TASK_WAIT 0xffffffff81058200
#endif

#ifndef KVM_ASYNC_PF_TASK_WAKE
#define KVM_ASYNC_PF_TASK_WAKE 0xffffffff81058680
#endif

#ifndef DO_ASYNC_PAGE_FAULT
#define DO_ASYNC_PAGE_FAULT 0xffffffff810587a0
#endif

#ifndef KVM_PARA_AVAILABLE
#define KVM_PARA_AVAILABLE 0xffffffff810588e0
#endif

#ifndef KVM_DISABLE_STEAL_TIME
#define KVM_DISABLE_STEAL_TIME 0xffffffff81058920
#endif

#ifndef KVM_ARCH_PARA_FEATURES
#define KVM_ARCH_PARA_FEATURES 0xffffffff81058940
#endif

#ifndef KVM_GUEST_CPU_INIT
#define KVM_GUEST_CPU_INIT 0xffffffff810589a0
#endif

#ifndef KVM_CHECK_AND_CLEAR_GUEST_PAUSED
#define KVM_CHECK_AND_CLEAR_GUEST_PAUSED 0xffffffff81058d40
#endif

#ifndef KVM_REGISTER_CLOCK
#define KVM_REGISTER_CLOCK 0xffffffff81058da0
#endif

#ifndef _PARAVIRT_NOP
#define _PARAVIRT_NOP 0xffffffff81059170
#endif

#ifndef _PARAVIRT_IDENT_32
#define _PARAVIRT_IDENT_32 0xffffffff81059180
#endif

#ifndef _PARAVIRT_IDENT_64
#define _PARAVIRT_IDENT_64 0xffffffff81059190
#endif

#ifndef PARAVIRT_PATCH_NOP
#define PARAVIRT_PATCH_NOP 0xffffffff81059500
#endif

#ifndef PARAVIRT_PATCH_IGNORE
#define PARAVIRT_PATCH_IGNORE 0xffffffff81059510
#endif

#ifndef PARAVIRT_PATCH_CALL
#define PARAVIRT_PATCH_CALL 0xffffffff81059520
#endif

#ifndef PARAVIRT_PATCH_JMP
#define PARAVIRT_PATCH_JMP 0xffffffff81059560
#endif

#ifndef PARAVIRT_PATCH_DEFAULT
#define PARAVIRT_PATCH_DEFAULT 0xffffffff81059580
#endif

#ifndef PARAVIRT_PATCH_INSNS
#define PARAVIRT_PATCH_INSNS 0xffffffff81059680
#endif

#ifndef PARAVIRT_DISABLE_IOSPACE
#define PARAVIRT_DISABLE_IOSPACE 0xffffffff810596b0
#endif

#ifndef PARAVIRT_ENTER_LAZY_MMU
#define PARAVIRT_ENTER_LAZY_MMU 0xffffffff810596d0
#endif

#ifndef PARAVIRT_LEAVE_LAZY_MMU
#define PARAVIRT_LEAVE_LAZY_MMU 0xffffffff81059700
#endif

#ifndef PARAVIRT_FLUSH_LAZY_MMU
#define PARAVIRT_FLUSH_LAZY_MMU 0xffffffff81059730
#endif

#ifndef PARAVIRT_START_CONTEXT_SWITCH
#define PARAVIRT_START_CONTEXT_SWITCH 0xffffffff81059760
#endif

#ifndef PARAVIRT_END_CONTEXT_SWITCH
#define PARAVIRT_END_CONTEXT_SWITCH 0xffffffff810597b0
#endif

#ifndef PARAVIRT_GET_LAZY_MODE
#define PARAVIRT_GET_LAZY_MODE 0xffffffff81059800
#endif

#ifndef START_PV_IRQ_OPS_IRQ_DISABLE
#define START_PV_IRQ_OPS_IRQ_DISABLE 0xffffffff81059820
#endif

#ifndef END_PV_IRQ_OPS_IRQ_DISABLE
#define END_PV_IRQ_OPS_IRQ_DISABLE 0xffffffff81059821
#endif

#ifndef START_PV_IRQ_OPS_IRQ_ENABLE
#define START_PV_IRQ_OPS_IRQ_ENABLE 0xffffffff81059821
#endif

#ifndef END_PV_IRQ_OPS_IRQ_ENABLE
#define END_PV_IRQ_OPS_IRQ_ENABLE 0xffffffff81059822
#endif

#ifndef START_PV_IRQ_OPS_RESTORE_FL
#define START_PV_IRQ_OPS_RESTORE_FL 0xffffffff81059822
#endif

#ifndef END_PV_IRQ_OPS_RESTORE_FL
#define END_PV_IRQ_OPS_RESTORE_FL 0xffffffff81059824
#endif

#ifndef START_PV_IRQ_OPS_SAVE_FL
#define START_PV_IRQ_OPS_SAVE_FL 0xffffffff81059824
#endif

#ifndef END_PV_IRQ_OPS_SAVE_FL
#define END_PV_IRQ_OPS_SAVE_FL 0xffffffff81059826
#endif

#ifndef START_PV_MMU_OPS_READ_CR2
#define START_PV_MMU_OPS_READ_CR2 0xffffffff81059826
#endif

#ifndef END_PV_MMU_OPS_READ_CR2
#define END_PV_MMU_OPS_READ_CR2 0xffffffff81059829
#endif

#ifndef START_PV_MMU_OPS_READ_CR3
#define START_PV_MMU_OPS_READ_CR3 0xffffffff81059829
#endif

#ifndef END_PV_MMU_OPS_READ_CR3
#define END_PV_MMU_OPS_READ_CR3 0xffffffff8105982c
#endif

#ifndef START_PV_MMU_OPS_WRITE_CR3
#define START_PV_MMU_OPS_WRITE_CR3 0xffffffff8105982c
#endif

#ifndef END_PV_MMU_OPS_WRITE_CR3
#define END_PV_MMU_OPS_WRITE_CR3 0xffffffff8105982f
#endif

#ifndef START_PV_MMU_OPS_FLUSH_TLB_SINGLE
#define START_PV_MMU_OPS_FLUSH_TLB_SINGLE 0xffffffff8105982f
#endif

#ifndef END_PV_MMU_OPS_FLUSH_TLB_SINGLE
#define END_PV_MMU_OPS_FLUSH_TLB_SINGLE 0xffffffff81059832
#endif

#ifndef START_PV_CPU_OPS_CLTS
#define START_PV_CPU_OPS_CLTS 0xffffffff81059832
#endif

#ifndef END_PV_CPU_OPS_CLTS
#define END_PV_CPU_OPS_CLTS 0xffffffff81059834
#endif

#ifndef START_PV_CPU_OPS_WBINVD
#define START_PV_CPU_OPS_WBINVD 0xffffffff81059834
#endif

#ifndef END_PV_CPU_OPS_WBINVD
#define END_PV_CPU_OPS_WBINVD 0xffffffff81059836
#endif

#ifndef START_PV_CPU_OPS_IRQ_ENABLE_SYSEXIT
#define START_PV_CPU_OPS_IRQ_ENABLE_SYSEXIT 0xffffffff81059836
#endif

#ifndef END_PV_CPU_OPS_IRQ_ENABLE_SYSEXIT
#define END_PV_CPU_OPS_IRQ_ENABLE_SYSEXIT 0xffffffff8105983c
#endif

#ifndef START_PV_CPU_OPS_USERGS_SYSRET64
#define START_PV_CPU_OPS_USERGS_SYSRET64 0xffffffff8105983c
#endif

#ifndef END_PV_CPU_OPS_USERGS_SYSRET64
#define END_PV_CPU_OPS_USERGS_SYSRET64 0xffffffff81059842
#endif

#ifndef START_PV_CPU_OPS_USERGS_SYSRET32
#define START_PV_CPU_OPS_USERGS_SYSRET32 0xffffffff81059842
#endif

#ifndef END_PV_CPU_OPS_USERGS_SYSRET32
#define END_PV_CPU_OPS_USERGS_SYSRET32 0xffffffff81059847
#endif

#ifndef START_PV_CPU_OPS_SWAPGS
#define START_PV_CPU_OPS_SWAPGS 0xffffffff81059847
#endif

#ifndef END_PV_CPU_OPS_SWAPGS
#define END_PV_CPU_OPS_SWAPGS 0xffffffff8105984a
#endif

#ifndef START__MOV32
#define START__MOV32 0xffffffff8105984a
#endif

#ifndef END__MOV32
#define END__MOV32 0xffffffff8105984c
#endif

#ifndef START__MOV64
#define START__MOV64 0xffffffff8105984c
#endif

#ifndef END__MOV64
#define END__MOV64 0xffffffff8105984f
#endif

#ifndef PARAVIRT_PATCH_IDENT_32
#define PARAVIRT_PATCH_IDENT_32 0xffffffff81059850
#endif

#ifndef PARAVIRT_PATCH_IDENT_64
#define PARAVIRT_PATCH_IDENT_64 0xffffffff81059870
#endif

#ifndef NATIVE_PATCH
#define NATIVE_PATCH 0xffffffff81059890
#endif

#ifndef PVCLOCK_SET_FLAGS
#define PVCLOCK_SET_FLAGS 0xffffffff81059a00
#endif

#ifndef PVCLOCK_TSC_KHZ
#define PVCLOCK_TSC_KHZ 0xffffffff81059a10
#endif

#ifndef PVCLOCK_TOUCH_WATCHDOGS
#define PVCLOCK_TOUCH_WATCHDOGS 0xffffffff81059a50
#endif

#ifndef PVCLOCK_RESUME
#define PVCLOCK_RESUME 0xffffffff81059a70
#endif

#ifndef PVCLOCK_READ_FLAGS
#define PVCLOCK_READ_FLAGS 0xffffffff81059a80
#endif

#ifndef PVCLOCK_CLOCKSOURCE_READ
#define PVCLOCK_CLOCKSOURCE_READ 0xffffffff81059ac0
#endif

#ifndef PVCLOCK_READ_WALLCLOCK
#define PVCLOCK_READ_WALLCLOCK 0xffffffff81059b90
#endif

#ifndef X86_SWIOTLB_ALLOC_COHERENT
#define X86_SWIOTLB_ALLOC_COHERENT 0xffffffff81059c10
#endif

#ifndef X86_SWIOTLB_FREE_COHERENT
#define X86_SWIOTLB_FREE_COHERENT 0xffffffff81059c60
#endif

#ifndef ARCH_UPROBE_ANALYZE_INSN
#define ARCH_UPROBE_ANALYZE_INSN 0xffffffff8105a100
#endif

#ifndef ARCH_UPROBE_PRE_XOL
#define ARCH_UPROBE_PRE_XOL 0xffffffff8105a5e0
#endif

#ifndef ARCH_UPROBE_XOL_WAS_TRAPPED
#define ARCH_UPROBE_XOL_WAS_TRAPPED 0xffffffff8105a6a0
#endif

#ifndef ARCH_UPROBE_POST_XOL
#define ARCH_UPROBE_POST_XOL 0xffffffff8105a6c0
#endif

#ifndef ARCH_UPROBE_EXCEPTION_NOTIFY
#define ARCH_UPROBE_EXCEPTION_NOTIFY 0xffffffff8105a7c0
#endif

#ifndef ARCH_UPROBE_ABORT_XOL
#define ARCH_UPROBE_ABORT_XOL 0xffffffff8105a820
#endif

#ifndef ARCH_UPROBE_SKIP_SSTEP
#define ARCH_UPROBE_SKIP_SSTEP 0xffffffff8105a890
#endif

#ifndef ARCH_URETPROBE_HIJACK_RETURN_ADDR
#define ARCH_URETPROBE_HIJACK_RETURN_ADDR 0xffffffff8105a900
#endif

#ifndef PERF_REG_VALUE
#define PERF_REG_VALUE 0xffffffff8105a9f0
#endif

#ifndef PERF_REG_VALIDATE
#define PERF_REG_VALIDATE 0xffffffff8105aa50
#endif

#ifndef PERF_REG_ABI
#define PERF_REG_ABI 0xffffffff8105aa80
#endif

#ifndef PERF_GET_REGS_USER
#define PERF_GET_REGS_USER 0xffffffff8105aaa0
#endif

#ifndef TRACE_IRQ_VECTOR_REGFUNC
#define TRACE_IRQ_VECTOR_REGFUNC 0xffffffff8105ac30
#endif

#ifndef TRACE_IRQ_VECTOR_UNREGFUNC
#define TRACE_IRQ_VECTOR_UNREGFUNC 0xffffffff8105aca0
#endif

#ifndef AUDIT_CLASSIFY_ARCH
#define AUDIT_CLASSIFY_ARCH 0xffffffff8105b010
#endif

#ifndef AUDIT_CLASSIFY_SYSCALL
#define AUDIT_CLASSIFY_SYSCALL 0xffffffff8105b030
#endif

#ifndef SET_UP_GART_RESUME
#define SET_UP_GART_RESUME 0xffffffff8105bf20
#endif

#ifndef TCE_BUILD
#define TCE_BUILD 0xffffffff8105ccc0
#endif

#ifndef TCE_FREE
#define TCE_FREE 0xffffffff8105cda0
#endif

#ifndef FAM10H_CHECK_ENABLE_MMCFG
#define FAM10H_CHECK_ENABLE_MMCFG 0xffffffff8105d0f0
#endif

#ifndef __RAW_CALLEE_SAVE_VSMP_SAVE_FL
#define __RAW_CALLEE_SAVE_VSMP_SAVE_FL 0xffffffff8105d1c0
#endif

#ifndef __RAW_CALLEE_SAVE_VSMP_RESTORE_FL
#define __RAW_CALLEE_SAVE_VSMP_RESTORE_FL 0xffffffff8105d1de
#endif

#ifndef __RAW_CALLEE_SAVE_VSMP_IRQ_DISABLE
#define __RAW_CALLEE_SAVE_VSMP_IRQ_DISABLE 0xffffffff8105d1fc
#endif

#ifndef __RAW_CALLEE_SAVE_VSMP_IRQ_ENABLE
#define __RAW_CALLEE_SAVE_VSMP_IRQ_ENABLE 0xffffffff8105d21a
#endif

#ifndef VSMP_SAVE_FL
#define VSMP_SAVE_FL 0xffffffff8105d2f0
#endif

#ifndef VSMP_RESTORE_FL
#define VSMP_RESTORE_FL 0xffffffff8105d320
#endif

#ifndef VSMP_IRQ_DISABLE
#define VSMP_IRQ_DISABLE 0xffffffff8105d350
#endif

#ifndef VSMP_IRQ_ENABLE
#define VSMP_IRQ_ENABLE 0xffffffff8105d370
#endif

#ifndef PFN_RANGE_IS_MAPPED
#define PFN_RANGE_IS_MAPPED 0xffffffff8105d570
#endif

#ifndef DEVMEM_IS_ALLOWED
#define DEVMEM_IS_ALLOWED 0xffffffff8105d5c0
#endif

#ifndef FREE_INIT_PAGES
#define FREE_INIT_PAGES 0xffffffff8105d610
#endif

#ifndef FREE_INITMEM
#define FREE_INITMEM 0xffffffff8105d6c0
#endif

#ifndef UPDATE_CACHE_MODE_ENTRY
#define UPDATE_CACHE_MODE_ENTRY 0xffffffff8105d6f0
#endif

#ifndef ARCH_ADD_MEMORY
#define ARCH_ADD_MEMORY 0xffffffff8105d830
#endif

#ifndef KERNEL_IDENT_MAPPING_INIT
#define KERNEL_IDENT_MAPPING_INIT 0xffffffff8105dc70
#endif

#ifndef SYNC_GLOBAL_PGDS
#define SYNC_GLOBAL_PGDS 0xffffffff8105ddc0
#endif

#ifndef SET_PTE_VADDR_PUD
#define SET_PTE_VADDR_PUD 0xffffffff8105df90
#endif

#ifndef SET_PTE_VADDR
#define SET_PTE_VADDR 0xffffffff8105dfe0
#endif

#ifndef SET_KERNEL_TEXT_RW
#define SET_KERNEL_TEXT_RW 0xffffffff8105e080
#endif

#ifndef SET_KERNEL_TEXT_RO
#define SET_KERNEL_TEXT_RO 0xffffffff8105e100
#endif

#ifndef MARK_RODATA_RO
#define MARK_RODATA_RO 0xffffffff8105e180
#endif

#ifndef KERN_ADDR_VALID
#define KERN_ADDR_VALID 0xffffffff8105e270
#endif

#ifndef MEMORY_BLOCK_SIZE_BYTES
#define MEMORY_BLOCK_SIZE_BYTES 0xffffffff8105e3b0
#endif

#ifndef REGISTER_PAGE_BOOTMEM_MEMMAP
#define REGISTER_PAGE_BOOTMEM_MEMMAP 0xffffffff8105e450
#endif

#ifndef DO_PAGE_FAULT
#define DO_PAGE_FAULT 0xffffffff8105fec0
#endif

#ifndef TRACE_DO_PAGE_FAULT
#define TRACE_DO_PAGE_FAULT 0xffffffff8105fee0
#endif

#ifndef VMALLOC_SYNC_ALL
#define VMALLOC_SYNC_ALL 0xffffffff8105ff90
#endif

#ifndef IOREMAP_NOCACHE
#define IOREMAP_NOCACHE 0xffffffff81060310
#endif

#ifndef IOREMAP_CACHE
#define IOREMAP_CACHE 0xffffffff81060330
#endif

#ifndef IOREMAP_PROT
#define IOREMAP_PROT 0xffffffff81060350
#endif

#ifndef IOREMAP_WC
#define IOREMAP_WC 0xffffffff81060450
#endif

#ifndef IOUNMAP
#define IOUNMAP 0xffffffff81060490
#endif

#ifndef IOREMAP_CHANGE_ATTR
#define IOREMAP_CHANGE_ATTR 0xffffffff81060540
#endif

#ifndef ARCH_IOREMAP_PUD_SUPPORTED
#define ARCH_IOREMAP_PUD_SUPPORTED 0xffffffff81060580
#endif

#ifndef ARCH_IOREMAP_PMD_SUPPORTED
#define ARCH_IOREMAP_PMD_SUPPORTED 0xffffffff810605a0
#endif

#ifndef XLATE_DEV_MEM_PTR
#define XLATE_DEV_MEM_PTR 0xffffffff810605c0
#endif

#ifndef UNXLATE_DEV_MEM_PTR
#define UNXLATE_DEV_MEM_PTR 0xffffffff81060630
#endif

#ifndef FIXUP_EXCEPTION
#define FIXUP_EXCEPTION 0xffffffff81060670
#endif

#ifndef SEARCH_EXTABLE
#define SEARCH_EXTABLE 0xffffffff810606d0
#endif

#ifndef SORT_EXTABLE
#define SORT_EXTABLE 0xffffffff81060720
#endif

#ifndef TRIM_INIT_EXTABLE
#define TRIM_INIT_EXTABLE 0xffffffff810607c0
#endif

#ifndef CLFLUSH_CACHE_RANGE
#define CLFLUSH_CACHE_RANGE 0xffffffff810609c0
#endif

#ifndef UPDATE_PAGE_COUNT
#define UPDATE_PAGE_COUNT 0xffffffff810617a0
#endif

#ifndef ARCH_REPORT_MEMINFO
#define ARCH_REPORT_MEMINFO 0xffffffff810617e0
#endif

#ifndef LOOKUP_ADDRESS_IN_PGD
#define LOOKUP_ADDRESS_IN_PGD 0xffffffff81061850
#endif

#ifndef LOOKUP_ADDRESS
#define LOOKUP_ADDRESS 0xffffffff81061960
#endif

#ifndef SLOW_VIRT_TO_PHYS
#define SLOW_VIRT_TO_PHYS 0xffffffff81061990
#endif

#ifndef SET_MEMORY_ARRAY_UC
#define SET_MEMORY_ARRAY_UC 0xffffffff81062c00
#endif

#ifndef SET_MEMORY_ARRAY_WC
#define SET_MEMORY_ARRAY_WC 0xffffffff81062c20
#endif

#ifndef SET_MEMORY_X
#define SET_MEMORY_X 0xffffffff81062c40
#endif

#ifndef SET_PAGES_X
#define SET_PAGES_X 0xffffffff81062c90
#endif

#ifndef SET_PAGES_ARRAY_UC
#define SET_PAGES_ARRAY_UC 0xffffffff81062e10
#endif

#ifndef SET_PAGES_ARRAY_WC
#define SET_PAGES_ARRAY_WC 0xffffffff81062e30
#endif

#ifndef SET_PAGES_ARRAY_WB
#define SET_PAGES_ARRAY_WB 0xffffffff81062e50
#endif

#ifndef SET_MEMORY_ARRAY_WB
#define SET_MEMORY_ARRAY_WB 0xffffffff81062ee0
#endif

#ifndef SET_MEMORY_WB
#define SET_MEMORY_WB 0xffffffff81062f90
#endif

#ifndef SET_PAGES_WB
#define SET_PAGES_WB 0xffffffff81063020
#endif

#ifndef SET_MEMORY_NX
#define SET_MEMORY_NX 0xffffffff81063060
#endif

#ifndef SET_PAGES_NX
#define SET_PAGES_NX 0xffffffff810630b0
#endif

#ifndef SET_MEMORY_UC
#define SET_MEMORY_UC 0xffffffff810630f0
#endif

#ifndef SET_PAGES_UC
#define SET_PAGES_UC 0xffffffff810631f0
#endif

#ifndef LOOKUP_PMD_ADDRESS
#define LOOKUP_PMD_ADDRESS 0xffffffff81063230
#endif

#ifndef _SET_MEMORY_UC
#define _SET_MEMORY_UC 0xffffffff810632e0
#endif

#ifndef _SET_MEMORY_WC
#define _SET_MEMORY_WC 0xffffffff81063320
#endif

#ifndef SET_MEMORY_WC
#define SET_MEMORY_WC 0xffffffff81063390
#endif

#ifndef _SET_MEMORY_WB
#define _SET_MEMORY_WB 0xffffffff81063480
#endif

#ifndef SET_MEMORY_RO
#define SET_MEMORY_RO 0xffffffff810634c0
#endif

#ifndef SET_MEMORY_RW
#define SET_MEMORY_RW 0xffffffff81063500
#endif

#ifndef SET_MEMORY_NP
#define SET_MEMORY_NP 0xffffffff81063540
#endif

#ifndef SET_MEMORY_4K
#define SET_MEMORY_4K 0xffffffff81063580
#endif

#ifndef SET_PAGES_RO
#define SET_PAGES_RO 0xffffffff810635c0
#endif

#ifndef SET_PAGES_RW
#define SET_PAGES_RW 0xffffffff81063620
#endif

#ifndef KERNEL_MAP_PAGES_IN_PGD
#define KERNEL_MAP_PAGES_IN_PGD 0xffffffff81063680
#endif

#ifndef KERNEL_UNMAP_PAGES_IN_PGD
#define KERNEL_UNMAP_PAGES_IN_PGD 0xffffffff81063730
#endif

#ifndef ARCH_MMAP_RND
#define ARCH_MMAP_RND 0xffffffff810637b0
#endif

#ifndef ARCH_PICK_MMAP_LAYOUT
#define ARCH_PICK_MMAP_LAYOUT 0xffffffff81063800
#endif

#ifndef ARCH_VMA_NAME
#define ARCH_VMA_NAME 0xffffffff81063ab0
#endif

#ifndef PGPROT_WRITECOMBINE
#define PGPROT_WRITECOMBINE 0xffffffff81063b10
#endif

#ifndef PAT_INIT_CACHE_MODES
#define PAT_INIT_CACHE_MODES 0xffffffff81063df0
#endif

#ifndef PAT_INIT
#define PAT_INIT 0xffffffff81063ea0
#endif

#ifndef RESERVE_MEMTYPE
#define RESERVE_MEMTYPE 0xffffffff81063f80
#endif

#ifndef FREE_MEMTYPE
#define FREE_MEMTYPE 0xffffffff81064330
#endif

#ifndef IO_FREE_MEMTYPE
#define IO_FREE_MEMTYPE 0xffffffff81064490
#endif

#ifndef PHYS_MEM_ACCESS_PROT
#define PHYS_MEM_ACCESS_PROT 0xffffffff810644b0
#endif

#ifndef PHYS_MEM_ACCESS_PROT_ALLOWED
#define PHYS_MEM_ACCESS_PROT_ALLOWED 0xffffffff810644c0
#endif

#ifndef KERNEL_MAP_SYNC_MEMTYPE
#define KERNEL_MAP_SYNC_MEMTYPE 0xffffffff81064500
#endif

#ifndef IO_RESERVE_MEMTYPE
#define IO_RESERVE_MEMTYPE 0xffffffff81064630
#endif

#ifndef TRACK_PFN_COPY
#define TRACK_PFN_COPY 0xffffffff810649b0
#endif

#ifndef TRACK_PFN_REMAP
#define TRACK_PFN_REMAP 0xffffffff81064a50
#endif

#ifndef TRACK_PFN_INSERT
#define TRACK_PFN_INSERT 0xffffffff81064b40
#endif

#ifndef UNTRACK_PFN
#define UNTRACK_PFN 0xffffffff81064ba0
#endif

#ifndef PTE_ALLOC_ONE_KERNEL
#define PTE_ALLOC_ONE_KERNEL 0xffffffff81064c60
#endif

#ifndef PTE_ALLOC_ONE
#define PTE_ALLOC_ONE 0xffffffff81064c80
#endif

#ifndef ___PTE_FREE_TLB
#define ___PTE_FREE_TLB 0xffffffff81064cc0
#endif

#ifndef ___PMD_FREE_TLB
#define ___PMD_FREE_TLB 0xffffffff81064d30
#endif

#ifndef ___PUD_FREE_TLB
#define ___PUD_FREE_TLB 0xffffffff81064dd0
#endif

#ifndef PGD_PAGE_GET_MM
#define PGD_PAGE_GET_MM 0xffffffff81064e70
#endif

#ifndef PGD_ALLOC
#define PGD_ALLOC 0xffffffff81064e80
#endif

#ifndef PGD_FREE
#define PGD_FREE 0xffffffff81064fa0
#endif

#ifndef PTEP_SET_ACCESS_FLAGS
#define PTEP_SET_ACCESS_FLAGS 0xffffffff81065040
#endif

#ifndef PMDP_SET_ACCESS_FLAGS
#define PMDP_SET_ACCESS_FLAGS 0xffffffff81065070
#endif

#ifndef PTEP_TEST_AND_CLEAR_YOUNG
#define PTEP_TEST_AND_CLEAR_YOUNG 0xffffffff810650c0
#endif

#ifndef PMDP_TEST_AND_CLEAR_YOUNG
#define PMDP_TEST_AND_CLEAR_YOUNG 0xffffffff810650f0
#endif

#ifndef PTEP_CLEAR_FLUSH_YOUNG
#define PTEP_CLEAR_FLUSH_YOUNG 0xffffffff81065120
#endif

#ifndef PMDP_CLEAR_FLUSH_YOUNG
#define PMDP_CLEAR_FLUSH_YOUNG 0xffffffff81065130
#endif

#ifndef PMDP_SPLITTING_FLUSH
#define PMDP_SPLITTING_FLUSH 0xffffffff81065170
#endif

#ifndef __NATIVE_SET_FIXMAP
#define __NATIVE_SET_FIXMAP 0xffffffff810651c0
#endif

#ifndef NATIVE_SET_FIXMAP
#define NATIVE_SET_FIXMAP 0xffffffff81065200
#endif

#ifndef PUD_SET_HUGE
#define PUD_SET_HUGE 0xffffffff81065240
#endif

#ifndef PMD_SET_HUGE
#define PMD_SET_HUGE 0xffffffff810652e0
#endif

#ifndef PUD_CLEAR_HUGE
#define PUD_CLEAR_HUGE 0xffffffff81065380
#endif

#ifndef PMD_CLEAR_HUGE
#define PMD_CLEAR_HUGE 0xffffffff810653d0
#endif

#ifndef __VIRT_ADDR_VALID
#define __VIRT_ADDR_VALID 0xffffffff81065410
#endif

#ifndef __GET_USER_PAGES_FAST
#define __GET_USER_PAGES_FAST 0xffffffff810659e0
#endif

#ifndef GET_USER_PAGES_FAST
#define GET_USER_PAGES_FAST 0xffffffff81065b00
#endif

#ifndef X86_CONFIGURE_NX
#define X86_CONFIGURE_NX 0xffffffff81065c80
#endif

#ifndef RBT_MEMTYPE_CHECK_INSERT
#define RBT_MEMTYPE_CHECK_INSERT 0xffffffff81065d80
#endif

#ifndef RBT_MEMTYPE_ERASE
#define RBT_MEMTYPE_ERASE 0xffffffff81065f50
#endif

#ifndef RBT_MEMTYPE_LOOKUP
#define RBT_MEMTYPE_LOOKUP 0xffffffff810661f0
#endif

#ifndef RBT_MEMTYPE_COPY_NTH_ELEMENT
#define RBT_MEMTYPE_COPY_NTH_ELEMENT 0xffffffff81066210
#endif

#ifndef LEAVE_MM
#define LEAVE_MM 0xffffffff81066410
#endif

#ifndef NATIVE_FLUSH_TLB_OTHERS
#define NATIVE_FLUSH_TLB_OTHERS 0xffffffff810666a0
#endif

#ifndef FLUSH_TLB_CURRENT_TASK
#define FLUSH_TLB_CURRENT_TASK 0xffffffff810666e0
#endif

#ifndef FLUSH_TLB_MM_RANGE
#define FLUSH_TLB_MM_RANGE 0xffffffff810667a0
#endif

#ifndef FLUSH_TLB_PAGE
#define FLUSH_TLB_PAGE 0xffffffff81066910
#endif

#ifndef FLUSH_TLB_ALL
#define FLUSH_TLB_ALL 0xffffffff810669a0
#endif

#ifndef FLUSH_TLB_KERNEL_RANGE
#define FLUSH_TLB_KERNEL_RANGE 0xffffffff810669c0
#endif

#ifndef PMD_HUGE
#define PMD_HUGE 0xffffffff81066a30
#endif

#ifndef PUD_HUGE
#define PUD_HUGE 0xffffffff81066a60
#endif

#ifndef HUGETLB_GET_UNMAPPED_AREA
#define HUGETLB_GET_UNMAPPED_AREA 0xffffffff81066a80
#endif

#ifndef __NODE_DISTANCE
#define __NODE_DISTANCE 0xffffffff81066d90
#endif

#ifndef MEMORY_ADD_PHYSADDR_TO_NID
#define MEMORY_ADD_PHYSADDR_TO_NID 0xffffffff81066dd0
#endif

#ifndef NUMA_CPU_NODE
#define NUMA_CPU_NODE 0xffffffff81066e20
#endif

#ifndef NUMA_SET_NODE
#define NUMA_SET_NODE 0xffffffff81066e70
#endif

#ifndef NUMA_CLEAR_NODE
#define NUMA_CLEAR_NODE 0xffffffff81066ec0
#endif

#ifndef NUMA_ADD_CPU
#define NUMA_ADD_CPU 0xffffffff81066ed0
#endif

#ifndef NUMA_REMOVE_CPU
#define NUMA_REMOVE_CPU 0xffffffff81066fa0
#endif

#ifndef ARCH_SETUP_ADDITIONAL_PAGES
#define ARCH_SETUP_ADDITIONAL_PAGES 0xffffffff81067360
#endif

#ifndef COMPAT_ARCH_SETUP_ADDITIONAL_PAGES
#define COMPAT_ARCH_SETUP_ADDITIONAL_PAGES 0xffffffff810673a0
#endif

#ifndef SYS32_TRUNCATE64
#define SYS32_TRUNCATE64 0xffffffff81067670
#endif

#ifndef SYS32_FTRUNCATE64
#define SYS32_FTRUNCATE64 0xffffffff81067690
#endif

#ifndef SYS32_STAT64
#define SYS32_STAT64 0xffffffff810676b0
#endif

#ifndef SYS32_LSTAT64
#define SYS32_LSTAT64 0xffffffff810676e0
#endif

#ifndef SYS32_FSTAT64
#define SYS32_FSTAT64 0xffffffff81067710
#endif

#ifndef SYS32_FSTATAT
#define SYS32_FSTATAT 0xffffffff81067740
#endif

#ifndef SYS32_MMAP
#define SYS32_MMAP 0xffffffff81067770
#endif

#ifndef SYS32_WAITPID
#define SYS32_WAITPID 0xffffffff810677e0
#endif

#ifndef SYS32_PREAD
#define SYS32_PREAD 0xffffffff81067800
#endif

#ifndef SYS32_PWRITE
#define SYS32_PWRITE 0xffffffff81067820
#endif

#ifndef SYS32_FADVISE64_64
#define SYS32_FADVISE64_64 0xffffffff81067840
#endif

#ifndef SYS32_READAHEAD
#define SYS32_READAHEAD 0xffffffff81067870
#endif

#ifndef SYS32_SYNC_FILE_RANGE
#define SYS32_SYNC_FILE_RANGE 0xffffffff81067890
#endif

#ifndef SYS32_FADVISE64
#define SYS32_FADVISE64 0xffffffff810678c0
#endif

#ifndef SYS32_FALLOCATE
#define SYS32_FALLOCATE 0xffffffff810678f0
#endif

#ifndef COPY_SIGINFO_TO_USER32
#define COPY_SIGINFO_TO_USER32 0xffffffff81067d30
#endif

#ifndef COPY_SIGINFO_FROM_USER32
#define COPY_SIGINFO_FROM_USER32 0xffffffff81067e70
#endif

#ifndef SYS32_SIGRETURN
#define SYS32_SIGRETURN 0xffffffff81067ef0
#endif

#ifndef SYS32_RT_SIGRETURN
#define SYS32_RT_SIGRETURN 0xffffffff81067fb0
#endif

#ifndef IA32_SETUP_FRAME
#define IA32_SETUP_FRAME 0xffffffff81068070
#endif

#ifndef IA32_SETUP_RT_FRAME
#define IA32_SETUP_RT_FRAME 0xffffffff81068250
#endif

#ifndef IA32_CLASSIFY_SYSCALL
#define IA32_CLASSIFY_SYSCALL 0xffffffff81069300
#endif

#ifndef EFI_DELETE_DUMMY_VARIABLE
#define EFI_DELETE_DUMMY_VARIABLE 0xffffffff81069360
#endif

#ifndef EFI_QUERY_VARIABLE_STORE
#define EFI_QUERY_VARIABLE_STORE 0xffffffff81069400
#endif

#ifndef EFI_REBOOT_REQUIRED
#define EFI_REBOOT_REQUIRED 0xffffffff81069580
#endif

#ifndef EFI_POWEROFF_REQUIRED
#define EFI_POWEROFF_REQUIRED 0xffffffff810695b0
#endif

#ifndef EFI_GET_TIME
#define EFI_GET_TIME 0xffffffff810695c0
#endif

#ifndef EFI_MEM_TYPE
#define EFI_MEM_TYPE 0xffffffff81069630
#endif

#ifndef EFI_MEM_ATTRIBUTES
#define EFI_MEM_ATTRIBUTES 0xffffffff81069690
#endif

#ifndef EFI_SYNC_LOW_KERNEL_MAPPINGS
#define EFI_SYNC_LOW_KERNEL_MAPPINGS 0xffffffff81069730
#endif

#ifndef EFI_THUNK_SET_VIRTUAL_ADDRESS_MAP
#define EFI_THUNK_SET_VIRTUAL_ADDRESS_MAP 0xffffffff8106a270
#endif

#ifndef EFI_THUNK_RUNTIME_SETUP
#define EFI_THUNK_RUNTIME_SETUP 0xffffffff8106a350
#endif

#ifndef EFI_CALL
#define EFI_CALL 0xffffffff8106a3e0
#endif

#ifndef EFI64_THUNK
#define EFI64_THUNK 0xffffffff8106a850
#endif

#ifndef __EFI64_THUNK
#define __EFI64_THUNK 0xffffffff8106a8a0
#endif

#ifndef EFI_EXIT32
#define EFI_EXIT32 0xffffffff8106a910
#endif

#ifndef EFI_ENTER32
#define EFI_ENTER32 0xffffffff8106a920
#endif

#ifndef SK_LOAD_WORD
#define SK_LOAD_WORD 0xffffffff8106a940
#endif

#ifndef SK_LOAD_WORD_POSITIVE_OFFSET
#define SK_LOAD_WORD_POSITIVE_OFFSET 0xffffffff8106a948
#endif

#ifndef SK_LOAD_HALF
#define SK_LOAD_HALF 0xffffffff8106a959
#endif

#ifndef SK_LOAD_HALF_POSITIVE_OFFSET
#define SK_LOAD_HALF_POSITIVE_OFFSET 0xffffffff8106a961
#endif

#ifndef SK_LOAD_BYTE
#define SK_LOAD_BYTE 0xffffffff8106a975
#endif

#ifndef SK_LOAD_BYTE_POSITIVE_OFFSET
#define SK_LOAD_BYTE_POSITIVE_OFFSET 0xffffffff8106a97d
#endif

#ifndef SK_LOAD_WORD_NEGATIVE_OFFSET
#define SK_LOAD_WORD_NEGATIVE_OFFSET 0xffffffff8106aa1c
#endif

#ifndef SK_LOAD_HALF_NEGATIVE_OFFSET
#define SK_LOAD_HALF_NEGATIVE_OFFSET 0xffffffff8106aa43
#endif

#ifndef SK_LOAD_BYTE_NEGATIVE_OFFSET
#define SK_LOAD_BYTE_NEGATIVE_OFFSET 0xffffffff8106aa70
#endif

#ifndef BPF_JIT_COMPILE
#define BPF_JIT_COMPILE 0xffffffff8106c560
#endif

#ifndef BPF_INT_JIT_COMPILE
#define BPF_INT_JIT_COMPILE 0xffffffff8106c570
#endif

#ifndef BPF_JIT_FREE
#define BPF_JIT_FREE 0xffffffff8106c7d0
#endif

#ifndef GET_MM_EXE_FILE
#define GET_MM_EXE_FILE 0xffffffff8106cbb0
#endif

#ifndef GET_TASK_MM
#define GET_TASK_MM 0xffffffff8106cc20
#endif

#ifndef __MMDROP
#define __MMDROP 0xffffffff8106cd00
#endif

#ifndef NR_PROCESSES
#define NR_PROCESSES 0xffffffff8106d1a0
#endif

#ifndef FREE_TASK
#define FREE_TASK 0xffffffff8106d220
#endif

#ifndef __PUT_TASK_STRUCT
#define __PUT_TASK_STRUCT 0xffffffff8106d280
#endif

#ifndef SET_TASK_STACK_END_MAGIC
#define SET_TASK_STACK_END_MAGIC 0xffffffff8106d3d0
#endif

#ifndef MM_ALLOC
#define MM_ALLOC 0xffffffff8106d3f0
#endif

#ifndef SET_MM_EXE_FILE
#define SET_MM_EXE_FILE 0xffffffff8106d460
#endif

#ifndef MMPUT
#define MMPUT 0xffffffff8106d4a0
#endif

#ifndef MM_ACCESS
#define MM_ACCESS 0xffffffff8106d5c0
#endif

#ifndef MM_RELEASE
#define MM_RELEASE 0xffffffff8106d660
#endif

#ifndef __CLEANUP_SIGHAND
#define __CLEANUP_SIGHAND 0xffffffff8106d7a0
#endif

#ifndef SYS_SET_TID_ADDRESS
#define SYS_SET_TID_ADDRESS 0xffffffff8106f230
#endif

#ifndef SYS_SET_TID_ADDRESS
#define SYS_SET_TID_ADDRESS 0xffffffff8106f230
#endif

#ifndef FORK_IDLE
#define FORK_IDLE 0xffffffff8106f270
#endif

#ifndef DO_FORK
#define DO_FORK 0xffffffff8106f320
#endif

#ifndef KERNEL_THREAD
#define KERNEL_THREAD 0xffffffff8106f690
#endif

#ifndef SYS_FORK
#define SYS_FORK 0xffffffff8106f6c0
#endif

#ifndef SYS_VFORK
#define SYS_VFORK 0xffffffff8106f6e0
#endif

#ifndef SYS_CLONE
#define SYS_CLONE 0xffffffff8106f700
#endif

#ifndef SYS_CLONE
#define SYS_CLONE 0xffffffff8106f700
#endif

#ifndef SYS_UNSHARE
#define SYS_UNSHARE 0xffffffff8106f720
#endif

#ifndef SYS_UNSHARE
#define SYS_UNSHARE 0xffffffff8106f720
#endif

#ifndef UNSHARE_FILES
#define UNSHARE_FILES 0xffffffff8106fa80
#endif

#ifndef SYSCTL_MAX_THREADS
#define SYSCTL_MAX_THREADS 0xffffffff8106fb00
#endif

#ifndef SYS_PERSONALITY
#define SYS_PERSONALITY 0xffffffff8106fbe0
#endif

#ifndef SYS_PERSONALITY
#define SYS_PERSONALITY 0xffffffff8106fbe0
#endif

#ifndef ADD_TAINT
#define ADD_TAINT 0xffffffff8106fc20
#endif

#ifndef TEST_TAINT
#define TEST_TAINT 0xffffffff8106fc60
#endif

#ifndef __STACK_CHK_FAIL
#define __STACK_CHK_FAIL 0xffffffff8106fdc0
#endif

#ifndef PRINT_TAINTED
#define PRINT_TAINTED 0xffffffff8106fde0
#endif

#ifndef GET_TAINT
#define GET_TAINT 0xffffffff8106fe90
#endif

#ifndef OOPS_MAY_PRINT
#define OOPS_MAY_PRINT 0xffffffff8106fea0
#endif

#ifndef OOPS_ENTER
#define OOPS_ENTER 0xffffffff8106fec0
#endif

#ifndef PRINT_OOPS_END_MARKER
#define PRINT_OOPS_END_MARKER 0xffffffff8106ff00
#endif

#ifndef WARN_SLOWPATH_FMT
#define WARN_SLOWPATH_FMT 0xffffffff81070000
#endif

#ifndef WARN_SLOWPATH_FMT_TAINT
#define WARN_SLOWPATH_FMT_TAINT 0xffffffff81070050
#endif

#ifndef WARN_SLOWPATH_NULL
#define WARN_SLOWPATH_NULL 0xffffffff810700a0
#endif

#ifndef OOPS_EXIT
#define OOPS_EXIT 0xffffffff810700c0
#endif

#ifndef CPU_MAPS_UPDATE_BEGIN
#define CPU_MAPS_UPDATE_BEGIN 0xffffffff810700f0
#endif

#ifndef CPU_MAPS_UPDATE_DONE
#define CPU_MAPS_UPDATE_DONE 0xffffffff81070110
#endif

#ifndef GET_ONLINE_CPUS
#define GET_ONLINE_CPUS 0xffffffff81070130
#endif

#ifndef TRY_GET_ONLINE_CPUS
#define TRY_GET_ONLINE_CPUS 0xffffffff81070200
#endif

#ifndef PUT_ONLINE_CPUS
#define PUT_ONLINE_CPUS 0xffffffff81070270
#endif

#ifndef CPU_HOTPLUG_BEGIN
#define CPU_HOTPLUG_BEGIN 0xffffffff81070320
#endif

#ifndef CPU_UP
#define CPU_UP 0xffffffff81070530
#endif

#ifndef CPU_HOTPLUG_DONE
#define CPU_HOTPLUG_DONE 0xffffffff810705e0
#endif

#ifndef CPU_HOTPLUG_DISABLE
#define CPU_HOTPLUG_DISABLE 0xffffffff81070610
#endif

#ifndef CPU_HOTPLUG_ENABLE
#define CPU_HOTPLUG_ENABLE 0xffffffff81070640
#endif

#ifndef CLEAR_TASKS_MM_CPUMASK
#define CLEAR_TASKS_MM_CPUMASK 0xffffffff810706c0
#endif

#ifndef SMPBOOT_THREAD_INIT
#define SMPBOOT_THREAD_INIT 0xffffffff81070750
#endif

#ifndef DISABLE_NONBOOT_CPUS
#define DISABLE_NONBOOT_CPUS 0xffffffff81070770
#endif

#ifndef NOTIFY_CPU_STARTING
#define NOTIFY_CPU_STARTING 0xffffffff81070930
#endif

#ifndef SET_CPU_POSSIBLE
#define SET_CPU_POSSIBLE 0xffffffff81070960
#endif

#ifndef SET_CPU_PRESENT
#define SET_CPU_PRESENT 0xffffffff81070990
#endif

#ifndef SET_CPU_ONLINE
#define SET_CPU_ONLINE 0xffffffff810709c0
#endif

#ifndef SET_CPU_ACTIVE
#define SET_CPU_ACTIVE 0xffffffff81070a00
#endif

#ifndef INIT_CPU_PRESENT
#define INIT_CPU_PRESENT 0xffffffff81070a30
#endif

#ifndef INIT_CPU_POSSIBLE
#define INIT_CPU_POSSIBLE 0xffffffff81070a90
#endif

#ifndef INIT_CPU_ONLINE
#define INIT_CPU_ONLINE 0xffffffff81070af0
#endif

#ifndef RELEASE_TASK
#define RELEASE_TASK 0xffffffff81070f90
#endif

#ifndef IS_CURRENT_PGRP_ORPHANED
#define IS_CURRENT_PGRP_ORPHANED 0xffffffff810721e0
#endif

#ifndef MM_UPDATE_NEXT_OWNER
#define MM_UPDATE_NEXT_OWNER 0xffffffff81072230
#endif

#ifndef DO_EXIT
#define DO_EXIT 0xffffffff81072450
#endif

#ifndef COMPLETE_AND_EXIT
#define COMPLETE_AND_EXIT 0xffffffff81072f20
#endif

#ifndef SYS_EXIT
#define SYS_EXIT 0xffffffff81072f40
#endif

#ifndef SYS_EXIT
#define SYS_EXIT 0xffffffff81072f40
#endif

#ifndef DO_GROUP_EXIT
#define DO_GROUP_EXIT 0xffffffff81072f60
#endif

#ifndef SYS_EXIT_GROUP
#define SYS_EXIT_GROUP 0xffffffff81073010
#endif

#ifndef SYS_EXIT_GROUP
#define SYS_EXIT_GROUP 0xffffffff81073010
#endif

#ifndef __WAKE_UP_PARENT
#define __WAKE_UP_PARENT 0xffffffff81073030
#endif

#ifndef SYS_WAITID
#define SYS_WAITID 0xffffffff81073060
#endif

#ifndef SYS_WAITID
#define SYS_WAITID 0xffffffff81073060
#endif

#ifndef SYS_WAIT4
#define SYS_WAIT4 0xffffffff810731d0
#endif

#ifndef SYS_WAIT4
#define SYS_WAIT4 0xffffffff810731d0
#endif

#ifndef SYS_WAITPID
#define SYS_WAITPID 0xffffffff810732b0
#endif

#ifndef SYS_WAITPID
#define SYS_WAITPID 0xffffffff810732b0
#endif

#ifndef TASKLET_INIT
#define TASKLET_INIT 0xffffffff81073390
#endif

#ifndef _LOCAL_BH_ENABLE
#define _LOCAL_BH_ENABLE 0xffffffff81073790
#endif

#ifndef TASKLET_KILL
#define TASKLET_KILL 0xffffffff81073830
#endif

#ifndef TASKLET_HRTIMER_INIT
#define TASKLET_HRTIMER_INIT 0xffffffff810738b0
#endif

#ifndef __LOCAL_BH_ENABLE_IP
#define __LOCAL_BH_ENABLE_IP 0xffffffff81073c20
#endif

#ifndef __TASKLET_HI_SCHEDULE_FIRST
#define __TASKLET_HI_SCHEDULE_FIRST 0xffffffff81073cb0
#endif

#ifndef __TASKLET_HI_SCHEDULE
#define __TASKLET_HI_SCHEDULE 0xffffffff81073d30
#endif

#ifndef __TASKLET_SCHEDULE
#define __TASKLET_SCHEDULE 0xffffffff81073e00
#endif

#ifndef __DO_SOFTIRQ
#define __DO_SOFTIRQ 0xffffffff81074240
#endif

#ifndef DO_SOFTIRQ
#define DO_SOFTIRQ 0xffffffff81074520
#endif

#ifndef IRQ_ENTER
#define IRQ_ENTER 0xffffffff81074550
#endif

#ifndef IRQ_EXIT
#define IRQ_EXIT 0xffffffff810745b0
#endif

#ifndef RAISE_SOFTIRQ_IRQOFF
#define RAISE_SOFTIRQ_IRQOFF 0xffffffff81074650
#endif

#ifndef RAISE_SOFTIRQ
#define RAISE_SOFTIRQ 0xffffffff810746d0
#endif

#ifndef __RAISE_SOFTIRQ_IRQOFF
#define __RAISE_SOFTIRQ_IRQOFF 0xffffffff81074760
#endif

#ifndef OPEN_SOFTIRQ
#define OPEN_SOFTIRQ 0xffffffff810747c0
#endif

#ifndef TASKLET_KILL_IMMEDIATE
#define TASKLET_KILL_IMMEDIATE 0xffffffff810747e0
#endif

#ifndef RELEASE_RESOURCE
#define RELEASE_RESOURCE 0xffffffff81074b00
#endif

#ifndef ADJUST_RESOURCE
#define ADJUST_RESOURCE 0xffffffff81074ba0
#endif

#ifndef REQUEST_RESOURCE
#define REQUEST_RESOURCE 0xffffffff81074be0
#endif

#ifndef RESOURCE_LIST_CREATE_ENTRY
#define RESOURCE_LIST_CREATE_ENTRY 0xffffffff81074d80
#endif

#ifndef RESOURCE_LIST_FREE
#define RESOURCE_LIST_FREE 0xffffffff81074dc0
#endif

#ifndef DEVM_REQUEST_RESOURCE
#define DEVM_REQUEST_RESOURCE 0xffffffff81074e20
#endif

#ifndef __RELEASE_REGION
#define __RELEASE_REGION 0xffffffff810751b0
#endif

#ifndef DEVM_RELEASE_RESOURCE
#define DEVM_RELEASE_RESOURCE 0xffffffff810752b0
#endif

#ifndef __DEVM_RELEASE_REGION
#define __DEVM_RELEASE_REGION 0xffffffff81075300
#endif

#ifndef __REQUEST_REGION
#define __REQUEST_REGION 0xffffffff81075410
#endif

#ifndef __DEVM_REQUEST_REGION
#define __DEVM_REQUEST_REGION 0xffffffff810755c0
#endif

#ifndef RELEASE_CHILD_RESOURCES
#define RELEASE_CHILD_RESOURCES 0xffffffff81075670
#endif

#ifndef REQUEST_RESOURCE_CONFLICT
#define REQUEST_RESOURCE_CONFLICT 0xffffffff810756a0
#endif

#ifndef WALK_IOMEM_RES
#define WALK_IOMEM_RES 0xffffffff810756e0
#endif

#ifndef WALK_SYSTEM_RAM_RES
#define WALK_SYSTEM_RAM_RES 0xffffffff81075770
#endif

#ifndef WALK_SYSTEM_RAM_RANGE
#define WALK_SYSTEM_RAM_RANGE 0xffffffff81075810
#endif

#ifndef REGION_IS_RAM
#define REGION_IS_RAM 0xffffffff81075910
#endif

#ifndef ALLOCATE_RESOURCE
#define ALLOCATE_RESOURCE 0xffffffff81075be0
#endif

#ifndef LOOKUP_RESOURCE
#define LOOKUP_RESOURCE 0xffffffff81075e40
#endif

#ifndef INSERT_RESOURCE_CONFLICT
#define INSERT_RESOURCE_CONFLICT 0xffffffff81075e90
#endif

#ifndef INSERT_RESOURCE
#define INSERT_RESOURCE 0xffffffff81075ed0
#endif

#ifndef INSERT_RESOURCE_EXPAND_TO_FIT
#define INSERT_RESOURCE_EXPAND_TO_FIT 0xffffffff81075f20
#endif

#ifndef RESOURCE_ALIGNMENT
#define RESOURCE_ALIGNMENT 0xffffffff81075fa0
#endif

#ifndef RELEASE_MEM_REGION_ADJUSTABLE
#define RELEASE_MEM_REGION_ADJUSTABLE 0xffffffff81075fe0
#endif

#ifndef IOMEM_MAP_SANITY_CHECK
#define IOMEM_MAP_SANITY_CHECK 0xffffffff81076180
#endif

#ifndef IOMEM_IS_EXCLUSIVE
#define IOMEM_IS_EXCLUSIVE 0xffffffff81076250
#endif

#ifndef PROC_DOSTRING
#define PROC_DOSTRING 0xffffffff81076580
#endif

#ifndef PROC_DOULONGVEC_MINMAX
#define PROC_DOULONGVEC_MINMAX 0xffffffff81076f00
#endif

#ifndef PROC_DOULONGVEC_MS_JIFFIES_MINMAX
#define PROC_DOULONGVEC_MS_JIFFIES_MINMAX 0xffffffff81076f40
#endif

#ifndef PROC_DOINTVEC
#define PROC_DOINTVEC 0xffffffff810775f0
#endif

#ifndef PROC_DOINTVEC_MINMAX
#define PROC_DOINTVEC_MINMAX 0xffffffff81077630
#endif

#ifndef PROC_DOINTVEC_JIFFIES
#define PROC_DOINTVEC_JIFFIES 0xffffffff81077730
#endif

#ifndef PROC_DOINTVEC_USERHZ_JIFFIES
#define PROC_DOINTVEC_USERHZ_JIFFIES 0xffffffff81077770
#endif

#ifndef PROC_DOINTVEC_MS_JIFFIES
#define PROC_DOINTVEC_MS_JIFFIES 0xffffffff810777b0
#endif

#ifndef PROC_DO_LARGE_BITMAP
#define PROC_DO_LARGE_BITMAP 0xffffffff81077860
#endif

#ifndef SYS_SYSCTL
#define SYS_SYSCTL 0xffffffff81077e60
#endif

#ifndef SYS_SYSCTL
#define SYS_SYSCTL 0xffffffff81077e60
#endif

#ifndef COMPAT_SYS_SYSCTL
#define COMPAT_SYS_SYSCTL 0xffffffff81077f40
#endif

#ifndef COMPAT_SYS_SYSCTL
#define COMPAT_SYS_SYSCTL 0xffffffff81077f40
#endif

#ifndef FILE_NS_CAPABLE
#define FILE_NS_CAPABLE 0xffffffff81078130
#endif

#ifndef NS_CAPABLE
#define NS_CAPABLE 0xffffffff81078190
#endif

#ifndef CAPABLE
#define CAPABLE 0xffffffff810781f0
#endif

#ifndef CAPABLE_WRT_INODE_UIDGID
#define CAPABLE_WRT_INODE_UIDGID 0xffffffff81078210
#endif

#ifndef SYS_CAPGET
#define SYS_CAPGET 0xffffffff81078280
#endif

#ifndef SYS_CAPGET
#define SYS_CAPGET 0xffffffff81078280
#endif

#ifndef SYS_CAPSET
#define SYS_CAPSET 0xffffffff810783e0
#endif

#ifndef SYS_CAPSET
#define SYS_CAPSET 0xffffffff810783e0
#endif

#ifndef HAS_NS_CAPABILITY
#define HAS_NS_CAPABILITY 0xffffffff810785d0
#endif

#ifndef HAS_CAPABILITY
#define HAS_CAPABILITY 0xffffffff810785f0
#endif

#ifndef HAS_NS_CAPABILITY_NOAUDIT
#define HAS_NS_CAPABILITY_NOAUDIT 0xffffffff81078620
#endif

#ifndef HAS_CAPABILITY_NOAUDIT
#define HAS_CAPABILITY_NOAUDIT 0xffffffff81078640
#endif

#ifndef __PTRACE_LINK
#define __PTRACE_LINK 0xffffffff810791b0
#endif

#ifndef __PTRACE_UNLINK
#define __PTRACE_UNLINK 0xffffffff81079540
#endif

#ifndef PTRACE_MAY_ACCESS
#define PTRACE_MAY_ACCESS 0xffffffff81079650
#endif

#ifndef EXIT_PTRACE
#define EXIT_PTRACE 0xffffffff81079690
#endif

#ifndef PTRACE_READDATA
#define PTRACE_READDATA 0xffffffff81079770
#endif

#ifndef PTRACE_WRITEDATA
#define PTRACE_WRITEDATA 0xffffffff81079860
#endif

#ifndef SYS_PTRACE
#define SYS_PTRACE 0xffffffff81079950
#endif

#ifndef SYS_PTRACE
#define SYS_PTRACE 0xffffffff81079950
#endif

#ifndef GENERIC_PTRACE_PEEKDATA
#define GENERIC_PTRACE_PEEKDATA 0xffffffff81079a70
#endif

#ifndef PTRACE_REQUEST
#define PTRACE_REQUEST 0xffffffff81079ab0
#endif

#ifndef GENERIC_PTRACE_POKEDATA
#define GENERIC_PTRACE_POKEDATA 0xffffffff8107a000
#endif

#ifndef COMPAT_PTRACE_REQUEST
#define COMPAT_PTRACE_REQUEST 0xffffffff8107a040
#endif

#ifndef COMPAT_SYS_PTRACE
#define COMPAT_SYS_PTRACE 0xffffffff8107a240
#endif

#ifndef COMPAT_SYS_PTRACE
#define COMPAT_SYS_PTRACE 0xffffffff8107a240
#endif

#ifndef FIND_USER
#define FIND_USER 0xffffffff8107a3a0
#endif

#ifndef FREE_UID
#define FREE_UID 0xffffffff8107a400
#endif

#ifndef ALLOC_UID
#define ALLOC_UID 0xffffffff8107a4b0
#endif

#ifndef BLOCK_ALL_SIGNALS
#define BLOCK_ALL_SIGNALS 0xffffffff8107a950
#endif

#ifndef RECALC_SIGPENDING
#define RECALC_SIGPENDING 0xffffffff8107b430
#endif

#ifndef UNBLOCK_ALL_SIGNALS
#define UNBLOCK_ALL_SIGNALS 0xffffffff8107b490
#endif

#ifndef DEQUEUE_SIGNAL
#define DEQUEUE_SIGNAL 0xffffffff8107b510
#endif

#ifndef KERNEL_SIGACTION
#define KERNEL_SIGACTION 0xffffffff8107b690
#endif

#ifndef NEXT_SIGNAL
#define NEXT_SIGNAL 0xffffffff8107b760
#endif

#ifndef TASK_SET_JOBCTL_PENDING
#define TASK_SET_JOBCTL_PENDING 0xffffffff8107b790
#endif

#ifndef TASK_CLEAR_JOBCTL_TRAPPING
#define TASK_CLEAR_JOBCTL_TRAPPING 0xffffffff8107b810
#endif

#ifndef TASK_CLEAR_JOBCTL_PENDING
#define TASK_CLEAR_JOBCTL_PENDING 0xffffffff8107b860
#endif

#ifndef FLUSH_SIGQUEUE
#define FLUSH_SIGQUEUE 0xffffffff8107b990
#endif

#ifndef __FLUSH_SIGNALS
#define __FLUSH_SIGNALS 0xffffffff8107b9e0
#endif

#ifndef FLUSH_SIGNALS
#define FLUSH_SIGNALS 0xffffffff8107ba10
#endif

#ifndef FLUSH_ITIMER_SIGNALS
#define FLUSH_ITIMER_SIGNALS 0xffffffff8107ba60
#endif

#ifndef IGNORE_SIGNALS
#define IGNORE_SIGNALS 0xffffffff8107bad0
#endif

#ifndef FLUSH_SIGNAL_HANDLERS
#define FLUSH_SIGNAL_HANDLERS 0xffffffff8107bb10
#endif

#ifndef UNHANDLED_SIGNAL
#define UNHANDLED_SIGNAL 0xffffffff8107bb70
#endif

#ifndef SIGNAL_WAKE_UP_STATE
#define SIGNAL_WAKE_UP_STATE 0xffffffff8107bbb0
#endif

#ifndef RECALC_SIGPENDING_AND_WAKE
#define RECALC_SIGPENDING_AND_WAKE 0xffffffff8107bbe0
#endif

#ifndef __GROUP_SEND_SIG_INFO
#define __GROUP_SEND_SIG_INFO 0xffffffff8107cf60
#endif

#ifndef FORCE_SIG_INFO
#define FORCE_SIG_INFO 0xffffffff8107cf80
#endif

#ifndef FORCE_SIG
#define FORCE_SIG 0xffffffff8107d050
#endif

#ifndef ZAP_OTHER_THREADS
#define ZAP_OTHER_THREADS 0xffffffff8107d070
#endif

#ifndef __LOCK_TASK_SIGHAND
#define __LOCK_TASK_SIGHAND 0xffffffff8107d110
#endif

#ifndef DO_SEND_SIG_INFO
#define DO_SEND_SIG_INFO 0xffffffff8107d190
#endif

#ifndef SEND_SIG_INFO
#define SEND_SIG_INFO 0xffffffff8107d200
#endif

#ifndef SEND_SIG
#define SEND_SIG 0xffffffff8107d230
#endif

#ifndef KILL_PID_INFO_AS_CRED
#define KILL_PID_INFO_AS_CRED 0xffffffff8107d4d0
#endif

#ifndef GROUP_SEND_SIG_INFO
#define GROUP_SEND_SIG_INFO 0xffffffff8107d600
#endif

#ifndef __KILL_PGRP_INFO
#define __KILL_PGRP_INFO 0xffffffff8107d640
#endif

#ifndef KILL_PGRP
#define KILL_PGRP 0xffffffff8107d6d0
#endif

#ifndef KILL_PID_INFO
#define KILL_PID_INFO 0xffffffff8107d710
#endif

#ifndef KILL_PID
#define KILL_PID 0xffffffff8107d780
#endif

#ifndef KILL_PROC_INFO
#define KILL_PROC_INFO 0xffffffff8107da60
#endif

#ifndef FORCE_SIGSEGV
#define FORCE_SIGSEGV 0xffffffff8107da90
#endif

#ifndef SIGQUEUE_ALLOC
#define SIGQUEUE_ALLOC 0xffffffff8107db00
#endif

#ifndef SIGQUEUE_FREE
#define SIGQUEUE_FREE 0xffffffff8107db40
#endif

#ifndef SEND_SIGQUEUE
#define SEND_SIGQUEUE 0xffffffff8107dbd0
#endif

#ifndef DO_NOTIFY_PARENT
#define DO_NOTIFY_PARENT 0xffffffff8107dda0
#endif

#ifndef PTRACE_NOTIFY
#define PTRACE_NOTIFY 0xffffffff8107dfc0
#endif

#ifndef GET_SIGNAL
#define GET_SIGNAL 0xffffffff8107e050
#endif

#ifndef EXIT_SIGNALS
#define EXIT_SIGNALS 0xffffffff8107e6f0
#endif

#ifndef SYS_RESTART_SYSCALL
#define SYS_RESTART_SYSCALL 0xffffffff8107e810
#endif

#ifndef DO_NO_RESTART_SYSCALL
#define DO_NO_RESTART_SYSCALL 0xffffffff8107e840
#endif

#ifndef __SET_CURRENT_BLOCKED
#define __SET_CURRENT_BLOCKED 0xffffffff8107e850
#endif

#ifndef SET_CURRENT_BLOCKED
#define SET_CURRENT_BLOCKED 0xffffffff8107e8b0
#endif

#ifndef SIGNAL_SETUP_DONE
#define SIGNAL_SETUP_DONE 0xffffffff8107e8d0
#endif

#ifndef SIGPROCMASK
#define SIGPROCMASK 0xffffffff8107e970
#endif

#ifndef SYS_RT_SIGPROCMASK
#define SYS_RT_SIGPROCMASK 0xffffffff8107ea00
#endif

#ifndef SYS_RT_SIGPROCMASK
#define SYS_RT_SIGPROCMASK 0xffffffff8107ea00
#endif

#ifndef COMPAT_SYS_RT_SIGPROCMASK
#define COMPAT_SYS_RT_SIGPROCMASK 0xffffffff8107eab0
#endif

#ifndef COMPAT_SYS_RT_SIGPROCMASK
#define COMPAT_SYS_RT_SIGPROCMASK 0xffffffff8107eab0
#endif

#ifndef SYS_RT_SIGPENDING
#define SYS_RT_SIGPENDING 0xffffffff8107eb60
#endif

#ifndef SYS_RT_SIGPENDING
#define SYS_RT_SIGPENDING 0xffffffff8107eb60
#endif

#ifndef COMPAT_SYS_RT_SIGPENDING
#define COMPAT_SYS_RT_SIGPENDING 0xffffffff8107ec20
#endif

#ifndef COMPAT_SYS_RT_SIGPENDING
#define COMPAT_SYS_RT_SIGPENDING 0xffffffff8107ec20
#endif

#ifndef COPY_SIGINFO_TO_USER
#define COPY_SIGINFO_TO_USER 0xffffffff8107ece0
#endif

#ifndef DO_SIGTIMEDWAIT
#define DO_SIGTIMEDWAIT 0xffffffff8107efa0
#endif

#ifndef SYS_RT_SIGTIMEDWAIT
#define SYS_RT_SIGTIMEDWAIT 0xffffffff8107f270
#endif

#ifndef SYS_RT_SIGTIMEDWAIT
#define SYS_RT_SIGTIMEDWAIT 0xffffffff8107f270
#endif

#ifndef SYS_KILL
#define SYS_KILL 0xffffffff8107f290
#endif

#ifndef SYS_KILL
#define SYS_KILL 0xffffffff8107f290
#endif

#ifndef SYS_TGKILL
#define SYS_TGKILL 0xffffffff8107f2b0
#endif

#ifndef SYS_TGKILL
#define SYS_TGKILL 0xffffffff8107f2b0
#endif

#ifndef SYS_TKILL
#define SYS_TKILL 0xffffffff8107f2e0
#endif

#ifndef SYS_TKILL
#define SYS_TKILL 0xffffffff8107f2e0
#endif

#ifndef SYS_RT_SIGQUEUEINFO
#define SYS_RT_SIGQUEUEINFO 0xffffffff8107f310
#endif

#ifndef SYS_RT_SIGQUEUEINFO
#define SYS_RT_SIGQUEUEINFO 0xffffffff8107f310
#endif

#ifndef COMPAT_SYS_RT_SIGQUEUEINFO
#define COMPAT_SYS_RT_SIGQUEUEINFO 0xffffffff8107f330
#endif

#ifndef COMPAT_SYS_RT_SIGQUEUEINFO
#define COMPAT_SYS_RT_SIGQUEUEINFO 0xffffffff8107f330
#endif

#ifndef SYS_RT_TGSIGQUEUEINFO
#define SYS_RT_TGSIGQUEUEINFO 0xffffffff8107f350
#endif

#ifndef SYS_RT_TGSIGQUEUEINFO
#define SYS_RT_TGSIGQUEUEINFO 0xffffffff8107f350
#endif

#ifndef COMPAT_SYS_RT_TGSIGQUEUEINFO
#define COMPAT_SYS_RT_TGSIGQUEUEINFO 0xffffffff8107f370
#endif

#ifndef COMPAT_SYS_RT_TGSIGQUEUEINFO
#define COMPAT_SYS_RT_TGSIGQUEUEINFO 0xffffffff8107f370
#endif

#ifndef DO_SIGACTION
#define DO_SIGACTION 0xffffffff8107f390
#endif

#ifndef SYS_SIGALTSTACK
#define SYS_SIGALTSTACK 0xffffffff8107f560
#endif

#ifndef SYS_SIGALTSTACK
#define SYS_SIGALTSTACK 0xffffffff8107f560
#endif

#ifndef RESTORE_ALTSTACK
#define RESTORE_ALTSTACK 0xffffffff8107f590
#endif

#ifndef __SAVE_ALTSTACK
#define __SAVE_ALTSTACK 0xffffffff8107f5d0
#endif

#ifndef COMPAT_SYS_SIGALTSTACK
#define COMPAT_SYS_SIGALTSTACK 0xffffffff8107f670
#endif

#ifndef COMPAT_SYS_SIGALTSTACK
#define COMPAT_SYS_SIGALTSTACK 0xffffffff8107f670
#endif

#ifndef COMPAT_RESTORE_ALTSTACK
#define COMPAT_RESTORE_ALTSTACK 0xffffffff8107f810
#endif

#ifndef __COMPAT_SAVE_ALTSTACK
#define __COMPAT_SAVE_ALTSTACK 0xffffffff8107f930
#endif

#ifndef SYS_SIGPENDING
#define SYS_SIGPENDING 0xffffffff8107f9d0
#endif

#ifndef SYS_SIGPENDING
#define SYS_SIGPENDING 0xffffffff8107f9d0
#endif

#ifndef SYS_SIGPROCMASK
#define SYS_SIGPROCMASK 0xffffffff8107fa80
#endif

#ifndef SYS_SIGPROCMASK
#define SYS_SIGPROCMASK 0xffffffff8107fa80
#endif

#ifndef SYS_RT_SIGACTION
#define SYS_RT_SIGACTION 0xffffffff8107fb70
#endif

#ifndef SYS_RT_SIGACTION
#define SYS_RT_SIGACTION 0xffffffff8107fb70
#endif

#ifndef COMPAT_SYS_RT_SIGACTION
#define COMPAT_SYS_RT_SIGACTION 0xffffffff8107fc10
#endif

#ifndef COMPAT_SYS_RT_SIGACTION
#define COMPAT_SYS_RT_SIGACTION 0xffffffff8107fc10
#endif

#ifndef COMPAT_SYS_SIGACTION
#define COMPAT_SYS_SIGACTION 0xffffffff8107fd70
#endif

#ifndef COMPAT_SYS_SIGACTION
#define COMPAT_SYS_SIGACTION 0xffffffff8107fd70
#endif

#ifndef SYS_SGETMASK
#define SYS_SGETMASK 0xffffffff8107fec0
#endif

#ifndef SYS_SSETMASK
#define SYS_SSETMASK 0xffffffff8107fee0
#endif

#ifndef SYS_SSETMASK
#define SYS_SSETMASK 0xffffffff8107fee0
#endif

#ifndef SYS_SIGNAL
#define SYS_SIGNAL 0xffffffff8107ff20
#endif

#ifndef SYS_SIGNAL
#define SYS_SIGNAL 0xffffffff8107ff20
#endif

#ifndef SYS_PAUSE
#define SYS_PAUSE 0xffffffff8107ff70
#endif

#ifndef SIGSUSPEND
#define SIGSUSPEND 0xffffffff8107ffe0
#endif

#ifndef SYS_RT_SIGSUSPEND
#define SYS_RT_SIGSUSPEND 0xffffffff81080070
#endif

#ifndef SYS_RT_SIGSUSPEND
#define SYS_RT_SIGSUSPEND 0xffffffff81080070
#endif

#ifndef COMPAT_SYS_RT_SIGSUSPEND
#define COMPAT_SYS_RT_SIGSUSPEND 0xffffffff810800d0
#endif

#ifndef COMPAT_SYS_RT_SIGSUSPEND
#define COMPAT_SYS_RT_SIGSUSPEND 0xffffffff810800d0
#endif

#ifndef SYS_SIGSUSPEND
#define SYS_SIGSUSPEND 0xffffffff81080130
#endif

#ifndef SYS_SIGSUSPEND
#define SYS_SIGSUSPEND 0xffffffff81080130
#endif

#ifndef SYS_SETPRIORITY
#define SYS_SETPRIORITY 0xffffffff81081440
#endif

#ifndef SYS_SETPRIORITY
#define SYS_SETPRIORITY 0xffffffff81081440
#endif

#ifndef SYS_GETPRIORITY
#define SYS_GETPRIORITY 0xffffffff810816a0
#endif

#ifndef SYS_GETPRIORITY
#define SYS_GETPRIORITY 0xffffffff810816a0
#endif

#ifndef SYS_SETREGID
#define SYS_SETREGID 0xffffffff81081900
#endif

#ifndef SYS_SETREGID
#define SYS_SETREGID 0xffffffff81081900
#endif

#ifndef SYS_SETGID
#define SYS_SETGID 0xffffffff81081a80
#endif

#ifndef SYS_SETGID
#define SYS_SETGID 0xffffffff81081a80
#endif

#ifndef SYS_SETREUID
#define SYS_SETREUID 0xffffffff81081b60
#endif

#ifndef SYS_SETREUID
#define SYS_SETREUID 0xffffffff81081b60
#endif

#ifndef SYS_SETUID
#define SYS_SETUID 0xffffffff81081d70
#endif

#ifndef SYS_SETUID
#define SYS_SETUID 0xffffffff81081d70
#endif

#ifndef SYS_SETRESUID
#define SYS_SETRESUID 0xffffffff81081e90
#endif

#ifndef SYS_SETRESUID
#define SYS_SETRESUID 0xffffffff81081e90
#endif

#ifndef SYS_GETRESUID
#define SYS_GETRESUID 0xffffffff81082090
#endif

#ifndef SYS_GETRESUID
#define SYS_GETRESUID 0xffffffff81082090
#endif

#ifndef SYS_SETRESGID
#define SYS_SETRESGID 0xffffffff81082150
#endif

#ifndef SYS_SETRESGID
#define SYS_SETRESGID 0xffffffff81082150
#endif

#ifndef SYS_GETRESGID
#define SYS_GETRESGID 0xffffffff810822e0
#endif

#ifndef SYS_GETRESGID
#define SYS_GETRESGID 0xffffffff810822e0
#endif

#ifndef SYS_SETFSUID
#define SYS_SETFSUID 0xffffffff81082380
#endif

#ifndef SYS_SETFSUID
#define SYS_SETFSUID 0xffffffff81082380
#endif

#ifndef SYS_SETFSGID
#define SYS_SETFSGID 0xffffffff81082450
#endif

#ifndef SYS_SETFSGID
#define SYS_SETFSGID 0xffffffff81082450
#endif

#ifndef SYS_GETPID
#define SYS_GETPID 0xffffffff81082510
#endif

#ifndef SYS_GETTID
#define SYS_GETTID 0xffffffff81082540
#endif

#ifndef SYS_GETPPID
#define SYS_GETPPID 0xffffffff81082570
#endif

#ifndef SYS_GETUID
#define SYS_GETUID 0xffffffff810825b0
#endif

#ifndef SYS_GETEUID
#define SYS_GETEUID 0xffffffff810825f0
#endif

#ifndef SYS_GETGID
#define SYS_GETGID 0xffffffff81082630
#endif

#ifndef SYS_GETEGID
#define SYS_GETEGID 0xffffffff81082670
#endif

#ifndef DO_SYS_TIMES
#define DO_SYS_TIMES 0xffffffff810826b0
#endif

#ifndef SYS_TIMES
#define SYS_TIMES 0xffffffff81082740
#endif

#ifndef SYS_TIMES
#define SYS_TIMES 0xffffffff81082740
#endif

#ifndef SYS_SETPGID
#define SYS_SETPGID 0xffffffff810827a0
#endif

#ifndef SYS_SETPGID
#define SYS_SETPGID 0xffffffff810827a0
#endif

#ifndef SYS_GETPGID
#define SYS_GETPGID 0xffffffff81082960
#endif

#ifndef SYS_GETPGID
#define SYS_GETPGID 0xffffffff81082960
#endif

#ifndef SYS_GETPGRP
#define SYS_GETPGRP 0xffffffff810829d0
#endif

#ifndef SYS_GETSID
#define SYS_GETSID 0xffffffff81082a00
#endif

#ifndef SYS_GETSID
#define SYS_GETSID 0xffffffff81082a00
#endif

#ifndef SYS_SETSID
#define SYS_SETSID 0xffffffff81082a70
#endif

#ifndef SYS_NEWUNAME
#define SYS_NEWUNAME 0xffffffff81082b90
#endif

#ifndef SYS_NEWUNAME
#define SYS_NEWUNAME 0xffffffff81082b90
#endif

#ifndef SYS_UNAME
#define SYS_UNAME 0xffffffff81082c70
#endif

#ifndef SYS_UNAME
#define SYS_UNAME 0xffffffff81082c70
#endif

#ifndef SYS_OLDUNAME
#define SYS_OLDUNAME 0xffffffff81082d60
#endif

#ifndef SYS_OLDUNAME
#define SYS_OLDUNAME 0xffffffff81082d60
#endif

#ifndef SYS_SETHOSTNAME
#define SYS_SETHOSTNAME 0xffffffff81082f50
#endif

#ifndef SYS_SETHOSTNAME
#define SYS_SETHOSTNAME 0xffffffff81082f50
#endif

#ifndef SYS_GETHOSTNAME
#define SYS_GETHOSTNAME 0xffffffff81083060
#endif

#ifndef SYS_GETHOSTNAME
#define SYS_GETHOSTNAME 0xffffffff81083060
#endif

#ifndef SYS_SETDOMAINNAME
#define SYS_SETDOMAINNAME 0xffffffff810830f0
#endif

#ifndef SYS_SETDOMAINNAME
#define SYS_SETDOMAINNAME 0xffffffff810830f0
#endif

#ifndef SYS_OLD_GETRLIMIT
#define SYS_OLD_GETRLIMIT 0xffffffff81083210
#endif

#ifndef SYS_OLD_GETRLIMIT
#define SYS_OLD_GETRLIMIT 0xffffffff81083210
#endif

#ifndef DO_PRLIMIT
#define DO_PRLIMIT 0xffffffff810832f0
#endif

#ifndef SYS_GETRLIMIT
#define SYS_GETRLIMIT 0xffffffff81083580
#endif

#ifndef SYS_GETRLIMIT
#define SYS_GETRLIMIT 0xffffffff81083580
#endif

#ifndef SYS_PRLIMIT64
#define SYS_PRLIMIT64 0xffffffff810835e0
#endif

#ifndef SYS_PRLIMIT64
#define SYS_PRLIMIT64 0xffffffff810835e0
#endif

#ifndef SYS_SETRLIMIT
#define SYS_SETRLIMIT 0xffffffff810837f0
#endif

#ifndef SYS_SETRLIMIT
#define SYS_SETRLIMIT 0xffffffff810837f0
#endif

#ifndef GETRUSAGE
#define GETRUSAGE 0xffffffff81083840
#endif

#ifndef SYS_GETRUSAGE
#define SYS_GETRUSAGE 0xffffffff81083880
#endif

#ifndef SYS_GETRUSAGE
#define SYS_GETRUSAGE 0xffffffff81083880
#endif

#ifndef COMPAT_SYS_GETRUSAGE
#define COMPAT_SYS_GETRUSAGE 0xffffffff810838c0
#endif

#ifndef COMPAT_SYS_GETRUSAGE
#define COMPAT_SYS_GETRUSAGE 0xffffffff810838c0
#endif

#ifndef SYS_UMASK
#define SYS_UMASK 0xffffffff810838e0
#endif

#ifndef SYS_UMASK
#define SYS_UMASK 0xffffffff810838e0
#endif

#ifndef SYS_PRCTL
#define SYS_PRCTL 0xffffffff81083910
#endif

#ifndef SYS_PRCTL
#define SYS_PRCTL 0xffffffff81083910
#endif

#ifndef SYS_GETCPU
#define SYS_GETCPU 0xffffffff81083dd0
#endif

#ifndef SYS_GETCPU
#define SYS_GETCPU 0xffffffff81083dd0
#endif

#ifndef SYS_SYSINFO
#define SYS_SYSINFO 0xffffffff81083e40
#endif

#ifndef SYS_SYSINFO
#define SYS_SYSINFO 0xffffffff81083e40
#endif

#ifndef COMPAT_SYS_SYSINFO
#define COMPAT_SYS_SYSINFO 0xffffffff81083e60
#endif

#ifndef COMPAT_SYS_SYSINFO
#define COMPAT_SYS_SYSINFO 0xffffffff81083e60
#endif

#ifndef USERMODEHELPER_READ_UNLOCK
#define USERMODEHELPER_READ_UNLOCK 0xffffffff81083ec0
#endif

#ifndef USERMODEHELPER_READ_TRYLOCK
#define USERMODEHELPER_READ_TRYLOCK 0xffffffff81083ee0
#endif

#ifndef USERMODEHELPER_READ_LOCK_WAIT
#define USERMODEHELPER_READ_LOCK_WAIT 0xffffffff81083fd0
#endif

#ifndef CALL_USERMODEHELPER_EXEC
#define CALL_USERMODEHELPER_EXEC 0xffffffff81084300
#endif

#ifndef CALL_USERMODEHELPER_SETUP
#define CALL_USERMODEHELPER_SETUP 0xffffffff810845c0
#endif

#ifndef __REQUEST_MODULE
#define __REQUEST_MODULE 0xffffffff81084660
#endif

#ifndef CALL_USERMODEHELPER
#define CALL_USERMODEHELPER 0xffffffff81084900
#endif

#ifndef __USERMODEHELPER_SET_DISABLE_DEPTH
#define __USERMODEHELPER_SET_DISABLE_DEPTH 0xffffffff81084960
#endif

#ifndef __USERMODEHELPER_DISABLE
#define __USERMODEHELPER_DISABLE 0xffffffff810849a0
#endif

#ifndef WORKQUEUE_CONGESTED
#define WORKQUEUE_CONGESTED 0xffffffff81084b80
#endif

#ifndef WORK_BUSY
#define WORK_BUSY 0xffffffff810857b0
#endif

#ifndef DELAYED_WORK_TIMER_FN
#define DELAYED_WORK_TIMER_FN 0xffffffff810860c0
#endif

#ifndef QUEUE_WORK_ON
#define QUEUE_WORK_ON 0xffffffff81086290
#endif

#ifndef EXECUTE_IN_PROCESS_CONTEXT
#define EXECUTE_IN_PROCESS_CONTEXT 0xffffffff810863e0
#endif

#ifndef QUEUE_DELAYED_WORK_ON
#define QUEUE_DELAYED_WORK_ON 0xffffffff81086450
#endif

#ifndef MOD_DELAYED_WORK_ON
#define MOD_DELAYED_WORK_ON 0xffffffff81086610
#endif

#ifndef CANCEL_DELAYED_WORK
#define CANCEL_DELAYED_WORK 0xffffffff81086680
#endif

#ifndef FLUSH_WORKQUEUE
#define FLUSH_WORKQUEUE 0xffffffff81086950
#endif

#ifndef FLUSH_SCHEDULED_WORK
#define FLUSH_SCHEDULED_WORK 0xffffffff81086f00
#endif

#ifndef DRAIN_WORKQUEUE
#define DRAIN_WORKQUEUE 0xffffffff81086f20
#endif

#ifndef DESTROY_WORKQUEUE
#define DESTROY_WORKQUEUE 0xffffffff81087060
#endif

#ifndef WORKQUEUE_SET_MAX_ACTIVE
#define WORKQUEUE_SET_MAX_ACTIVE 0xffffffff81087770
#endif

#ifndef FLUSH_WORK
#define FLUSH_WORK 0xffffffff81087fd0
#endif

#ifndef WORK_ON_CPU
#define WORK_ON_CPU 0xffffffff81088140
#endif

#ifndef CANCEL_WORK_SYNC
#define CANCEL_WORK_SYNC 0xffffffff81088370
#endif

#ifndef CANCEL_DELAYED_WORK_SYNC
#define CANCEL_DELAYED_WORK_SYNC 0xffffffff81088390
#endif

#ifndef FLUSH_DELAYED_WORK
#define FLUSH_DELAYED_WORK 0xffffffff810883b0
#endif

#ifndef WQ_WORKER_WAKING_UP
#define WQ_WORKER_WAKING_UP 0xffffffff81088ba0
#endif

#ifndef WQ_WORKER_SLEEPING
#define WQ_WORKER_SLEEPING 0xffffffff81088c10
#endif

#ifndef SCHEDULE_ON_EACH_CPU
#define SCHEDULE_ON_EACH_CPU 0xffffffff81088cb0
#endif

#ifndef FREE_WORKQUEUE_ATTRS
#define FREE_WORKQUEUE_ATTRS 0xffffffff81088db0
#endif

#ifndef ALLOC_WORKQUEUE_ATTRS
#define ALLOC_WORKQUEUE_ATTRS 0xffffffff81088de0
#endif

#ifndef APPLY_WORKQUEUE_ATTRS
#define APPLY_WORKQUEUE_ATTRS 0xffffffff81089ab0
#endif

#ifndef CURRENT_IS_WORKQUEUE_RESCUER
#define CURRENT_IS_WORKQUEUE_RESCUER 0xffffffff8108a1c0
#endif

#ifndef SET_WORKER_DESC
#define SET_WORKER_DESC 0xffffffff8108a200
#endif

#ifndef PRINT_WORKER_INFO
#define PRINT_WORKER_INFO 0xffffffff8108a290
#endif

#ifndef SHOW_WORKQUEUE_STATE
#define SHOW_WORKQUEUE_STATE 0xffffffff8108a430
#endif

#ifndef FREEZE_WORKQUEUES_BEGIN
#define FREEZE_WORKQUEUES_BEGIN 0xffffffff8108a8e0
#endif

#ifndef FREEZE_WORKQUEUES_BUSY
#define FREEZE_WORKQUEUES_BUSY 0xffffffff8108a9b0
#endif

#ifndef THAW_WORKQUEUES
#define THAW_WORKQUEUES 0xffffffff8108aab0
#endif

#ifndef WORKQUEUE_SYSFS_REGISTER
#define WORKQUEUE_SYSFS_REGISTER 0xffffffff8108ab60
#endif

#ifndef __ALLOC_WORKQUEUE_KEY
#define __ALLOC_WORKQUEUE_KEY 0xffffffff8108acd0
#endif

#ifndef FIND_PID_NS
#define FIND_PID_NS 0xffffffff8108b1a0
#endif

#ifndef FIND_VPID
#define FIND_VPID 0xffffffff8108b230
#endif

#ifndef PID_TASK
#define PID_TASK 0xffffffff8108b270
#endif

#ifndef GET_TASK_PID
#define GET_TASK_PID 0xffffffff8108b2b0
#endif

#ifndef GET_PID_TASK
#define GET_PID_TASK 0xffffffff8108b2e0
#endif

#ifndef FIND_GET_PID
#define FIND_GET_PID 0xffffffff8108b320
#endif

#ifndef PID_NR_NS
#define PID_NR_NS 0xffffffff8108b340
#endif

#ifndef PID_VNR
#define PID_VNR 0xffffffff8108b380
#endif

#ifndef TASK_TGID_NR_NS
#define TASK_TGID_NR_NS 0xffffffff8108b3f0
#endif

#ifndef TASK_ACTIVE_PID_NS
#define TASK_ACTIVE_PID_NS 0xffffffff8108b440
#endif

#ifndef __TASK_PID_NR_NS
#define __TASK_PID_NR_NS 0xffffffff8108b470
#endif

#ifndef PUT_PID
#define PUT_PID 0xffffffff8108b510
#endif

#ifndef NEXT_PIDMAP
#define NEXT_PIDMAP 0xffffffff8108b5b0
#endif

#ifndef FREE_PID
#define FREE_PID 0xffffffff8108b650
#endif

#ifndef ALLOC_PID
#define ALLOC_PID 0xffffffff8108b840
#endif

#ifndef DISABLE_PID_ALLOCATION
#define DISABLE_PID_ALLOCATION 0xffffffff8108bd20
#endif

#ifndef ATTACH_PID
#define ATTACH_PID 0xffffffff8108bd50
#endif

#ifndef DETACH_PID
#define DETACH_PID 0xffffffff8108bda0
#endif

#ifndef CHANGE_PID
#define CHANGE_PID 0xffffffff8108bdc0
#endif

#ifndef TRANSFER_PID
#define TRANSFER_PID 0xffffffff8108be20
#endif

#ifndef FIND_TASK_BY_PID_NS
#define FIND_TASK_BY_PID_NS 0xffffffff8108be90
#endif

#ifndef FIND_TASK_BY_VPID
#define FIND_TASK_BY_VPID 0xffffffff8108bec0
#endif

#ifndef FIND_GE_PID
#define FIND_GE_PID 0xffffffff8108bf00
#endif

#ifndef TASK_WORK_ADD
#define TASK_WORK_ADD 0xffffffff8108bf40
#endif

#ifndef TASK_WORK_CANCEL
#define TASK_WORK_CANCEL 0xffffffff8108bfa0
#endif

#ifndef TASK_WORK_RUN
#define TASK_WORK_RUN 0xffffffff8108c010
#endif

#ifndef SEARCH_EXCEPTION_TABLES
#define SEARCH_EXCEPTION_TABLES 0xffffffff8108c100
#endif

#ifndef CORE_KERNEL_TEXT
#define CORE_KERNEL_TEXT 0xffffffff8108c140
#endif

#ifndef CORE_KERNEL_DATA
#define CORE_KERNEL_DATA 0xffffffff8108c180
#endif

#ifndef __KERNEL_TEXT_ADDRESS
#define __KERNEL_TEXT_ADDRESS 0xffffffff8108c1a0
#endif

#ifndef KERNEL_TEXT_ADDRESS
#define KERNEL_TEXT_ADDRESS 0xffffffff8108c220
#endif

#ifndef FUNC_PTR_IS_KERNEL_TEXT
#define FUNC_PTR_IS_KERNEL_TEXT 0xffffffff8108c280
#endif

#ifndef __KERNEL_PARAM_LOCK
#define __KERNEL_PARAM_LOCK 0xffffffff8108c3c0
#endif

#ifndef __KERNEL_PARAM_UNLOCK
#define __KERNEL_PARAM_UNLOCK 0xffffffff8108c3e0
#endif

#ifndef PARAM_SET_BYTE
#define PARAM_SET_BYTE 0xffffffff8108c400
#endif

#ifndef PARAM_GET_BYTE
#define PARAM_GET_BYTE 0xffffffff8108c420
#endif

#ifndef PARAM_GET_SHORT
#define PARAM_GET_SHORT 0xffffffff8108c450
#endif

#ifndef PARAM_GET_USHORT
#define PARAM_GET_USHORT 0xffffffff8108c480
#endif

#ifndef PARAM_GET_INT
#define PARAM_GET_INT 0xffffffff8108c4b0
#endif

#ifndef PARAM_GET_UINT
#define PARAM_GET_UINT 0xffffffff8108c4e0
#endif

#ifndef PARAM_GET_LONG
#define PARAM_GET_LONG 0xffffffff8108c510
#endif

#ifndef PARAM_GET_ULONG
#define PARAM_GET_ULONG 0xffffffff8108c540
#endif

#ifndef PARAM_GET_ULLONG
#define PARAM_GET_ULLONG 0xffffffff8108c570
#endif

#ifndef PARAM_GET_CHARP
#define PARAM_GET_CHARP 0xffffffff8108c5a0
#endif

#ifndef PARAM_SET_SHORT
#define PARAM_SET_SHORT 0xffffffff8108c5d0
#endif

#ifndef PARAM_SET_USHORT
#define PARAM_SET_USHORT 0xffffffff8108c5f0
#endif

#ifndef PARAM_SET_INT
#define PARAM_SET_INT 0xffffffff8108c610
#endif

#ifndef PARAM_SET_UINT
#define PARAM_SET_UINT 0xffffffff8108c630
#endif

#ifndef PARAM_SET_LONG
#define PARAM_SET_LONG 0xffffffff8108c650
#endif

#ifndef PARAM_SET_ULONG
#define PARAM_SET_ULONG 0xffffffff8108c670
#endif

#ifndef PARAM_SET_ULLONG
#define PARAM_SET_ULLONG 0xffffffff8108c690
#endif

#ifndef PARAM_SET_COPYSTRING
#define PARAM_SET_COPYSTRING 0xffffffff8108c6b0
#endif

#ifndef PARAM_SET_BOOL
#define PARAM_SET_BOOL 0xffffffff8108c880
#endif

#ifndef PARAM_SET_INVBOOL
#define PARAM_SET_INVBOOL 0xffffffff8108c8b0
#endif

#ifndef PARAM_SET_BINT
#define PARAM_SET_BINT 0xffffffff8108c8f0
#endif

#ifndef PARAM_GET_BOOL
#define PARAM_GET_BOOL 0xffffffff8108c930
#endif

#ifndef PARAM_GET_INVBOOL
#define PARAM_GET_INVBOOL 0xffffffff8108c960
#endif

#ifndef PARAM_GET_STRING
#define PARAM_GET_STRING 0xffffffff8108c990
#endif

#ifndef PARAM_SET_CHARP
#define PARAM_SET_CHARP 0xffffffff8108ca50
#endif

#ifndef PARAMEQN
#define PARAMEQN 0xffffffff8108cee0
#endif

#ifndef PARAMEQ
#define PARAMEQ 0xffffffff8108cf40
#endif

#ifndef PARSE_ARGS
#define PARSE_ARGS 0xffffffff8108cfc0
#endif

#ifndef MODULE_PARAM_SYSFS_SETUP
#define MODULE_PARAM_SYSFS_SETUP 0xffffffff8108d4c0
#endif

#ifndef MODULE_PARAM_SYSFS_REMOVE
#define MODULE_PARAM_SYSFS_REMOVE 0xffffffff8108d590
#endif

#ifndef DESTROY_PARAMS
#define DESTROY_PARAMS 0xffffffff8108d5d0
#endif

#ifndef __MODVER_VERSION_SHOW
#define __MODVER_VERSION_SHOW 0xffffffff8108d620
#endif

#ifndef KTHREAD_SHOULD_STOP
#define KTHREAD_SHOULD_STOP 0xffffffff8108d650
#endif

#ifndef __INIT_KTHREAD_WORKER
#define __INIT_KTHREAD_WORKER 0xffffffff8108d670
#endif

#ifndef KTHREAD_FREEZABLE_SHOULD_STOP
#define KTHREAD_FREEZABLE_SHOULD_STOP 0xffffffff8108d690
#endif

#ifndef KTHREAD_CREATE_ON_NODE
#define KTHREAD_CREATE_ON_NODE 0xffffffff8108d790
#endif

#ifndef QUEUE_KTHREAD_WORK
#define QUEUE_KTHREAD_WORK 0xffffffff8108da30
#endif

#ifndef FLUSH_KTHREAD_WORKER
#define FLUSH_KTHREAD_WORKER 0xffffffff8108dab0
#endif

#ifndef KTHREAD_BIND
#define KTHREAD_BIND 0xffffffff8108db90
#endif

#ifndef KTHREAD_STOP
#define KTHREAD_STOP 0xffffffff8108dc10
#endif

#ifndef KTHREAD_WORKER_FN
#define KTHREAD_WORKER_FN 0xffffffff8108dcf0
#endif

#ifndef FLUSH_KTHREAD_WORK
#define FLUSH_KTHREAD_WORK 0xffffffff8108dea0
#endif

#ifndef KTHREAD_SHOULD_PARK
#define KTHREAD_SHOULD_PARK 0xffffffff8108dfc0
#endif

#ifndef KTHREAD_DATA
#define KTHREAD_DATA 0xffffffff8108dff0
#endif

#ifndef PROBE_KTHREAD_DATA
#define PROBE_KTHREAD_DATA 0xffffffff8108e010
#endif

#ifndef KTHREAD_PARKME
#define KTHREAD_PARKME 0xffffffff8108e050
#endif

#ifndef TSK_FORK_GET_NODE
#define TSK_FORK_GET_NODE 0xffffffff8108e080
#endif

#ifndef KTHREAD_UNPARK
#define KTHREAD_UNPARK 0xffffffff8108e0a0
#endif

#ifndef KTHREAD_PARK
#define KTHREAD_PARK 0xffffffff8108e0d0
#endif

#ifndef KTHREAD_CREATE_ON_CPU
#define KTHREAD_CREATE_ON_CPU 0xffffffff8108e120
#endif

#ifndef KTHREADD
#define KTHREADD 0xffffffff8108e180
#endif

#ifndef SYS_NI_SYSCALL
#define SYS_NI_SYSCALL 0xffffffff8108e350
#endif

#ifndef COPY_NAMESPACES
#define COPY_NAMESPACES 0xffffffff8108e510
#endif

#ifndef FREE_NSPROXY
#define FREE_NSPROXY 0xffffffff8108e5a0
#endif

#ifndef UNSHARE_NSPROXY_NAMESPACES
#define UNSHARE_NSPROXY_NAMESPACES 0xffffffff8108e620
#endif

#ifndef SWITCH_TASK_NAMESPACES
#define SWITCH_TASK_NAMESPACES 0xffffffff8108e6e0
#endif

#ifndef EXIT_TASK_NAMESPACES
#define EXIT_TASK_NAMESPACES 0xffffffff8108e740
#endif

#ifndef SYS_SETNS
#define SYS_SETNS 0xffffffff8108e760
#endif

#ifndef SYS_SETNS
#define SYS_SETNS 0xffffffff8108e760
#endif

#ifndef __ATOMIC_NOTIFIER_CALL_CHAIN
#define __ATOMIC_NOTIFIER_CALL_CHAIN 0xffffffff8108e8b0
#endif

#ifndef ATOMIC_NOTIFIER_CALL_CHAIN
#define ATOMIC_NOTIFIER_CALL_CHAIN 0xffffffff8108e8d0
#endif

#ifndef RAW_NOTIFIER_CHAIN_REGISTER
#define RAW_NOTIFIER_CHAIN_REGISTER 0xffffffff8108e8f0
#endif

#ifndef RAW_NOTIFIER_CHAIN_UNREGISTER
#define RAW_NOTIFIER_CHAIN_UNREGISTER 0xffffffff8108e930
#endif

#ifndef __RAW_NOTIFIER_CALL_CHAIN
#define __RAW_NOTIFIER_CALL_CHAIN 0xffffffff8108e990
#endif

#ifndef RAW_NOTIFIER_CALL_CHAIN
#define RAW_NOTIFIER_CALL_CHAIN 0xffffffff8108e9b0
#endif

#ifndef NOTIFY_DIE
#define NOTIFY_DIE 0xffffffff8108e9d0
#endif

#ifndef ATOMIC_NOTIFIER_CHAIN_REGISTER
#define ATOMIC_NOTIFIER_CHAIN_REGISTER 0xffffffff8108ea10
#endif

#ifndef ATOMIC_NOTIFIER_CHAIN_UNREGISTER
#define ATOMIC_NOTIFIER_CHAIN_UNREGISTER 0xffffffff8108ea70
#endif

#ifndef UNREGISTER_DIE_NOTIFIER
#define UNREGISTER_DIE_NOTIFIER 0xffffffff8108eaf0
#endif

#ifndef BLOCKING_NOTIFIER_CHAIN_COND_REGISTER
#define BLOCKING_NOTIFIER_CHAIN_COND_REGISTER 0xffffffff8108eb10
#endif

#ifndef __BLOCKING_NOTIFIER_CALL_CHAIN
#define __BLOCKING_NOTIFIER_CALL_CHAIN 0xffffffff8108eb80
#endif

#ifndef BLOCKING_NOTIFIER_CALL_CHAIN
#define BLOCKING_NOTIFIER_CALL_CHAIN 0xffffffff8108ebe0
#endif

#ifndef __SRCU_NOTIFIER_CALL_CHAIN
#define __SRCU_NOTIFIER_CALL_CHAIN 0xffffffff8108ec00
#endif

#ifndef SRCU_NOTIFIER_CALL_CHAIN
#define SRCU_NOTIFIER_CALL_CHAIN 0xffffffff8108ec70
#endif

#ifndef REGISTER_DIE_NOTIFIER
#define REGISTER_DIE_NOTIFIER 0xffffffff8108ec90
#endif

#ifndef BLOCKING_NOTIFIER_CHAIN_REGISTER
#define BLOCKING_NOTIFIER_CHAIN_REGISTER 0xffffffff8108ecb0
#endif

#ifndef BLOCKING_NOTIFIER_CHAIN_UNREGISTER
#define BLOCKING_NOTIFIER_CHAIN_UNREGISTER 0xffffffff8108ed60
#endif

#ifndef SRCU_NOTIFIER_CHAIN_REGISTER
#define SRCU_NOTIFIER_CHAIN_REGISTER 0xffffffff8108ee40
#endif

#ifndef SRCU_NOTIFIER_CHAIN_UNREGISTER
#define SRCU_NOTIFIER_CHAIN_UNREGISTER 0xffffffff8108eef0
#endif

#ifndef SRCU_INIT_NOTIFIER_HEAD
#define SRCU_INIT_NOTIFIER_HEAD 0xffffffff8108efd0
#endif

#ifndef OVERRIDE_CREDS
#define OVERRIDE_CREDS 0xffffffff8108f310
#endif

#ifndef SET_SECURITY_OVERRIDE
#define SET_SECURITY_OVERRIDE 0xffffffff8108f410
#endif

#ifndef SET_SECURITY_OVERRIDE_FROM_CTX
#define SET_SECURITY_OVERRIDE_FROM_CTX 0xffffffff8108f430
#endif

#ifndef SET_CREATE_FILES_AS
#define SET_CREATE_FILES_AS 0xffffffff8108f470
#endif

#ifndef __PUT_CRED
#define __PUT_CRED 0xffffffff8108f490
#endif

#ifndef REVERT_CREDS
#define REVERT_CREDS 0xffffffff8108f500
#endif

#ifndef ABORT_CREDS
#define ABORT_CREDS 0xffffffff8108f550
#endif

#ifndef PREPARE_CREDS
#define PREPARE_CREDS 0xffffffff8108f590
#endif

#ifndef COMMIT_CREDS
#define COMMIT_CREDS 0xffffffff8108f6a0
#endif

#ifndef EXIT_CREDS
#define EXIT_CREDS 0xffffffff8108f8b0
#endif

#ifndef GET_TASK_CRED
#define GET_TASK_CRED 0xffffffff8108f910
#endif

#ifndef PREPARE_KERNEL_CRED
#define PREPARE_KERNEL_CRED 0xffffffff8108f960
#endif

#ifndef CRED_ALLOC_BLANK
#define CRED_ALLOC_BLANK 0xffffffff8108fa90
#endif

#ifndef PREPARE_EXEC_CREDS
#define PREPARE_EXEC_CREDS 0xffffffff8108faf0
#endif

#ifndef COPY_CREDS
#define COPY_CREDS 0xffffffff8108fb30
#endif

#ifndef EMERGENCY_RESTART
#define EMERGENCY_RESTART 0xffffffff8108fc70
#endif

#ifndef REGISTER_REBOOT_NOTIFIER
#define REGISTER_REBOOT_NOTIFIER 0xffffffff8108fc90
#endif

#ifndef UNREGISTER_REBOOT_NOTIFIER
#define UNREGISTER_REBOOT_NOTIFIER 0xffffffff8108fcb0
#endif

#ifndef REGISTER_RESTART_HANDLER
#define REGISTER_RESTART_HANDLER 0xffffffff8108fcd0
#endif

#ifndef UNREGISTER_RESTART_HANDLER
#define UNREGISTER_RESTART_HANDLER 0xffffffff8108fcf0
#endif

#ifndef ORDERLY_POWEROFF
#define ORDERLY_POWEROFF 0xffffffff8108fd10
#endif

#ifndef ORDERLY_REBOOT
#define ORDERLY_REBOOT 0xffffffff8108fd50
#endif

#ifndef KERNEL_RESTART_PREPARE
#define KERNEL_RESTART_PREPARE 0xffffffff8108fde0
#endif

#ifndef DO_KERNEL_RESTART
#define DO_KERNEL_RESTART 0xffffffff8108fe20
#endif

#ifndef MIGRATE_TO_REBOOT_CPU
#define MIGRATE_TO_REBOOT_CPU 0xffffffff8108fe50
#endif

#ifndef KERNEL_RESTART
#define KERNEL_RESTART 0xffffffff8108fec0
#endif

#ifndef KERNEL_HALT
#define KERNEL_HALT 0xffffffff8108ff80
#endif

#ifndef KERNEL_POWER_OFF
#define KERNEL_POWER_OFF 0xffffffff8108ffe0
#endif

#ifndef SYS_REBOOT
#define SYS_REBOOT 0xffffffff810902e0
#endif

#ifndef SYS_REBOOT
#define SYS_REBOOT 0xffffffff810902e0
#endif

#ifndef CTRL_ALT_DEL
#define CTRL_ALT_DEL 0xffffffff81090300
#endif

#ifndef ASYNC_SYNCHRONIZE_COOKIE_DOMAIN
#define ASYNC_SYNCHRONIZE_COOKIE_DOMAIN 0xffffffff81090510
#endif

#ifndef ASYNC_SYNCHRONIZE_FULL_DOMAIN
#define ASYNC_SYNCHRONIZE_FULL_DOMAIN 0xffffffff81090650
#endif

#ifndef ASYNC_SYNCHRONIZE_FULL
#define ASYNC_SYNCHRONIZE_FULL 0xffffffff81090670
#endif

#ifndef ASYNC_SYNCHRONIZE_COOKIE
#define ASYNC_SYNCHRONIZE_COOKIE 0xffffffff81090690
#endif

#ifndef ASYNC_SCHEDULE
#define ASYNC_SCHEDULE 0xffffffff81090830
#endif

#ifndef ASYNC_SCHEDULE_DOMAIN
#define ASYNC_SCHEDULE_DOMAIN 0xffffffff81090850
#endif

#ifndef ASYNC_UNREGISTER_DOMAIN
#define ASYNC_UNREGISTER_DOMAIN 0xffffffff81090870
#endif

#ifndef CURRENT_IS_ASYNC
#define CURRENT_IS_ASYNC 0xffffffff810908c0
#endif

#ifndef ADD_RANGE
#define ADD_RANGE 0xffffffff81090920
#endif

#ifndef ADD_RANGE_WITH_MERGE
#define ADD_RANGE_WITH_MERGE 0xffffffff81090950
#endif

#ifndef SUBTRACT_RANGE
#define SUBTRACT_RANGE 0xffffffff81090a70
#endif

#ifndef CLEAN_SORT_RANGE
#define CLEAN_SORT_RANGE 0xffffffff81090ba0
#endif

#ifndef SORT_RANGE
#define SORT_RANGE 0xffffffff81090cb0
#endif

#ifndef SMPBOOT_UNREGISTER_PERCPU_THREAD
#define SMPBOOT_UNREGISTER_PERCPU_THREAD 0xffffffff81090f70
#endif

#ifndef SMPBOOT_REGISTER_PERCPU_THREAD
#define SMPBOOT_REGISTER_PERCPU_THREAD 0xffffffff810910d0
#endif

#ifndef IDLE_THREAD_GET
#define IDLE_THREAD_GET 0xffffffff810911d0
#endif

#ifndef SMPBOOT_CREATE_THREADS
#define SMPBOOT_CREATE_THREADS 0xffffffff81091210
#endif

#ifndef SMPBOOT_UNPARK_THREADS
#define SMPBOOT_UNPARK_THREADS 0xffffffff810912b0
#endif

#ifndef SMPBOOT_PARK_THREADS
#define SMPBOOT_PARK_THREADS 0xffffffff81091310
#endif

#ifndef CPU_REPORT_STATE
#define CPU_REPORT_STATE 0xffffffff81091390
#endif

#ifndef CPU_CHECK_UP_PREPARE
#define CPU_CHECK_UP_PREPARE 0xffffffff810913b0
#endif

#ifndef CPU_SET_STATE_ONLINE
#define CPU_SET_STATE_ONLINE 0xffffffff81091400
#endif

#ifndef CPU_WAIT_DEATH
#define CPU_WAIT_DEATH 0xffffffff81091420
#endif

#ifndef CPU_REPORT_DEATH
#define CPU_REPORT_DEATH 0xffffffff81091540
#endif

#ifndef GROUPS_FREE
#define GROUPS_FREE 0xffffffff810915a0
#endif

#ifndef SET_GROUPS
#define SET_GROUPS 0xffffffff81091600
#endif

#ifndef GROUPS_ALLOC
#define GROUPS_ALLOC 0xffffffff81091790
#endif

#ifndef SET_CURRENT_GROUPS
#define SET_CURRENT_GROUPS 0xffffffff810918b0
#endif

#ifndef GROUPS_SEARCH
#define GROUPS_SEARCH 0xffffffff81091900
#endif

#ifndef IN_GROUP_P
#define IN_GROUP_P 0xffffffff81091970
#endif

#ifndef IN_EGROUP_P
#define IN_EGROUP_P 0xffffffff810919b0
#endif

#ifndef SYS_GETGROUPS
#define SYS_GETGROUPS 0xffffffff810919f0
#endif

#ifndef SYS_GETGROUPS
#define SYS_GETGROUPS 0xffffffff810919f0
#endif

#ifndef MAY_SETGROUPS
#define MAY_SETGROUPS 0xffffffff81091ae0
#endif

#ifndef SYS_SETGROUPS
#define SYS_SETGROUPS 0xffffffff81091b30
#endif

#ifndef SYS_SETGROUPS
#define SYS_SETGROUPS 0xffffffff81091b30
#endif

#ifndef KICK_PROCESS
#define KICK_PROCESS 0xffffffff81091d50
#endif

#ifndef PREEMPT_NOTIFIER_REGISTER
#define PREEMPT_NOTIFIER_REGISTER 0xffffffff81091da0
#endif

#ifndef PREEMPT_NOTIFIER_UNREGISTER
#define PREEMPT_NOTIFIER_UNREGISTER 0xffffffff81091de0
#endif

#ifndef SINGLE_TASK_RUNNING
#define SINGLE_TASK_RUNNING 0xffffffff81091e20
#endif

#ifndef SCHED_SETSCHEDULER
#define SCHED_SETSCHEDULER 0xffffffff81096a10
#endif

#ifndef SCHED_SETATTR
#define SCHED_SETATTR 0xffffffff81096ad0
#endif

#ifndef START_BANDWIDTH_TIMER
#define START_BANDWIDTH_TIMER 0xffffffff81096af0
#endif

#ifndef UPDATE_RQ_CLOCK
#define UPDATE_RQ_CLOCK 0xffffffff81096b50
#endif

#ifndef HRTICK_START
#define HRTICK_START 0xffffffff81096b80
#endif

#ifndef RESCHED_CURR
#define RESCHED_CURR 0xffffffff81096c10
#endif

#ifndef SET_USER_NICE
#define SET_USER_NICE 0xffffffff81096ce0
#endif

#ifndef RESCHED_CPU
#define RESCHED_CPU 0xffffffff81096f00
#endif

#ifndef GET_NOHZ_TIMER_TARGET
#define GET_NOHZ_TIMER_TARGET 0xffffffff81096f70
#endif

#ifndef WAKE_UP_NOHZ_CPU
#define WAKE_UP_NOHZ_CPU 0xffffffff81097080
#endif

#ifndef SCHED_AVG_UPDATE
#define SCHED_AVG_UPDATE 0xffffffff81097130
#endif

#ifndef WALK_TG_TREE_FROM
#define WALK_TG_TREE_FROM 0xffffffff81097180
#endif

#ifndef TG_NOP
#define TG_NOP 0xffffffff81097250
#endif

#ifndef ACTIVATE_TASK
#define ACTIVATE_TASK 0xffffffff81097260
#endif

#ifndef DEACTIVATE_TASK
#define DEACTIVATE_TASK 0xffffffff81097290
#endif

#ifndef SCHED_SET_STOP_TASK
#define SCHED_SET_STOP_TASK 0xffffffff810972c0
#endif

#ifndef TASK_CURR
#define TASK_CURR 0xffffffff81097350
#endif

#ifndef CHECK_PREEMPT_CURR
#define CHECK_PREEMPT_CURR 0xffffffff81097380
#endif

#ifndef __COND_RESCHED_LOCK
#define __COND_RESCHED_LOCK 0xffffffff810974f0
#endif

#ifndef SET_TASK_CPU
#define SET_TASK_CPU 0xffffffff81097590
#endif

#ifndef MIGRATE_SWAP
#define MIGRATE_SWAP 0xffffffff81097a70
#endif

#ifndef WAIT_TASK_INACTIVE
#define WAIT_TASK_INACTIVE 0xffffffff81097b90
#endif

#ifndef SCHED_TTWU_PENDING
#define SCHED_TTWU_PENDING 0xffffffff81097d80
#endif

#ifndef SCHEDULER_IPI
#define SCHEDULER_IPI 0xffffffff81097e30
#endif

#ifndef WAKE_UP_IF_IDLE
#define WAKE_UP_IF_IDLE 0xffffffff81097f90
#endif

#ifndef CPUS_SHARE_CACHE
#define CPUS_SHARE_CACHE 0xffffffff81098060
#endif

#ifndef __DL_CLEAR_PARAMS
#define __DL_CLEAR_PARAMS 0xffffffff81098090
#endif

#ifndef SET_NUMABALANCING_STATE
#define SET_NUMABALANCING_STATE 0xffffffff810980f0
#endif

#ifndef SYSCTL_NUMA_BALANCING
#define SYSCTL_NUMA_BALANCING 0xffffffff81098120
#endif

#ifndef SCHED_FORK
#define SCHED_FORK 0xffffffff81098270
#endif

#ifndef TO_RATIO
#define TO_RATIO 0xffffffff81098490
#endif

#ifndef DL_BW_OF
#define DL_BW_OF 0xffffffff810984c0
#endif

#ifndef SCHEDULE_TAIL
#define SCHEDULE_TAIL 0xffffffff810984f0
#endif

#ifndef NR_RUNNING
#define NR_RUNNING 0xffffffff81098590
#endif

#ifndef NR_CONTEXT_SWITCHES
#define NR_CONTEXT_SWITCHES 0xffffffff810985f0
#endif

#ifndef NR_IOWAIT
#define NR_IOWAIT 0xffffffff81098650
#endif

#ifndef NR_IOWAIT_CPU
#define NR_IOWAIT_CPU 0xffffffff810986c0
#endif

#ifndef GET_IOWAIT_LOAD
#define GET_IOWAIT_LOAD 0xffffffff810986e0
#endif

#ifndef SCHED_EXEC
#define SCHED_EXEC 0xffffffff81098710
#endif

#ifndef TASK_SCHED_RUNTIME
#define TASK_SCHED_RUNTIME 0xffffffff810987c0
#endif

#ifndef SCHEDULER_TICK
#define SCHEDULER_TICK 0xffffffff810988e0
#endif

#ifndef GET_PARENT_IP
#define GET_PARENT_IP 0xffffffff810989b0
#endif

#ifndef RT_MUTEX_SETPRIO
#define RT_MUTEX_SETPRIO 0xffffffff810989d0
#endif

#ifndef CAN_NICE
#define CAN_NICE 0xffffffff81098d20
#endif

#ifndef SYS_NICE
#define SYS_NICE 0xffffffff81098d60
#endif

#ifndef SYS_NICE
#define SYS_NICE 0xffffffff81098d60
#endif

#ifndef TASK_PRIO
#define TASK_PRIO 0xffffffff81098e30
#endif

#ifndef IDLE_CPU
#define IDLE_CPU 0xffffffff81098e40
#endif

#ifndef IDLE_TASK
#define IDLE_TASK 0xffffffff81098e90
#endif

#ifndef SCHED_SETSCHEDULER_NOCHECK
#define SCHED_SETSCHEDULER_NOCHECK 0xffffffff81098eb0
#endif

#ifndef SYS_SCHED_SETSCHEDULER
#define SYS_SCHED_SETSCHEDULER 0xffffffff81098ed0
#endif

#ifndef SYS_SCHED_SETSCHEDULER
#define SYS_SCHED_SETSCHEDULER 0xffffffff81098ed0
#endif

#ifndef SYS_SCHED_SETPARAM
#define SYS_SCHED_SETPARAM 0xffffffff81098f00
#endif

#ifndef SYS_SCHED_SETPARAM
#define SYS_SCHED_SETPARAM 0xffffffff81098f00
#endif

#ifndef SYS_SCHED_SETATTR
#define SYS_SCHED_SETATTR 0xffffffff81098f20
#endif

#ifndef SYS_SCHED_SETATTR
#define SYS_SCHED_SETATTR 0xffffffff81098f20
#endif

#ifndef SYS_SCHED_GETSCHEDULER
#define SYS_SCHED_GETSCHEDULER 0xffffffff810990a0
#endif

#ifndef SYS_SCHED_GETSCHEDULER
#define SYS_SCHED_GETSCHEDULER 0xffffffff810990a0
#endif

#ifndef SYS_SCHED_GETPARAM
#define SYS_SCHED_GETPARAM 0xffffffff81099110
#endif

#ifndef SYS_SCHED_GETPARAM
#define SYS_SCHED_GETPARAM 0xffffffff81099110
#endif

#ifndef SYS_SCHED_GETATTR
#define SYS_SCHED_GETATTR 0xffffffff810991e0
#endif

#ifndef SYS_SCHED_GETATTR
#define SYS_SCHED_GETATTR 0xffffffff810991e0
#endif

#ifndef SCHED_GETAFFINITY
#define SCHED_GETAFFINITY 0xffffffff810993a0
#endif

#ifndef SYS_SCHED_GETAFFINITY
#define SYS_SCHED_GETAFFINITY 0xffffffff81099440
#endif

#ifndef SYS_SCHED_GETAFFINITY
#define SYS_SCHED_GETAFFINITY 0xffffffff81099440
#endif

#ifndef SYS_SCHED_YIELD
#define SYS_SCHED_YIELD 0xffffffff810994c0
#endif

#ifndef SYS_SCHED_GET_PRIORITY_MAX
#define SYS_SCHED_GET_PRIORITY_MAX 0xffffffff81099510
#endif

#ifndef SYS_SCHED_GET_PRIORITY_MAX
#define SYS_SCHED_GET_PRIORITY_MAX 0xffffffff81099510
#endif

#ifndef SYS_SCHED_GET_PRIORITY_MIN
#define SYS_SCHED_GET_PRIORITY_MIN 0xffffffff81099550
#endif

#ifndef SYS_SCHED_GET_PRIORITY_MIN
#define SYS_SCHED_GET_PRIORITY_MIN 0xffffffff81099550
#endif

#ifndef SYS_SCHED_RR_GET_INTERVAL
#define SYS_SCHED_RR_GET_INTERVAL 0xffffffff81099590
#endif

#ifndef SYS_SCHED_RR_GET_INTERVAL
#define SYS_SCHED_RR_GET_INTERVAL 0xffffffff81099590
#endif

#ifndef SCHED_SHOW_TASK
#define SCHED_SHOW_TASK 0xffffffff81099700
#endif

#ifndef SHOW_STATE_FILTER
#define SHOW_STATE_FILTER 0xffffffff81099820
#endif

#ifndef INIT_IDLE_BOOTUP_TASK
#define INIT_IDLE_BOOTUP_TASK 0xffffffff81099900
#endif

#ifndef CPUSET_CPUMASK_CAN_SHRINK
#define CPUSET_CPUMASK_CAN_SHRINK 0xffffffff81099910
#endif

#ifndef TASK_CAN_ATTACH
#define TASK_CAN_ATTACH 0xffffffff810999d0
#endif

#ifndef DO_SET_CPUS_ALLOWED
#define DO_SET_CPUS_ALLOWED 0xffffffff81099b40
#endif

#ifndef WAKE_UP_PROCESS
#define WAKE_UP_PROCESS 0xffffffff8109a350
#endif

#ifndef WAKE_UP_STATE
#define WAKE_UP_STATE 0xffffffff8109a3a0
#endif

#ifndef DEFAULT_WAKE_FUNCTION
#define DEFAULT_WAKE_FUNCTION 0xffffffff8109a3c0
#endif

#ifndef WAKE_UP_NEW_TASK
#define WAKE_UP_NEW_TASK 0xffffffff8109a3e0
#endif

#ifndef INIT_IDLE
#define INIT_IDLE 0xffffffff8109a580
#endif

#ifndef SET_CPUS_ALLOWED_PTR
#define SET_CPUS_ALLOWED_PTR 0xffffffff8109a6b0
#endif

#ifndef SCHED_SETAFFINITY
#define SCHED_SETAFFINITY 0xffffffff8109a880
#endif

#ifndef SYS_SCHED_SETAFFINITY
#define SYS_SCHED_SETAFFINITY 0xffffffff8109aaa0
#endif

#ifndef SYS_SCHED_SETAFFINITY
#define SYS_SCHED_SETAFFINITY 0xffffffff8109aaa0
#endif

#ifndef MIGRATE_TASK_TO
#define MIGRATE_TASK_TO 0xffffffff8109ab10
#endif

#ifndef SCHED_SETNUMA
#define SCHED_SETNUMA 0xffffffff8109abc0
#endif

#ifndef IDLE_TASK_EXIT
#define IDLE_TASK_EXIT 0xffffffff8109ad10
#endif

#ifndef GROUP_BALANCE_CPU
#define GROUP_BALANCE_CPU 0xffffffff8109aed0
#endif

#ifndef SET_SCHED_TOPOLOGY
#define SET_SCHED_TOPOLOGY 0xffffffff8109af00
#endif

#ifndef FIND_NUMA_DISTANCE
#define FIND_NUMA_DISTANCE 0xffffffff8109af10
#endif

#ifndef BUILD_SCHED_DOMAIN
#define BUILD_SCHED_DOMAIN 0xffffffff8109af70
#endif

#ifndef ALLOC_SCHED_DOMAINS
#define ALLOC_SCHED_DOMAINS 0xffffffff8109bde0
#endif

#ifndef FREE_SCHED_DOMAINS
#define FREE_SCHED_DOMAINS 0xffffffff8109be00
#endif

#ifndef PARTITION_SCHED_DOMAINS
#define PARTITION_SCHED_DOMAINS 0xffffffff8109be20
#endif

#ifndef IN_SCHED_FUNCTIONS
#define IN_SCHED_FUNCTIONS 0xffffffff8109c390
#endif

#ifndef NORMALIZE_RT_TASKS
#define NORMALIZE_RT_TASKS 0xffffffff8109c3d0
#endif

#ifndef SCHED_CREATE_GROUP
#define SCHED_CREATE_GROUP 0xffffffff8109c650
#endif

#ifndef SCHED_ONLINE_GROUP
#define SCHED_ONLINE_GROUP 0xffffffff8109c710
#endif

#ifndef SCHED_DESTROY_GROUP
#define SCHED_DESTROY_GROUP 0xffffffff8109c810
#endif

#ifndef SCHED_OFFLINE_GROUP
#define SCHED_OFFLINE_GROUP 0xffffffff8109c830
#endif

#ifndef SCHED_MOVE_TASK
#define SCHED_MOVE_TASK 0xffffffff8109c910
#endif

#ifndef SCHED_RT_HANDLER
#define SCHED_RT_HANDLER 0xffffffff8109cb80
#endif

#ifndef SCHED_RR_HANDLER
#define SCHED_RR_HANDLER 0xffffffff8109ce80
#endif

#ifndef DUMP_CPU_TASK
#define DUMP_CPU_TASK 0xffffffff8109cf00
#endif

#ifndef GET_AVENRUN
#define GET_AVENRUN 0xffffffff8109d0c0
#endif

#ifndef CALC_LOAD_FOLD_ACTIVE
#define CALC_LOAD_FOLD_ACTIVE 0xffffffff8109d100
#endif

#ifndef CALC_LOAD_ENTER_IDLE
#define CALC_LOAD_ENTER_IDLE 0xffffffff8109d140
#endif

#ifndef CALC_LOAD_EXIT_IDLE
#define CALC_LOAD_EXIT_IDLE 0xffffffff8109d1b0
#endif

#ifndef CALC_GLOBAL_LOAD
#define CALC_GLOBAL_LOAD 0xffffffff8109d210
#endif

#ifndef UPDATE_IDLE_CPU_LOAD
#define UPDATE_IDLE_CPU_LOAD 0xffffffff8109d450
#endif

#ifndef UPDATE_CPU_LOAD_NOHZ
#define UPDATE_CPU_LOAD_NOHZ 0xffffffff8109d490
#endif

#ifndef UPDATE_CPU_LOAD_ACTIVE
#define UPDATE_CPU_LOAD_ACTIVE 0xffffffff8109d4f0
#endif

#ifndef SCHED_CLOCK_STABLE
#define SCHED_CLOCK_STABLE 0xffffffff8109d650
#endif

#ifndef SET_SCHED_CLOCK_STABLE
#define SET_SCHED_CLOCK_STABLE 0xffffffff8109d670
#endif

#ifndef CLEAR_SCHED_CLOCK_STABLE
#define CLEAR_SCHED_CLOCK_STABLE 0xffffffff8109d6a0
#endif

#ifndef SCHED_CLOCK_INIT
#define SCHED_CLOCK_INIT 0xffffffff8109d6e0
#endif

#ifndef SCHED_CLOCK_CPU
#define SCHED_CLOCK_CPU 0xffffffff8109d780
#endif

#ifndef SCHED_CLOCK_IDLE_SLEEP_EVENT
#define SCHED_CLOCK_IDLE_SLEEP_EVENT 0xffffffff8109d820
#endif

#ifndef CPU_CLOCK
#define CPU_CLOCK 0xffffffff8109d830
#endif

#ifndef LOCAL_CLOCK
#define LOCAL_CLOCK 0xffffffff8109d850
#endif

#ifndef SCHED_CLOCK_TICK
#define SCHED_CLOCK_TICK 0xffffffff8109d870
#endif

#ifndef SCHED_CLOCK_IDLE_WAKEUP_EVENT
#define SCHED_CLOCK_IDLE_WAKEUP_EVENT 0xffffffff8109d900
#endif

#ifndef ACCOUNT_USER_TIME
#define ACCOUNT_USER_TIME 0xffffffff8109daa0
#endif

#ifndef ACCOUNT_SYSTEM_TIME
#define ACCOUNT_SYSTEM_TIME 0xffffffff8109db30
#endif

#ifndef ACCOUNT_STEAL_TIME
#define ACCOUNT_STEAL_TIME 0xffffffff8109dca0
#endif

#ifndef ACCOUNT_IDLE_TIME
#define ACCOUNT_IDLE_TIME 0xffffffff8109dcc0
#endif

#ifndef THREAD_GROUP_CPUTIME
#define THREAD_GROUP_CPUTIME 0xffffffff8109dd00
#endif

#ifndef ACCOUNT_PROCESS_TICK
#define ACCOUNT_PROCESS_TICK 0xffffffff8109de70
#endif

#ifndef ACCOUNT_STEAL_TICKS
#define ACCOUNT_STEAL_TICKS 0xffffffff8109dfb0
#endif

#ifndef ACCOUNT_IDLE_TICKS
#define ACCOUNT_IDLE_TICKS 0xffffffff8109dfd0
#endif

#ifndef TASK_CPUTIME_ADJUSTED
#define TASK_CPUTIME_ADJUSTED 0xffffffff8109e010
#endif

#ifndef THREAD_GROUP_CPUTIME_ADJUSTED
#define THREAD_GROUP_CPUTIME_ADJUSTED 0xffffffff8109e060
#endif

#ifndef TASK_NUMA_WORK
#define TASK_NUMA_WORK 0xffffffff8109e9f0
#endif

#ifndef SCHED_INIT_GRANULARITY
#define SCHED_INIT_GRANULARITY 0xffffffff810a4de0
#endif

#ifndef __PICK_FIRST_ENTITY
#define __PICK_FIRST_ENTITY 0xffffffff810a4e00
#endif

#ifndef __PICK_LAST_ENTITY
#define __PICK_LAST_ENTITY 0xffffffff810a4e20
#endif

#ifndef SCHED_PROC_UPDATE_HANDLER
#define SCHED_PROC_UPDATE_HANDLER 0xffffffff810a4e50
#endif

#ifndef INIT_TASK_RUNNABLE_AVERAGE
#define INIT_TASK_RUNNABLE_AVERAGE 0xffffffff810a4ed0
#endif

#ifndef TASK_NUMA_GROUP_ID
#define TASK_NUMA_GROUP_ID 0xffffffff810a4f30
#endif

#ifndef SHOULD_NUMA_MIGRATE_MEMORY
#define SHOULD_NUMA_MIGRATE_MEMORY 0xffffffff810a4f50
#endif

#ifndef TASK_NUMA_FREE
#define TASK_NUMA_FREE 0xffffffff810a5090
#endif

#ifndef TASK_NUMA_FAULT
#define TASK_NUMA_FAULT 0xffffffff810a5160
#endif

#ifndef TASK_TICK_NUMA
#define TASK_TICK_NUMA 0xffffffff810a5e60
#endif

#ifndef IDLE_ENTER_FAIR
#define IDLE_ENTER_FAIR 0xffffffff810a6690
#endif

#ifndef IDLE_EXIT_FAIR
#define IDLE_EXIT_FAIR 0xffffffff810a68e0
#endif

#ifndef INIT_CFS_BANDWIDTH
#define INIT_CFS_BANDWIDTH 0xffffffff810a6b20
#endif

#ifndef UPDATE_GROUP_CAPACITY
#define UPDATE_GROUP_CAPACITY 0xffffffff810a6b60
#endif

#ifndef SET_CPU_SD_STATE_IDLE
#define SET_CPU_SD_STATE_IDLE 0xffffffff810a8d60
#endif

#ifndef NOHZ_BALANCE_ENTER_IDLE
#define NOHZ_BALANCE_ENTER_IDLE 0xffffffff810a8db0
#endif

#ifndef UPDATE_MAX_INTERVAL
#define UPDATE_MAX_INTERVAL 0xffffffff810a8e20
#endif

#ifndef TRIGGER_LOAD_BALANCE
#define TRIGGER_LOAD_BALANCE 0xffffffff810a8e60
#endif

#ifndef INIT_CFS_RQ
#define INIT_CFS_RQ 0xffffffff810a9090
#endif

#ifndef FREE_FAIR_SCHED_GROUP
#define FREE_FAIR_SCHED_GROUP 0xffffffff810a90c0
#endif

#ifndef UNREGISTER_FAIR_SCHED_GROUP
#define UNREGISTER_FAIR_SCHED_GROUP 0xffffffff810a9160
#endif

#ifndef INIT_TG_CFS_ENTRY
#define INIT_TG_CFS_ENTRY 0xffffffff810a9210
#endif

#ifndef ALLOC_FAIR_SCHED_GROUP
#define ALLOC_FAIR_SCHED_GROUP 0xffffffff810a92a0
#endif

#ifndef SCHED_GROUP_SET_SHARES
#define SCHED_GROUP_SET_SHARES 0xffffffff810a9440
#endif

#ifndef PRINT_CFS_STATS
#define PRINT_CFS_STATS 0xffffffff810a9560
#endif

#ifndef INIT_RT_BANDWIDTH
#define INIT_RT_BANDWIDTH 0xffffffff810ab7d0
#endif

#ifndef INIT_RT_RQ
#define INIT_RT_RQ 0xffffffff810ab810
#endif

#ifndef FREE_RT_SCHED_GROUP
#define FREE_RT_SCHED_GROUP 0xffffffff810ab8f0
#endif

#ifndef ALLOC_RT_SCHED_GROUP
#define ALLOC_RT_SCHED_GROUP 0xffffffff810ab900
#endif

#ifndef SCHED_RT_BANDWIDTH_ACCOUNT
#define SCHED_RT_BANDWIDTH_ACCOUNT 0xffffffff810ab910
#endif

#ifndef PRINT_RT_STATS
#define PRINT_RT_STATS 0xffffffff810ab940
#endif

#ifndef PICK_NEXT_TASK_DL
#define PICK_NEXT_TASK_DL 0xffffffff810ad260
#endif

#ifndef INIT_DL_BANDWIDTH
#define INIT_DL_BANDWIDTH 0xffffffff810ad6e0
#endif

#ifndef INIT_DL_BW
#define INIT_DL_BW 0xffffffff810ad700
#endif

#ifndef INIT_DL_RQ
#define INIT_DL_RQ 0xffffffff810ad770
#endif

#ifndef INIT_DL_TASK_TIMER
#define INIT_DL_TASK_TIMER 0xffffffff810ad7b0
#endif

#ifndef INIT_SCHED_DL_CLASS
#define INIT_SCHED_DL_CLASS 0xffffffff810ad7e0
#endif

#ifndef PRINT_DL_STATS
#define PRINT_DL_STATS 0xffffffff810ad860
#endif

#ifndef __INIT_WAITQUEUE_HEAD
#define __INIT_WAITQUEUE_HEAD 0xffffffff810ada60
#endif

#ifndef __WAKE_UP_LOCKED
#define __WAKE_UP_LOCKED 0xffffffff810adb10
#endif

#ifndef __WAKE_UP_LOCKED_KEY
#define __WAKE_UP_LOCKED_KEY 0xffffffff810adb30
#endif

#ifndef BIT_WAITQUEUE
#define BIT_WAITQUEUE 0xffffffff810adb50
#endif

#ifndef ADD_WAIT_QUEUE
#define ADD_WAIT_QUEUE 0xffffffff810adbf0
#endif

#ifndef ADD_WAIT_QUEUE_EXCLUSIVE
#define ADD_WAIT_QUEUE_EXCLUSIVE 0xffffffff810adc40
#endif

#ifndef REMOVE_WAIT_QUEUE
#define REMOVE_WAIT_QUEUE 0xffffffff810adc90
#endif

#ifndef __WAKE_UP
#define __WAKE_UP 0xffffffff810adcf0
#endif

#ifndef __WAKE_UP_BIT
#define __WAKE_UP_BIT 0xffffffff810add40
#endif

#ifndef WAKE_UP_BIT
#define WAKE_UP_BIT 0xffffffff810add90
#endif

#ifndef WAKE_UP_ATOMIC_T
#define WAKE_UP_ATOMIC_T 0xffffffff810addc0
#endif

#ifndef PREPARE_TO_WAIT
#define PREPARE_TO_WAIT 0xffffffff810addf0
#endif

#ifndef PREPARE_TO_WAIT_EXCLUSIVE
#define PREPARE_TO_WAIT_EXCLUSIVE 0xffffffff810ade70
#endif

#ifndef FINISH_WAIT
#define FINISH_WAIT 0xffffffff810adef0
#endif

#ifndef ABORT_EXCLUSIVE_WAIT
#define ABORT_EXCLUSIVE_WAIT 0xffffffff810adf60
#endif

#ifndef __WAKE_UP_SYNC_KEY
#define __WAKE_UP_SYNC_KEY 0xffffffff810ae000
#endif

#ifndef __WAKE_UP_SYNC
#define __WAKE_UP_SYNC 0xffffffff810ae060
#endif

#ifndef WOKEN_WAKE_FUNCTION
#define WOKEN_WAKE_FUNCTION 0xffffffff810ae080
#endif

#ifndef WAIT_WOKEN
#define WAIT_WOKEN 0xffffffff810ae0a0
#endif

#ifndef AUTOREMOVE_WAKE_FUNCTION
#define AUTOREMOVE_WAKE_FUNCTION 0xffffffff810ae130
#endif

#ifndef WAKE_BIT_FUNCTION
#define WAKE_BIT_FUNCTION 0xffffffff810ae160
#endif

#ifndef PREPARE_TO_WAIT_EVENT
#define PREPARE_TO_WAIT_EVENT 0xffffffff810ae1e0
#endif

#ifndef COMPLETE
#define COMPLETE 0xffffffff810ae2d0
#endif

#ifndef COMPLETE_ALL
#define COMPLETE_ALL 0xffffffff810ae310
#endif

#ifndef COMPLETION_DONE
#define COMPLETION_DONE 0xffffffff810ae350
#endif

#ifndef TRY_WAIT_FOR_COMPLETION
#define TRY_WAIT_FOR_COMPLETION 0xffffffff810ae3a0
#endif

#ifndef CPU_IDLE_POLL_CTRL
#define CPU_IDLE_POLL_CTRL 0xffffffff810ae410
#endif

#ifndef CPU_STARTUP_ENTRY
#define CPU_STARTUP_ENTRY 0xffffffff810ae4c0
#endif

#ifndef CPUPRI_FIND
#define CPUPRI_FIND 0xffffffff810ae8f0
#endif

#ifndef CPUPRI_SET
#define CPUPRI_SET 0xffffffff810ae9e0
#endif

#ifndef CPUPRI_INIT
#define CPUPRI_INIT 0xffffffff810aea90
#endif

#ifndef CPUPRI_CLEANUP
#define CPUPRI_CLEANUP 0xffffffff810aebb0
#endif

#ifndef CPUDL_FIND
#define CPUDL_FIND 0xffffffff810aedd0
#endif

#ifndef CPUDL_SET
#define CPUDL_SET 0xffffffff810aeea0
#endif

#ifndef CPUDL_SET_FREECPU
#define CPUDL_SET_FREECPU 0xffffffff810af070
#endif

#ifndef CPUDL_CLEAR_FREECPU
#define CPUDL_CLEAR_FREECPU 0xffffffff810af080
#endif

#ifndef CPUDL_INIT
#define CPUDL_INIT 0xffffffff810af090
#endif

#ifndef CPUDL_CLEANUP
#define CPUDL_CLEANUP 0xffffffff810af190
#endif

#ifndef SCHED_AUTOGROUP_DETACH
#define SCHED_AUTOGROUP_DETACH 0xffffffff810af340
#endif

#ifndef SCHED_AUTOGROUP_CREATE_ATTACH
#define SCHED_AUTOGROUP_CREATE_ATTACH 0xffffffff810af360
#endif

#ifndef AUTOGROUP_FREE
#define AUTOGROUP_FREE 0xffffffff810af4c0
#endif

#ifndef TASK_WANTS_AUTOGROUP
#define TASK_WANTS_AUTOGROUP 0xffffffff810af4e0
#endif

#ifndef SCHED_AUTOGROUP_FORK
#define SCHED_AUTOGROUP_FORK 0xffffffff810af510
#endif

#ifndef SCHED_AUTOGROUP_EXIT
#define SCHED_AUTOGROUP_EXIT 0xffffffff810af5f0
#endif

#ifndef PROC_SCHED_AUTOGROUP_SET_NICE
#define PROC_SCHED_AUTOGROUP_SET_NICE 0xffffffff810af620
#endif

#ifndef PROC_SCHED_AUTOGROUP_SHOW_TASK
#define PROC_SCHED_AUTOGROUP_SHOW_TASK 0xffffffff810af820
#endif

#ifndef AUTOGROUP_PATH
#define AUTOGROUP_PATH 0xffffffff810af980
#endif

#ifndef PRINT_CFS_RQ
#define PRINT_CFS_RQ 0xffffffff810b0b50
#endif

#ifndef PRINT_RT_RQ
#define PRINT_RT_RQ 0xffffffff810b1890
#endif

#ifndef PRINT_DL_RQ
#define PRINT_DL_RQ 0xffffffff810b1ae0
#endif

#ifndef SYSRQ_SCHED_DEBUG_SHOW
#define SYSRQ_SCHED_DEBUG_SHOW 0xffffffff810b1b60
#endif

#ifndef PROC_SCHED_SHOW_TASK
#define PROC_SCHED_SHOW_TASK 0xffffffff810b1bb0
#endif

#ifndef PROC_SCHED_SET_TASK
#define PROC_SCHED_SET_TASK 0xffffffff810b24d0
#endif

#ifndef CPUACCT_CHARGE
#define CPUACCT_CHARGE 0xffffffff810b2830
#endif

#ifndef CPUACCT_ACCOUNT_FIELD
#define CPUACCT_ACCOUNT_FIELD 0xffffffff810b2870
#endif

#ifndef __MUTEX_INIT
#define __MUTEX_INIT 0xffffffff810b28c0
#endif

#ifndef ATOMIC_DEC_AND_MUTEX_LOCK
#define ATOMIC_DEC_AND_MUTEX_LOCK 0xffffffff810b2b40
#endif

#ifndef DOWN_TRYLOCK
#define DOWN_TRYLOCK 0xffffffff810b2bb0
#endif

#ifndef DOWN
#define DOWN 0xffffffff810b2bf0
#endif

#ifndef UP
#define UP 0xffffffff810b2c50
#endif

#ifndef DOWN_KILLABLE
#define DOWN_KILLABLE 0xffffffff810b2cb0
#endif

#ifndef DOWN_TIMEOUT
#define DOWN_TIMEOUT 0xffffffff810b2d10
#endif

#ifndef DOWN_INTERRUPTIBLE
#define DOWN_INTERRUPTIBLE 0xffffffff810b2d60
#endif

#ifndef DOWN_READ_TRYLOCK
#define DOWN_READ_TRYLOCK 0xffffffff810b2dc0
#endif

#ifndef DOWN_WRITE_TRYLOCK
#define DOWN_WRITE_TRYLOCK 0xffffffff810b2de0
#endif

#ifndef UP_READ
#define UP_READ 0xffffffff810b2e20
#endif

#ifndef UP_WRITE
#define UP_WRITE 0xffffffff810b2e40
#endif

#ifndef DOWNGRADE_WRITE
#define DOWNGRADE_WRITE 0xffffffff810b2e70
#endif

#ifndef IN_LOCK_FUNCTIONS
#define IN_LOCK_FUNCTIONS 0xffffffff810b2ea0
#endif

#ifndef OSQ_LOCK
#define OSQ_LOCK 0xffffffff810b2ec0
#endif

#ifndef OSQ_UNLOCK
#define OSQ_UNLOCK 0xffffffff810b2ff0
#endif

#ifndef LG_LOCK_INIT
#define LG_LOCK_INIT 0xffffffff810b3080
#endif

#ifndef LG_LOCAL_UNLOCK
#define LG_LOCAL_UNLOCK 0xffffffff810b3090
#endif

#ifndef LG_LOCAL_UNLOCK_CPU
#define LG_LOCAL_UNLOCK_CPU 0xffffffff810b30b0
#endif

#ifndef LG_GLOBAL_UNLOCK
#define LG_GLOBAL_UNLOCK 0xffffffff810b30d0
#endif

#ifndef LG_GLOBAL_LOCK
#define LG_GLOBAL_LOCK 0xffffffff810b3130
#endif

#ifndef LG_LOCAL_LOCK
#define LG_LOCAL_LOCK 0xffffffff810b31c0
#endif

#ifndef LG_LOCAL_LOCK_CPU
#define LG_LOCAL_LOCK_CPU 0xffffffff810b3210
#endif

#ifndef __RT_MUTEX_INIT
#define __RT_MUTEX_INIT 0xffffffff810b3260
#endif

#ifndef RT_MUTEX_DESTROY
#define RT_MUTEX_DESTROY 0xffffffff810b3490
#endif

#ifndef RT_MUTEX_TIMED_LOCK
#define RT_MUTEX_TIMED_LOCK 0xffffffff810b3d80
#endif

#ifndef RT_MUTEX_GETPRIO
#define RT_MUTEX_GETPRIO 0xffffffff810b3dd0
#endif

#ifndef RT_MUTEX_GET_TOP_TASK
#define RT_MUTEX_GET_TOP_TASK 0xffffffff810b3e00
#endif

#ifndef RT_MUTEX_GET_EFFECTIVE_PRIO
#define RT_MUTEX_GET_EFFECTIVE_PRIO 0xffffffff810b3e30
#endif

#ifndef RT_MUTEX_ADJUST_PI
#define RT_MUTEX_ADJUST_PI 0xffffffff810b3e60
#endif

#ifndef RT_MUTEX_TIMED_FUTEX_LOCK
#define RT_MUTEX_TIMED_FUTEX_LOCK 0xffffffff810b3ee0
#endif

#ifndef RT_MUTEX_INIT_PROXY_LOCKED
#define RT_MUTEX_INIT_PROXY_LOCKED 0xffffffff810b3f20
#endif

#ifndef RT_MUTEX_PROXY_UNLOCK
#define RT_MUTEX_PROXY_UNLOCK 0xffffffff810b3f40
#endif

#ifndef RT_MUTEX_START_PROXY_LOCK
#define RT_MUTEX_START_PROXY_LOCK 0xffffffff810b3f60
#endif

#ifndef RT_MUTEX_NEXT_OWNER
#define RT_MUTEX_NEXT_OWNER 0xffffffff810b3ff0
#endif

#ifndef RT_MUTEX_FINISH_PROXY_LOCK
#define RT_MUTEX_FINISH_PROXY_LOCK 0xffffffff810b4020
#endif

#ifndef __INIT_RWSEM
#define __INIT_RWSEM 0xffffffff810b40c0
#endif

#ifndef RWSEM_WAKE
#define RWSEM_WAKE 0xffffffff810b4250
#endif

#ifndef RWSEM_DOWNGRADE_WAKE
#define RWSEM_DOWNGRADE_WAKE 0xffffffff810b42a0
#endif

#ifndef __PERCPU_INIT_RWSEM
#define __PERCPU_INIT_RWSEM 0xffffffff810b4380
#endif

#ifndef PERCPU_FREE_RWSEM
#define PERCPU_FREE_RWSEM 0xffffffff810b43f0
#endif

#ifndef PERCPU_DOWN_READ
#define PERCPU_DOWN_READ 0xffffffff810b4410
#endif

#ifndef PERCPU_UP_READ
#define PERCPU_UP_READ 0xffffffff810b4480
#endif

#ifndef PERCPU_DOWN_WRITE
#define PERCPU_DOWN_WRITE 0xffffffff810b44e0
#endif

#ifndef PERCPU_UP_WRITE
#define PERCPU_UP_WRITE 0xffffffff810b45c0
#endif

#ifndef QUEUE_WRITE_LOCK_SLOWPATH
#define QUEUE_WRITE_LOCK_SLOWPATH 0xffffffff810b45e0
#endif

#ifndef QUEUE_READ_LOCK_SLOWPATH
#define QUEUE_READ_LOCK_SLOWPATH 0xffffffff810b4680
#endif

#ifndef PM_QOS_REQUEST
#define PM_QOS_REQUEST 0xffffffff810b4740
#endif

#ifndef PM_QOS_REQUEST_ACTIVE
#define PM_QOS_REQUEST_ACTIVE 0xffffffff810b4760
#endif

#ifndef PM_QOS_ADD_NOTIFIER
#define PM_QOS_ADD_NOTIFIER 0xffffffff810b4770
#endif

#ifndef PM_QOS_REMOVE_NOTIFIER
#define PM_QOS_REMOVE_NOTIFIER 0xffffffff810b47a0
#endif

#ifndef PM_QOS_READ_VALUE
#define PM_QOS_READ_VALUE 0xffffffff810b4b30
#endif

#ifndef PM_QOS_UPDATE_TARGET
#define PM_QOS_UPDATE_TARGET 0xffffffff810b4b40
#endif

#ifndef PM_QOS_ADD_REQUEST
#define PM_QOS_ADD_REQUEST 0xffffffff810b4d90
#endif

#ifndef PM_QOS_UPDATE_REQUEST
#define PM_QOS_UPDATE_REQUEST 0xffffffff810b4ff0
#endif

#ifndef PM_QOS_REMOVE_REQUEST
#define PM_QOS_REMOVE_REQUEST 0xffffffff810b50d0
#endif

#ifndef PM_QOS_UPDATE_FLAGS
#define PM_QOS_UPDATE_FLAGS 0xffffffff810b51e0
#endif

#ifndef PM_QOS_UPDATE_REQUEST_TIMEOUT
#define PM_QOS_UPDATE_REQUEST_TIMEOUT 0xffffffff810b53a0
#endif

#ifndef REGISTER_PM_NOTIFIER
#define REGISTER_PM_NOTIFIER 0xffffffff810b54b0
#endif

#ifndef UNREGISTER_PM_NOTIFIER
#define UNREGISTER_PM_NOTIFIER 0xffffffff810b54d0
#endif

#ifndef PM_NOTIFIER_CALL_CHAIN
#define PM_NOTIFIER_CALL_CHAIN 0xffffffff810b5c60
#endif

#ifndef PM_VT_SWITCH_REQUIRED
#define PM_VT_SWITCH_REQUIRED 0xffffffff810b5d20
#endif

#ifndef PM_VT_SWITCH_UNREGISTER
#define PM_VT_SWITCH_UNREGISTER 0xffffffff810b5dd0
#endif

#ifndef PM_PREPARE_CONSOLE
#define PM_PREPARE_CONSOLE 0xffffffff810b5e50
#endif

#ifndef PM_RESTORE_CONSOLE
#define PM_RESTORE_CONSOLE 0xffffffff810b5eb0
#endif

#ifndef THAW_PROCESSES
#define THAW_PROCESSES 0xffffffff810b6250
#endif

#ifndef FREEZE_PROCESSES
#define FREEZE_PROCESSES 0xffffffff810b6450
#endif

#ifndef THAW_KERNEL_THREADS
#define THAW_KERNEL_THREADS 0xffffffff810b6520
#endif

#ifndef FREEZE_KERNEL_THREADS
#define FREEZE_KERNEL_THREADS 0xffffffff810b6600
#endif

#ifndef SUSPEND_VALID_ONLY_MEM
#define SUSPEND_VALID_ONLY_MEM 0xffffffff810b6690
#endif

#ifndef SUSPEND_SET_OPS
#define SUSPEND_SET_OPS 0xffffffff810b66a0
#endif

#ifndef FREEZE_WAKE
#define FREEZE_WAKE 0xffffffff810b6780
#endif

#ifndef FREEZE_SET_OPS
#define FREEZE_SET_OPS 0xffffffff810b6890
#endif

#ifndef SUSPEND_DEVICES_AND_ENTER
#define SUSPEND_DEVICES_AND_ENTER 0xffffffff810b6900
#endif

#ifndef PM_SUSPEND
#define PM_SUSPEND 0xffffffff810b6fd0
#endif

#ifndef SYSTEM_ENTERING_HIBERNATION
#define SYSTEM_ENTERING_HIBERNATION 0xffffffff810b73a0
#endif

#ifndef HIBERNATION_SET_OPS
#define HIBERNATION_SET_OPS 0xffffffff810b7690
#endif

#ifndef HIBERNATION_AVAILABLE
#define HIBERNATION_AVAILABLE 0xffffffff810b78c0
#endif

#ifndef SWSUSP_SHOW_SPEED
#define SWSUSP_SHOW_SPEED 0xffffffff810b78e0
#endif

#ifndef HIBERNATION_SNAPSHOT
#define HIBERNATION_SNAPSHOT 0xffffffff810b79b0
#endif

#ifndef HIBERNATION_RESTORE
#define HIBERNATION_RESTORE 0xffffffff810b7d50
#endif

#ifndef HIBERNATION_PLATFORM_ENTER
#define HIBERNATION_PLATFORM_ENTER 0xffffffff810b82e0
#endif

#ifndef HIBERNATE
#define HIBERNATE 0xffffffff810b83e0
#endif

#ifndef SWSUSP_SET_PAGE_FREE
#define SWSUSP_SET_PAGE_FREE 0xffffffff810b8a30
#endif

#ifndef GET_SAFE_PAGE
#define GET_SAFE_PAGE 0xffffffff810b8c00
#endif

#ifndef SWSUSP_UNSET_PAGE_FREE
#define SWSUSP_UNSET_PAGE_FREE 0xffffffff810b8db0
#endif

#ifndef SWSUSP_PAGE_IS_FORBIDDEN
#define SWSUSP_PAGE_IS_FORBIDDEN 0xffffffff810b94a0
#endif

#ifndef CREATE_BASIC_MEMORY_BITMAPS
#define CREATE_BASIC_MEMORY_BITMAPS 0xffffffff810b9640
#endif

#ifndef FREE_BASIC_MEMORY_BITMAPS
#define FREE_BASIC_MEMORY_BITMAPS 0xffffffff810b9840
#endif

#ifndef SNAPSHOT_ADDITIONAL_PAGES
#define SNAPSHOT_ADDITIONAL_PAGES 0xffffffff810b98f0
#endif

#ifndef SWSUSP_FREE
#define SWSUSP_FREE 0xffffffff810b9960
#endif

#ifndef HIBERNATE_PREALLOCATE_MEMORY
#define HIBERNATE_PREALLOCATE_MEMORY 0xffffffff810b9be0
#endif

#ifndef SWSUSP_SAVE
#define SWSUSP_SAVE 0xffffffff810b9f90
#endif

#ifndef SNAPSHOT_GET_IMAGE_SIZE
#define SNAPSHOT_GET_IMAGE_SIZE 0xffffffff810ba260
#endif

#ifndef SNAPSHOT_READ_NEXT
#define SNAPSHOT_READ_NEXT 0xffffffff810ba280
#endif

#ifndef SNAPSHOT_WRITE_NEXT
#define SNAPSHOT_WRITE_NEXT 0xffffffff810ba4d0
#endif

#ifndef SNAPSHOT_WRITE_FINALIZE
#define SNAPSHOT_WRITE_FINALIZE 0xffffffff810bac40
#endif

#ifndef SNAPSHOT_IMAGE_LOADED
#define SNAPSHOT_IMAGE_LOADED 0xffffffff810bac80
#endif

#ifndef ALLOC_SWAPDEV_BLOCK
#define ALLOC_SWAPDEV_BLOCK 0xffffffff810bbec0
#endif

#ifndef FREE_ALL_SWAP_PAGES
#define FREE_ALL_SWAP_PAGES 0xffffffff810bc8d0
#endif

#ifndef SWSUSP_SWAP_IN_USE
#define SWSUSP_SWAP_IN_USE 0xffffffff810bc960
#endif

#ifndef SWSUSP_READ
#define SWSUSP_READ 0xffffffff810bc980
#endif

#ifndef SWSUSP_CHECK
#define SWSUSP_CHECK 0xffffffff810bcd00
#endif

#ifndef SWSUSP_CLOSE
#define SWSUSP_CLOSE 0xffffffff810bce30
#endif

#ifndef SWSUSP_WRITE
#define SWSUSP_WRITE 0xffffffff810bce80
#endif

#ifndef SWSUSP_UNMARK
#define SWSUSP_UNMARK 0xffffffff810bd380
#endif

#ifndef HIB_BIO_READ_PAGE
#define HIB_BIO_READ_PAGE 0xffffffff810bdfb0
#endif

#ifndef HIB_BIO_WRITE_PAGE
#define HIB_BIO_WRITE_PAGE 0xffffffff810be010
#endif

#ifndef HIB_WAIT_ON_BIO_CHAIN
#define HIB_WAIT_ON_BIO_CHAIN 0xffffffff810be070
#endif

#ifndef KMSG_DUMP_REGISTER
#define KMSG_DUMP_REGISTER 0xffffffff810be3d0
#endif

#ifndef KMSG_DUMP_REWIND
#define KMSG_DUMP_REWIND 0xffffffff810be450
#endif

#ifndef PRINTK_TIMED_RATELIMIT
#define PRINTK_TIMED_RATELIMIT 0xffffffff810be4a0
#endif

#ifndef CONSOLE_LOCK
#define CONSOLE_LOCK 0xffffffff810be5b0
#endif

#ifndef __PRINTK_RATELIMIT
#define __PRINTK_RATELIMIT 0xffffffff810be5f0
#endif

#ifndef KMSG_DUMP_UNREGISTER
#define KMSG_DUMP_UNREGISTER 0xffffffff810be610
#endif

#ifndef KMSG_DUMP_GET_BUFFER
#define KMSG_DUMP_GET_BUFFER 0xffffffff810bed10
#endif

#ifndef CONSOLE_TRYLOCK
#define CONSOLE_TRYLOCK 0xffffffff810bf180
#endif

#ifndef LOG_BUF_ADDR_GET
#define LOG_BUF_ADDR_GET 0xffffffff810bfb20
#endif

#ifndef LOG_BUF_LEN_GET
#define LOG_BUF_LEN_GET 0xffffffff810bfb30
#endif

#ifndef CHECK_SYSLOG_PERMISSIONS
#define CHECK_SYSLOG_PERMISSIONS 0xffffffff810bfb40
#endif

#ifndef LOG_BUF_KEXEC_SETUP
#define LOG_BUF_KEXEC_SETUP 0xffffffff810bfcb0
#endif

#ifndef DO_SYSLOG
#define DO_SYSLOG 0xffffffff810bfdd0
#endif

#ifndef SYS_SYSLOG
#define SYS_SYSLOG 0xffffffff810c0310
#endif

#ifndef SYS_SYSLOG
#define SYS_SYSLOG 0xffffffff810c0310
#endif

#ifndef EARLY_PRINTK
#define EARLY_PRINTK 0xffffffff810c0330
#endif

#ifndef ADD_PREFERRED_CONSOLE
#define ADD_PREFERRED_CONSOLE 0xffffffff810c03f0
#endif

#ifndef SUSPEND_CONSOLE
#define SUSPEND_CONSOLE 0xffffffff810c0410
#endif

#ifndef IS_CONSOLE_LOCKED
#define IS_CONSOLE_LOCKED 0xffffffff810c0450
#endif

#ifndef WAKE_UP_KLOGD
#define WAKE_UP_KLOGD 0xffffffff810c0460
#endif

#ifndef CONSOLE_UNLOCK
#define CONSOLE_UNLOCK 0xffffffff810c04b0
#endif

#ifndef VPRINTK_EMIT
#define VPRINTK_EMIT 0xffffffff810c0900
#endif

#ifndef VPRINTK
#define VPRINTK 0xffffffff810c0e70
#endif

#ifndef VPRINTK_DEFAULT
#define VPRINTK_DEFAULT 0xffffffff810c0fb0
#endif

#ifndef RESUME_CONSOLE
#define RESUME_CONSOLE 0xffffffff810c0fe0
#endif

#ifndef CONSOLE_UNBLANK
#define CONSOLE_UNBLANK 0xffffffff810c1020
#endif

#ifndef CONSOLE_DEVICE
#define CONSOLE_DEVICE 0xffffffff810c10a0
#endif

#ifndef CONSOLE_STOP
#define CONSOLE_STOP 0xffffffff810c1100
#endif

#ifndef CONSOLE_START
#define CONSOLE_START 0xffffffff810c1120
#endif

#ifndef UNREGISTER_CONSOLE
#define UNREGISTER_CONSOLE 0xffffffff810c1140
#endif

#ifndef REGISTER_CONSOLE
#define REGISTER_CONSOLE 0xffffffff810c1250
#endif

#ifndef KMSG_DUMP
#define KMSG_DUMP 0xffffffff810c1670
#endif

#ifndef KMSG_DUMP_GET_LINE_NOLOCK
#define KMSG_DUMP_GET_LINE_NOLOCK 0xffffffff810c1740
#endif

#ifndef KMSG_DUMP_GET_LINE
#define KMSG_DUMP_GET_LINE 0xffffffff810c17f0
#endif

#ifndef KMSG_DUMP_REWIND_NOLOCK
#define KMSG_DUMP_REWIND_NOLOCK 0xffffffff810c1860
#endif

#ifndef DUMP_STACK_PRINT_INFO
#define DUMP_STACK_PRINT_INFO 0xffffffff810c1890
#endif

#ifndef SHOW_REGS_PRINT_INFO
#define SHOW_REGS_PRINT_INFO 0xffffffff810c1950
#endif

#ifndef _BRAILLE_CONSOLE_SETUP
#define _BRAILLE_CONSOLE_SETUP 0xffffffff810c19a0
#endif

#ifndef _BRAILLE_REGISTER_CONSOLE
#define _BRAILLE_REGISTER_CONSOLE 0xffffffff810c1a50
#endif

#ifndef _BRAILLE_UNREGISTER_CONSOLE
#define _BRAILLE_UNREGISTER_CONSOLE 0xffffffff810c1a90
#endif

#ifndef IRQ_TO_DESC
#define IRQ_TO_DESC 0xffffffff810c1ac0
#endif

#ifndef GENERIC_HANDLE_IRQ
#define GENERIC_HANDLE_IRQ 0xffffffff810c1ae0
#endif

#ifndef IRQ_FREE_DESCS
#define IRQ_FREE_DESCS 0xffffffff810c1b90
#endif

#ifndef IRQ_FREE_HWIRQS
#define IRQ_FREE_HWIRQS 0xffffffff810c1c20
#endif

#ifndef IRQ_ALLOC_HWIRQS
#define IRQ_ALLOC_HWIRQS 0xffffffff810c1ec0
#endif

#ifndef IRQ_LOCK_SPARSE
#define IRQ_LOCK_SPARSE 0xffffffff810c1f90
#endif

#ifndef IRQ_UNLOCK_SPARSE
#define IRQ_UNLOCK_SPARSE 0xffffffff810c1fb0
#endif

#ifndef IRQ_GET_NEXT_IRQ
#define IRQ_GET_NEXT_IRQ 0xffffffff810c1fd0
#endif

#ifndef __IRQ_GET_DESC_LOCK
#define __IRQ_GET_DESC_LOCK 0xffffffff810c2000
#endif

#ifndef __IRQ_PUT_DESC_UNLOCK
#define __IRQ_PUT_DESC_UNLOCK 0xffffffff810c2090
#endif

#ifndef IRQ_SET_PERCPU_DEVID
#define IRQ_SET_PERCPU_DEVID 0xffffffff810c20e0
#endif

#ifndef KSTAT_INCR_IRQ_THIS_CPU
#define KSTAT_INCR_IRQ_THIS_CPU 0xffffffff810c2160
#endif

#ifndef KSTAT_IRQS_CPU
#define KSTAT_IRQS_CPU 0xffffffff810c2190
#endif

#ifndef KSTAT_IRQS
#define KSTAT_IRQS 0xffffffff810c21d0
#endif

#ifndef KSTAT_IRQS_USR
#define KSTAT_IRQS_USR 0xffffffff810c2260
#endif

#ifndef NO_ACTION
#define NO_ACTION 0xffffffff810c2290
#endif

#ifndef HANDLE_BAD_IRQ
#define HANDLE_BAD_IRQ 0xffffffff810c22a0
#endif

#ifndef __IRQ_WAKE_THREAD
#define __IRQ_WAKE_THREAD 0xffffffff810c2520
#endif

#ifndef HANDLE_IRQ_EVENT_PERCPU
#define HANDLE_IRQ_EVENT_PERCPU 0xffffffff810c2570
#endif

#ifndef HANDLE_IRQ_EVENT
#define HANDLE_IRQ_EVENT 0xffffffff810c2700
#endif

#ifndef SYNCHRONIZE_HARDIRQ
#define SYNCHRONIZE_HARDIRQ 0xffffffff810c27f0
#endif

#ifndef SYNCHRONIZE_IRQ
#define SYNCHRONIZE_IRQ 0xffffffff810c2820
#endif

#ifndef DISABLE_IRQ_NOSYNC
#define DISABLE_IRQ_NOSYNC 0xffffffff810c2920
#endif

#ifndef DISABLE_IRQ
#define DISABLE_IRQ 0xffffffff810c2930
#endif

#ifndef DISABLE_HARDIRQ
#define DISABLE_HARDIRQ 0xffffffff810c2950
#endif

#ifndef IRQ_SET_IRQ_WAKE
#define IRQ_SET_IRQ_WAKE 0xffffffff810c2970
#endif

#ifndef IRQ_WAKE_THREAD
#define IRQ_WAKE_THREAD 0xffffffff810c2ab0
#endif

#ifndef REMOVE_IRQ
#define REMOVE_IRQ 0xffffffff810c2d70
#endif

#ifndef FREE_IRQ
#define FREE_IRQ 0xffffffff810c2dd0
#endif

#ifndef DISABLE_PERCPU_IRQ
#define DISABLE_PERCPU_IRQ 0xffffffff810c2e90
#endif

#ifndef IRQ_SET_AFFINITY_NOTIFIER
#define IRQ_SET_AFFINITY_NOTIFIER 0xffffffff810c2f20
#endif

#ifndef IRQ_CAN_SET_AFFINITY
#define IRQ_CAN_SET_AFFINITY 0xffffffff810c3740
#endif

#ifndef IRQ_SET_THREAD_AFFINITY
#define IRQ_SET_THREAD_AFFINITY 0xffffffff810c3780
#endif

#ifndef IRQ_DO_SET_AFFINITY
#define IRQ_DO_SET_AFFINITY 0xffffffff810c37b0
#endif

#ifndef IRQ_SET_AFFINITY_LOCKED
#define IRQ_SET_AFFINITY_LOCKED 0xffffffff810c38f0
#endif

#ifndef __IRQ_SET_AFFINITY
#define __IRQ_SET_AFFINITY 0xffffffff810c3a10
#endif

#ifndef IRQ_SET_AFFINITY_HINT
#define IRQ_SET_AFFINITY_HINT 0xffffffff810c3a80
#endif

#ifndef IRQ_SELECT_AFFINITY_USR
#define IRQ_SELECT_AFFINITY_USR 0xffffffff810c3af0
#endif

#ifndef __DISABLE_IRQ
#define __DISABLE_IRQ 0xffffffff810c3b50
#endif

#ifndef __ENABLE_IRQ
#define __ENABLE_IRQ 0xffffffff810c3b90
#endif

#ifndef ENABLE_IRQ
#define ENABLE_IRQ 0xffffffff810c3c10
#endif

#ifndef CAN_REQUEST_IRQ
#define CAN_REQUEST_IRQ 0xffffffff810c3c90
#endif

#ifndef __IRQ_SET_TRIGGER
#define __IRQ_SET_TRIGGER 0xffffffff810c3d10
#endif

#ifndef SETUP_IRQ
#define SETUP_IRQ 0xffffffff810c4420
#endif

#ifndef REQUEST_THREADED_IRQ
#define REQUEST_THREADED_IRQ 0xffffffff810c44c0
#endif

#ifndef REQUEST_ANY_CONTEXT_IRQ
#define REQUEST_ANY_CONTEXT_IRQ 0xffffffff810c4670
#endif

#ifndef ENABLE_PERCPU_IRQ
#define ENABLE_PERCPU_IRQ 0xffffffff810c46f0
#endif

#ifndef REMOVE_PERCPU_IRQ
#define REMOVE_PERCPU_IRQ 0xffffffff810c4780
#endif

#ifndef FREE_PERCPU_IRQ
#define FREE_PERCPU_IRQ 0xffffffff810c47d0
#endif

#ifndef SETUP_PERCPU_IRQ
#define SETUP_PERCPU_IRQ 0xffffffff810c4840
#endif

#ifndef REQUEST_PERCPU_IRQ
#define REQUEST_PERCPU_IRQ 0xffffffff810c48d0
#endif

#ifndef IRQ_GET_IRQCHIP_STATE
#define IRQ_GET_IRQCHIP_STATE 0xffffffff810c4a00
#endif

#ifndef IRQ_SET_IRQCHIP_STATE
#define IRQ_SET_IRQCHIP_STATE 0xffffffff810c4a80
#endif

#ifndef NOIRQDEBUG_SETUP
#define NOIRQDEBUG_SETUP 0xffffffff810c4b00
#endif

#ifndef IRQ_WAIT_FOR_POLL
#define IRQ_WAIT_FOR_POLL 0xffffffff810c4d80
#endif

#ifndef NOTE_INTERRUPT
#define NOTE_INTERRUPT 0xffffffff810c4e30
#endif

#ifndef CHECK_IRQ_RESEND
#define CHECK_IRQ_RESEND 0xffffffff810c50f0
#endif

#ifndef IRQ_SET_CHIP
#define IRQ_SET_CHIP 0xffffffff810c5140
#endif

#ifndef IRQ_SET_HANDLER_DATA
#define IRQ_SET_HANDLER_DATA 0xffffffff810c5190
#endif

#ifndef IRQ_SET_CHIP_DATA
#define IRQ_SET_CHIP_DATA 0xffffffff810c51e0
#endif

#ifndef IRQ_MODIFY_STATUS
#define IRQ_MODIFY_STATUS 0xffffffff810c5230
#endif

#ifndef IRQ_SET_IRQ_TYPE
#define IRQ_SET_IRQ_TYPE 0xffffffff810c52d0
#endif

#ifndef IRQ_GET_IRQ_DATA
#define IRQ_GET_IRQ_DATA 0xffffffff810c5340
#endif

#ifndef HANDLE_SIMPLE_IRQ
#define HANDLE_SIMPLE_IRQ 0xffffffff810c53b0
#endif

#ifndef HANDLE_FASTEOI_IRQ
#define HANDLE_FASTEOI_IRQ 0xffffffff810c5420
#endif

#ifndef HANDLE_NESTED_IRQ
#define HANDLE_NESTED_IRQ 0xffffffff810c5560
#endif

#ifndef HANDLE_LEVEL_IRQ
#define HANDLE_LEVEL_IRQ 0xffffffff810c5630
#endif

#ifndef HANDLE_EDGE_IRQ
#define HANDLE_EDGE_IRQ 0xffffffff810c5720
#endif

#ifndef IRQ_SET_MSI_DESC_OFF
#define IRQ_SET_MSI_DESC_OFF 0xffffffff810c5840
#endif

#ifndef IRQ_SET_MSI_DESC
#define IRQ_SET_MSI_DESC 0xffffffff810c58a0
#endif

#ifndef IRQ_SHUTDOWN
#define IRQ_SHUTDOWN 0xffffffff810c58c0
#endif

#ifndef IRQ_ENABLE
#define IRQ_ENABLE 0xffffffff810c5920
#endif

#ifndef IRQ_STARTUP
#define IRQ_STARTUP 0xffffffff810c5960
#endif

#ifndef __IRQ_SET_HANDLER
#define __IRQ_SET_HANDLER 0xffffffff810c59d0
#endif

#ifndef IRQ_SET_CHIP_AND_HANDLER_NAME
#define IRQ_SET_CHIP_AND_HANDLER_NAME 0xffffffff810c5b00
#endif

#ifndef IRQ_DISABLE
#define IRQ_DISABLE 0xffffffff810c5b30
#endif

#ifndef IRQ_PERCPU_ENABLE
#define IRQ_PERCPU_ENABLE 0xffffffff810c5b60
#endif

#ifndef IRQ_PERCPU_DISABLE
#define IRQ_PERCPU_DISABLE 0xffffffff810c5ba0
#endif

#ifndef MASK_IRQ
#define MASK_IRQ 0xffffffff810c5be0
#endif

#ifndef UNMASK_IRQ
#define UNMASK_IRQ 0xffffffff810c5c10
#endif

#ifndef UNMASK_THREADED_IRQ
#define UNMASK_THREADED_IRQ 0xffffffff810c5c40
#endif

#ifndef HANDLE_PERCPU_IRQ
#define HANDLE_PERCPU_IRQ 0xffffffff810c5c90
#endif

#ifndef HANDLE_PERCPU_DEVID_IRQ
#define HANDLE_PERCPU_DEVID_IRQ 0xffffffff810c5cf0
#endif

#ifndef IRQ_CPU_ONLINE
#define IRQ_CPU_ONLINE 0xffffffff810c5e00
#endif

#ifndef IRQ_CPU_OFFLINE
#define IRQ_CPU_OFFLINE 0xffffffff810c5ea0
#endif

#ifndef IRQ_CHIP_COMPOSE_MSI_MSG
#define IRQ_CHIP_COMPOSE_MSI_MSG 0xffffffff810c5f40
#endif

#ifndef DEVM_REQUEST_THREADED_IRQ
#define DEVM_REQUEST_THREADED_IRQ 0xffffffff810c6220
#endif

#ifndef DEVM_REQUEST_ANY_CONTEXT_IRQ
#define DEVM_REQUEST_ANY_CONTEXT_IRQ 0xffffffff810c6300
#endif

#ifndef DEVM_FREE_IRQ
#define DEVM_FREE_IRQ 0xffffffff810c63b0
#endif

#ifndef IRQ_GET_DOMAIN_GENERIC_CHIP
#define IRQ_GET_DOMAIN_GENERIC_CHIP 0xffffffff810c64c0
#endif

#ifndef IRQ_SETUP_ALT_CHIP
#define IRQ_SETUP_ALT_CHIP 0xffffffff810c64f0
#endif

#ifndef IRQ_GC_MASK_SET_BIT
#define IRQ_GC_MASK_SET_BIT 0xffffffff810c6570
#endif

#ifndef IRQ_GC_MASK_CLR_BIT
#define IRQ_GC_MASK_CLR_BIT 0xffffffff810c65d0
#endif

#ifndef IRQ_GC_ACK_SET_BIT
#define IRQ_GC_ACK_SET_BIT 0xffffffff810c6640
#endif

#ifndef IRQ_MAP_GENERIC_CHIP
#define IRQ_MAP_GENERIC_CHIP 0xffffffff810c66d0
#endif

#ifndef IRQ_SETUP_GENERIC_CHIP
#define IRQ_SETUP_GENERIC_CHIP 0xffffffff810c6850
#endif

#ifndef IRQ_REMOVE_GENERIC_CHIP
#define IRQ_REMOVE_GENERIC_CHIP 0xffffffff810c6980
#endif

#ifndef IRQ_ALLOC_DOMAIN_GENERIC_CHIPS
#define IRQ_ALLOC_DOMAIN_GENERIC_CHIPS 0xffffffff810c6bc0
#endif

#ifndef IRQ_ALLOC_GENERIC_CHIP
#define IRQ_ALLOC_GENERIC_CHIP 0xffffffff810c6d60
#endif

#ifndef IRQ_GC_NOOP
#define IRQ_GC_NOOP 0xffffffff810c6dc0
#endif

#ifndef IRQ_GC_MASK_DISABLE_REG
#define IRQ_GC_MASK_DISABLE_REG 0xffffffff810c6dd0
#endif

#ifndef IRQ_GC_UNMASK_ENABLE_REG
#define IRQ_GC_UNMASK_ENABLE_REG 0xffffffff810c6e30
#endif

#ifndef IRQ_GC_ACK_CLR_BIT
#define IRQ_GC_ACK_CLR_BIT 0xffffffff810c6e90
#endif

#ifndef IRQ_GC_MASK_DISABLE_REG_AND_ACK
#define IRQ_GC_MASK_DISABLE_REG_AND_ACK 0xffffffff810c6ee0
#endif

#ifndef IRQ_GC_EOI
#define IRQ_GC_EOI 0xffffffff810c6f60
#endif

#ifndef IRQ_GC_SET_WAKE
#define IRQ_GC_SET_WAKE 0xffffffff810c6fb0
#endif

#ifndef PROBE_IRQ_MASK
#define PROBE_IRQ_MASK 0xffffffff810c7000
#endif

#ifndef PROBE_IRQ_OFF
#define PROBE_IRQ_OFF 0xffffffff810c70d0
#endif

#ifndef PROBE_IRQ_ON
#define PROBE_IRQ_ON 0xffffffff810c71a0
#endif

#ifndef IRQ_DOMAIN_XLATE_ONECELL
#define IRQ_DOMAIN_XLATE_ONECELL 0xffffffff810c73a0
#endif

#ifndef IRQ_DOMAIN_XLATE_TWOCELL
#define IRQ_DOMAIN_XLATE_TWOCELL 0xffffffff810c73e0
#endif

#ifndef IRQ_DOMAIN_XLATE_ONETWOCELL
#define IRQ_DOMAIN_XLATE_ONETWOCELL 0xffffffff810c7420
#endif

#ifndef IRQ_FIND_HOST
#define IRQ_FIND_HOST 0xffffffff810c7460
#endif

#ifndef IRQ_SET_DEFAULT_HOST
#define IRQ_SET_DEFAULT_HOST 0xffffffff810c74f0
#endif

#ifndef IRQ_DOMAIN_REMOVE
#define IRQ_DOMAIN_REMOVE 0xffffffff810c7540
#endif

#ifndef IRQ_DOMAIN_ASSOCIATE
#define IRQ_DOMAIN_ASSOCIATE 0xffffffff810c7600
#endif

#ifndef IRQ_DOMAIN_ASSOCIATE_MANY
#define IRQ_DOMAIN_ASSOCIATE_MANY 0xffffffff810c77f0
#endif

#ifndef IRQ_CREATE_STRICT_MAPPINGS
#define IRQ_CREATE_STRICT_MAPPINGS 0xffffffff810c7880
#endif

#ifndef IRQ_CREATE_DIRECT_MAPPING
#define IRQ_CREATE_DIRECT_MAPPING 0xffffffff810c78d0
#endif

#ifndef IRQ_FIND_MAPPING
#define IRQ_FIND_MAPPING 0xffffffff810c79c0
#endif

#ifndef IRQ_CREATE_MAPPING
#define IRQ_CREATE_MAPPING 0xffffffff810c7a60
#endif

#ifndef IRQ_CREATE_OF_MAPPING
#define IRQ_CREATE_OF_MAPPING 0xffffffff810c7c50
#endif

#ifndef __IRQ_DOMAIN_ADD
#define __IRQ_DOMAIN_ADD 0xffffffff810c7d50
#endif

#ifndef IRQ_DOMAIN_ADD_SIMPLE
#define IRQ_DOMAIN_ADD_SIMPLE 0xffffffff810c7e70
#endif

#ifndef IRQ_DOMAIN_ADD_LEGACY
#define IRQ_DOMAIN_ADD_LEGACY 0xffffffff810c7ef0
#endif

#ifndef IRQ_DOMAIN_DISASSOCIATE
#define IRQ_DOMAIN_DISASSOCIATE 0xffffffff810c7f40
#endif

#ifndef IRQ_DISPOSE_MAPPING
#define IRQ_DISPOSE_MAPPING 0xffffffff810c8040
#endif

#ifndef IRQ_DOMAIN_GET_IRQ_DATA
#define IRQ_DOMAIN_GET_IRQ_DATA 0xffffffff810c80a0
#endif

#ifndef REGISTER_HANDLER_PROC
#define REGISTER_HANDLER_PROC 0xffffffff810c85f0
#endif

#ifndef REGISTER_IRQ_PROC
#define REGISTER_IRQ_PROC 0xffffffff810c8720
#endif

#ifndef UNREGISTER_IRQ_PROC
#define UNREGISTER_IRQ_PROC 0xffffffff810c8870
#endif

#ifndef UNREGISTER_HANDLER_PROC
#define UNREGISTER_HANDLER_PROC 0xffffffff810c8960
#endif

#ifndef INIT_IRQ_PROC
#define INIT_IRQ_PROC 0xffffffff810c8980
#endif

#ifndef SHOW_INTERRUPTS
#define SHOW_INTERRUPTS 0xffffffff810c8a10
#endif

#ifndef IRQ_MOVE_MASKED_IRQ
#define IRQ_MOVE_MASKED_IRQ 0xffffffff810c8d50
#endif

#ifndef IRQ_MOVE_IRQ
#define IRQ_MOVE_IRQ 0xffffffff810c8e40
#endif

#ifndef SUSPEND_DEVICE_IRQS
#define SUSPEND_DEVICE_IRQS 0xffffffff810c8e90
#endif

#ifndef RESUME_DEVICE_IRQS
#define RESUME_DEVICE_IRQS 0xffffffff810c9080
#endif

#ifndef IRQ_PM_CHECK_WAKEUP
#define IRQ_PM_CHECK_WAKEUP 0xffffffff810c90a0
#endif

#ifndef IRQ_PM_INSTALL_ACTION
#define IRQ_PM_INSTALL_ACTION 0xffffffff810c90f0
#endif

#ifndef IRQ_PM_REMOVE_ACTION
#define IRQ_PM_REMOVE_ACTION 0xffffffff810c91f0
#endif

#ifndef GET_CACHED_MSI_MSG
#define GET_CACHED_MSI_MSG 0xffffffff810c9230
#endif

#ifndef __GET_CACHED_MSI_MSG
#define __GET_CACHED_MSI_MSG 0xffffffff810c9280
#endif

#ifndef RCU_GP_IS_EXPEDITED
#define RCU_GP_IS_EXPEDITED 0xffffffff810c92a0
#endif

#ifndef RCU_EXPEDITE_GP
#define RCU_EXPEDITE_GP 0xffffffff810c92d0
#endif

#ifndef RCU_UNEXPEDITE_GP
#define RCU_UNEXPEDITE_GP 0xffffffff810c92e0
#endif

#ifndef DO_TRACE_RCU_TORTURE_READ
#define DO_TRACE_RCU_TORTURE_READ 0xffffffff810c92f0
#endif

#ifndef WAKEME_AFTER_RCU
#define WAKEME_AFTER_RCU 0xffffffff810c94d0
#endif

#ifndef WAIT_RCU_GP
#define WAIT_RCU_GP 0xffffffff810c94f0
#endif

#ifndef RCU_END_INKERNEL_BOOT
#define RCU_END_INKERNEL_BOOT 0xffffffff810c9540
#endif

#ifndef RCU_JIFFIES_TILL_STALL_CHECK
#define RCU_JIFFIES_TILL_STALL_CHECK 0xffffffff810c9550
#endif

#ifndef RCU_SYSRQ_START
#define RCU_SYSRQ_START 0xffffffff810c95a0
#endif

#ifndef RCU_SYSRQ_END
#define RCU_SYSRQ_END 0xffffffff810c95c0
#endif

#ifndef RCU_EARLY_BOOT_TESTS
#define RCU_EARLY_BOOT_TESTS 0xffffffff810c95e0
#endif

#ifndef __SRCU_READ_LOCK
#define __SRCU_READ_LOCK 0xffffffff810c95f0
#endif

#ifndef __SRCU_READ_UNLOCK
#define __SRCU_READ_UNLOCK 0xffffffff810c9620
#endif

#ifndef SRCU_BATCHES_COMPLETED
#define SRCU_BATCHES_COMPLETED 0xffffffff810c9640
#endif

#ifndef INIT_SRCU_STRUCT
#define INIT_SRCU_STRUCT 0xffffffff810c9650
#endif

#ifndef CALL_SRCU
#define CALL_SRCU 0xffffffff810c9720
#endif

#ifndef CLEANUP_SRCU_STRUCT
#define CLEANUP_SRCU_STRUCT 0xffffffff810c9790
#endif

#ifndef SYNCHRONIZE_SRCU
#define SYNCHRONIZE_SRCU 0xffffffff810c9c50
#endif

#ifndef SRCU_BARRIER
#define SRCU_BARRIER 0xffffffff810c9c80
#endif

#ifndef SYNCHRONIZE_SRCU_EXPEDITED
#define SYNCHRONIZE_SRCU_EXPEDITED 0xffffffff810c9ca0
#endif

#ifndef PROCESS_SRCU
#define PROCESS_SRCU 0xffffffff810c9cc0
#endif

#ifndef RCU_BATCHES_STARTED
#define RCU_BATCHES_STARTED 0xffffffff810c9db0
#endif

#ifndef RCU_BATCHES_STARTED_SCHED
#define RCU_BATCHES_STARTED_SCHED 0xffffffff810c9dc0
#endif

#ifndef RCU_BATCHES_STARTED_BH
#define RCU_BATCHES_STARTED_BH 0xffffffff810c9dd0
#endif

#ifndef RCU_BATCHES_COMPLETED
#define RCU_BATCHES_COMPLETED 0xffffffff810c9de0
#endif

#ifndef RCU_BATCHES_COMPLETED_SCHED
#define RCU_BATCHES_COMPLETED_SCHED 0xffffffff810c9df0
#endif

#ifndef RCU_BATCHES_COMPLETED_BH
#define RCU_BATCHES_COMPLETED_BH 0xffffffff810c9e00
#endif

#ifndef RCUTORTURE_RECORD_TEST_TRANSITION
#define RCUTORTURE_RECORD_TEST_TRANSITION 0xffffffff810c9e10
#endif

#ifndef RCUTORTURE_GET_GP_DATA
#define RCUTORTURE_GET_GP_DATA 0xffffffff810c9e30
#endif

#ifndef RCUTORTURE_RECORD_PROGRESS
#define RCUTORTURE_RECORD_PROGRESS 0xffffffff810c9ea0
#endif

#ifndef RCU_IS_WATCHING
#define RCU_IS_WATCHING 0xffffffff810c9eb0
#endif

#ifndef GET_STATE_SYNCHRONIZE_RCU
#define GET_STATE_SYNCHRONIZE_RCU 0xffffffff810c9ed0
#endif

#ifndef SHOW_RCU_GP_KTHREADS
#define SHOW_RCU_GP_KTHREADS 0xffffffff810ca040
#endif

#ifndef RCU_BARRIER_BH
#define RCU_BARRIER_BH 0xffffffff810ca540
#endif

#ifndef RCU_BARRIER_SCHED
#define RCU_BARRIER_SCHED 0xffffffff810ca560
#endif

#ifndef RCU_BARRIER
#define RCU_BARRIER 0xffffffff810ca580
#endif

#ifndef RCU_CPU_NOTIFY
#define RCU_CPU_NOTIFY 0xffffffff810ca670
#endif

#ifndef RCU_FORCE_QUIESCENT_STATE
#define RCU_FORCE_QUIESCENT_STATE 0xffffffff810cab50
#endif

#ifndef RCU_BH_FORCE_QUIESCENT_STATE
#define RCU_BH_FORCE_QUIESCENT_STATE 0xffffffff810cab70
#endif

#ifndef RCU_SCHED_FORCE_QUIESCENT_STATE
#define RCU_SCHED_FORCE_QUIESCENT_STATE 0xffffffff810cab90
#endif

#ifndef SYNCHRONIZE_SCHED_EXPEDITED
#define SYNCHRONIZE_SCHED_EXPEDITED 0xffffffff810cb620
#endif

#ifndef SYNCHRONIZE_SCHED
#define SYNCHRONIZE_SCHED 0xffffffff810cb8e0
#endif

#ifndef COND_SYNCHRONIZE_RCU
#define COND_SYNCHRONIZE_RCU 0xffffffff810cb940
#endif

#ifndef SYNCHRONIZE_RCU_BH
#define SYNCHRONIZE_RCU_BH 0xffffffff810cb970
#endif

#ifndef SYNCHRONIZE_RCU_EXPEDITED
#define SYNCHRONIZE_RCU_EXPEDITED 0xffffffff810cb9d0
#endif

#ifndef RCU_IDLE_ENTER
#define RCU_IDLE_ENTER 0xffffffff810cb9f0
#endif

#ifndef RCU_IDLE_EXIT
#define RCU_IDLE_EXIT 0xffffffff810cbd50
#endif

#ifndef KFREE_CALL_RCU
#define KFREE_CALL_RCU 0xffffffff810cc0b0
#endif

#ifndef CALL_RCU_BH
#define CALL_RCU_BH 0xffffffff810cc0d0
#endif

#ifndef CALL_RCU_SCHED
#define CALL_RCU_SCHED 0xffffffff810cc0f0
#endif

#ifndef RCU_ALL_QS
#define RCU_ALL_QS 0xffffffff810cc1c0
#endif

#ifndef RCU_NOTE_CONTEXT_SWITCH
#define RCU_NOTE_CONTEXT_SWITCH 0xffffffff810cc490
#endif

#ifndef RCU_RNP_ONLINE_CPUS
#define RCU_RNP_ONLINE_CPUS 0xffffffff810cd400
#endif

#ifndef RCU_SCHED_QS
#define RCU_SCHED_QS 0xffffffff810cd410
#endif

#ifndef RCU_BH_QS
#define RCU_BH_QS 0xffffffff810cd430
#endif

#ifndef RCU_IRQ_EXIT
#define RCU_IRQ_EXIT 0xffffffff810cd450
#endif

#ifndef RCU_IRQ_ENTER
#define RCU_IRQ_ENTER 0xffffffff810cd4e0
#endif

#ifndef RCU_NMI_ENTER
#define RCU_NMI_ENTER 0xffffffff810cd570
#endif

#ifndef RCU_NMI_EXIT
#define RCU_NMI_EXIT 0xffffffff810cd610
#endif

#ifndef __RCU_IS_WATCHING
#define __RCU_IS_WATCHING 0xffffffff810cd6d0
#endif

#ifndef RCU_CPU_STALL_RESET
#define RCU_CPU_STALL_RESET 0xffffffff810cd6f0
#endif

#ifndef RCU_CHECK_CALLBACKS
#define RCU_CHECK_CALLBACKS 0xffffffff810cd750
#endif

#ifndef RCU_SCHEDULER_STARTING
#define RCU_SCHEDULER_STARTING 0xffffffff810cde80
#endif

#ifndef EXIT_RCU
#define EXIT_RCU 0xffffffff810cdf00
#endif

#ifndef RCU_NEEDS_CPU
#define RCU_NEEDS_CPU 0xffffffff810cdf10
#endif

#ifndef SYS_KCMP
#define SYS_KCMP 0xffffffff810ce050
#endif

#ifndef SYS_KCMP
#define SYS_KCMP 0xffffffff810ce050
#endif

#ifndef FREEZING_SLOW_PATH
#define FREEZING_SLOW_PATH 0xffffffff810ce380
#endif

#ifndef __REFRIGERATOR
#define __REFRIGERATOR 0xffffffff810ce3f0
#endif

#ifndef SET_FREEZABLE
#define SET_FREEZABLE 0xffffffff810ce570
#endif

#ifndef FREEZE_TASK
#define FREEZE_TASK 0xffffffff810ce5f0
#endif

#ifndef __THAW_TASK
#define __THAW_TASK 0xffffffff810ce6d0
#endif

#ifndef PROFILE_SETUP
#define PROFILE_SETUP 0xffffffff810ce750
#endif

#ifndef TASK_HANDOFF_REGISTER
#define TASK_HANDOFF_REGISTER 0xffffffff810ce8a0
#endif

#ifndef TASK_HANDOFF_UNREGISTER
#define TASK_HANDOFF_UNREGISTER 0xffffffff810ce8c0
#endif

#ifndef PROFILE_EVENT_REGISTER
#define PROFILE_EVENT_REGISTER 0xffffffff810ced90
#endif

#ifndef PROFILE_EVENT_UNREGISTER
#define PROFILE_EVENT_UNREGISTER 0xffffffff810cede0
#endif

#ifndef PROFILE_HITS
#define PROFILE_HITS 0xffffffff810cf180
#endif

#ifndef PROFILE_TASK_EXIT
#define PROFILE_TASK_EXIT 0xffffffff810cf1b0
#endif

#ifndef PROFILE_HANDOFF_TASK
#define PROFILE_HANDOFF_TASK 0xffffffff810cf1d0
#endif

#ifndef PROFILE_MUNMAP
#define PROFILE_MUNMAP 0xffffffff810cf200
#endif

#ifndef PROFILE_TICK
#define PROFILE_TICK 0xffffffff810cf220
#endif

#ifndef CREATE_PROF_CPU_MASK
#define CREATE_PROF_CPU_MASK 0xffffffff810cf280
#endif

#ifndef PRINT_STACK_TRACE
#define PRINT_STACK_TRACE 0xffffffff810cf2b0
#endif

#ifndef SNPRINT_STACK_TRACE
#define SNPRINT_STACK_TRACE 0xffffffff810cf330
#endif

#ifndef JIFFIES_TO_MSECS
#define JIFFIES_TO_MSECS 0xffffffff810cf480
#endif

#ifndef JIFFIES_TO_USECS
#define JIFFIES_TO_USECS 0xffffffff810cf490
#endif

#ifndef TIMESPEC_TRUNC
#define TIMESPEC_TRUNC 0xffffffff810cf4a0
#endif

#ifndef MKTIME64
#define MKTIME64 0xffffffff810cf4e0
#endif

#ifndef SET_NORMALIZED_TIMESPEC
#define SET_NORMALIZED_TIMESPEC 0xffffffff810cf580
#endif

#ifndef MSECS_TO_JIFFIES
#define MSECS_TO_JIFFIES 0xffffffff810cf5d0
#endif

#ifndef USECS_TO_JIFFIES
#define USECS_TO_JIFFIES 0xffffffff810cf5f0
#endif

#ifndef TIMESPEC_TO_JIFFIES
#define TIMESPEC_TO_JIFFIES 0xffffffff810cf630
#endif

#ifndef JIFFIES_TO_TIMESPEC
#define JIFFIES_TO_TIMESPEC 0xffffffff810cf690
#endif

#ifndef TIMEVAL_TO_JIFFIES
#define TIMEVAL_TO_JIFFIES 0xffffffff810cf6d0
#endif

#ifndef JIFFIES_TO_TIMEVAL
#define JIFFIES_TO_TIMEVAL 0xffffffff810cf730
#endif

#ifndef JIFFIES_TO_CLOCK_T
#define JIFFIES_TO_CLOCK_T 0xffffffff810cf780
#endif

#ifndef CLOCK_T_TO_JIFFIES
#define CLOCK_T_TO_JIFFIES 0xffffffff810cf7b0
#endif

#ifndef JIFFIES_64_TO_CLOCK_T
#define JIFFIES_64_TO_CLOCK_T 0xffffffff810cf800
#endif

#ifndef NSECS_TO_JIFFIES64
#define NSECS_TO_JIFFIES64 0xffffffff810cf830
#endif

#ifndef NSECS_TO_JIFFIES
#define NSECS_TO_JIFFIES 0xffffffff810cf850
#endif

#ifndef CURRENT_FS_TIME
#define CURRENT_FS_TIME 0xffffffff810cf8e0
#endif

#ifndef NS_TO_TIMEVAL
#define NS_TO_TIMEVAL 0xffffffff810cf930
#endif

#ifndef NS_TO_TIMESPEC
#define NS_TO_TIMESPEC 0xffffffff810cf9b0
#endif

#ifndef SYS_TIME
#define SYS_TIME 0xffffffff810cfa20
#endif

#ifndef SYS_TIME
#define SYS_TIME 0xffffffff810cfa20
#endif

#ifndef SYS_STIME
#define SYS_STIME 0xffffffff810cfa60
#endif

#ifndef SYS_STIME
#define SYS_STIME 0xffffffff810cfa60
#endif

#ifndef SYS_GETTIMEOFDAY
#define SYS_GETTIMEOFDAY 0xffffffff810cfab0
#endif

#ifndef SYS_GETTIMEOFDAY
#define SYS_GETTIMEOFDAY 0xffffffff810cfab0
#endif

#ifndef DO_SYS_SETTIMEOFDAY
#define DO_SYS_SETTIMEOFDAY 0xffffffff810cfb30
#endif

#ifndef SYS_SETTIMEOFDAY
#define SYS_SETTIMEOFDAY 0xffffffff810cfc00
#endif

#ifndef SYS_SETTIMEOFDAY
#define SYS_SETTIMEOFDAY 0xffffffff810cfc00
#endif

#ifndef SYS_ADJTIMEX
#define SYS_ADJTIMEX 0xffffffff810cfce0
#endif

#ifndef SYS_ADJTIMEX
#define SYS_ADJTIMEX 0xffffffff810cfce0
#endif

#ifndef NSEC_TO_CLOCK_T
#define NSEC_TO_CLOCK_T 0xffffffff810cfd00
#endif

#ifndef TIMESPEC_ADD_SAFE
#define TIMESPEC_ADD_SAFE 0xffffffff810cfd20
#endif

#ifndef __ROUND_JIFFIES
#define __ROUND_JIFFIES 0xffffffff810cfd90
#endif

#ifndef __ROUND_JIFFIES_RELATIVE
#define __ROUND_JIFFIES_RELATIVE 0xffffffff810cfdf0
#endif

#ifndef ROUND_JIFFIES
#define ROUND_JIFFIES 0xffffffff810cfe60
#endif

#ifndef ROUND_JIFFIES_RELATIVE
#define ROUND_JIFFIES_RELATIVE 0xffffffff810cfed0
#endif

#ifndef __ROUND_JIFFIES_UP
#define __ROUND_JIFFIES_UP 0xffffffff810cfef0
#endif

#ifndef __ROUND_JIFFIES_UP_RELATIVE
#define __ROUND_JIFFIES_UP_RELATIVE 0xffffffff810cff40
#endif

#ifndef ROUND_JIFFIES_UP
#define ROUND_JIFFIES_UP 0xffffffff810cffa0
#endif

#ifndef ROUND_JIFFIES_UP_RELATIVE
#define ROUND_JIFFIES_UP_RELATIVE 0xffffffff810cfff0
#endif

#ifndef SET_TIMER_SLACK
#define SET_TIMER_SLACK 0xffffffff810d0050
#endif

#ifndef USLEEP_RANGE
#define USLEEP_RANGE 0xffffffff810d09e0
#endif

#ifndef INIT_TIMER_KEY
#define INIT_TIMER_KEY 0xffffffff810d1860
#endif

#ifndef ADD_TIMER_ON
#define ADD_TIMER_ON 0xffffffff810d18f0
#endif

#ifndef DEL_TIMER
#define DEL_TIMER 0xffffffff810d1b60
#endif

#ifndef TRY_TO_DEL_TIMER_SYNC
#define TRY_TO_DEL_TIMER_SYNC 0xffffffff810d1bc0
#endif

#ifndef DEL_TIMER_SYNC
#define DEL_TIMER_SYNC 0xffffffff810d1c20
#endif

#ifndef MOD_TIMER_PENDING
#define MOD_TIMER_PENDING 0xffffffff810d1c70
#endif

#ifndef MOD_TIMER_PINNED
#define MOD_TIMER_PINNED 0xffffffff810d1dd0
#endif

#ifndef MOD_TIMER
#define MOD_TIMER 0xffffffff810d1f50
#endif

#ifndef ADD_TIMER
#define ADD_TIMER 0xffffffff810d2140
#endif

#ifndef MSLEEP_INTERRUPTIBLE
#define MSLEEP_INTERRUPTIBLE 0xffffffff810d22a0
#endif

#ifndef MSLEEP
#define MSLEEP 0xffffffff810d2320
#endif

#ifndef __TIMER_STATS_TIMER_SET_START_INFO
#define __TIMER_STATS_TIMER_SET_START_INFO 0xffffffff810d2650
#endif

#ifndef GET_NEXT_TIMER_INTERRUPT
#define GET_NEXT_TIMER_INTERRUPT 0xffffffff810d2670
#endif

#ifndef UPDATE_PROCESS_TIMES
#define UPDATE_PROCESS_TIMES 0xffffffff810d28b0
#endif

#ifndef RUN_LOCAL_TIMERS
#define RUN_LOCAL_TIMERS 0xffffffff810d2910
#endif

#ifndef SYS_ALARM
#define SYS_ALARM 0xffffffff810d2930
#endif

#ifndef SYS_ALARM
#define SYS_ALARM 0xffffffff810d2930
#endif

#ifndef KTIME_ADD_SAFE
#define KTIME_ADD_SAFE 0xffffffff810d2950
#endif

#ifndef HRTIMER_INIT_SLEEPER
#define HRTIMER_INIT_SLEEPER 0xffffffff810d29e0
#endif

#ifndef HRTIMER_FORWARD
#define HRTIMER_FORWARD 0xffffffff810d2ad0
#endif

#ifndef HRTIMER_INIT
#define HRTIMER_INIT 0xffffffff810d2c60
#endif

#ifndef HRTIMER_GET_RES
#define HRTIMER_GET_RES 0xffffffff810d2d40
#endif

#ifndef HRTIMER_GET_REMAINING
#define HRTIMER_GET_REMAINING 0xffffffff810d2e70
#endif

#ifndef __HRTIMER_START_RANGE_NS
#define __HRTIMER_START_RANGE_NS 0xffffffff810d2f90
#endif

#ifndef HRTIMER_START_RANGE_NS
#define HRTIMER_START_RANGE_NS 0xffffffff810d33c0
#endif

#ifndef HRTIMER_START
#define HRTIMER_START 0xffffffff810d33e0
#endif

#ifndef HRTIMER_TRY_TO_CANCEL
#define HRTIMER_TRY_TO_CANCEL 0xffffffff810d35c0
#endif

#ifndef HRTIMER_CANCEL
#define HRTIMER_CANCEL 0xffffffff810d3690
#endif

#ifndef CLOCK_WAS_SET_DELAYED
#define CLOCK_WAS_SET_DELAYED 0xffffffff810d36b0
#endif

#ifndef CLOCK_WAS_SET
#define CLOCK_WAS_SET 0xffffffff810d36e0
#endif

#ifndef HRTIMERS_RESUME
#define HRTIMERS_RESUME 0xffffffff810d3730
#endif

#ifndef HRTIMER_GET_NEXT_EVENT
#define HRTIMER_GET_NEXT_EVENT 0xffffffff810d37a0
#endif

#ifndef HRTIMER_INTERRUPT
#define HRTIMER_INTERRUPT 0xffffffff810d3830
#endif

#ifndef HRTIMER_PEEK_AHEAD_TIMERS
#define HRTIMER_PEEK_AHEAD_TIMERS 0xffffffff810d3c50
#endif

#ifndef HRTIMER_RUN_PENDING
#define HRTIMER_RUN_PENDING 0xffffffff810d3cb0
#endif

#ifndef HRTIMER_RUN_QUEUES
#define HRTIMER_RUN_QUEUES 0xffffffff810d3da0
#endif

#ifndef HRTIMER_NANOSLEEP
#define HRTIMER_NANOSLEEP 0xffffffff810d3ea0
#endif

#ifndef SYS_NANOSLEEP
#define SYS_NANOSLEEP 0xffffffff810d4080
#endif

#ifndef SYS_NANOSLEEP
#define SYS_NANOSLEEP 0xffffffff810d4080
#endif

#ifndef DO_GETITIMER
#define DO_GETITIMER 0xffffffff810d4410
#endif

#ifndef SYS_GETITIMER
#define SYS_GETITIMER 0xffffffff810d44f0
#endif

#ifndef SYS_GETITIMER
#define SYS_GETITIMER 0xffffffff810d44f0
#endif

#ifndef IT_REAL_FN
#define IT_REAL_FN 0xffffffff810d4550
#endif

#ifndef DO_SETITIMER
#define DO_SETITIMER 0xffffffff810d45b0
#endif

#ifndef ALARM_SETITIMER
#define ALARM_SETITIMER 0xffffffff810d47d0
#endif

#ifndef SYS_SETITIMER
#define SYS_SETITIMER 0xffffffff810d4840
#endif

#ifndef SYS_SETITIMER
#define SYS_SETITIMER 0xffffffff810d4840
#endif

#ifndef POSIX_TIMER_EVENT
#define POSIX_TIMER_EVENT 0xffffffff810d4d00
#endif

#ifndef POSIX_TIMERS_REGISTER_CLOCK
#define POSIX_TIMERS_REGISTER_CLOCK 0xffffffff810d4df0
#endif

#ifndef DO_SCHEDULE_NEXT_TIMER
#define DO_SCHEDULE_NEXT_TIMER 0xffffffff810d51d0
#endif

#ifndef SYS_TIMER_CREATE
#define SYS_TIMER_CREATE 0xffffffff810d5290
#endif

#ifndef SYS_TIMER_CREATE
#define SYS_TIMER_CREATE 0xffffffff810d5290
#endif

#ifndef SYS_TIMER_GETTIME
#define SYS_TIMER_GETTIME 0xffffffff810d5730
#endif

#ifndef SYS_TIMER_GETTIME
#define SYS_TIMER_GETTIME 0xffffffff810d5730
#endif

#ifndef SYS_TIMER_GETOVERRUN
#define SYS_TIMER_GETOVERRUN 0xffffffff810d5840
#endif

#ifndef SYS_TIMER_GETOVERRUN
#define SYS_TIMER_GETOVERRUN 0xffffffff810d5840
#endif

#ifndef SYS_TIMER_SETTIME
#define SYS_TIMER_SETTIME 0xffffffff810d5890
#endif

#ifndef SYS_TIMER_SETTIME
#define SYS_TIMER_SETTIME 0xffffffff810d5890
#endif

#ifndef SYS_TIMER_DELETE
#define SYS_TIMER_DELETE 0xffffffff810d5a60
#endif

#ifndef SYS_TIMER_DELETE
#define SYS_TIMER_DELETE 0xffffffff810d5a60
#endif

#ifndef EXIT_ITIMERS
#define EXIT_ITIMERS 0xffffffff810d5be0
#endif

#ifndef SYS_CLOCK_SETTIME
#define SYS_CLOCK_SETTIME 0xffffffff810d5d40
#endif

#ifndef SYS_CLOCK_SETTIME
#define SYS_CLOCK_SETTIME 0xffffffff810d5d40
#endif

#ifndef SYS_CLOCK_GETTIME
#define SYS_CLOCK_GETTIME 0xffffffff810d5de0
#endif

#ifndef SYS_CLOCK_GETTIME
#define SYS_CLOCK_GETTIME 0xffffffff810d5de0
#endif

#ifndef SYS_CLOCK_ADJTIME
#define SYS_CLOCK_ADJTIME 0xffffffff810d5e80
#endif

#ifndef SYS_CLOCK_ADJTIME
#define SYS_CLOCK_ADJTIME 0xffffffff810d5e80
#endif

#ifndef SYS_CLOCK_GETRES
#define SYS_CLOCK_GETRES 0xffffffff810d5ea0
#endif

#ifndef SYS_CLOCK_GETRES
#define SYS_CLOCK_GETRES 0xffffffff810d5ea0
#endif

#ifndef SYS_CLOCK_NANOSLEEP
#define SYS_CLOCK_NANOSLEEP 0xffffffff810d5f40
#endif

#ifndef SYS_CLOCK_NANOSLEEP
#define SYS_CLOCK_NANOSLEEP 0xffffffff810d5f40
#endif

#ifndef CLOCK_NANOSLEEP_RESTART
#define CLOCK_NANOSLEEP_RESTART 0xffffffff810d6030
#endif

#ifndef THREAD_GROUP_CPUTIMER
#define THREAD_GROUP_CPUTIMER 0xffffffff810d6aa0
#endif

#ifndef POSIX_CPU_TIMERS_EXIT
#define POSIX_CPU_TIMERS_EXIT 0xffffffff810d6d60
#endif

#ifndef POSIX_CPU_TIMERS_EXIT_GROUP
#define POSIX_CPU_TIMERS_EXIT_GROUP 0xffffffff810d6d90
#endif

#ifndef POSIX_CPU_TIMER_SCHEDULE
#define POSIX_CPU_TIMER_SCHEDULE 0xffffffff810d6db0
#endif

#ifndef RUN_POSIX_CPU_TIMERS
#define RUN_POSIX_CPU_TIMERS 0xffffffff810d7700
#endif

#ifndef SET_PROCESS_CPU_TIMER
#define SET_PROCESS_CPU_TIMER 0xffffffff810d7c30
#endif

#ifndef UPDATE_RLIMIT_CPU
#define UPDATE_RLIMIT_CPU 0xffffffff810d7d70
#endif

#ifndef KTIME_GET_REAL_SECONDS
#define KTIME_GET_REAL_SECONDS 0xffffffff810d7de0
#endif

#ifndef GET_SECONDS
#define GET_SECONDS 0xffffffff810d7df0
#endif

#ifndef KTIME_MONO_TO_ANY
#define KTIME_MONO_TO_ANY 0xffffffff810d7e00
#endif

#ifndef CURRENT_KERNEL_TIME
#define CURRENT_KERNEL_TIME 0xffffffff810d7e40
#endif

#ifndef PVCLOCK_GTOD_REGISTER_NOTIFIER
#define PVCLOCK_GTOD_REGISTER_NOTIFIER 0xffffffff810d7e80
#endif

#ifndef PVCLOCK_GTOD_UNREGISTER_NOTIFIER
#define PVCLOCK_GTOD_UNREGISTER_NOTIFIER 0xffffffff810d7ee0
#endif

#ifndef KTIME_GET_TS64
#define KTIME_GET_TS64 0xffffffff810d7f30
#endif

#ifndef KTIME_GET_SECONDS
#define KTIME_GET_SECONDS 0xffffffff810d8030
#endif

#ifndef GETBOOTTIME64
#define GETBOOTTIME64 0xffffffff810d8230
#endif

#ifndef TIMEKEEPING_INJECT_OFFSET
#define TIMEKEEPING_INJECT_OFFSET 0xffffffff810d85a0
#endif

#ifndef DO_SETTIMEOFDAY64
#define DO_SETTIMEOFDAY64 0xffffffff810d8710
#endif

#ifndef KTIME_GET_RAW_FAST_NS
#define KTIME_GET_RAW_FAST_NS 0xffffffff810d8a00
#endif

#ifndef KTIME_GET_MONO_FAST_NS
#define KTIME_GET_MONO_FAST_NS 0xffffffff810d8a90
#endif

#ifndef KTIME_GET_RAW
#define KTIME_GET_RAW 0xffffffff810d8b20
#endif

#ifndef KTIME_GET
#define KTIME_GET 0xffffffff810d8bb0
#endif

#ifndef KTIME_GET_WITH_OFFSET
#define KTIME_GET_WITH_OFFSET 0xffffffff810d8c60
#endif

#ifndef GETRAWMONOTONIC64
#define GETRAWMONOTONIC64 0xffffffff810d8d30
#endif

#ifndef __GETNSTIMEOFDAY64
#define __GETNSTIMEOFDAY64 0xffffffff810d8e00
#endif

#ifndef GETNSTIMEOFDAY64
#define GETNSTIMEOFDAY64 0xffffffff810d8ed0
#endif

#ifndef DO_GETTIMEOFDAY
#define DO_GETTIMEOFDAY 0xffffffff810d8f10
#endif

#ifndef TIMEKEEPING_GET_TAI_OFFSET
#define TIMEKEEPING_GET_TAI_OFFSET 0xffffffff810d8f60
#endif

#ifndef TIMEKEEPING_SET_TAI_OFFSET
#define TIMEKEEPING_SET_TAI_OFFSET 0xffffffff810d8f90
#endif

#ifndef TIMEKEEPING_NOTIFY
#define TIMEKEEPING_NOTIFY 0xffffffff810d9000
#endif

#ifndef TIMEKEEPING_VALID_FOR_HRES
#define TIMEKEEPING_VALID_FOR_HRES 0xffffffff810d9040
#endif

#ifndef TIMEKEEPING_MAX_DEFERMENT
#define TIMEKEEPING_MAX_DEFERMENT 0xffffffff810d9080
#endif

#ifndef TIMEKEEPING_RESUME
#define TIMEKEEPING_RESUME 0xffffffff810d9100
#endif

#ifndef TIMEKEEPING_SUSPEND
#define TIMEKEEPING_SUSPEND 0xffffffff810d92e0
#endif

#ifndef TIMEKEEPING_RTC_SKIPRESUME
#define TIMEKEEPING_RTC_SKIPRESUME 0xffffffff810d95a0
#endif

#ifndef TIMEKEEPING_RTC_SKIPSUSPEND
#define TIMEKEEPING_RTC_SKIPSUSPEND 0xffffffff810d95b0
#endif

#ifndef TIMEKEEPING_INJECT_SLEEPTIME64
#define TIMEKEEPING_INJECT_SLEEPTIME64 0xffffffff810d95c0
#endif

#ifndef UPDATE_WALL_TIME
#define UPDATE_WALL_TIME 0xffffffff810d9620
#endif

#ifndef __CURRENT_KERNEL_TIME
#define __CURRENT_KERNEL_TIME 0xffffffff810d9cc0
#endif

#ifndef GET_MONOTONIC_COARSE64
#define GET_MONOTONIC_COARSE64 0xffffffff810d9ce0
#endif

#ifndef DO_TIMER
#define DO_TIMER 0xffffffff810d9d60
#endif

#ifndef KTIME_GET_UPDATE_OFFSETS_TICK
#define KTIME_GET_UPDATE_OFFSETS_TICK 0xffffffff810d9d80
#endif

#ifndef KTIME_GET_UPDATE_OFFSETS_NOW
#define KTIME_GET_UPDATE_OFFSETS_NOW 0xffffffff810d9de0
#endif

#ifndef DO_ADJTIMEX
#define DO_ADJTIMEX 0xffffffff810d9ea0
#endif

#ifndef XTIME_UPDATE
#define XTIME_UPDATE 0xffffffff810d9fa0
#endif

#ifndef NTP_CLEAR
#define NTP_CLEAR 0xffffffff810da050
#endif

#ifndef NTP_TICK_LENGTH
#define NTP_TICK_LENGTH 0xffffffff810da0a0
#endif

#ifndef SECOND_OVERFLOW
#define SECOND_OVERFLOW 0xffffffff810da0b0
#endif

#ifndef NTP_NOTIFY_CMOS_TIMER
#define NTP_NOTIFY_CMOS_TIMER 0xffffffff810da4c0
#endif

#ifndef NTP_VALIDATE_TIMEX
#define NTP_VALIDATE_TIMEX 0xffffffff810da4f0
#endif

#ifndef __DO_ADJTIMEX
#define __DO_ADJTIMEX 0xffffffff810da5b0
#endif

#ifndef CLOCKSOURCE_CHANGE_RATING
#define CLOCKSOURCE_CHANGE_RATING 0xffffffff810dac90
#endif

#ifndef __CLOCKSOURCE_UPDATE_FREQ_SCALE
#define __CLOCKSOURCE_UPDATE_FREQ_SCALE 0xffffffff810dad50
#endif

#ifndef __CLOCKSOURCE_REGISTER_SCALE
#define __CLOCKSOURCE_REGISTER_SCALE 0xffffffff810daf70
#endif

#ifndef CLOCKSOURCE_UNREGISTER
#define CLOCKSOURCE_UNREGISTER 0xffffffff810db670
#endif

#ifndef CLOCKS_CALC_MULT_SHIFT
#define CLOCKS_CALC_MULT_SHIFT 0xffffffff810db8b0
#endif

#ifndef CLOCKSOURCE_MARK_UNSTABLE
#define CLOCKSOURCE_MARK_UNSTABLE 0xffffffff810db930
#endif

#ifndef CLOCKSOURCE_SUSPEND
#define CLOCKSOURCE_SUSPEND 0xffffffff810db9b0
#endif

#ifndef CLOCKSOURCE_RESUME
#define CLOCKSOURCE_RESUME 0xffffffff810db9f0
#endif

#ifndef CLOCKSOURCE_TOUCH_WATCHDOG
#define CLOCKSOURCE_TOUCH_WATCHDOG 0xffffffff810dba40
#endif

#ifndef CLOCKS_CALC_MAX_NSECS
#define CLOCKS_CALC_MAX_NSECS 0xffffffff810dba50
#endif

#ifndef SYSFS_GET_UNAME
#define SYSFS_GET_UNAME 0xffffffff810dba90
#endif

#ifndef REGISTER_REFINED_JIFFIES
#define REGISTER_REFINED_JIFFIES 0xffffffff810dbca0
#endif

#ifndef SYSRQ_TIMER_LIST_SHOW
#define SYSRQ_TIMER_LIST_SHOW 0xffffffff810dd0f0
#endif

#ifndef TIME_TO_TM
#define TIME_TO_TM 0xffffffff810dd1d0
#endif

#ifndef TIMECOUNTER_INIT
#define TIMECOUNTER_INIT 0xffffffff810dd5c0
#endif

#ifndef TIMECOUNTER_READ
#define TIMECOUNTER_READ 0xffffffff810dd610
#endif

#ifndef TIMECOUNTER_CYC2TIME
#define TIMECOUNTER_CYC2TIME 0xffffffff810dd660
#endif

#ifndef POSIX_CLOCK_REGISTER
#define POSIX_CLOCK_REGISTER 0xffffffff810dd700
#endif

#ifndef POSIX_CLOCK_UNREGISTER
#define POSIX_CLOCK_UNREGISTER 0xffffffff810ddeb0
#endif

#ifndef ALARM_EXPIRES_REMAINING
#define ALARM_EXPIRES_REMAINING 0xffffffff810ddf70
#endif

#ifndef ALARMTIMER_GET_RTCDEV
#define ALARMTIMER_GET_RTCDEV 0xffffffff810ddfa0
#endif

#ifndef ALARM_INIT
#define ALARM_INIT 0xffffffff810de040
#endif

#ifndef ALARM_START
#define ALARM_START 0xffffffff810de0e0
#endif

#ifndef ALARM_START_RELATIVE
#define ALARM_START_RELATIVE 0xffffffff810de150
#endif

#ifndef ALARM_FORWARD
#define ALARM_FORWARD 0xffffffff810de190
#endif

#ifndef ALARM_FORWARD_NOW
#define ALARM_FORWARD_NOW 0xffffffff810de230
#endif

#ifndef ALARM_RESTART
#define ALARM_RESTART 0xffffffff810de900
#endif

#ifndef ALARM_TRY_TO_CANCEL
#define ALARM_TRY_TO_CANCEL 0xffffffff810de960
#endif

#ifndef ALARM_CANCEL
#define ALARM_CANCEL 0xffffffff810de9e0
#endif

#ifndef CLOCKEVENT_DELTA2NS
#define CLOCKEVENT_DELTA2NS 0xffffffff810deed0
#endif

#ifndef CLOCKEVENTS_UNBIND_DEVICE
#define CLOCKEVENTS_UNBIND_DEVICE 0xffffffff810df000
#endif

#ifndef CLOCKEVENTS_REGISTER_DEVICE
#define CLOCKEVENTS_REGISTER_DEVICE 0xffffffff810df460
#endif

#ifndef CLOCKEVENTS_CONFIG_AND_REGISTER
#define CLOCKEVENTS_CONFIG_AND_REGISTER 0xffffffff810df640
#endif

#ifndef CLOCKEVENTS_SET_STATE
#define CLOCKEVENTS_SET_STATE 0xffffffff810df710
#endif

#ifndef CLOCKEVENTS_SHUTDOWN
#define CLOCKEVENTS_SHUTDOWN 0xffffffff810df770
#endif

#ifndef CLOCKEVENTS_TICK_RESUME
#define CLOCKEVENTS_TICK_RESUME 0xffffffff810df7a0
#endif

#ifndef CLOCKEVENTS_PROGRAM_EVENT
#define CLOCKEVENTS_PROGRAM_EVENT 0xffffffff810df7f0
#endif

#ifndef CLOCKEVENTS_CONFIG
#define CLOCKEVENTS_CONFIG 0xffffffff810df8d0
#endif

#ifndef __CLOCKEVENTS_UPDATE_FREQ
#define __CLOCKEVENTS_UPDATE_FREQ 0xffffffff810df900
#endif

#ifndef CLOCKEVENTS_UPDATE_FREQ
#define CLOCKEVENTS_UPDATE_FREQ 0xffffffff810df950
#endif

#ifndef CLOCKEVENTS_HANDLE_NOOP
#define CLOCKEVENTS_HANDLE_NOOP 0xffffffff810df9a0
#endif

#ifndef CLOCKEVENTS_EXCHANGE_DEVICE
#define CLOCKEVENTS_EXCHANGE_DEVICE 0xffffffff810df9b0
#endif

#ifndef CLOCKEVENTS_SUSPEND
#define CLOCKEVENTS_SUSPEND 0xffffffff810dfa60
#endif

#ifndef CLOCKEVENTS_RESUME
#define CLOCKEVENTS_RESUME 0xffffffff810dfab0
#endif

#ifndef TICK_CLEANUP_DEAD_CPU
#define TICK_CLEANUP_DEAD_CPU 0xffffffff810dfb00
#endif

#ifndef TICK_GET_DEVICE
#define TICK_GET_DEVICE 0xffffffff810dfe80
#endif

#ifndef TICK_IS_ONESHOT_AVAILABLE
#define TICK_IS_ONESHOT_AVAILABLE 0xffffffff810dfea0
#endif

#ifndef TICK_HANDLE_PERIODIC
#define TICK_HANDLE_PERIODIC 0xffffffff810dfef0
#endif

#ifndef TICK_SETUP_PERIODIC
#define TICK_SETUP_PERIODIC 0xffffffff810dff50
#endif

#ifndef TICK_INSTALL_REPLACEMENT
#define TICK_INSTALL_REPLACEMENT 0xffffffff810e00f0
#endif

#ifndef TICK_CHECK_REPLACEMENT
#define TICK_CHECK_REPLACEMENT 0xffffffff810e0170
#endif

#ifndef TICK_CHECK_NEW_DEVICE
#define TICK_CHECK_NEW_DEVICE 0xffffffff810e01c0
#endif

#ifndef TICK_HANDOVER_DO_TIMER
#define TICK_HANDOVER_DO_TIMER 0xffffffff810e02d0
#endif

#ifndef TICK_SHUTDOWN
#define TICK_SHUTDOWN 0xffffffff810e0320
#endif

#ifndef TICK_SUSPEND_LOCAL
#define TICK_SUSPEND_LOCAL 0xffffffff810e0380
#endif

#ifndef TICK_RESUME_LOCAL
#define TICK_RESUME_LOCAL 0xffffffff810e03b0
#endif

#ifndef TICK_SUSPEND
#define TICK_SUSPEND 0xffffffff810e0410
#endif

#ifndef TICK_RESUME
#define TICK_RESUME 0xffffffff810e0440
#endif

#ifndef TICK_FREEZE
#define TICK_FREEZE 0xffffffff810e0460
#endif

#ifndef TICK_UNFREEZE
#define TICK_UNFREEZE 0xffffffff810e04d0
#endif

#ifndef TICK_BROADCAST_ONESHOT_CONTROL
#define TICK_BROADCAST_ONESHOT_CONTROL 0xffffffff810e0950
#endif

#ifndef TICK_GET_BROADCAST_DEVICE
#define TICK_GET_BROADCAST_DEVICE 0xffffffff810e0b40
#endif

#ifndef TICK_GET_BROADCAST_MASK
#define TICK_GET_BROADCAST_MASK 0xffffffff810e0b50
#endif

#ifndef TICK_INSTALL_BROADCAST_DEVICE
#define TICK_INSTALL_BROADCAST_DEVICE 0xffffffff810e0b60
#endif

#ifndef TICK_IS_BROADCAST_DEVICE
#define TICK_IS_BROADCAST_DEVICE 0xffffffff810e0c40
#endif

#ifndef TICK_BROADCAST_UPDATE_FREQ
#define TICK_BROADCAST_UPDATE_FREQ 0xffffffff810e0c70
#endif

#ifndef TICK_RECEIVE_BROADCAST
#define TICK_RECEIVE_BROADCAST 0xffffffff810e0cc0
#endif

#ifndef TICK_SET_PERIODIC_HANDLER
#define TICK_SET_PERIODIC_HANDLER 0xffffffff810e0d10
#endif

#ifndef TICK_SHUTDOWN_BROADCAST
#define TICK_SHUTDOWN_BROADCAST 0xffffffff810e0d30
#endif

#ifndef TICK_SUSPEND_BROADCAST
#define TICK_SUSPEND_BROADCAST 0xffffffff810e0db0
#endif

#ifndef TICK_RESUME_CHECK_BROADCAST
#define TICK_RESUME_CHECK_BROADCAST 0xffffffff810e0df0
#endif

#ifndef TICK_RESUME_BROADCAST
#define TICK_RESUME_BROADCAST 0xffffffff810e0e30
#endif

#ifndef TICK_GET_BROADCAST_ONESHOT_MASK
#define TICK_GET_BROADCAST_ONESHOT_MASK 0xffffffff810e0ee0
#endif

#ifndef TICK_CHECK_BROADCAST_EXPIRED
#define TICK_CHECK_BROADCAST_EXPIRED 0xffffffff810e0ef0
#endif

#ifndef TICK_CHECK_ONESHOT_BROADCAST_THIS_CPU
#define TICK_CHECK_ONESHOT_BROADCAST_THIS_CPU 0xffffffff810e0f10
#endif

#ifndef TICK_BROADCAST_SETUP_ONESHOT
#define TICK_BROADCAST_SETUP_ONESHOT 0xffffffff810e0f70
#endif

#ifndef TICK_DEVICE_USES_BROADCAST
#define TICK_DEVICE_USES_BROADCAST 0xffffffff810e1120
#endif

#ifndef TICK_BROADCAST_CONTROL
#define TICK_BROADCAST_CONTROL 0xffffffff810e12a0
#endif

#ifndef TICK_BROADCAST_SWITCH_TO_ONESHOT
#define TICK_BROADCAST_SWITCH_TO_ONESHOT 0xffffffff810e1440
#endif

#ifndef HOTPLUG_CPU__BROADCAST_TICK_PULL
#define HOTPLUG_CPU__BROADCAST_TICK_PULL 0xffffffff810e1480
#endif

#ifndef TICK_SHUTDOWN_BROADCAST_ONESHOT
#define TICK_SHUTDOWN_BROADCAST_ONESHOT 0xffffffff810e14f0
#endif

#ifndef TICK_BROADCAST_ONESHOT_ACTIVE
#define TICK_BROADCAST_ONESHOT_ACTIVE 0xffffffff810e1540
#endif

#ifndef TICK_BROADCAST_ONESHOT_AVAILABLE
#define TICK_BROADCAST_ONESHOT_AVAILABLE 0xffffffff810e1560
#endif

#ifndef TICK_SETUP_HRTIMER_BROADCAST
#define TICK_SETUP_HRTIMER_BROADCAST 0xffffffff810e1690
#endif

#ifndef TICK_PROGRAM_EVENT
#define TICK_PROGRAM_EVENT 0xffffffff810e16d0
#endif

#ifndef TICK_RESUME_ONESHOT
#define TICK_RESUME_ONESHOT 0xffffffff810e1700
#endif

#ifndef TICK_SETUP_ONESHOT
#define TICK_SETUP_ONESHOT 0xffffffff810e1740
#endif

#ifndef TICK_SWITCH_TO_ONESHOT
#define TICK_SWITCH_TO_ONESHOT 0xffffffff810e1780
#endif

#ifndef TICK_ONESHOT_MODE_ACTIVE
#define TICK_ONESHOT_MODE_ACTIVE 0xffffffff810e1840
#endif

#ifndef TICK_INIT_HIGHRES
#define TICK_INIT_HIGHRES 0xffffffff810e1870
#endif

#ifndef GET_CPU_IDLE_TIME_US
#define GET_CPU_IDLE_TIME_US 0xffffffff810e1920
#endif

#ifndef GET_CPU_IOWAIT_TIME_US
#define GET_CPU_IOWAIT_TIME_US 0xffffffff810e1a00
#endif

#ifndef TICK_GET_TICK_SCHED
#define TICK_GET_TICK_SCHED 0xffffffff810e2250
#endif

#ifndef TICK_NOHZ_TICK_STOPPED
#define TICK_NOHZ_TICK_STOPPED 0xffffffff810e2270
#endif

#ifndef TICK_NOHZ_IDLE_ENTER
#define TICK_NOHZ_IDLE_ENTER 0xffffffff810e2280
#endif

#ifndef TICK_NOHZ_IRQ_EXIT
#define TICK_NOHZ_IRQ_EXIT 0xffffffff810e2300
#endif

#ifndef TICK_NOHZ_GET_SLEEP_LENGTH
#define TICK_NOHZ_GET_SLEEP_LENGTH 0xffffffff810e2340
#endif

#ifndef TICK_NOHZ_IDLE_EXIT
#define TICK_NOHZ_IDLE_EXIT 0xffffffff810e2360
#endif

#ifndef TICK_IRQ_ENTER
#define TICK_IRQ_ENTER 0xffffffff810e2500
#endif

#ifndef TICK_SETUP_SCHED_TIMER
#define TICK_SETUP_SCHED_TIMER 0xffffffff810e25d0
#endif

#ifndef TICK_CANCEL_SCHED_TIMER
#define TICK_CANCEL_SCHED_TIMER 0xffffffff810e26c0
#endif

#ifndef TICK_CLOCK_NOTIFY
#define TICK_CLOCK_NOTIFY 0xffffffff810e2720
#endif

#ifndef TICK_ONESHOT_NOTIFY
#define TICK_ONESHOT_NOTIFY 0xffffffff810e2780
#endif

#ifndef TICK_CHECK_ONESHOT_CHANGE
#define TICK_CHECK_ONESHOT_CHANGE 0xffffffff810e27a0
#endif

#ifndef TIMER_STATS_UPDATE_STATS
#define TIMER_STATS_UPDATE_STATS 0xffffffff810e2d60
#endif

#ifndef TK_DEBUG_ACCOUNT_SLEEP_TIME
#define TK_DEBUG_ACCOUNT_SLEEP_TIME 0xffffffff810e3020
#endif

#ifndef EXIT_PI_STATE_LIST
#define EXIT_PI_STATE_LIST 0xffffffff810e57a0
#endif

#ifndef SYS_SET_ROBUST_LIST
#define SYS_SET_ROBUST_LIST 0xffffffff810e5930
#endif

#ifndef SYS_SET_ROBUST_LIST
#define SYS_SET_ROBUST_LIST 0xffffffff810e5930
#endif

#ifndef SYS_GET_ROBUST_LIST
#define SYS_GET_ROBUST_LIST 0xffffffff810e5970
#endif

#ifndef SYS_GET_ROBUST_LIST
#define SYS_GET_ROBUST_LIST 0xffffffff810e5970
#endif

#ifndef HANDLE_FUTEX_DEATH
#define HANDLE_FUTEX_DEATH 0xffffffff810e5a20
#endif

#ifndef EXIT_ROBUST_LIST
#define EXIT_ROBUST_LIST 0xffffffff810e5b40
#endif

#ifndef DO_FUTEX
#define DO_FUTEX 0xffffffff810e5c60
#endif

#ifndef SYS_FUTEX
#define SYS_FUTEX 0xffffffff810e6700
#endif

#ifndef SYS_FUTEX
#define SYS_FUTEX 0xffffffff810e6700
#endif

#ifndef COMPAT_EXIT_ROBUST_LIST
#define COMPAT_EXIT_ROBUST_LIST 0xffffffff810e6870
#endif

#ifndef COMPAT_SYS_SET_ROBUST_LIST
#define COMPAT_SYS_SET_ROBUST_LIST 0xffffffff810e69a0
#endif

#ifndef COMPAT_SYS_SET_ROBUST_LIST
#define COMPAT_SYS_SET_ROBUST_LIST 0xffffffff810e69a0
#endif

#ifndef COMPAT_SYS_GET_ROBUST_LIST
#define COMPAT_SYS_GET_ROBUST_LIST 0xffffffff810e69e0
#endif

#ifndef COMPAT_SYS_GET_ROBUST_LIST
#define COMPAT_SYS_GET_ROBUST_LIST 0xffffffff810e69e0
#endif

#ifndef COMPAT_SYS_FUTEX
#define COMPAT_SYS_FUTEX 0xffffffff810e6a90
#endif

#ifndef COMPAT_SYS_FUTEX
#define COMPAT_SYS_FUTEX 0xffffffff810e6a90
#endif

#ifndef REQUEST_DMA
#define REQUEST_DMA 0xffffffff810e6bf0
#endif

#ifndef FREE_DMA
#define FREE_DMA 0xffffffff810e6c40
#endif

#ifndef SMP_CALL_FUNCTION_SINGLE
#define SMP_CALL_FUNCTION_SINGLE 0xffffffff810e6fc0
#endif

#ifndef SMP_CALL_FUNCTION_SINGLE_ASYNC
#define SMP_CALL_FUNCTION_SINGLE_ASYNC 0xffffffff810e70e0
#endif

#ifndef SMP_CALL_FUNCTION_ANY
#define SMP_CALL_FUNCTION_ANY 0xffffffff810e7160
#endif

#ifndef WAKE_UP_ALL_IDLE_CPUS
#define WAKE_UP_ALL_IDLE_CPUS 0xffffffff810e7250
#endif

#ifndef SMP_CALL_FUNCTION_MANY
#define SMP_CALL_FUNCTION_MANY 0xffffffff810e72b0
#endif

#ifndef SMP_CALL_FUNCTION
#define SMP_CALL_FUNCTION 0xffffffff810e7520
#endif

#ifndef KICK_ALL_CPUS_SYNC
#define KICK_ALL_CPUS_SYNC 0xffffffff810e7550
#endif

#ifndef ON_EACH_CPU
#define ON_EACH_CPU 0xffffffff810e7660
#endif

#ifndef ON_EACH_CPU_MASK
#define ON_EACH_CPU_MASK 0xffffffff810e76b0
#endif

#ifndef ON_EACH_CPU_COND
#define ON_EACH_CPU_COND 0xffffffff810e7710
#endif

#ifndef GENERIC_SMP_CALL_FUNCTION_SINGLE_INTERRUPT
#define GENERIC_SMP_CALL_FUNCTION_SINGLE_INTERRUPT 0xffffffff810e77e0
#endif

#ifndef SYS_CHOWN16
#define SYS_CHOWN16 0xffffffff810e7840
#endif

#ifndef SYS_CHOWN16
#define SYS_CHOWN16 0xffffffff810e7840
#endif

#ifndef SYS_LCHOWN16
#define SYS_LCHOWN16 0xffffffff810e7870
#endif

#ifndef SYS_LCHOWN16
#define SYS_LCHOWN16 0xffffffff810e7870
#endif

#ifndef SYS_FCHOWN16
#define SYS_FCHOWN16 0xffffffff810e78a0
#endif

#ifndef SYS_FCHOWN16
#define SYS_FCHOWN16 0xffffffff810e78a0
#endif

#ifndef SYS_SETREGID16
#define SYS_SETREGID16 0xffffffff810e78d0
#endif

#ifndef SYS_SETREGID16
#define SYS_SETREGID16 0xffffffff810e78d0
#endif

#ifndef SYS_SETGID16
#define SYS_SETGID16 0xffffffff810e7900
#endif

#ifndef SYS_SETGID16
#define SYS_SETGID16 0xffffffff810e7900
#endif

#ifndef SYS_SETREUID16
#define SYS_SETREUID16 0xffffffff810e7930
#endif

#ifndef SYS_SETREUID16
#define SYS_SETREUID16 0xffffffff810e7930
#endif

#ifndef SYS_SETUID16
#define SYS_SETUID16 0xffffffff810e7960
#endif

#ifndef SYS_SETUID16
#define SYS_SETUID16 0xffffffff810e7960
#endif

#ifndef SYS_SETRESUID16
#define SYS_SETRESUID16 0xffffffff810e7990
#endif

#ifndef SYS_SETRESUID16
#define SYS_SETRESUID16 0xffffffff810e7990
#endif

#ifndef SYS_GETRESUID16
#define SYS_GETRESUID16 0xffffffff810e79d0
#endif

#ifndef SYS_GETRESUID16
#define SYS_GETRESUID16 0xffffffff810e79d0
#endif

#ifndef SYS_SETRESGID16
#define SYS_SETRESGID16 0xffffffff810e7ae0
#endif

#ifndef SYS_SETRESGID16
#define SYS_SETRESGID16 0xffffffff810e7ae0
#endif

#ifndef SYS_GETRESGID16
#define SYS_GETRESGID16 0xffffffff810e7b20
#endif

#ifndef SYS_GETRESGID16
#define SYS_GETRESGID16 0xffffffff810e7b20
#endif

#ifndef SYS_SETFSUID16
#define SYS_SETFSUID16 0xffffffff810e7c30
#endif

#ifndef SYS_SETFSUID16
#define SYS_SETFSUID16 0xffffffff810e7c30
#endif

#ifndef SYS_SETFSGID16
#define SYS_SETFSGID16 0xffffffff810e7c60
#endif

#ifndef SYS_SETFSGID16
#define SYS_SETFSGID16 0xffffffff810e7c60
#endif

#ifndef SYS_GETGROUPS16
#define SYS_GETGROUPS16 0xffffffff810e7c90
#endif

#ifndef SYS_GETGROUPS16
#define SYS_GETGROUPS16 0xffffffff810e7c90
#endif

#ifndef SYS_SETGROUPS16
#define SYS_SETGROUPS16 0xffffffff810e7da0
#endif

#ifndef SYS_SETGROUPS16
#define SYS_SETGROUPS16 0xffffffff810e7da0
#endif

#ifndef SYS_GETUID16
#define SYS_GETUID16 0xffffffff810e7f10
#endif

#ifndef SYS_GETEUID16
#define SYS_GETEUID16 0xffffffff810e7fa0
#endif

#ifndef SYS_GETGID16
#define SYS_GETGID16 0xffffffff810e8030
#endif

#ifndef SYS_GETEGID16
#define SYS_GETEGID16 0xffffffff810e80c0
#endif

#ifndef MODULE_REFCOUNT
#define MODULE_REFCOUNT 0xffffffff810e8190
#endif

#ifndef MODULE_LAYOUT
#define MODULE_LAYOUT 0xffffffff810e81a0
#endif

#ifndef REGISTER_MODULE_NOTIFIER
#define REGISTER_MODULE_NOTIFIER 0xffffffff810e85e0
#endif

#ifndef UNREGISTER_MODULE_NOTIFIER
#define UNREGISTER_MODULE_NOTIFIER 0xffffffff810e8600
#endif

#ifndef FIND_MODULE
#define FIND_MODULE 0xffffffff810e8910
#endif

#ifndef MODULE_PUT
#define MODULE_PUT 0xffffffff810e8c10
#endif

#ifndef __MODULE_PUT_AND_EXIT
#define __MODULE_PUT_AND_EXIT 0xffffffff810e8ca0
#endif

#ifndef EACH_SYMBOL_SECTION
#define EACH_SYMBOL_SECTION 0xffffffff810e9290
#endif

#ifndef FIND_SYMBOL
#define FIND_SYMBOL 0xffffffff810e9370
#endif

#ifndef __SYMBOL_PUT
#define __SYMBOL_PUT 0xffffffff810e9680
#endif

#ifndef __MODULE_GET
#define __MODULE_GET 0xffffffff810e9ab0
#endif

#ifndef TRY_MODULE_GET
#define TRY_MODULE_GET 0xffffffff810e9b10
#endif

#ifndef __MODULE_ADDRESS
#define __MODULE_ADDRESS 0xffffffff810e9be0
#endif

#ifndef __MODULE_TEXT_ADDRESS
#define __MODULE_TEXT_ADDRESS 0xffffffff810e9ca0
#endif

#ifndef SYMBOL_PUT_ADDR
#define SYMBOL_PUT_ADDR 0xffffffff810e9d00
#endif

#ifndef REF_MODULE
#define REF_MODULE 0xffffffff810ea680
#endif

#ifndef __SYMBOL_GET
#define __SYMBOL_GET 0xffffffff810ea910
#endif

#ifndef IS_MODULE_PERCPU_ADDRESS
#define IS_MODULE_PERCPU_ADDRESS 0xffffffff810ea980
#endif

#ifndef SET_PAGE_ATTRIBUTES
#define SET_PAGE_ATTRIBUTES 0xffffffff810eaa70
#endif

#ifndef SET_ALL_MODULES_TEXT_RW
#define SET_ALL_MODULES_TEXT_RW 0xffffffff810eaaa0
#endif

#ifndef SET_ALL_MODULES_TEXT_RO
#define SET_ALL_MODULES_TEXT_RO 0xffffffff810eab70
#endif

#ifndef SYS_DELETE_MODULE
#define SYS_DELETE_MODULE 0xffffffff810eaf30
#endif

#ifndef SYS_DELETE_MODULE
#define SYS_DELETE_MODULE 0xffffffff810eaf30
#endif

#ifndef SYS_INIT_MODULE
#define SYS_INIT_MODULE 0xffffffff810ed7a0
#endif

#ifndef SYS_INIT_MODULE
#define SYS_INIT_MODULE 0xffffffff810ed7a0
#endif

#ifndef SYS_FINIT_MODULE
#define SYS_FINIT_MODULE 0xffffffff810ed8f0
#endif

#ifndef SYS_FINIT_MODULE
#define SYS_FINIT_MODULE 0xffffffff810ed8f0
#endif

#ifndef MODULE_ADDRESS_LOOKUP
#define MODULE_ADDRESS_LOOKUP 0xffffffff810ed990
#endif

#ifndef LOOKUP_MODULE_SYMBOL_NAME
#define LOOKUP_MODULE_SYMBOL_NAME 0xffffffff810eda70
#endif

#ifndef LOOKUP_MODULE_SYMBOL_ATTRS
#define LOOKUP_MODULE_SYMBOL_ATTRS 0xffffffff810edb40
#endif

#ifndef MODULE_GET_KALLSYM
#define MODULE_GET_KALLSYM 0xffffffff810edc30
#endif

#ifndef MODULE_KALLSYMS_LOOKUP_NAME
#define MODULE_KALLSYMS_LOOKUP_NAME 0xffffffff810edd80
#endif

#ifndef MODULE_KALLSYMS_ON_EACH_SYMBOL
#define MODULE_KALLSYMS_ON_EACH_SYMBOL 0xffffffff810ede20
#endif

#ifndef SEARCH_MODULE_EXTABLES
#define SEARCH_MODULE_EXTABLES 0xffffffff810eded0
#endif

#ifndef IS_MODULE_ADDRESS
#define IS_MODULE_ADDRESS 0xffffffff810edf50
#endif

#ifndef IS_MODULE_TEXT_ADDRESS
#define IS_MODULE_TEXT_ADDRESS 0xffffffff810edf70
#endif

#ifndef PRINT_MODULES
#define PRINT_MODULES 0xffffffff810edf90
#endif

#ifndef KALLSYMS_ON_EACH_SYMBOL
#define KALLSYMS_ON_EACH_SYMBOL 0xffffffff810ee380
#endif

#ifndef KALLSYMS_LOOKUP_NAME
#define KALLSYMS_LOOKUP_NAME 0xffffffff810ee430
#endif

#ifndef KALLSYMS_LOOKUP_SIZE_OFFSET
#define KALLSYMS_LOOKUP_SIZE_OFFSET 0xffffffff810ee640
#endif

#ifndef KALLSYMS_LOOKUP
#define KALLSYMS_LOOKUP 0xffffffff810ee6e0
#endif

#ifndef SPRINT_SYMBOL
#define SPRINT_SYMBOL 0xffffffff810ee880
#endif

#ifndef __PRINT_SYMBOL
#define __PRINT_SYMBOL 0xffffffff810ee8a0
#endif

#ifndef SPRINT_SYMBOL_NO_OFFSET
#define SPRINT_SYMBOL_NO_OFFSET 0xffffffff810ee910
#endif

#ifndef LOOKUP_SYMBOL_NAME
#define LOOKUP_SYMBOL_NAME 0xffffffff810ee930
#endif

#ifndef LOOKUP_SYMBOL_ATTRS
#define LOOKUP_SYMBOL_ATTRS 0xffffffff810ee9d0
#endif

#ifndef SPRINT_BACKTRACE
#define SPRINT_BACKTRACE 0xffffffff810eea80
#endif

#ifndef SYS_ACCT
#define SYS_ACCT 0xffffffff810ef1d0
#endif

#ifndef SYS_ACCT
#define SYS_ACCT 0xffffffff810ef1d0
#endif

#ifndef ACCT_EXIT_NS
#define ACCT_EXIT_NS 0xffffffff810ef4d0
#endif

#ifndef ACCT_COLLECT
#define ACCT_COLLECT 0xffffffff810ef4f0
#endif

#ifndef ACCT_PROCESS
#define ACCT_PROCESS 0xffffffff810ef6d0
#endif

#ifndef KEXEC_SHOULD_CRASH
#define KEXEC_SHOULD_CRASH 0xffffffff810efe90
#endif

#ifndef KIMAGE_ALLOC_CONTROL_PAGES
#define KIMAGE_ALLOC_CONTROL_PAGES 0xffffffff810efed0
#endif

#ifndef SYS_KEXEC_LOAD
#define SYS_KEXEC_LOAD 0xffffffff810f04d0
#endif

#ifndef SYS_KEXEC_LOAD
#define SYS_KEXEC_LOAD 0xffffffff810f04d0
#endif

#ifndef COMPAT_SYS_KEXEC_LOAD
#define COMPAT_SYS_KEXEC_LOAD 0xffffffff810f0bf0
#endif

#ifndef COMPAT_SYS_KEXEC_LOAD
#define COMPAT_SYS_KEXEC_LOAD 0xffffffff810f0bf0
#endif

#ifndef CRASH_GET_MEMORY_SIZE
#define CRASH_GET_MEMORY_SIZE 0xffffffff810f13c0
#endif

#ifndef CRASH_SHRINK_MEMORY
#define CRASH_SHRINK_MEMORY 0xffffffff810f1480
#endif

#ifndef CRASH_SAVE_CPU
#define CRASH_SAVE_CPU 0xffffffff810f15d0
#endif

#ifndef VMCOREINFO_APPEND_STR
#define VMCOREINFO_APPEND_STR 0xffffffff810f17f0
#endif

#ifndef CRASH_SAVE_VMCOREINFO
#define CRASH_SAVE_VMCOREINFO 0xffffffff810f18c0
#endif

#ifndef CRASH_KEXEC
#define CRASH_KEXEC 0xffffffff810f18f0
#endif

#ifndef KERNEL_KEXEC
#define KERNEL_KEXEC 0xffffffff810f1a30
#endif

#ifndef SIGSET_FROM_COMPAT
#define SIGSET_FROM_COMPAT 0xffffffff810f1ab0
#endif

#ifndef COMPAT_ALLOC_USER_SPACE
#define COMPAT_ALLOC_USER_SPACE 0xffffffff810f1d70
#endif

#ifndef COMPAT_PUT_TIMEVAL
#define COMPAT_PUT_TIMEVAL 0xffffffff810f2130
#endif

#ifndef COMPAT_PUT_TIMESPEC
#define COMPAT_PUT_TIMESPEC 0xffffffff810f21d0
#endif

#ifndef COMPAT_GET_TIMEVAL
#define COMPAT_GET_TIMEVAL 0xffffffff810f2350
#endif

#ifndef COMPAT_GET_TIMESPEC
#define COMPAT_GET_TIMESPEC 0xffffffff810f2400
#endif

#ifndef COMPAT_SYS_GETTIMEOFDAY
#define COMPAT_SYS_GETTIMEOFDAY 0xffffffff810f2520
#endif

#ifndef COMPAT_SYS_GETTIMEOFDAY
#define COMPAT_SYS_GETTIMEOFDAY 0xffffffff810f2520
#endif

#ifndef COMPAT_SYS_SETTIMEOFDAY
#define COMPAT_SYS_SETTIMEOFDAY 0xffffffff810f2590
#endif

#ifndef COMPAT_SYS_SETTIMEOFDAY
#define COMPAT_SYS_SETTIMEOFDAY 0xffffffff810f2590
#endif

#ifndef COMPAT_CONVERT_TIMESPEC
#define COMPAT_CONVERT_TIMESPEC 0xffffffff810f2650
#endif

#ifndef COMPAT_SYS_NANOSLEEP
#define COMPAT_SYS_NANOSLEEP 0xffffffff810f26f0
#endif

#ifndef COMPAT_SYS_NANOSLEEP
#define COMPAT_SYS_NANOSLEEP 0xffffffff810f26f0
#endif

#ifndef COMPAT_SYS_GETITIMER
#define COMPAT_SYS_GETITIMER 0xffffffff810f2830
#endif

#ifndef COMPAT_SYS_GETITIMER
#define COMPAT_SYS_GETITIMER 0xffffffff810f2830
#endif

#ifndef COMPAT_SYS_SETITIMER
#define COMPAT_SYS_SETITIMER 0xffffffff810f28d0
#endif

#ifndef COMPAT_SYS_SETITIMER
#define COMPAT_SYS_SETITIMER 0xffffffff810f28d0
#endif

#ifndef COMPAT_SYS_TIMES
#define COMPAT_SYS_TIMES 0xffffffff810f2a50
#endif

#ifndef COMPAT_SYS_TIMES
#define COMPAT_SYS_TIMES 0xffffffff810f2a50
#endif

#ifndef COMPAT_SYS_SIGPENDING
#define COMPAT_SYS_SIGPENDING 0xffffffff810f2b70
#endif

#ifndef COMPAT_SYS_SIGPENDING
#define COMPAT_SYS_SIGPENDING 0xffffffff810f2b70
#endif

#ifndef COMPAT_SYS_SIGPROCMASK
#define COMPAT_SYS_SIGPROCMASK 0xffffffff810f2be0
#endif

#ifndef COMPAT_SYS_SIGPROCMASK
#define COMPAT_SYS_SIGPROCMASK 0xffffffff810f2be0
#endif

#ifndef COMPAT_SYS_SETRLIMIT
#define COMPAT_SYS_SETRLIMIT 0xffffffff810f2ca0
#endif

#ifndef COMPAT_SYS_SETRLIMIT
#define COMPAT_SYS_SETRLIMIT 0xffffffff810f2ca0
#endif

#ifndef COMPAT_SYS_OLD_GETRLIMIT
#define COMPAT_SYS_OLD_GETRLIMIT 0xffffffff810f2d60
#endif

#ifndef COMPAT_SYS_OLD_GETRLIMIT
#define COMPAT_SYS_OLD_GETRLIMIT 0xffffffff810f2d60
#endif

#ifndef COMPAT_SYS_GETRLIMIT
#define COMPAT_SYS_GETRLIMIT 0xffffffff810f2e30
#endif

#ifndef COMPAT_SYS_GETRLIMIT
#define COMPAT_SYS_GETRLIMIT 0xffffffff810f2e30
#endif

#ifndef PUT_COMPAT_RUSAGE
#define PUT_COMPAT_RUSAGE 0xffffffff810f2ed0
#endif

#ifndef COMPAT_SYS_WAIT4
#define COMPAT_SYS_WAIT4 0xffffffff810f3260
#endif

#ifndef COMPAT_SYS_WAIT4
#define COMPAT_SYS_WAIT4 0xffffffff810f3260
#endif

#ifndef COMPAT_SYS_WAITID
#define COMPAT_SYS_WAITID 0xffffffff810f3280
#endif

#ifndef COMPAT_SYS_WAITID
#define COMPAT_SYS_WAITID 0xffffffff810f3280
#endif

#ifndef GET_COMPAT_ITIMERSPEC
#define GET_COMPAT_ITIMERSPEC 0xffffffff810f32a0
#endif

#ifndef PUT_COMPAT_ITIMERSPEC
#define PUT_COMPAT_ITIMERSPEC 0xffffffff810f32e0
#endif

#ifndef COMPAT_SYS_TIMER_SETTIME
#define COMPAT_SYS_TIMER_SETTIME 0xffffffff810f3320
#endif

#ifndef COMPAT_SYS_TIMER_SETTIME
#define COMPAT_SYS_TIMER_SETTIME 0xffffffff810f3320
#endif

#ifndef COMPAT_SYS_TIMER_GETTIME
#define COMPAT_SYS_TIMER_GETTIME 0xffffffff810f33f0
#endif

#ifndef COMPAT_SYS_TIMER_GETTIME
#define COMPAT_SYS_TIMER_GETTIME 0xffffffff810f33f0
#endif

#ifndef COMPAT_SYS_CLOCK_SETTIME
#define COMPAT_SYS_CLOCK_SETTIME 0xffffffff810f3470
#endif

#ifndef COMPAT_SYS_CLOCK_SETTIME
#define COMPAT_SYS_CLOCK_SETTIME 0xffffffff810f3470
#endif

#ifndef COMPAT_SYS_CLOCK_GETTIME
#define COMPAT_SYS_CLOCK_GETTIME 0xffffffff810f34e0
#endif

#ifndef COMPAT_SYS_CLOCK_GETTIME
#define COMPAT_SYS_CLOCK_GETTIME 0xffffffff810f34e0
#endif

#ifndef COMPAT_SYS_CLOCK_ADJTIME
#define COMPAT_SYS_CLOCK_ADJTIME 0xffffffff810f3560
#endif

#ifndef COMPAT_SYS_CLOCK_ADJTIME
#define COMPAT_SYS_CLOCK_ADJTIME 0xffffffff810f3560
#endif

#ifndef COMPAT_SYS_CLOCK_GETRES
#define COMPAT_SYS_CLOCK_GETRES 0xffffffff810f3580
#endif

#ifndef COMPAT_SYS_CLOCK_GETRES
#define COMPAT_SYS_CLOCK_GETRES 0xffffffff810f3580
#endif

#ifndef COMPAT_SYS_CLOCK_NANOSLEEP
#define COMPAT_SYS_CLOCK_NANOSLEEP 0xffffffff810f3600
#endif

#ifndef COMPAT_SYS_CLOCK_NANOSLEEP
#define COMPAT_SYS_CLOCK_NANOSLEEP 0xffffffff810f3600
#endif

#ifndef GET_COMPAT_SIGEVENT
#define GET_COMPAT_SIGEVENT 0xffffffff810f36e0
#endif

#ifndef COMPAT_SYS_TIMER_CREATE
#define COMPAT_SYS_TIMER_CREATE 0xffffffff810f3780
#endif

#ifndef COMPAT_SYS_TIMER_CREATE
#define COMPAT_SYS_TIMER_CREATE 0xffffffff810f3780
#endif

#ifndef COMPAT_GET_BITMAP
#define COMPAT_GET_BITMAP 0xffffffff810f3810
#endif

#ifndef COMPAT_SYS_SCHED_SETAFFINITY
#define COMPAT_SYS_SCHED_SETAFFINITY 0xffffffff810f38d0
#endif

#ifndef COMPAT_SYS_SCHED_SETAFFINITY
#define COMPAT_SYS_SCHED_SETAFFINITY 0xffffffff810f38d0
#endif

#ifndef COMPAT_PUT_BITMAP
#define COMPAT_PUT_BITMAP 0xffffffff810f3930
#endif

#ifndef COMPAT_SYS_SCHED_GETAFFINITY
#define COMPAT_SYS_SCHED_GETAFFINITY 0xffffffff810f39d0
#endif

#ifndef COMPAT_SYS_SCHED_GETAFFINITY
#define COMPAT_SYS_SCHED_GETAFFINITY 0xffffffff810f39d0
#endif

#ifndef SIGSET_TO_COMPAT
#define SIGSET_TO_COMPAT 0xffffffff810f3a50
#endif

#ifndef COMPAT_SYS_RT_SIGTIMEDWAIT
#define COMPAT_SYS_RT_SIGTIMEDWAIT 0xffffffff810f3a70
#endif

#ifndef COMPAT_SYS_RT_SIGTIMEDWAIT
#define COMPAT_SYS_RT_SIGTIMEDWAIT 0xffffffff810f3a70
#endif

#ifndef COMPAT_SYS_TIME
#define COMPAT_SYS_TIME 0xffffffff810f3a90
#endif

#ifndef COMPAT_SYS_TIME
#define COMPAT_SYS_TIME 0xffffffff810f3a90
#endif

#ifndef COMPAT_SYS_STIME
#define COMPAT_SYS_STIME 0xffffffff810f3ae0
#endif

#ifndef COMPAT_SYS_STIME
#define COMPAT_SYS_STIME 0xffffffff810f3ae0
#endif

#ifndef COMPAT_SYS_ADJTIMEX
#define COMPAT_SYS_ADJTIMEX 0xffffffff810f3b30
#endif

#ifndef COMPAT_SYS_ADJTIMEX
#define COMPAT_SYS_ADJTIMEX 0xffffffff810f3b30
#endif

#ifndef COMPAT_SYS_MOVE_PAGES
#define COMPAT_SYS_MOVE_PAGES 0xffffffff810f3b50
#endif

#ifndef COMPAT_SYS_MOVE_PAGES
#define COMPAT_SYS_MOVE_PAGES 0xffffffff810f3b50
#endif

#ifndef COMPAT_SYS_MIGRATE_PAGES
#define COMPAT_SYS_MIGRATE_PAGES 0xffffffff810f3c30
#endif

#ifndef COMPAT_SYS_MIGRATE_PAGES
#define COMPAT_SYS_MIGRATE_PAGES 0xffffffff810f3c30
#endif

#ifndef COMPAT_SYS_SCHED_RR_GET_INTERVAL
#define COMPAT_SYS_SCHED_RR_GET_INTERVAL 0xffffffff810f3da0
#endif

#ifndef COMPAT_SYS_SCHED_RR_GET_INTERVAL
#define COMPAT_SYS_SCHED_RR_GET_INTERVAL 0xffffffff810f3da0
#endif

#ifndef OF_CSS
#define OF_CSS 0xffffffff810f3e80
#endif

#ifndef TASK_CGROUP_PATH
#define TASK_CGROUP_PATH 0xffffffff810f54c0
#endif

#ifndef CGROUP_GET_E_CSS
#define CGROUP_GET_E_CSS 0xffffffff810f6a70
#endif

#ifndef CGROUP_IS_DESCENDANT
#define CGROUP_IS_DESCENDANT 0xffffffff810f6b60
#endif

#ifndef CGROUP_TASKSET_NEXT
#define CGROUP_TASKSET_NEXT 0xffffffff810f6b90
#endif

#ifndef CGROUP_TASKSET_FIRST
#define CGROUP_TASKSET_FIRST 0xffffffff810f6c20
#endif

#ifndef CSS_NEXT_CHILD
#define CSS_NEXT_CHILD 0xffffffff810f6c50
#endif

#ifndef CSS_NEXT_DESCENDANT_PRE
#define CSS_NEXT_DESCENDANT_PRE 0xffffffff810f7e60
#endif

#ifndef CGROUP_RM_CFTYPES
#define CGROUP_RM_CFTYPES 0xffffffff810f8010
#endif

#ifndef CGROUP_ADD_DFL_CFTYPES
#define CGROUP_ADD_DFL_CFTYPES 0xffffffff810f8100
#endif

#ifndef CGROUP_ADD_LEGACY_CFTYPES
#define CGROUP_ADD_LEGACY_CFTYPES 0xffffffff810f8140
#endif

#ifndef CSS_RIGHTMOST_DESCENDANT
#define CSS_RIGHTMOST_DESCENDANT 0xffffffff810f81a0
#endif

#ifndef CSS_NEXT_DESCENDANT_POST
#define CSS_NEXT_DESCENDANT_POST 0xffffffff810f81f0
#endif

#ifndef CSS_HAS_ONLINE_CHILDREN
#define CSS_HAS_ONLINE_CHILDREN 0xffffffff810f8270
#endif

#ifndef CGROUP_ATTACH_TASK_ALL
#define CGROUP_ATTACH_TASK_ALL 0xffffffff810f8d60
#endif

#ifndef CSS_TASK_ITER_START
#define CSS_TASK_ITER_START 0xffffffff810f9db0
#endif

#ifndef CSS_TASK_ITER_NEXT
#define CSS_TASK_ITER_NEXT 0xffffffff810f9e50
#endif

#ifndef CSS_TASK_ITER_END
#define CSS_TASK_ITER_END 0xffffffff810fa380
#endif

#ifndef CGROUP_TRANSFER_TASKS
#define CGROUP_TRANSFER_TASKS 0xffffffff810fa3a0
#endif

#ifndef CGROUPSTATS_BUILD
#define CGROUPSTATS_BUILD 0xffffffff810fa4c0
#endif

#ifndef PROC_CGROUP_SHOW
#define PROC_CGROUP_SHOW 0xffffffff810fa620
#endif

#ifndef CGROUP_FORK
#define CGROUP_FORK 0xffffffff810fa810
#endif

#ifndef CGROUP_POST_FORK
#define CGROUP_POST_FORK 0xffffffff810fa840
#endif

#ifndef CGROUP_EXIT
#define CGROUP_EXIT 0xffffffff810fa900
#endif

#ifndef CSS_TRYGET_ONLINE_FROM_DIR
#define CSS_TRYGET_ONLINE_FROM_DIR 0xffffffff810faa10
#endif

#ifndef CSS_FROM_ID
#define CSS_FROM_ID 0xffffffff810fab10
#endif

#ifndef CGROUP_FREEZING
#define CGROUP_FREEZING 0xffffffff810fb2c0
#endif

#ifndef CPUSET_MEM_SPREAD_NODE
#define CPUSET_MEM_SPREAD_NODE 0xffffffff810fb6a0
#endif

#ifndef REBUILD_SCHED_DOMAINS
#define REBUILD_SCHED_DOMAINS 0xffffffff810fd920
#endif

#ifndef CURRENT_CPUSET_IS_BEING_REBOUND
#define CURRENT_CPUSET_IS_BEING_REBOUND 0xffffffff810fe180
#endif

#ifndef CPUSET_UPDATE_ACTIVE_CPUS
#define CPUSET_UPDATE_ACTIVE_CPUS 0xffffffff810fe1b0
#endif

#ifndef CPUSET_CPUS_ALLOWED
#define CPUSET_CPUS_ALLOWED 0xffffffff810fe1f0
#endif

#ifndef CPUSET_CPUS_ALLOWED_FALLBACK
#define CPUSET_CPUS_ALLOWED_FALLBACK 0xffffffff810fe240
#endif

#ifndef CPUSET_MEMS_ALLOWED
#define CPUSET_MEMS_ALLOWED 0xffffffff810fe270
#endif

#ifndef CPUSET_NODEMASK_VALID_MEMS_ALLOWED
#define CPUSET_NODEMASK_VALID_MEMS_ALLOWED 0xffffffff810fe2c0
#endif

#ifndef __CPUSET_NODE_ALLOWED
#define __CPUSET_NODE_ALLOWED 0xffffffff810fe2e0
#endif

#ifndef CPUSET_SLAB_SPREAD_NODE
#define CPUSET_SLAB_SPREAD_NODE 0xffffffff810fe3d0
#endif

#ifndef CPUSET_MEMS_ALLOWED_INTERSECTS
#define CPUSET_MEMS_ALLOWED_INTERSECTS 0xffffffff810fe430
#endif

#ifndef CPUSET_PRINT_TASK_MEMS_ALLOWED
#define CPUSET_PRINT_TASK_MEMS_ALLOWED 0xffffffff810fe450
#endif

#ifndef __CPUSET_MEMORY_PRESSURE_BUMP
#define __CPUSET_MEMORY_PRESSURE_BUMP 0xffffffff810fe4b0
#endif

#ifndef PROC_CPUSET_SHOW
#define PROC_CPUSET_SHOW 0xffffffff810fe520
#endif

#ifndef CPUSET_TASK_STATUS_ALLOWED
#define CPUSET_TASK_STATUS_ALLOWED 0xffffffff810fe5b0
#endif

#ifndef FREE_UTS_NS
#define FREE_UTS_NS 0xffffffff810fe600
#endif

#ifndef COPY_UTSNAME
#define COPY_UTSNAME 0xffffffff810fe7d0
#endif

#ifndef MAKE_KUID
#define MAKE_KUID 0xffffffff810fea70
#endif

#ifndef FROM_KUID
#define FROM_KUID 0xffffffff810fea80
#endif

#ifndef FROM_KUID_MUNGED
#define FROM_KUID_MUNGED 0xffffffff810fea90
#endif

#ifndef MAKE_KGID
#define MAKE_KGID 0xffffffff810feab0
#endif

#ifndef FROM_KGID
#define FROM_KGID 0xffffffff810feac0
#endif

#ifndef FROM_KGID_MUNGED
#define FROM_KGID_MUNGED 0xffffffff810fead0
#endif

#ifndef MAKE_KPROJID
#define MAKE_KPROJID 0xffffffff810feaf0
#endif

#ifndef FROM_KPROJID
#define FROM_KPROJID 0xffffffff810feb00
#endif

#ifndef FROM_KPROJID_MUNGED
#define FROM_KPROJID_MUNGED 0xffffffff810feb10
#endif

#ifndef FREE_USER_NS
#define FREE_USER_NS 0xffffffff810fec40
#endif

#ifndef CREATE_USER_NS
#define CREATE_USER_NS 0xffffffff810ff470
#endif

#ifndef UNSHARE_USERNS
#define UNSHARE_USERNS 0xffffffff810ff620
#endif

#ifndef PROC_UID_MAP_WRITE
#define PROC_UID_MAP_WRITE 0xffffffff810ff6a0
#endif

#ifndef PROC_GID_MAP_WRITE
#define PROC_GID_MAP_WRITE 0xffffffff810ff700
#endif

#ifndef PROC_PROJID_MAP_WRITE
#define PROC_PROJID_MAP_WRITE 0xffffffff810ff760
#endif

#ifndef PROC_SETGROUPS_SHOW
#define PROC_SETGROUPS_SHOW 0xffffffff810ff7c0
#endif

#ifndef PROC_SETGROUPS_WRITE
#define PROC_SETGROUPS_WRITE 0xffffffff810ff800
#endif

#ifndef USERNS_MAY_SETGROUPS
#define USERNS_MAY_SETGROUPS 0xffffffff810ff940
#endif

#ifndef PUT_PID_NS
#define PUT_PID_NS 0xffffffff810ffb20
#endif

#ifndef COPY_PID_NS
#define COPY_PID_NS 0xffffffff810ffd20
#endif

#ifndef ZAP_PID_NS_PROCESSES
#define ZAP_PID_NS_PROCESSES 0xffffffff811000b0
#endif

#ifndef REBOOT_PID_NS
#define REBOOT_PID_NS 0xffffffff81100260
#endif

#ifndef STOP_ONE_CPU
#define STOP_ONE_CPU 0xffffffff811008d0
#endif

#ifndef STOP_TWO_CPUS
#define STOP_TWO_CPUS 0xffffffff81100940
#endif

#ifndef STOP_ONE_CPU_NOWAIT
#define STOP_ONE_CPU_NOWAIT 0xffffffff81100ae0
#endif

#ifndef STOP_CPUS
#define STOP_CPUS 0xffffffff81100b20
#endif

#ifndef TRY_STOP_CPUS
#define TRY_STOP_CPUS 0xffffffff81100b70
#endif

#ifndef __STOP_MACHINE
#define __STOP_MACHINE 0xffffffff81100bc0
#endif

#ifndef STOP_MACHINE
#define STOP_MACHINE 0xffffffff81100cb0
#endif

#ifndef STOP_MACHINE_FROM_INACTIVE_CPU
#define STOP_MACHINE_FROM_INACTIVE_CPU 0xffffffff81100cf0
#endif

#ifndef AUDIT_PANIC
#define AUDIT_PANIC 0xffffffff81100fe0
#endif

#ifndef AUDIT_LOG_LOST
#define AUDIT_LOG_LOST 0xffffffff811010e0
#endif

#ifndef AUDIT_LOG_END
#define AUDIT_LOG_END 0xffffffff81101440
#endif

#ifndef AUDIT_LOG_FORMAT
#define AUDIT_LOG_FORMAT 0xffffffff811017a0
#endif

#ifndef AUDIT_LOG_TASK_CONTEXT
#define AUDIT_LOG_TASK_CONTEXT 0xffffffff811017f0
#endif

#ifndef AUDIT_LOG_SECCTX
#define AUDIT_LOG_SECCTX 0xffffffff81101890
#endif

#ifndef AUDIT_LOG_START
#define AUDIT_LOG_START 0xffffffff81101900
#endif

#ifndef AUDIT_LOG
#define AUDIT_LOG 0xffffffff81101df0
#endif

#ifndef AUDIT_SEND_LIST
#define AUDIT_SEND_LIST 0xffffffff81101e50
#endif

#ifndef AUDIT_MAKE_REPLY
#define AUDIT_MAKE_REPLY 0xffffffff81101f10
#endif

#ifndef IS_AUDIT_FEATURE_SET
#define IS_AUDIT_FEATURE_SET 0xffffffff811020e0
#endif

#ifndef AUDIT_SERIAL
#define AUDIT_SERIAL 0xffffffff81102100
#endif

#ifndef AUDIT_LOG_N_HEX
#define AUDIT_LOG_N_HEX 0xffffffff81102120
#endif

#ifndef AUDIT_LOG_N_STRING
#define AUDIT_LOG_N_STRING 0xffffffff811022a0
#endif

#ifndef AUDIT_STRING_CONTAINS_CONTROL
#define AUDIT_STRING_CONTAINS_CONTROL 0xffffffff811023f0
#endif

#ifndef AUDIT_LOG_N_UNTRUSTEDSTRING
#define AUDIT_LOG_N_UNTRUSTEDSTRING 0xffffffff81102430
#endif

#ifndef AUDIT_LOG_UNTRUSTEDSTRING
#define AUDIT_LOG_UNTRUSTEDSTRING 0xffffffff811024a0
#endif

#ifndef AUDIT_LOG_D_PATH
#define AUDIT_LOG_D_PATH 0xffffffff811024d0
#endif

#ifndef AUDIT_LOG_SESSION_INFO
#define AUDIT_LOG_SESSION_INFO 0xffffffff811025a0
#endif

#ifndef AUDIT_LOG_KEY
#define AUDIT_LOG_KEY 0xffffffff811027c0
#endif

#ifndef AUDIT_LOG_CAP
#define AUDIT_LOG_CAP 0xffffffff81102810
#endif

#ifndef AUDIT_COPY_INODE
#define AUDIT_COPY_INODE 0xffffffff81102860
#endif

#ifndef AUDIT_LOG_NAME
#define AUDIT_LOG_NAME 0xffffffff811028f0
#endif

#ifndef AUDIT_LOG_D_PATH_EXE
#define AUDIT_LOG_D_PATH_EXE 0xffffffff81102c70
#endif

#ifndef AUDIT_LOG_TASK_INFO
#define AUDIT_LOG_TASK_INFO 0xffffffff81102f20
#endif

#ifndef AUDIT_LOG_LINK_DENIED
#define AUDIT_LOG_LINK_DENIED 0xffffffff81103de0
#endif

#ifndef AUDIT_FREE_RULE_RCU
#define AUDIT_FREE_RULE_RCU 0xffffffff811043e0
#endif

#ifndef AUDIT_UNPACK_STRING
#define AUDIT_UNPACK_STRING 0xffffffff811044b0
#endif

#ifndef AUDIT_MATCH_CLASS
#define AUDIT_MATCH_CLASS 0xffffffff81104530
#endif

#ifndef AUDIT_DUPE_RULE
#define AUDIT_DUPE_RULE 0xffffffff81104570
#endif

#ifndef AUDIT_RULE_CHANGE
#define AUDIT_RULE_CHANGE 0xffffffff81104840
#endif

#ifndef AUDIT_LIST_RULES_SEND
#define AUDIT_LIST_RULES_SEND 0xffffffff81105400
#endif

#ifndef AUDIT_COMPARATOR
#define AUDIT_COMPARATOR 0xffffffff811057c0
#endif

#ifndef AUDIT_UID_COMPARATOR
#define AUDIT_UID_COMPARATOR 0xffffffff81105850
#endif

#ifndef AUDIT_GID_COMPARATOR
#define AUDIT_GID_COMPARATOR 0xffffffff811058d0
#endif

#ifndef PARENT_LEN
#define PARENT_LEN 0xffffffff81105950
#endif

#ifndef AUDIT_COMPARE_DNAME_PATH
#define AUDIT_COMPARE_DNAME_PATH 0xffffffff811059c0
#endif

#ifndef AUDIT_FILTER_USER
#define AUDIT_FILTER_USER 0xffffffff81105a50
#endif

#ifndef AUDIT_FILTER_TYPE
#define AUDIT_FILTER_TYPE 0xffffffff81105c40
#endif

#ifndef AUDIT_UPDATE_LSM_RULES
#define AUDIT_UPDATE_LSM_RULES 0xffffffff81105d10
#endif

#ifndef __AUDIT_INODE_CHILD
#define __AUDIT_INODE_CHILD 0xffffffff811081c0
#endif

#ifndef AUDIT_FILTER_INODES
#define AUDIT_FILTER_INODES 0xffffffff81108540
#endif

#ifndef AUDIT_ALLOC
#define AUDIT_ALLOC 0xffffffff81108660
#endif

#ifndef __AUDIT_FREE
#define __AUDIT_FREE 0xffffffff811087c0
#endif

#ifndef __AUDIT_SYSCALL_ENTRY
#define __AUDIT_SYSCALL_ENTRY 0xffffffff81108a00
#endif

#ifndef __AUDIT_SYSCALL_EXIT
#define __AUDIT_SYSCALL_EXIT 0xffffffff81108b10
#endif

#ifndef __AUDIT_REUSENAME
#define __AUDIT_REUSENAME 0xffffffff81108da0
#endif

#ifndef __AUDIT_GETNAME
#define __AUDIT_GETNAME 0xffffffff81108e00
#endif

#ifndef __AUDIT_INODE
#define __AUDIT_INODE 0xffffffff81108eb0
#endif

#ifndef __AUDIT_FILE
#define __AUDIT_FILE 0xffffffff81109200
#endif

#ifndef AUDITSC_GET_STAMP
#define AUDITSC_GET_STAMP 0xffffffff81109220
#endif

#ifndef AUDIT_SET_LOGINUID
#define AUDIT_SET_LOGINUID 0xffffffff81109290
#endif

#ifndef __AUDIT_MQ_OPEN
#define __AUDIT_MQ_OPEN 0xffffffff81109450
#endif

#ifndef __AUDIT_MQ_SENDRECV
#define __AUDIT_MQ_SENDRECV 0xffffffff81109520
#endif

#ifndef __AUDIT_MQ_NOTIFY
#define __AUDIT_MQ_NOTIFY 0xffffffff81109590
#endif

#ifndef __AUDIT_MQ_GETSETATTR
#define __AUDIT_MQ_GETSETATTR 0xffffffff811095e0
#endif

#ifndef __AUDIT_IPC_OBJ
#define __AUDIT_IPC_OBJ 0xffffffff81109660
#endif

#ifndef __AUDIT_IPC_SET_PERM
#define __AUDIT_IPC_SET_PERM 0xffffffff811096c0
#endif

#ifndef __AUDIT_BPRM
#define __AUDIT_BPRM 0xffffffff81109700
#endif

#ifndef __AUDIT_SOCKETCALL
#define __AUDIT_SOCKETCALL 0xffffffff81109730
#endif

#ifndef __AUDIT_FD_PAIR
#define __AUDIT_FD_PAIR 0xffffffff811097d0
#endif

#ifndef __AUDIT_SOCKADDR
#define __AUDIT_SOCKADDR 0xffffffff81109800
#endif

#ifndef __AUDIT_PTRACE
#define __AUDIT_PTRACE 0xffffffff81109880
#endif

#ifndef __AUDIT_SIGNAL_INFO
#define __AUDIT_SIGNAL_INFO 0xffffffff81109910
#endif

#ifndef __AUDIT_LOG_BPRM_FCAPS
#define __AUDIT_LOG_BPRM_FCAPS 0xffffffff81109b90
#endif

#ifndef __AUDIT_LOG_CAPSET
#define __AUDIT_LOG_CAPSET 0xffffffff81109c80
#endif

#ifndef __AUDIT_MMAP_FD
#define __AUDIT_MMAP_FD 0xffffffff81109ce0
#endif

#ifndef AUDIT_CORE_DUMPS
#define AUDIT_CORE_DUMPS 0xffffffff81109d10
#endif

#ifndef __AUDIT_SECCOMP
#define __AUDIT_SECCOMP 0xffffffff81109d80
#endif

#ifndef AUDIT_KILLED_TREES
#define AUDIT_KILLED_TREES 0xffffffff81109e70
#endif

#ifndef AUDIT_GET_WATCH
#define AUDIT_GET_WATCH 0xffffffff8110a070
#endif

#ifndef AUDIT_PUT_WATCH
#define AUDIT_PUT_WATCH 0xffffffff8110a080
#endif

#ifndef AUDIT_WATCH_PATH
#define AUDIT_WATCH_PATH 0xffffffff8110a730
#endif

#ifndef AUDIT_WATCH_COMPARE
#define AUDIT_WATCH_COMPARE 0xffffffff8110a740
#endif

#ifndef AUDIT_TO_WATCH
#define AUDIT_TO_WATCH 0xffffffff8110a770
#endif

#ifndef AUDIT_ADD_WATCH
#define AUDIT_ADD_WATCH 0xffffffff8110a7f0
#endif

#ifndef AUDIT_REMOVE_WATCH_RULE
#define AUDIT_REMOVE_WATCH_RULE 0xffffffff8110aa90
#endif

#ifndef AUDIT_TREE_PATH
#define AUDIT_TREE_PATH 0xffffffff8110bb80
#endif

#ifndef AUDIT_PUT_CHUNK
#define AUDIT_PUT_CHUNK 0xffffffff8110bb90
#endif

#ifndef AUDIT_TREE_LOOKUP
#define AUDIT_TREE_LOOKUP 0xffffffff8110bbe0
#endif

#ifndef AUDIT_TREE_MATCH
#define AUDIT_TREE_MATCH 0xffffffff8110bc50
#endif

#ifndef AUDIT_REMOVE_TREE_RULE
#define AUDIT_REMOVE_TREE_RULE 0xffffffff8110bca0
#endif

#ifndef AUDIT_TRIM_TREES
#define AUDIT_TRIM_TREES 0xffffffff8110bdb0
#endif

#ifndef AUDIT_MAKE_TREE
#define AUDIT_MAKE_TREE 0xffffffff8110bfb0
#endif

#ifndef AUDIT_PUT_TREE
#define AUDIT_PUT_TREE 0xffffffff8110c0b0
#endif

#ifndef AUDIT_ADD_TREE_RULE
#define AUDIT_ADD_TREE_RULE 0xffffffff8110c0e0
#endif

#ifndef AUDIT_TAG_TREE
#define AUDIT_TAG_TREE 0xffffffff8110c410
#endif

#ifndef AUDIT_KILL_TREES
#define AUDIT_KILL_TREES 0xffffffff8110c7c0
#endif

#ifndef GET_KPROBE
#define GET_KPROBE 0xffffffff8110c850
#endif

#ifndef OPT_PRE_HANDLER
#define OPT_PRE_HANDLER 0xffffffff8110c9c0
#endif

#ifndef DUMP_KPROBE
#define DUMP_KPROBE 0xffffffff8110cbb0
#endif

#ifndef KRETPROBE_HASH_LOCK
#define KRETPROBE_HASH_LOCK 0xffffffff8110cca0
#endif

#ifndef KRETPROBE_HASH_UNLOCK
#define KRETPROBE_HASH_UNLOCK 0xffffffff8110cd00
#endif

#ifndef KPROBES_INC_NMISSED_COUNT
#define KPROBES_INC_NMISSED_COUNT 0xffffffff8110d320
#endif

#ifndef RECYCLE_RP_INST
#define RECYCLE_RP_INST 0xffffffff8110d870
#endif

#ifndef KPROBE_FLUSH_TASK
#define KPROBE_FLUSH_TASK 0xffffffff8110d910
#endif

#ifndef ENABLE_KPROBE
#define ENABLE_KPROBE 0xffffffff8110db00
#endif

#ifndef DISABLE_KPROBE
#define DISABLE_KPROBE 0xffffffff8110dd60
#endif

#ifndef UNREGISTER_KPROBES
#define UNREGISTER_KPROBES 0xffffffff8110e690
#endif

#ifndef UNREGISTER_KPROBE
#define UNREGISTER_KPROBE 0xffffffff8110e6c0
#endif

#ifndef UNREGISTER_JPROBES
#define UNREGISTER_JPROBES 0xffffffff8110e7a0
#endif

#ifndef UNREGISTER_JPROBE
#define UNREGISTER_JPROBE 0xffffffff8110e7d0
#endif

#ifndef UNREGISTER_KRETPROBES
#define UNREGISTER_KRETPROBES 0xffffffff8110e8c0
#endif

#ifndef UNREGISTER_KRETPROBE
#define UNREGISTER_KRETPROBE 0xffffffff8110e8f0
#endif

#ifndef __GET_INSN_SLOT
#define __GET_INSN_SLOT 0xffffffff8110e920
#endif

#ifndef __FREE_INSN_SLOT
#define __FREE_INSN_SLOT 0xffffffff8110eb00
#endif

#ifndef PROC_KPROBES_OPTIMIZATION_HANDLER
#define PROC_KPROBES_OPTIMIZATION_HANDLER 0xffffffff8110ec00
#endif

#ifndef REGISTER_KPROBE
#define REGISTER_KPROBE 0xffffffff8110edd0
#endif

#ifndef REGISTER_KPROBES
#define REGISTER_KPROBES 0xffffffff8110f360
#endif

#ifndef REGISTER_KRETPROBE
#define REGISTER_KRETPROBE 0xffffffff8110f3d0
#endif

#ifndef REGISTER_KRETPROBES
#define REGISTER_KRETPROBES 0xffffffff8110f640
#endif

#ifndef REGISTER_JPROBES
#define REGISTER_JPROBES 0xffffffff8110f6c0
#endif

#ifndef REGISTER_JPROBE
#define REGISTER_JPROBE 0xffffffff8110f790
#endif

#ifndef RESET_HUNG_TASK_DETECTOR
#define RESET_HUNG_TASK_DETECTOR 0xffffffff8110f7e0
#endif

#ifndef PROC_DOHUNG_TASK_TIMEOUT_SECS
#define PROC_DOHUNG_TASK_TIMEOUT_SECS 0xffffffff8110fb20
#endif

#ifndef TOUCH_SOFTLOCKUP_WATCHDOG
#define TOUCH_SOFTLOCKUP_WATCHDOG 0xffffffff8110fb60
#endif

#ifndef TOUCH_NMI_WATCHDOG
#define TOUCH_NMI_WATCHDOG 0xffffffff8110fb80
#endif

#ifndef HARDLOCKUP_DETECTOR_DISABLE
#define HARDLOCKUP_DETECTOR_DISABLE 0xffffffff811103f0
#endif

#ifndef TOUCH_ALL_SOFTLOCKUP_WATCHDOGS
#define TOUCH_ALL_SOFTLOCKUP_WATCHDOGS 0xffffffff81110400
#endif

#ifndef TOUCH_SOFTLOCKUP_WATCHDOG_SYNC
#define TOUCH_SOFTLOCKUP_WATCHDOG_SYNC 0xffffffff81110460
#endif

#ifndef WATCHDOG_NMI_ENABLE_ALL
#define WATCHDOG_NMI_ENABLE_ALL 0xffffffff81110480
#endif

#ifndef WATCHDOG_NMI_DISABLE_ALL
#define WATCHDOG_NMI_DISABLE_ALL 0xffffffff81110500
#endif

#ifndef PROC_WATCHDOG
#define PROC_WATCHDOG 0xffffffff81110580
#endif

#ifndef PROC_NMI_WATCHDOG
#define PROC_NMI_WATCHDOG 0xffffffff811105b0
#endif

#ifndef PROC_SOFT_WATCHDOG
#define PROC_SOFT_WATCHDOG 0xffffffff811105e0
#endif

#ifndef PROC_WATCHDOG_THRESH
#define PROC_WATCHDOG_THRESH 0xffffffff81110610
#endif

#ifndef GET_SECCOMP_FILTER
#define GET_SECCOMP_FILTER 0xffffffff811107f0
#endif

#ifndef PUT_SECCOMP_FILTER
#define PUT_SECCOMP_FILTER 0xffffffff81110810
#endif

#ifndef SECCOMP_PHASE1
#define SECCOMP_PHASE1 0xffffffff81111140
#endif

#ifndef SECCOMP_PHASE2
#define SECCOMP_PHASE2 0xffffffff811113d0
#endif

#ifndef __SECURE_COMPUTING
#define __SECURE_COMPUTING 0xffffffff811114d0
#endif

#ifndef PRCTL_GET_SECCOMP
#define PRCTL_GET_SECCOMP 0xffffffff81111510
#endif

#ifndef SYS_SECCOMP
#define SYS_SECCOMP 0xffffffff81111530
#endif

#ifndef SYS_SECCOMP
#define SYS_SECCOMP 0xffffffff81111530
#endif

#ifndef PRCTL_SET_SECCOMP
#define PRCTL_SET_SECCOMP 0xffffffff81111550
#endif

#ifndef RELAY_BUF_FULL
#define RELAY_BUF_FULL 0xffffffff811115e0
#endif

#ifndef RELAY_SWITCH_SUBBUF
#define RELAY_SWITCH_SUBBUF 0xffffffff811118c0
#endif

#ifndef RELAY_SUBBUFS_CONSUMED
#define RELAY_SUBBUFS_CONSUMED 0xffffffff81111b00
#endif

#ifndef RELAY_RESET
#define RELAY_RESET 0xffffffff81111ce0
#endif

#ifndef RELAY_FLUSH
#define RELAY_FLUSH 0xffffffff81111d90
#endif

#ifndef RELAY_CLOSE
#define RELAY_CLOSE 0xffffffff81112670
#endif

#ifndef RELAY_OPEN
#define RELAY_OPEN 0xffffffff81112c50
#endif

#ifndef RELAY_LATE_SETUP_FILES
#define RELAY_LATE_SETUP_FILES 0xffffffff81112f20
#endif

#ifndef UTS_PROC_NOTIFY
#define UTS_PROC_NOTIFY 0xffffffff81113220
#endif

#ifndef __DELAYACCT_TSK_INIT
#define __DELAYACCT_TSK_INIT 0xffffffff811132b0
#endif

#ifndef DELAYACCT_INIT
#define DELAYACCT_INIT 0xffffffff811132e0
#endif

#ifndef __DELAYACCT_BLKIO_START
#define __DELAYACCT_BLKIO_START 0xffffffff81113340
#endif

#ifndef __DELAYACCT_BLKIO_END
#define __DELAYACCT_BLKIO_END 0xffffffff81113370
#endif

#ifndef __DELAYACCT_ADD_TSK
#define __DELAYACCT_ADD_TSK 0xffffffff81113410
#endif

#ifndef __DELAYACCT_BLKIO_TICKS
#define __DELAYACCT_BLKIO_TICKS 0xffffffff81113570
#endif

#ifndef __DELAYACCT_FREEPAGES_START
#define __DELAYACCT_FREEPAGES_START 0xffffffff811135c0
#endif

#ifndef __DELAYACCT_FREEPAGES_END
#define __DELAYACCT_FREEPAGES_END 0xffffffff811135f0
#endif

#ifndef TASKSTATS_EXIT
#define TASKSTATS_EXIT 0xffffffff81114100
#endif

#ifndef BACCT_ADD_TSK
#define BACCT_ADD_TSK 0xffffffff81114580
#endif

#ifndef XACCT_ADD_TSK
#define XACCT_ADD_TSK 0xffffffff81114750
#endif

#ifndef ACCT_UPDATE_INTEGRALS
#define ACCT_UPDATE_INTEGRALS 0xffffffff811148a0
#endif

#ifndef ACCT_ACCOUNT_CPUTIME
#define ACCT_ACCOUNT_CPUTIME 0xffffffff811148c0
#endif

#ifndef ACCT_CLEAR_INTEGRALS
#define ACCT_CLEAR_INTEGRALS 0xffffffff811148e0
#endif

#ifndef FOR_EACH_KERNEL_TRACEPOINT
#define FOR_EACH_KERNEL_TRACEPOINT 0xffffffff81114910
#endif

#ifndef TRACEPOINT_PROBE_UNREGISTER
#define TRACEPOINT_PROBE_UNREGISTER 0xffffffff81114970
#endif

#ifndef REGISTER_TRACEPOINT_MODULE_NOTIFIER
#define REGISTER_TRACEPOINT_MODULE_NOTIFIER 0xffffffff81114b50
#endif

#ifndef UNREGISTER_TRACEPOINT_MODULE_NOTIFIER
#define UNREGISTER_TRACEPOINT_MODULE_NOTIFIER 0xffffffff81114bc0
#endif

#ifndef TRACEPOINT_PROBE_REGISTER
#define TRACEPOINT_PROBE_REGISTER 0xffffffff81114e10
#endif

#ifndef TRACE_MODULE_HAS_BAD_TAINT
#define TRACE_MODULE_HAS_BAD_TAINT 0xffffffff81115000
#endif

#ifndef SYSCALL_REGFUNC
#define SYSCALL_REGFUNC 0xffffffff81115020
#endif

#ifndef SYSCALL_UNREGFUNC
#define SYSCALL_UNREGFUNC 0xffffffff81115100
#endif

#ifndef TRACE_CLOCK_LOCAL
#define TRACE_CLOCK_LOCAL 0xffffffff81115210
#endif

#ifndef TRACE_CLOCK
#define TRACE_CLOCK 0xffffffff81115220
#endif

#ifndef TRACE_CLOCK_JIFFIES
#define TRACE_CLOCK_JIFFIES 0xffffffff81115230
#endif

#ifndef TRACE_CLOCK_GLOBAL
#define TRACE_CLOCK_GLOBAL 0xffffffff81115250
#endif

#ifndef TRACE_CLOCK_COUNTER
#define TRACE_CLOCK_COUNTER 0xffffffff81115300
#endif

#ifndef FTRACE_GRAPH_ENTRY_STUB
#define FTRACE_GRAPH_ENTRY_STUB 0xffffffff81115520
#endif

#ifndef FTRACE_FILTER_WRITE
#define FTRACE_FILTER_WRITE 0xffffffff81116dc0
#endif

#ifndef FTRACE_NOTRACE_WRITE
#define FTRACE_NOTRACE_WRITE 0xffffffff81116e00
#endif

#ifndef FTRACE_NR_REGISTERED_OPS
#define FTRACE_NR_REGISTERED_OPS 0xffffffff81117b10
#endif

#ifndef CLEAR_FTRACE_FUNCTION
#define CLEAR_FTRACE_FUNCTION 0xffffffff81117b50
#endif

#ifndef USING_FTRACE_OPS_LIST_FUNC
#define USING_FTRACE_OPS_LIST_FUNC 0xffffffff81117b60
#endif

#ifndef IS_FTRACE_TRAMPOLINE
#define IS_FTRACE_TRAMPOLINE 0xffffffff81117b80
#endif

#ifndef FTRACE_FREE_FILTER
#define FTRACE_FREE_FILTER 0xffffffff81117bd0
#endif

#ifndef FTRACE_LOCATION
#define FTRACE_LOCATION 0xffffffff81117c30
#endif

#ifndef FTRACE_TEXT_RESERVED
#define FTRACE_TEXT_RESERVED 0xffffffff81117c40
#endif

#ifndef FTRACE_UPDATE_RECORD
#define FTRACE_UPDATE_RECORD 0xffffffff81117c60
#endif

#ifndef FTRACE_TEST_RECORD
#define FTRACE_TEST_RECORD 0xffffffff81117c70
#endif

#ifndef FTRACE_GET_ADDR_NEW
#define FTRACE_GET_ADDR_NEW 0xffffffff81117c80
#endif

#ifndef FTRACE_GET_ADDR_CURR
#define FTRACE_GET_ADDR_CURR 0xffffffff81117d50
#endif

#ifndef FTRACE_BUG
#define FTRACE_BUG 0xffffffff81117e80
#endif

#ifndef FTRACE_REC_ITER_START
#define FTRACE_REC_ITER_START 0xffffffff811188b0
#endif

#ifndef FTRACE_REC_ITER_NEXT
#define FTRACE_REC_ITER_NEXT 0xffffffff81118900
#endif

#ifndef FTRACE_REC_ITER_RECORD
#define FTRACE_REC_ITER_RECORD 0xffffffff81118960
#endif

#ifndef FTRACE_MODIFY_ALL_CODE
#define FTRACE_MODIFY_ALL_CODE 0xffffffff81118990
#endif

#ifndef FTRACE_RUN_STOP_MACHINE
#define FTRACE_RUN_STOP_MACHINE 0xffffffff81118af0
#endif

#ifndef FTRACE_SET_FILTER_IP
#define FTRACE_SET_FILTER_IP 0xffffffff81118e20
#endif

#ifndef FTRACE_SET_FILTER
#define FTRACE_SET_FILTER 0xffffffff81118e90
#endif

#ifndef FTRACE_SET_NOTRACE
#define FTRACE_SET_NOTRACE 0xffffffff81118f00
#endif

#ifndef FTRACE_SET_GLOBAL_FILTER
#define FTRACE_SET_GLOBAL_FILTER 0xffffffff81118f70
#endif

#ifndef FTRACE_SET_GLOBAL_NOTRACE
#define FTRACE_SET_GLOBAL_NOTRACE 0xffffffff81118fa0
#endif

#ifndef FTRACE_REGEX_RELEASE
#define FTRACE_REGEX_RELEASE 0xffffffff81118fd0
#endif

#ifndef UNREGISTER_FTRACE_FUNCTION
#define UNREGISTER_FTRACE_FUNCTION 0xffffffff81119810
#endif

#ifndef FTRACE_REGEX_OPEN
#define FTRACE_REGEX_OPEN 0xffffffff81119a60
#endif

#ifndef UNREGISTER_FTRACE_FUNCTION_PROBE
#define UNREGISTER_FTRACE_FUNCTION_PROBE 0xffffffff81119c80
#endif

#ifndef UNREGISTER_FTRACE_FUNCTION_PROBE_FUNC
#define UNREGISTER_FTRACE_FUNCTION_PROBE_FUNC 0xffffffff81119c90
#endif

#ifndef UNREGISTER_FTRACE_FUNCTION_PROBE_ALL
#define UNREGISTER_FTRACE_FUNCTION_PROBE_ALL 0xffffffff81119ca0
#endif

#ifndef FTRACE_CREATE_FILTER_FILES
#define FTRACE_CREATE_FILTER_FILES 0xffffffff81119cb0
#endif

#ifndef FTRACE_DESTROY_FILTER_FILES
#define FTRACE_DESTROY_FILTER_FILES 0xffffffff81119d00
#endif

#ifndef FTRACE_RELEASE_MOD
#define FTRACE_RELEASE_MOD 0xffffffff81119d40
#endif

#ifndef FTRACE_MODULE_INIT
#define FTRACE_MODULE_INIT 0xffffffff81119e80
#endif

#ifndef REGISTER_FTRACE_FUNCTION_PROBE
#define REGISTER_FTRACE_FUNCTION_PROBE 0xffffffff8111a130
#endif

#ifndef REGISTER_FTRACE_FUNCTION
#define REGISTER_FTRACE_FUNCTION 0xffffffff8111a4e0
#endif

#ifndef FTRACE_INIT_ARRAY_OPS
#define FTRACE_INIT_ARRAY_OPS 0xffffffff8111a970
#endif

#ifndef FTRACE_RESET_ARRAY_OPS
#define FTRACE_RESET_ARRAY_OPS 0xffffffff8111a9f0
#endif

#ifndef FTRACE_OPS_GET_FUNC
#define FTRACE_OPS_GET_FUNC 0xffffffff8111aa00
#endif

#ifndef FTRACE_KILL
#define FTRACE_KILL 0xffffffff8111aa20
#endif

#ifndef FTRACE_IS_DEAD
#define FTRACE_IS_DEAD 0xffffffff8111aa40
#endif

#ifndef FTRACE_ENABLE_SYSCTL
#define FTRACE_ENABLE_SYSCTL 0xffffffff8111aa50
#endif

#ifndef UNREGISTER_FTRACE_GRAPH
#define UNREGISTER_FTRACE_GRAPH 0xffffffff8111ab80
#endif

#ifndef FTRACE_GRAPH_INIT_IDLE_TASK
#define FTRACE_GRAPH_INIT_IDLE_TASK 0xffffffff8111ac20
#endif

#ifndef REGISTER_FTRACE_GRAPH
#define REGISTER_FTRACE_GRAPH 0xffffffff8111ad00
#endif

#ifndef FTRACE_GRAPH_INIT_TASK
#define FTRACE_GRAPH_INIT_TASK 0xffffffff8111afe0
#endif

#ifndef FTRACE_GRAPH_EXIT_TASK
#define FTRACE_GRAPH_EXIT_TASK 0xffffffff8111b050
#endif

#ifndef RING_BUFFER_TIME_STAMP
#define RING_BUFFER_TIME_STAMP 0xffffffff8111b070
#endif

#ifndef RING_BUFFER_NORMALIZE_TIME_STAMP
#define RING_BUFFER_NORMALIZE_TIME_STAMP 0xffffffff8111b080
#endif

#ifndef RING_BUFFER_RECORD_DISABLE
#define RING_BUFFER_RECORD_DISABLE 0xffffffff8111b0e0
#endif

#ifndef RING_BUFFER_RECORD_ENABLE
#define RING_BUFFER_RECORD_ENABLE 0xffffffff8111b0f0
#endif

#ifndef RING_BUFFER_RECORD_OFF
#define RING_BUFFER_RECORD_OFF 0xffffffff8111b100
#endif

#ifndef RING_BUFFER_RECORD_ON
#define RING_BUFFER_RECORD_ON 0xffffffff8111b120
#endif

#ifndef RING_BUFFER_ITER_EMPTY
#define RING_BUFFER_ITER_EMPTY 0xffffffff8111b140
#endif

#ifndef RING_BUFFER_SWAP_CPU
#define RING_BUFFER_SWAP_CPU 0xffffffff8111b170
#endif

#ifndef RING_BUFFER_ITER_RESET
#define RING_BUFFER_ITER_RESET 0xffffffff8111b240
#endif

#ifndef RING_BUFFER_READ_PREPARE
#define RING_BUFFER_READ_PREPARE 0xffffffff8111b2c0
#endif

#ifndef RING_BUFFER_FREE_READ_PAGE
#define RING_BUFFER_FREE_READ_PAGE 0xffffffff8111b570
#endif

#ifndef RING_BUFFER_ENTRIES
#define RING_BUFFER_ENTRIES 0xffffffff8111b580
#endif

#ifndef RING_BUFFER_OVERRUNS
#define RING_BUFFER_OVERRUNS 0xffffffff8111b5f0
#endif

#ifndef RING_BUFFER_FREE
#define RING_BUFFER_FREE 0xffffffff8111b650
#endif

#ifndef RING_BUFFER_READ_PREPARE_SYNC
#define RING_BUFFER_READ_PREPARE_SYNC 0xffffffff8111b6d0
#endif

#ifndef RING_BUFFER_CHANGE_OVERWRITE
#define RING_BUFFER_CHANGE_OVERWRITE 0xffffffff8111b6e0
#endif

#ifndef RING_BUFFER_RECORD_DISABLE_CPU
#define RING_BUFFER_RECORD_DISABLE_CPU 0xffffffff8111b7a0
#endif

#ifndef RING_BUFFER_RECORD_ENABLE_CPU
#define RING_BUFFER_RECORD_ENABLE_CPU 0xffffffff8111b7d0
#endif

#ifndef RING_BUFFER_BYTES_CPU
#define RING_BUFFER_BYTES_CPU 0xffffffff8111b800
#endif

#ifndef RING_BUFFER_ENTRIES_CPU
#define RING_BUFFER_ENTRIES_CPU 0xffffffff8111b830
#endif

#ifndef RING_BUFFER_OVERRUN_CPU
#define RING_BUFFER_OVERRUN_CPU 0xffffffff8111b870
#endif

#ifndef RING_BUFFER_COMMIT_OVERRUN_CPU
#define RING_BUFFER_COMMIT_OVERRUN_CPU 0xffffffff8111b8a0
#endif

#ifndef RING_BUFFER_DROPPED_EVENTS_CPU
#define RING_BUFFER_DROPPED_EVENTS_CPU 0xffffffff8111b8d0
#endif

#ifndef RING_BUFFER_READ_EVENTS_CPU
#define RING_BUFFER_READ_EVENTS_CPU 0xffffffff8111b900
#endif

#ifndef RING_BUFFER_SIZE
#define RING_BUFFER_SIZE 0xffffffff8111b930
#endif

#ifndef RING_BUFFER_EVENT_DATA
#define RING_BUFFER_EVENT_DATA 0xffffffff8111b9a0
#endif

#ifndef RING_BUFFER_OLDEST_EVENT_TS
#define RING_BUFFER_OLDEST_EVENT_TS 0xffffffff8111b9f0
#endif

#ifndef RING_BUFFER_READ_FINISH
#define RING_BUFFER_READ_FINISH 0xffffffff8111bc80
#endif

#ifndef RING_BUFFER_RESET_CPU
#define RING_BUFFER_RESET_CPU 0xffffffff8111bcd0
#endif

#ifndef RING_BUFFER_RESET
#define RING_BUFFER_RESET 0xffffffff8111bf10
#endif

#ifndef RING_BUFFER_READ_START
#define RING_BUFFER_READ_START 0xffffffff8111c170
#endif

#ifndef RING_BUFFER_ALLOC_READ_PAGE
#define RING_BUFFER_ALLOC_READ_PAGE 0xffffffff8111c230
#endif

#ifndef RING_BUFFER_EVENT_LENGTH
#define RING_BUFFER_EVENT_LENGTH 0xffffffff8111c940
#endif

#ifndef RING_BUFFER_EMPTY_CPU
#define RING_BUFFER_EMPTY_CPU 0xffffffff8111cc50
#endif

#ifndef RING_BUFFER_EMPTY
#define RING_BUFFER_EMPTY 0xffffffff8111cc70
#endif

#ifndef RING_BUFFER_CONSUME
#define RING_BUFFER_CONSUME 0xffffffff8111cd60
#endif

#ifndef RING_BUFFER_ITER_PEEK
#define RING_BUFFER_ITER_PEEK 0xffffffff8111d180
#endif

#ifndef RING_BUFFER_READ
#define RING_BUFFER_READ 0xffffffff8111d1e0
#endif

#ifndef RING_BUFFER_UNLOCK_COMMIT
#define RING_BUFFER_UNLOCK_COMMIT 0xffffffff8111d260
#endif

#ifndef RING_BUFFER_PEEK
#define RING_BUFFER_PEEK 0xffffffff8111d4e0
#endif

#ifndef RING_BUFFER_RESIZE
#define RING_BUFFER_RESIZE 0xffffffff8111d7a0
#endif

#ifndef RING_BUFFER_READ_PAGE
#define RING_BUFFER_READ_PAGE 0xffffffff8111dc00
#endif

#ifndef RING_BUFFER_LOCK_RESERVE
#define RING_BUFFER_LOCK_RESERVE 0xffffffff8111e940
#endif

#ifndef __RING_BUFFER_ALLOC
#define __RING_BUFFER_ALLOC 0xffffffff8111ea30
#endif

#ifndef RING_BUFFER_DISCARD_COMMIT
#define RING_BUFFER_DISCARD_COMMIT 0xffffffff8111ec90
#endif

#ifndef RING_BUFFER_WRITE
#define RING_BUFFER_WRITE 0xffffffff8111f0d0
#endif

#ifndef RING_BUFFER_PRINT_ENTRY_HEADER
#define RING_BUFFER_PRINT_ENTRY_HEADER 0xffffffff8111f3b0
#endif

#ifndef TRACING_OFF_PERMANENT
#define TRACING_OFF_PERMANENT 0xffffffff8111f460
#endif

#ifndef RING_BUFFER_PAGE_LEN
#define RING_BUFFER_PAGE_LEN 0xffffffff8111f470
#endif

#ifndef RING_BUFFER_PRINT_PAGE_HEADER
#define RING_BUFFER_PRINT_PAGE_HEADER 0xffffffff8111f480
#endif

#ifndef RING_BUFFER_WAIT
#define RING_BUFFER_WAIT 0xffffffff8111f520
#endif

#ifndef RING_BUFFER_POLL_WAIT
#define RING_BUFFER_POLL_WAIT 0xffffffff8111f6f0
#endif

#ifndef RING_BUFFER_SET_CLOCK
#define RING_BUFFER_SET_CLOCK 0xffffffff8111f7b0
#endif

#ifndef RING_BUFFER_RECORD_IS_ON
#define RING_BUFFER_RECORD_IS_ON 0xffffffff8111f7c0
#endif

#ifndef TRACING_GENERIC_ENTRY_UPDATE
#define TRACING_GENERIC_ENTRY_UPDATE 0xffffffff8111f7e0
#endif

#ifndef TRACING_OPEN_GENERIC
#define TRACING_OPEN_GENERIC 0xffffffff8111f8e0
#endif

#ifndef TRACE_CURRENT_BUFFER_DISCARD_COMMIT
#define TRACE_CURRENT_BUFFER_DISCARD_COMMIT 0xffffffff8111fab0
#endif

#ifndef TRACING_ON
#define TRACING_ON 0xffffffff8111fac0
#endif

#ifndef TRACING_OFF
#define TRACING_OFF 0xffffffff8111fb00
#endif

#ifndef TRACING_IS_ON
#define TRACING_IS_ON 0xffffffff8111fb40
#endif

#ifndef TRACING_LSEEK
#define TRACING_LSEEK 0xffffffff81120070
#endif

#ifndef FILTER_CHECK_DISCARD
#define FILTER_CHECK_DISCARD 0xffffffff81120e10
#endif

#ifndef CALL_FILTER_CHECK_DISCARD
#define CALL_FILTER_CHECK_DISCARD 0xffffffff81120ea0
#endif

#ifndef TRACING_ALLOC_SNAPSHOT
#define TRACING_ALLOC_SNAPSHOT 0xffffffff811217b0
#endif

#ifndef NS2USECS
#define NS2USECS 0xffffffff81122630
#endif

#ifndef TRACE_ARRAY_GET
#define TRACE_ARRAY_GET 0xffffffff81122660
#endif

#ifndef TRACE_ARRAY_PUT
#define TRACE_ARRAY_PUT 0xffffffff81122920
#endif

#ifndef FTRACE_NOW
#define FTRACE_NOW 0xffffffff81122ed0
#endif

#ifndef TRACING_IS_ENABLED
#define TRACING_IS_ENABLED 0xffffffff81122ee0
#endif

#ifndef DISABLE_TRACE_ON_WARNING
#define DISABLE_TRACE_ON_WARNING 0xffffffff81122ef0
#endif

#ifndef NSECS_TO_USECS
#define NSECS_TO_USECS 0xffffffff81122f30
#endif

#ifndef TRACE_PARSER_GET_INIT
#define TRACE_PARSER_GET_INIT 0xffffffff81122f50
#endif

#ifndef TRACE_PARSER_PUT
#define TRACE_PARSER_PUT 0xffffffff81122fb0
#endif

#ifndef TRACE_GET_USER
#define TRACE_GET_USER 0xffffffff81122fc0
#endif

#ifndef TRACING_RESET
#define TRACING_RESET 0xffffffff811231c0
#endif

#ifndef TRACING_RESET_ONLINE_CPUS
#define TRACING_RESET_ONLINE_CPUS 0xffffffff81123210
#endif

#ifndef TRACING_RESET_ALL_ONLINE_CPUS
#define TRACING_RESET_ALL_ONLINE_CPUS 0xffffffff81123450
#endif

#ifndef IS_TRACING_STOPPED
#define IS_TRACING_STOPPED 0xffffffff81123490
#endif

#ifndef TRACING_START
#define TRACING_START 0xffffffff811234a0
#endif

#ifndef TRACING_STOP
#define TRACING_STOP 0xffffffff811234c0
#endif

#ifndef TRACE_FIND_CMDLINE
#define TRACE_FIND_CMDLINE 0xffffffff81123570
#endif

#ifndef TRACING_RECORD_CMDLINE
#define TRACING_RECORD_CMDLINE 0xffffffff811235d0
#endif

#ifndef UPDATE_MAX_TR
#define UPDATE_MAX_TR 0xffffffff811238a0
#endif

#ifndef TRACE_BUFFER_LOCK_RESERVE
#define TRACE_BUFFER_LOCK_RESERVE 0xffffffff811238c0
#endif

#ifndef TRACE_EVENT_BUFFER_LOCK_RESERVE
#define TRACE_EVENT_BUFFER_LOCK_RESERVE 0xffffffff81123910
#endif

#ifndef TRACE_CURRENT_BUFFER_LOCK_RESERVE
#define TRACE_CURRENT_BUFFER_LOCK_RESERVE 0xffffffff81123990
#endif

#ifndef __TRACE_PUTS
#define __TRACE_PUTS 0xffffffff811240a0
#endif

#ifndef TRACING_SNAPSHOT
#define TRACING_SNAPSHOT 0xffffffff811240c0
#endif

#ifndef TRACING_SNAPSHOT_ALLOC
#define TRACING_SNAPSHOT_ALLOC 0xffffffff81124240
#endif

#ifndef __TRACE_BPUTS
#define __TRACE_BPUTS 0xffffffff811242b0
#endif

#ifndef TRACE_VBPRINTK
#define TRACE_VBPRINTK 0xffffffff811243b0
#endif

#ifndef TRACE_VPRINTK
#define TRACE_VPRINTK 0xffffffff81124730
#endif

#ifndef __BUFFER_UNLOCK_COMMIT
#define __BUFFER_UNLOCK_COMMIT 0xffffffff81124750
#endif

#ifndef TRACE_FUNCTION
#define TRACE_FUNCTION 0xffffffff81124760
#endif

#ifndef FTRACE_TRACE_STACK_REGS
#define FTRACE_TRACE_STACK_REGS 0xffffffff81124800
#endif

#ifndef FTRACE_TRACE_STACK
#define FTRACE_TRACE_STACK 0xffffffff81124820
#endif

#ifndef __TRACE_STACK
#define __TRACE_STACK 0xffffffff81124840
#endif

#ifndef TRACE_DUMP_STACK
#define TRACE_DUMP_STACK 0xffffffff81124850
#endif

#ifndef FTRACE_TRACE_USERSTACK
#define FTRACE_TRACE_USERSTACK 0xffffffff811248a0
#endif

#ifndef TRACE_BUFFER_UNLOCK_COMMIT
#define TRACE_BUFFER_UNLOCK_COMMIT 0xffffffff811249d0
#endif

#ifndef TRACE_BUFFER_UNLOCK_COMMIT_REGS
#define TRACE_BUFFER_UNLOCK_COMMIT_REGS 0xffffffff81124a20
#endif

#ifndef TRACE_CURRENT_BUFFER_UNLOCK_COMMIT
#define TRACE_CURRENT_BUFFER_UNLOCK_COMMIT 0xffffffff81124a80
#endif

#ifndef TRACE_PRINTK_START_COMM
#define TRACE_PRINTK_START_COMM 0xffffffff81124ad0
#endif

#ifndef TRACE_ARRAY_VPRINTK
#define TRACE_ARRAY_VPRINTK 0xffffffff81124af0
#endif

#ifndef TRACE_ARRAY_PRINTK
#define TRACE_ARRAY_PRINTK 0xffffffff81124b00
#endif

#ifndef TRACE_ARRAY_PRINTK_BUF
#define TRACE_ARRAY_PRINTK_BUF 0xffffffff81124b50
#endif

#ifndef UPDATE_MAX_TR_SINGLE
#define UPDATE_MAX_TR_SINGLE 0xffffffff81124d10
#endif

#ifndef TRACE_FIND_NEXT_ENTRY
#define TRACE_FIND_NEXT_ENTRY 0xffffffff81124d30
#endif

#ifndef TRACE_FIND_NEXT_ENTRY_INC
#define TRACE_FIND_NEXT_ENTRY_INC 0xffffffff81124d40
#endif

#ifndef TRACING_ITER_RESET
#define TRACING_ITER_RESET 0xffffffff81124e90
#endif

#ifndef PRINT_TRACE_HEADER
#define PRINT_TRACE_HEADER 0xffffffff811256f0
#endif

#ifndef TRACE_EMPTY
#define TRACE_EMPTY 0xffffffff811258f0
#endif

#ifndef PRINT_TRACE_LINE
#define PRINT_TRACE_LINE 0xffffffff81125cc0
#endif

#ifndef TRACE_LATENCY_HEADER
#define TRACE_LATENCY_HEADER 0xffffffff81126940
#endif

#ifndef TRACE_DEFAULT_HEADER
#define TRACE_DEFAULT_HEADER 0xffffffff811269b0
#endif

#ifndef TRACING_IS_DISABLED
#define TRACING_IS_DISABLED 0xffffffff81126bc0
#endif

#ifndef TRACE_KEEP_OVERWRITE
#define TRACE_KEEP_OVERWRITE 0xffffffff81126bd0
#endif

#ifndef SET_TRACER_FLAG
#define SET_TRACER_FLAG 0xffffffff81126bf0
#endif

#ifndef TRACER_INIT
#define TRACER_INIT 0xffffffff81126f60
#endif

#ifndef TRACING_UPDATE_BUFFERS
#define TRACING_UPDATE_BUFFERS 0xffffffff81126f90
#endif

#ifndef TRACE_PRINTK_INIT_BUFFERS
#define TRACE_PRINTK_INIT_BUFFERS 0xffffffff81126fe0
#endif

#ifndef TRACE_CREATE_FILE
#define TRACE_CREATE_FILE 0xffffffff811273f0
#endif

#ifndef REGISTER_TRACER
#define REGISTER_TRACER 0xffffffff81127780
#endif

#ifndef TRACING_INIT_DENTRY
#define TRACING_INIT_DENTRY 0xffffffff811280c0
#endif

#ifndef TRACE_PRINTK_SEQ
#define TRACE_PRINTK_SEQ 0xffffffff81128160
#endif

#ifndef TRACE_INIT_GLOBAL_ITER
#define TRACE_INIT_GLOBAL_ITER 0xffffffff81128220
#endif

#ifndef FTRACE_DUMP
#define FTRACE_DUMP 0xffffffff811282a0
#endif

#ifndef FTRACE_RAW_OUTPUT_PREP
#define FTRACE_RAW_OUTPUT_PREP 0xffffffff811285b0
#endif

#ifndef TRACE_NOP_PRINT
#define TRACE_NOP_PRINT 0xffffffff81128690
#endif

#ifndef FTRACE_PRINT_FLAGS_SEQ
#define FTRACE_PRINT_FLAGS_SEQ 0xffffffff811289f0
#endif

#ifndef FTRACE_PRINT_SYMBOLS_SEQ
#define FTRACE_PRINT_SYMBOLS_SEQ 0xffffffff81128b30
#endif

#ifndef FTRACE_PRINT_HEX_SEQ
#define FTRACE_PRINT_HEX_SEQ 0xffffffff81128bf0
#endif

#ifndef FTRACE_PRINT_ARRAY_SEQ
#define FTRACE_PRINT_ARRAY_SEQ 0xffffffff81128c90
#endif

#ifndef FTRACE_PRINT_BITMASK_SEQ
#define FTRACE_PRINT_BITMASK_SEQ 0xffffffff81128de0
#endif

#ifndef FTRACE_OUTPUT_CALL
#define FTRACE_OUTPUT_CALL 0xffffffff81128e20
#endif

#ifndef REGISTER_FTRACE_EVENT
#define REGISTER_FTRACE_EVENT 0xffffffff81129010
#endif

#ifndef UNREGISTER_FTRACE_EVENT
#define UNREGISTER_FTRACE_EVENT 0xffffffff811292e0
#endif

#ifndef TRACE_PRINT_BPUTS_MSG_ONLY
#define TRACE_PRINT_BPUTS_MSG_ONLY 0xffffffff81129870
#endif

#ifndef TRACE_PRINT_BPRINTK_MSG_ONLY
#define TRACE_PRINT_BPRINTK_MSG_ONLY 0xffffffff811298e0
#endif

#ifndef TRACE_PRINT_PRINTK_MSG_ONLY
#define TRACE_PRINT_PRINTK_MSG_ONLY 0xffffffff81129950
#endif

#ifndef SEQ_PRINT_USER_IP
#define SEQ_PRINT_USER_IP 0xffffffff811299c0
#endif

#ifndef SEQ_PRINT_USERIP_OBJS
#define SEQ_PRINT_USERIP_OBJS 0xffffffff811299e0
#endif

#ifndef SEQ_PRINT_IP_SYM
#define SEQ_PRINT_IP_SYM 0xffffffff81129be0
#endif

#ifndef TRACE_PRINT_LAT_FMT
#define TRACE_PRINT_LAT_FMT 0xffffffff8112a070
#endif

#ifndef TRACE_FIND_MARK
#define TRACE_FIND_MARK 0xffffffff8112a170
#endif

#ifndef TRACE_PRINT_CONTEXT
#define TRACE_PRINT_CONTEXT 0xffffffff8112a1e0
#endif

#ifndef TRACE_PRINT_LAT_CONTEXT
#define TRACE_PRINT_LAT_CONTEXT 0xffffffff8112a300
#endif

#ifndef FTRACE_FIND_EVENT
#define FTRACE_FIND_EVENT 0xffffffff8112a5f0
#endif

#ifndef TRACE_EVENT_READ_LOCK
#define TRACE_EVENT_READ_LOCK 0xffffffff8112a630
#endif

#ifndef TRACE_EVENT_READ_UNLOCK
#define TRACE_EVENT_READ_UNLOCK 0xffffffff8112a640
#endif

#ifndef __UNREGISTER_FTRACE_EVENT
#define __UNREGISTER_FTRACE_EVENT 0xffffffff8112a650
#endif

#ifndef TRACE_SEQ_PUTS
#define TRACE_SEQ_PUTS 0xffffffff8112a6b0
#endif

#ifndef TRACE_SEQ_TO_USER
#define TRACE_SEQ_TO_USER 0xffffffff8112a760
#endif

#ifndef TRACE_SEQ_PRINTF
#define TRACE_SEQ_PRINTF 0xffffffff8112a7c0
#endif

#ifndef TRACE_SEQ_PATH
#define TRACE_SEQ_PATH 0xffffffff8112a8a0
#endif

#ifndef TRACE_SEQ_PUTC
#define TRACE_SEQ_PUTC 0xffffffff8112a990
#endif

#ifndef TRACE_SEQ_PUTMEM_HEX
#define TRACE_SEQ_PUTMEM_HEX 0xffffffff8112aa20
#endif

#ifndef TRACE_SEQ_PUTMEM
#define TRACE_SEQ_PUTMEM 0xffffffff8112ab00
#endif

#ifndef TRACE_SEQ_BITMASK
#define TRACE_SEQ_BITMASK 0xffffffff8112ab90
#endif

#ifndef TRACE_SEQ_VPRINTF
#define TRACE_SEQ_VPRINTF 0xffffffff8112ac40
#endif

#ifndef TRACE_SEQ_BPRINTF
#define TRACE_SEQ_BPRINTF 0xffffffff8112ace0
#endif

#ifndef TRACE_PRINT_SEQ
#define TRACE_PRINT_SEQ 0xffffffff8112ad80
#endif

#ifndef REGISTER_STAT_TRACER
#define REGISTER_STAT_TRACER 0xffffffff8112b1a0
#endif

#ifndef UNREGISTER_STAT_TRACER
#define UNREGISTER_STAT_TRACER 0xffffffff8112b360
#endif

#ifndef __FTRACE_VBPRINTK
#define __FTRACE_VBPRINTK 0xffffffff8112b410
#endif

#ifndef __TRACE_BPRINTK
#define __TRACE_BPRINTK 0xffffffff8112b430
#endif

#ifndef __TRACE_PRINTK
#define __TRACE_PRINTK 0xffffffff8112b490
#endif

#ifndef __FTRACE_VPRINTK
#define __FTRACE_VPRINTK 0xffffffff8112b4e0
#endif

#ifndef TRACING_START_CMDLINE_RECORD
#define TRACING_START_CMDLINE_RECORD 0xffffffff8112b8b0
#endif

#ifndef TRACING_STOP_CMDLINE_RECORD
#define TRACING_STOP_CMDLINE_RECORD 0xffffffff8112b9a0
#endif

#ifndef FTRACE_CREATE_FUNCTION_FILES
#define FTRACE_CREATE_FUNCTION_FILES 0xffffffff8112c150
#endif

#ifndef FTRACE_DESTROY_FUNCTION_FILES
#define FTRACE_DESTROY_FUNCTION_FILES 0xffffffff8112c1d0
#endif

#ifndef STACK_TRACE_SYSCTL
#define STACK_TRACE_SYSCTL 0xffffffff8112c920
#endif

#ifndef GRAPH_TRACE_CLOSE
#define GRAPH_TRACE_CLOSE 0xffffffff8112cb50
#endif

#ifndef GRAPH_TRACE_OPEN
#define GRAPH_TRACE_OPEN 0xffffffff8112cce0
#endif

#ifndef FTRACE_GRAPH_IS_DEAD
#define FTRACE_GRAPH_IS_DEAD 0xffffffff8112ce10
#endif

#ifndef FTRACE_GRAPH_STOP
#define FTRACE_GRAPH_STOP 0xffffffff8112ce20
#endif

#ifndef FTRACE_PUSH_RETURN_TRACE
#define FTRACE_PUSH_RETURN_TRACE 0xffffffff8112ce30
#endif

#ifndef FTRACE_RETURN_TO_HANDLER
#define FTRACE_RETURN_TO_HANDLER 0xffffffff8112cfd0
#endif

#ifndef __TRACE_GRAPH_ENTRY
#define __TRACE_GRAPH_ENTRY 0xffffffff8112d120
#endif

#ifndef TRACE_GRAPH_ENTRY
#define TRACE_GRAPH_ENTRY 0xffffffff8112d1c0
#endif

#ifndef __TRACE_GRAPH_RETURN
#define __TRACE_GRAPH_RETURN 0xffffffff8112d400
#endif

#ifndef TRACE_GRAPH_FUNCTION
#define TRACE_GRAPH_FUNCTION 0xffffffff8112d4a0
#endif

#ifndef TRACE_GRAPH_RETURN
#define TRACE_GRAPH_RETURN 0xffffffff8112d520
#endif

#ifndef SET_GRAPH_ARRAY
#define SET_GRAPH_ARRAY 0xffffffff8112d5c0
#endif

#ifndef TRACE_PRINT_GRAPH_DURATION
#define TRACE_PRINT_GRAPH_DURATION 0xffffffff8112d5d0
#endif

#ifndef PRINT_GRAPH_FUNCTION_FLAGS
#define PRINT_GRAPH_FUNCTION_FLAGS 0xffffffff8112dff0
#endif

#ifndef PRINT_GRAPH_HEADERS_FLAGS
#define PRINT_GRAPH_HEADERS_FLAGS 0xffffffff8112e570
#endif

#ifndef BLK_FILL_RWBS
#define BLK_FILL_RWBS 0xffffffff8112e8e0
#endif

#ifndef BLK_TRACE_REMOVE
#define BLK_TRACE_REMOVE 0xffffffff8112eba0
#endif

#ifndef BLK_ADD_DRIVER_DATA
#define BLK_ADD_DRIVER_DATA 0xffffffff81130390
#endif

#ifndef __TRACE_NOTE_MESSAGE
#define __TRACE_NOTE_MESSAGE 0xffffffff811309d0
#endif

#ifndef BLK_TRACE_STARTSTOP
#define BLK_TRACE_STARTSTOP 0xffffffff81130b60
#endif

#ifndef DO_BLK_TRACE_SETUP
#define DO_BLK_TRACE_SETUP 0xffffffff81130cb0
#endif

#ifndef BLK_TRACE_SETUP
#define BLK_TRACE_SETUP 0xffffffff81130fa0
#endif

#ifndef BLK_TRACE_IOCTL
#define BLK_TRACE_IOCTL 0xffffffff81131170
#endif

#ifndef BLK_TRACE_SHUTDOWN
#define BLK_TRACE_SHUTDOWN 0xffffffff811312c0
#endif

#ifndef BLK_TRACE_INIT_SYSFS
#define BLK_TRACE_INIT_SYSFS 0xffffffff811312f0
#endif

#ifndef BLK_TRACE_REMOVE_SYSFS
#define BLK_TRACE_REMOVE_SYSFS 0xffffffff81131300
#endif

#ifndef BLK_DUMP_CMD
#define BLK_DUMP_CMD 0xffffffff81131310
#endif

#ifndef TRACE_DEFINE_FIELD
#define TRACE_DEFINE_FIELD 0xffffffff81131720
#endif

#ifndef TRACE_EVENT_RAW_INIT
#define TRACE_EVENT_RAW_INIT 0xffffffff811317b0
#endif

#ifndef FTRACE_EVENT_BUFFER_RESERVE
#define FTRACE_EVENT_BUFFER_RESERVE 0xffffffff811317d0
#endif

#ifndef FTRACE_EVENT_REG
#define FTRACE_EVENT_REG 0xffffffff811318c0
#endif

#ifndef FTRACE_EVENT_BUFFER_COMMIT
#define FTRACE_EVENT_BUFFER_COMMIT 0xffffffff811332e0
#endif

#ifndef TRACE_SET_CLR_EVENT
#define TRACE_SET_CLR_EVENT 0xffffffff81133e30
#endif

#ifndef TRACE_FIND_EVENT_FIELD
#define TRACE_FIND_EVENT_FIELD 0xffffffff81133ed0
#endif

#ifndef TRACE_EVENT_ENABLE_CMD_RECORD
#define TRACE_EVENT_ENABLE_CMD_RECORD 0xffffffff81133f80
#endif

#ifndef TRACE_EVENT_ENABLE_DISABLE
#define TRACE_EVENT_ENABLE_DISABLE 0xffffffff81134020
#endif

#ifndef TRACE_EVENT_ENUM_UPDATE
#define TRACE_EVENT_ENUM_UPDATE 0xffffffff81134030
#endif

#ifndef TRACE_ADD_EVENT_CALL
#define TRACE_ADD_EVENT_CALL 0xffffffff81134440
#endif

#ifndef TRACE_REMOVE_EVENT_CALL
#define TRACE_REMOVE_EVENT_CALL 0xffffffff811344f0
#endif

#ifndef FIND_EVENT_FILE
#define FIND_EVENT_FILE 0xffffffff811345d0
#endif

#ifndef EVENT_TRACE_ADD_TRACER
#define EVENT_TRACE_ADD_TRACER 0xffffffff81134900
#endif

#ifndef EVENT_TRACE_DEL_TRACER
#define EVENT_TRACE_DEL_TRACER 0xffffffff811349b0
#endif

#ifndef FTRACE_EVENT_IS_FUNCTION
#define FTRACE_EVENT_IS_FUNCTION 0xffffffff81134a60
#endif

#ifndef PERF_TRACE_BUF_PREPARE
#define PERF_TRACE_BUF_PREPARE 0xffffffff81135970
#endif

#ifndef PERF_TRACE_INIT
#define PERF_TRACE_INIT 0xffffffff81135bb0
#endif

#ifndef PERF_TRACE_DESTROY
#define PERF_TRACE_DESTROY 0xffffffff81135e80
#endif

#ifndef PERF_TRACE_ADD
#define PERF_TRACE_ADD 0xffffffff81135ec0
#endif

#ifndef PERF_TRACE_DEL
#define PERF_TRACE_DEL 0xffffffff81135f60
#endif

#ifndef PERF_FTRACE_EVENT_REGISTER
#define PERF_FTRACE_EVENT_REGISTER 0xffffffff81135fa0
#endif

#ifndef FILTER_MATCH_PREDS
#define FILTER_MATCH_PREDS 0xffffffff811366d0
#endif

#ifndef FILTER_PARSE_REGEX
#define FILTER_PARSE_REGEX 0xffffffff81137780
#endif

#ifndef PRINT_EVENT_FILTER
#define PRINT_EVENT_FILTER 0xffffffff811382a0
#endif

#ifndef PRINT_SUBSYSTEM_EVENT_FILTER
#define PRINT_SUBSYSTEM_EVENT_FILTER 0xffffffff811382f0
#endif

#ifndef FREE_EVENT_FILTER
#define FREE_EVENT_FILTER 0xffffffff81138360
#endif

#ifndef FILTER_ASSIGN_TYPE
#define FILTER_ASSIGN_TYPE 0xffffffff81138370
#endif

#ifndef CREATE_EVENT_FILTER
#define CREATE_EVENT_FILTER 0xffffffff811383e0
#endif

#ifndef APPLY_EVENT_FILTER
#define APPLY_EVENT_FILTER 0xffffffff811383f0
#endif

#ifndef APPLY_SUBSYSTEM_EVENT_FILTER
#define APPLY_SUBSYSTEM_EVENT_FILTER 0xffffffff81138560
#endif

#ifndef FTRACE_PROFILE_FREE_FILTER
#define FTRACE_PROFILE_FREE_FILTER 0xffffffff81138ba0
#endif

#ifndef FTRACE_PROFILE_SET_FILTER
#define FTRACE_PROFILE_SET_FILTER 0xffffffff81138bc0
#endif

#ifndef EVENT_TRIGGERS_POST_CALL
#define EVENT_TRIGGERS_POST_CALL 0xffffffff81138cc0
#endif

#ifndef EVENT_TRIGGERS_CALL
#define EVENT_TRIGGERS_CALL 0xffffffff81138dd0
#endif

#ifndef CLEAR_EVENT_TRIGGERS
#define CLEAR_EVENT_TRIGGERS 0xffffffff8113a180
#endif

#ifndef FETCH_SYMBOL_U8
#define FETCH_SYMBOL_U8 0xffffffff8113a570
#endif

#ifndef FETCH_SYMBOL_U16
#define FETCH_SYMBOL_U16 0xffffffff8113a590
#endif

#ifndef FETCH_SYMBOL_U32
#define FETCH_SYMBOL_U32 0xffffffff8113a5b0
#endif

#ifndef FETCH_SYMBOL_U64
#define FETCH_SYMBOL_U64 0xffffffff8113a5d0
#endif

#ifndef FETCH_SYMBOL_STRING
#define FETCH_SYMBOL_STRING 0xffffffff8113a5f0
#endif

#ifndef FETCH_SYMBOL_STRING_SIZE
#define FETCH_SYMBOL_STRING_SIZE 0xffffffff8113a610
#endif

#ifndef UPDATE_SYMBOL_CACHE
#define UPDATE_SYMBOL_CACHE 0xffffffff8113c880
#endif

#ifndef FREE_SYMBOL_CACHE
#define FREE_SYMBOL_CACHE 0xffffffff8113c8a0
#endif

#ifndef ALLOC_SYMBOL_CACHE
#define ALLOC_SYMBOL_CACHE 0xffffffff8113c8c0
#endif

#ifndef FETCH_RETVAL_U8
#define FETCH_RETVAL_U8 0xffffffff8113f200
#endif

#ifndef FETCH_RETVAL_U16
#define FETCH_RETVAL_U16 0xffffffff8113f210
#endif

#ifndef FETCH_RETVAL_U32
#define FETCH_RETVAL_U32 0xffffffff8113f220
#endif

#ifndef FETCH_RETVAL_U64
#define FETCH_RETVAL_U64 0xffffffff8113f230
#endif

#ifndef FETCH_DEREF_U8
#define FETCH_DEREF_U8 0xffffffff8113f240
#endif

#ifndef FETCH_DEREF_U16
#define FETCH_DEREF_U16 0xffffffff8113f2a0
#endif

#ifndef FETCH_DEREF_U32
#define FETCH_DEREF_U32 0xffffffff8113f300
#endif

#ifndef FETCH_DEREF_U64
#define FETCH_DEREF_U64 0xffffffff8113f360
#endif

#ifndef FETCH_DEREF_STRING
#define FETCH_DEREF_STRING 0xffffffff8113f3c0
#endif

#ifndef FETCH_DEREF_STRING_SIZE
#define FETCH_DEREF_STRING_SIZE 0xffffffff8113f420
#endif

#ifndef FETCH_BITFIELD_U8
#define FETCH_BITFIELD_U8 0xffffffff8113f490
#endif

#ifndef FETCH_BITFIELD_U16
#define FETCH_BITFIELD_U16 0xffffffff8113f4d0
#endif

#ifndef FETCH_BITFIELD_U32
#define FETCH_BITFIELD_U32 0xffffffff8113f520
#endif

#ifndef FETCH_BITFIELD_U64
#define FETCH_BITFIELD_U64 0xffffffff8113f560
#endif

#ifndef PRINT_TYPE_U8
#define PRINT_TYPE_U8 0xffffffff8113f5d0
#endif

#ifndef PRINT_TYPE_U16
#define PRINT_TYPE_U16 0xffffffff8113f610
#endif

#ifndef PRINT_TYPE_U32
#define PRINT_TYPE_U32 0xffffffff8113f650
#endif

#ifndef PRINT_TYPE_U64
#define PRINT_TYPE_U64 0xffffffff8113f690
#endif

#ifndef PRINT_TYPE_S8
#define PRINT_TYPE_S8 0xffffffff8113f6d0
#endif

#ifndef PRINT_TYPE_S16
#define PRINT_TYPE_S16 0xffffffff8113f710
#endif

#ifndef PRINT_TYPE_S32
#define PRINT_TYPE_S32 0xffffffff8113f750
#endif

#ifndef PRINT_TYPE_S64
#define PRINT_TYPE_S64 0xffffffff8113f790
#endif

#ifndef PRINT_TYPE_STRING
#define PRINT_TYPE_STRING 0xffffffff8113f7d0
#endif

#ifndef FETCH_REG_U8
#define FETCH_REG_U8 0xffffffff8113f840
#endif

#ifndef FETCH_REG_U16
#define FETCH_REG_U16 0xffffffff8113f860
#endif

#ifndef FETCH_REG_U32
#define FETCH_REG_U32 0xffffffff8113f880
#endif

#ifndef FETCH_REG_U64
#define FETCH_REG_U64 0xffffffff8113f8a0
#endif

#ifndef TRACEPROBE_SPLIT_SYMBOL_OFFSET
#define TRACEPROBE_SPLIT_SYMBOL_OFFSET 0xffffffff8113fdb0
#endif

#ifndef TRACEPROBE_PARSE_PROBE_ARG
#define TRACEPROBE_PARSE_PROBE_ARG 0xffffffff81140200
#endif

#ifndef TRACEPROBE_CONFLICT_FIELD_NAME
#define TRACEPROBE_CONFLICT_FIELD_NAME 0xffffffff81140460
#endif

#ifndef TRACEPROBE_UPDATE_ARG
#define TRACEPROBE_UPDATE_ARG 0xffffffff811404f0
#endif

#ifndef TRACEPROBE_FREE_PROBE_ARG
#define TRACEPROBE_FREE_PROBE_ARG 0xffffffff81140690
#endif

#ifndef TRACEPROBE_COMMAND
#define TRACEPROBE_COMMAND 0xffffffff81140860
#endif

#ifndef TRACEPROBE_PROBES_WRITE
#define TRACEPROBE_PROBES_WRITE 0xffffffff811408d0
#endif

#ifndef SET_PRINT_FMT
#define SET_PRINT_FMT 0xffffffff81140a10
#endif

#ifndef IRQ_WORK_SYNC
#define IRQ_WORK_SYNC 0xffffffff81142ef0
#endif

#ifndef IRQ_WORK_QUEUE_ON
#define IRQ_WORK_QUEUE_ON 0xffffffff81142f40
#endif

#ifndef IRQ_WORK_RUN
#define IRQ_WORK_RUN 0xffffffff811430a0
#endif

#ifndef IRQ_WORK_QUEUE
#define IRQ_WORK_QUEUE 0xffffffff811430e0
#endif

#ifndef IRQ_WORK_NEEDS_CPU
#define IRQ_WORK_NEEDS_CPU 0xffffffff81143160
#endif

#ifndef IRQ_WORK_TICK
#define IRQ_WORK_TICK 0xffffffff81143200
#endif

#ifndef __BPF_CALL_BASE
#define __BPF_CALL_BASE 0xffffffff81143250
#endif

#ifndef __BPF_PROG_FREE
#define __BPF_PROG_FREE 0xffffffff81143260
#endif

#ifndef BPF_PROG_FREE
#define BPF_PROG_FREE 0xffffffff811432a0
#endif

#ifndef BPF_PROG_REALLOC
#define BPF_PROG_REALLOC 0xffffffff811432f0
#endif

#ifndef BPF_PROG_ALLOC
#define BPF_PROG_ALLOC 0xffffffff811433a0
#endif

#ifndef BPF_INTERNAL_LOAD_POINTER_NEG_HELPER
#define BPF_INTERNAL_LOAD_POINTER_NEG_HELPER 0xffffffff81143440
#endif

#ifndef BPF_JIT_BINARY_ALLOC
#define BPF_JIT_BINARY_ALLOC 0xffffffff811434c0
#endif

#ifndef BPF_JIT_BINARY_FREE
#define BPF_JIT_BINARY_FREE 0xffffffff81143550
#endif

#ifndef BPF_PROG_SELECT_RUNTIME
#define BPF_PROG_SELECT_RUNTIME 0xffffffff81143580
#endif

#ifndef PERF_REGISTER_GUEST_INFO_CALLBACKS
#define PERF_REGISTER_GUEST_INFO_CALLBACKS 0xffffffff811448d0
#endif

#ifndef PERF_UNREGISTER_GUEST_INFO_CALLBACKS
#define PERF_UNREGISTER_GUEST_INFO_CALLBACKS 0xffffffff811448e0
#endif

#ifndef PERF_PMU_UNREGISTER
#define PERF_PMU_UNREGISTER 0xffffffff811458a0
#endif

#ifndef PERF_EVENT_READ_VALUE
#define PERF_EVENT_READ_VALUE 0xffffffff81146930
#endif

#ifndef PERF_SWEVENT_GET_RECURSION_CONTEXT
#define PERF_SWEVENT_GET_RECURSION_CONTEXT 0xffffffff81146b10
#endif

#ifndef PERF_EVENT_ENABLE
#define PERF_EVENT_ENABLE 0xffffffff81147870
#endif

#ifndef PERF_EVENT_REFRESH
#define PERF_EVENT_REFRESH 0xffffffff811478e0
#endif

#ifndef PERF_PMU_REGISTER
#define PERF_PMU_REGISTER 0xffffffff81148250
#endif

#ifndef PERF_EVENT_DISABLE
#define PERF_EVENT_DISABLE 0xffffffff811486e0
#endif

#ifndef PERF_PMU_MIGRATE_CONTEXT
#define PERF_PMU_MIGRATE_CONTEXT 0xffffffff811487c0
#endif

#ifndef UPDATE_PERF_CPU_LIMITS
#define UPDATE_PERF_CPU_LIMITS 0xffffffff81148c00
#endif

#ifndef PERF_PROC_UPDATE_HANDLER
#define PERF_PROC_UPDATE_HANDLER 0xffffffff81148c40
#endif

#ifndef PERF_CPU_TIME_MAX_PERCENT_HANDLER
#define PERF_CPU_TIME_MAX_PERCENT_HANDLER 0xffffffff81148cc0
#endif

#ifndef PERF_SAMPLE_EVENT_TOOK
#define PERF_SAMPLE_EVENT_TOOK 0xffffffff81148d10
#endif

#ifndef PERF_CPU_HRTIMER_CANCEL
#define PERF_CPU_HRTIMER_CANCEL 0xffffffff81148e30
#endif

#ifndef PERF_PMU_DISABLE
#define PERF_PMU_DISABLE 0xffffffff81148ed0
#endif

#ifndef PERF_PMU_ENABLE
#define PERF_PMU_ENABLE 0xffffffff81148f10
#endif

#ifndef __PERF_EVENT_DISABLE
#define __PERF_EVENT_DISABLE 0xffffffff811492d0
#endif

#ifndef PERF_CGROUP_SWITCH
#define PERF_CGROUP_SWITCH 0xffffffff8114a380
#endif

#ifndef PERF_SCHED_CB_DEC
#define PERF_SCHED_CB_DEC 0xffffffff8114a9e0
#endif

#ifndef PERF_SCHED_CB_INC
#define PERF_SCHED_CB_INC 0xffffffff8114a9f0
#endif

#ifndef __PERF_EVENT_TASK_SCHED_IN
#define __PERF_EVENT_TASK_SCHED_IN 0xffffffff8114aa00
#endif

#ifndef PERF_EVENT_TASK_TICK
#define PERF_EVENT_TASK_TICK 0xffffffff8114aac0
#endif

#ifndef PERF_EVENT_EXEC
#define PERF_EVENT_EXEC 0xffffffff8114ad00
#endif

#ifndef PERF_EVENT_TASK_ENABLE
#define PERF_EVENT_TASK_ENABLE 0xffffffff8114ae70
#endif

#ifndef PERF_EVENT_TASK_DISABLE
#define PERF_EVENT_TASK_DISABLE 0xffffffff8114af20
#endif

#ifndef PERF_EVENT_UPDATE_USERPAGE
#define PERF_EVENT_UPDATE_USERPAGE 0xffffffff8114afe0
#endif

#ifndef __PERF_EVENT_TASK_SCHED_OUT
#define __PERF_EVENT_TASK_SCHED_OUT 0xffffffff8114b100
#endif

#ifndef RING_BUFFER_GET
#define RING_BUFFER_GET 0xffffffff8114b660
#endif

#ifndef RING_BUFFER_PUT
#define RING_BUFFER_PUT 0xffffffff8114b6b0
#endif

#ifndef PERF_EVENT_RELEASE_KERNEL
#define PERF_EVENT_RELEASE_KERNEL 0xffffffff8114bbd0
#endif

#ifndef PERF_EVENT_WAKEUP
#define PERF_EVENT_WAKEUP 0xffffffff8114cbc0
#endif

#ifndef PERF_EVENT_HEADER__INIT_ID
#define PERF_EVENT_HEADER__INIT_ID 0xffffffff8114cd80
#endif

#ifndef PERF_EVENT__OUTPUT_ID_SAMPLE
#define PERF_EVENT__OUTPUT_ID_SAMPLE 0xffffffff8114cda0
#endif

#ifndef PERF_OUTPUT_SAMPLE
#define PERF_OUTPUT_SAMPLE 0xffffffff8114cdc0
#endif

#ifndef PERF_PREPARE_SAMPLE
#define PERF_PREPARE_SAMPLE 0xffffffff8114d3d0
#endif

#ifndef PERF_TP_EVENT
#define PERF_TP_EVENT 0xffffffff8114dc60
#endif

#ifndef PERF_EVENT_FORK
#define PERF_EVENT_FORK 0xffffffff8114de20
#endif

#ifndef PERF_EVENT_COMM
#define PERF_EVENT_COMM 0xffffffff8114de30
#endif

#ifndef PERF_EVENT_MMAP
#define PERF_EVENT_MMAP 0xffffffff8114df40
#endif

#ifndef PERF_EVENT_AUX_EVENT
#define PERF_EVENT_AUX_EVENT 0xffffffff8114e290
#endif

#ifndef PERF_EVENT_OVERFLOW
#define PERF_EVENT_OVERFLOW 0xffffffff8114e360
#endif

#ifndef PERF_SWEVENT_SET_PERIOD
#define PERF_SWEVENT_SET_PERIOD 0xffffffff8114e370
#endif

#ifndef PERF_SWEVENT_PUT_RECURSION_CONTEXT
#define PERF_SWEVENT_PUT_RECURSION_CONTEXT 0xffffffff8114e3d0
#endif

#ifndef ___PERF_SW_EVENT
#define ___PERF_SW_EVENT 0xffffffff8114e3f0
#endif

#ifndef __PERF_SW_EVENT
#define __PERF_SW_EVENT 0xffffffff8114e530
#endif

#ifndef PERF_BP_EVENT
#define PERF_BP_EVENT 0xffffffff8114e5d0
#endif

#ifndef PERF_INIT_EVENT
#define PERF_INIT_EVENT 0xffffffff8114e660
#endif

#ifndef PERF_EVENT_CREATE_KERNEL_COUNTER
#define PERF_EVENT_CREATE_KERNEL_COUNTER 0xffffffff8114fac0
#endif

#ifndef SYS_PERF_EVENT_OPEN
#define SYS_PERF_EVENT_OPEN 0xffffffff8114ff30
#endif

#ifndef SYS_PERF_EVENT_OPEN
#define SYS_PERF_EVENT_OPEN 0xffffffff8114ff30
#endif

#ifndef PERF_EVENT_EXIT_TASK
#define PERF_EVENT_EXIT_TASK 0xffffffff8114ff40
#endif

#ifndef PERF_EVENT_FREE_TASK
#define PERF_EVENT_FREE_TASK 0xffffffff811502f0
#endif

#ifndef PERF_EVENT_DELAYED_PUT
#define PERF_EVENT_DELAYED_PUT 0xffffffff811503e0
#endif

#ifndef PERF_EVENT_INIT_TASK
#define PERF_EVENT_INIT_TASK 0xffffffff81150430
#endif

#ifndef PERF_EVENT_SYSFS_SHOW
#define PERF_EVENT_SYSFS_SHOW 0xffffffff811507e0
#endif

#ifndef PERF_OUTPUT_BEGIN
#define PERF_OUTPUT_BEGIN 0xffffffff81150970
#endif

#ifndef PERF_OUTPUT_COPY
#define PERF_OUTPUT_COPY 0xffffffff81150b90
#endif

#ifndef PERF_OUTPUT_SKIP
#define PERF_OUTPUT_SKIP 0xffffffff81150c20
#endif

#ifndef PERF_OUTPUT_END
#define PERF_OUTPUT_END 0xffffffff81150c90
#endif

#ifndef PERF_AUX_OUTPUT_SKIP
#define PERF_AUX_OUTPUT_SKIP 0xffffffff81150cb0
#endif

#ifndef PERF_GET_AUX
#define PERF_GET_AUX 0xffffffff81150d70
#endif

#ifndef RB_FREE_AUX
#define RB_FREE_AUX 0xffffffff81150da0
#endif

#ifndef PERF_AUX_OUTPUT_BEGIN
#define PERF_AUX_OUTPUT_BEGIN 0xffffffff81150e90
#endif

#ifndef PERF_AUX_OUTPUT_END
#define PERF_AUX_OUTPUT_END 0xffffffff81151050
#endif

#ifndef RB_ALLOC_AUX
#define RB_ALLOC_AUX 0xffffffff81151140
#endif

#ifndef RB_ALLOC
#define RB_ALLOC 0xffffffff81151480
#endif

#ifndef RB_FREE
#define RB_FREE 0xffffffff811515f0
#endif

#ifndef PERF_MMAP_TO_PAGE
#define PERF_MMAP_TO_PAGE 0xffffffff81151640
#endif

#ifndef GET_CALLCHAIN_BUFFERS
#define GET_CALLCHAIN_BUFFERS 0xffffffff81151760
#endif

#ifndef PUT_CALLCHAIN_BUFFERS
#define PUT_CALLCHAIN_BUFFERS 0xffffffff811518f0
#endif

#ifndef PERF_CALLCHAIN
#define PERF_CALLCHAIN 0xffffffff81151950
#endif

#ifndef REGISTER_USER_HW_BREAKPOINT
#define REGISTER_USER_HW_BREAKPOINT 0xffffffff81151b90
#endif

#ifndef UNREGISTER_HW_BREAKPOINT
#define UNREGISTER_HW_BREAKPOINT 0xffffffff81151bb0
#endif

#ifndef UNREGISTER_WIDE_HW_BREAKPOINT
#define UNREGISTER_WIDE_HW_BREAKPOINT 0xffffffff81151be0
#endif

#ifndef REGISTER_WIDE_HW_BREAKPOINT
#define REGISTER_WIDE_HW_BREAKPOINT 0xffffffff81151c60
#endif

#ifndef MODIFY_USER_HW_BREAKPOINT
#define MODIFY_USER_HW_BREAKPOINT 0xffffffff81151e20
#endif

#ifndef RESERVE_BP_SLOT
#define RESERVE_BP_SLOT 0xffffffff81152340
#endif

#ifndef RELEASE_BP_SLOT
#define RELEASE_BP_SLOT 0xffffffff81152370
#endif

#ifndef DBG_RESERVE_BP_SLOT
#define DBG_RESERVE_BP_SLOT 0xffffffff811523d0
#endif

#ifndef DBG_RELEASE_BP_SLOT
#define DBG_RELEASE_BP_SLOT 0xffffffff81152400
#endif

#ifndef REGISTER_PERF_HW_BREAKPOINT
#define REGISTER_PERF_HW_BREAKPOINT 0xffffffff81152430
#endif

#ifndef UPROBE_WRITE_OPCODE
#define UPROBE_WRITE_OPCODE 0xffffffff81152b80
#endif

#ifndef UPROBE_REGISTER
#define UPROBE_REGISTER 0xffffffff811537f0
#endif

#ifndef UPROBE_UNREGISTER
#define UPROBE_UNREGISTER 0xffffffff81153a90
#endif

#ifndef UPROBE_APPLY
#define UPROBE_APPLY 0xffffffff81153af0
#endif

#ifndef UPROBE_MMAP
#define UPROBE_MMAP 0xffffffff81153bb0
#endif

#ifndef UPROBE_MUNMAP
#define UPROBE_MUNMAP 0xffffffff81153df0
#endif

#ifndef UPROBE_CLEAR_STATE
#define UPROBE_CLEAR_STATE 0xffffffff81153e70
#endif

#ifndef UPROBE_START_DUP_MMAP
#define UPROBE_START_DUP_MMAP 0xffffffff81153eb0
#endif

#ifndef UPROBE_END_DUP_MMAP
#define UPROBE_END_DUP_MMAP 0xffffffff81153ed0
#endif

#ifndef UPROBE_DUP_MMAP
#define UPROBE_DUP_MMAP 0xffffffff81153ef0
#endif

#ifndef UPROBE_GET_TRAP_ADDR
#define UPROBE_GET_TRAP_ADDR 0xffffffff81153f60
#endif

#ifndef UPROBE_FREE_UTASK
#define UPROBE_FREE_UTASK 0xffffffff81153fa0
#endif

#ifndef UPROBE_COPY_PROCESS
#define UPROBE_COPY_PROCESS 0xffffffff81154020
#endif

#ifndef UPROBE_DENY_SIGNAL
#define UPROBE_DENY_SIGNAL 0xffffffff811541c0
#endif

#ifndef UPROBE_NOTIFY_RESUME
#define UPROBE_NOTIFY_RESUME 0xffffffff811542a0
#endif

#ifndef UPROBE_PRE_SSTEP_NOTIFIER
#define UPROBE_PRE_SSTEP_NOTIFIER 0xffffffff81154be0
#endif

#ifndef UPROBE_POST_SSTEP_NOTIFIER
#define UPROBE_POST_SSTEP_NOTIFIER 0xffffffff81154c70
#endif

#ifndef USER_RETURN_NOTIFIER_UNREGISTER
#define USER_RETURN_NOTIFIER_UNREGISTER 0xffffffff81154ce0
#endif

#ifndef USER_RETURN_NOTIFIER_REGISTER
#define USER_RETURN_NOTIFIER_REGISTER 0xffffffff81154d50
#endif

#ifndef FIRE_USER_RETURN_NOTIFIERS
#define FIRE_USER_RETURN_NOTIFIERS 0xffffffff81154da0
#endif

#ifndef PADATA_REGISTER_CPUMASK_NOTIFIER
#define PADATA_REGISTER_CPUMASK_NOTIFIER 0xffffffff81155010
#endif

#ifndef PADATA_UNREGISTER_CPUMASK_NOTIFIER
#define PADATA_UNREGISTER_CPUMASK_NOTIFIER 0xffffffff81155030
#endif

#ifndef PADATA_START
#define PADATA_START 0xffffffff81155050
#endif

#ifndef PADATA_FREE
#define PADATA_FREE 0xffffffff81155140
#endif

#ifndef PADATA_DO_SERIAL
#define PADATA_DO_SERIAL 0xffffffff81155320
#endif

#ifndef PADATA_STOP
#define PADATA_STOP 0xffffffff811554b0
#endif

#ifndef PADATA_DO_PARALLEL
#define PADATA_DO_PARALLEL 0xffffffff81155530
#endif

#ifndef PADATA_SET_CPUMASKS
#define PADATA_SET_CPUMASKS 0xffffffff81155b00
#endif

#ifndef PADATA_SET_CPUMASK
#define PADATA_SET_CPUMASK 0xffffffff81155b60
#endif

#ifndef PADATA_ALLOC
#define PADATA_ALLOC 0xffffffff81155cf0
#endif

#ifndef PADATA_ALLOC_POSSIBLE
#define PADATA_ALLOC_POSSIBLE 0xffffffff81155ec0
#endif

#ifndef PADATA_ADD_CPU
#define PADATA_ADD_CPU 0xffffffff81155f40
#endif

#ifndef PADATA_REMOVE_CPU
#define PADATA_REMOVE_CPU 0xffffffff811561c0
#endif

#ifndef JUMP_LABEL_RATE_LIMIT
#define JUMP_LABEL_RATE_LIMIT 0xffffffff811563c0
#endif

#ifndef STATIC_KEY_SLOW_INC
#define STATIC_KEY_SLOW_INC 0xffffffff81156510
#endif

#ifndef STATIC_KEY_SLOW_DEC
#define STATIC_KEY_SLOW_DEC 0xffffffff811566a0
#endif

#ifndef STATIC_KEY_SLOW_DEC_DEFERRED
#define STATIC_KEY_SLOW_DEC_DEFERRED 0xffffffff811566f0
#endif

#ifndef JUMP_LABEL_LOCK
#define JUMP_LABEL_LOCK 0xffffffff81156990
#endif

#ifndef JUMP_LABEL_UNLOCK
#define JUMP_LABEL_UNLOCK 0xffffffff811569b0
#endif

#ifndef JUMP_LABEL_APPLY_NOPS
#define JUMP_LABEL_APPLY_NOPS 0xffffffff811569f0
#endif

#ifndef JUMP_LABEL_TEXT_RESERVED
#define JUMP_LABEL_TEXT_RESERVED 0xffffffff81156a40
#endif

#ifndef PAGE_WAITQUEUE
#define PAGE_WAITQUEUE 0xffffffff81156b70
#endif

#ifndef PAGECACHE_WRITE_BEGIN
#define PAGECACHE_WRITE_BEGIN 0xffffffff81156bd0
#endif

#ifndef PAGECACHE_WRITE_END
#define PAGECACHE_WRITE_END 0xffffffff81156bf0
#endif

#ifndef WAIT_ON_PAGE_BIT
#define WAIT_ON_PAGE_BIT 0xffffffff81156e90
#endif

#ifndef FILEMAP_FDATAWAIT_RANGE
#define FILEMAP_FDATAWAIT_RANGE 0xffffffff81156f50
#endif

#ifndef FILEMAP_FDATAWAIT
#define FILEMAP_FDATAWAIT 0xffffffff811570b0
#endif

#ifndef WAIT_ON_PAGE_BIT_KILLABLE_TIMEOUT
#define WAIT_ON_PAGE_BIT_KILLABLE_TIMEOUT 0xffffffff81157140
#endif

#ifndef ADD_PAGE_WAIT_QUEUE
#define ADD_PAGE_WAIT_QUEUE 0xffffffff81157210
#endif

#ifndef __LOCK_PAGE
#define __LOCK_PAGE 0xffffffff811572b0
#endif

#ifndef __LOCK_PAGE_KILLABLE
#define __LOCK_PAGE_KILLABLE 0xffffffff81157360
#endif

#ifndef PAGE_CACHE_NEXT_HOLE
#define PAGE_CACHE_NEXT_HOLE 0xffffffff81157410
#endif

#ifndef PAGE_CACHE_PREV_HOLE
#define PAGE_CACHE_PREV_HOLE 0xffffffff81157460
#endif

#ifndef FIND_GET_ENTRY
#define FIND_GET_ENTRY 0xffffffff811574b0
#endif

#ifndef GENERIC_FILE_MMAP
#define GENERIC_FILE_MMAP 0xffffffff81157570
#endif

#ifndef GENERIC_FILE_READONLY_MMAP
#define GENERIC_FILE_READONLY_MMAP 0xffffffff811575c0
#endif

#ifndef GENERIC_PERFORM_WRITE
#define GENERIC_PERFORM_WRITE 0xffffffff811575f0
#endif

#ifndef __PAGE_CACHE_ALLOC
#define __PAGE_CACHE_ALLOC 0xffffffff811577b0
#endif

#ifndef END_PAGE_WRITEBACK
#define END_PAGE_WRITEBACK 0xffffffff81157870
#endif

#ifndef GENERIC_WRITE_CHECKS
#define GENERIC_WRITE_CHECKS 0xffffffff81157900
#endif

#ifndef TRY_TO_RELEASE_PAGE
#define TRY_TO_RELEASE_PAGE 0xffffffff81157a00
#endif

#ifndef UNLOCK_PAGE
#define UNLOCK_PAGE 0xffffffff81157a60
#endif

#ifndef PAGE_ENDIO
#define PAGE_ENDIO 0xffffffff81157ad0
#endif

#ifndef FIND_LOCK_ENTRY
#define FIND_LOCK_ENTRY 0xffffffff81157b40
#endif

#ifndef FILEMAP_PAGE_MKWRITE
#define FILEMAP_PAGE_MKWRITE 0xffffffff81157bb0
#endif

#ifndef FIND_GET_PAGES_CONTIG
#define FIND_GET_PAGES_CONTIG 0xffffffff81157c60
#endif

#ifndef FILEMAP_MAP_PAGES
#define FILEMAP_MAP_PAGES 0xffffffff81157df0
#endif

#ifndef FIND_GET_PAGES_TAG
#define FIND_GET_PAGES_TAG 0xffffffff81158040
#endif

#ifndef ADD_TO_PAGE_CACHE_LOCKED
#define ADD_TO_PAGE_CACHE_LOCKED 0xffffffff81158400
#endif

#ifndef ADD_TO_PAGE_CACHE_LRU
#define ADD_TO_PAGE_CACHE_LRU 0xffffffff81158420
#endif

#ifndef PAGECACHE_GET_PAGE
#define PAGECACHE_GET_PAGE 0xffffffff811584a0
#endif

#ifndef GRAB_CACHE_PAGE_WRITE_BEGIN
#define GRAB_CACHE_PAGE_WRITE_BEGIN 0xffffffff81158640
#endif

#ifndef READ_CACHE_PAGE
#define READ_CACHE_PAGE 0xffffffff81158830
#endif

#ifndef READ_CACHE_PAGE_GFP
#define READ_CACHE_PAGE_GFP 0xffffffff81158850
#endif

#ifndef __DELETE_FROM_PAGE_CACHE
#define __DELETE_FROM_PAGE_CACHE 0xffffffff81158870
#endif

#ifndef DELETE_FROM_PAGE_CACHE
#define DELETE_FROM_PAGE_CACHE 0xffffffff81158ad0
#endif

#ifndef REPLACE_PAGE_CACHE_PAGE
#define REPLACE_PAGE_CACHE_PAGE 0xffffffff81158b30
#endif

#ifndef __FILEMAP_FDATAWRITE_RANGE
#define __FILEMAP_FDATAWRITE_RANGE 0xffffffff81158c40
#endif

#ifndef FILEMAP_FDATAWRITE
#define FILEMAP_FDATAWRITE 0xffffffff81158cb0
#endif

#ifndef FILEMAP_WRITE_AND_WAIT
#define FILEMAP_WRITE_AND_WAIT 0xffffffff81158ce0
#endif

#ifndef FILEMAP_FLUSH
#define FILEMAP_FLUSH 0xffffffff81158d40
#endif

#ifndef FILEMAP_FDATAWRITE_RANGE
#define FILEMAP_FDATAWRITE_RANGE 0xffffffff81158d60
#endif

#ifndef FILEMAP_WRITE_AND_WAIT_RANGE
#define FILEMAP_WRITE_AND_WAIT_RANGE 0xffffffff81158d80
#endif

#ifndef GENERIC_FILE_READ_ITER
#define GENERIC_FILE_READ_ITER 0xffffffff81158de0
#endif

#ifndef GENERIC_FILE_DIRECT_WRITE
#define GENERIC_FILE_DIRECT_WRITE 0xffffffff811593d0
#endif

#ifndef __GENERIC_FILE_WRITE_ITER
#define __GENERIC_FILE_WRITE_ITER 0xffffffff81159530
#endif

#ifndef GENERIC_FILE_WRITE_ITER
#define GENERIC_FILE_WRITE_ITER 0xffffffff811596e0
#endif

#ifndef WAIT_ON_PAGE_BIT_KILLABLE
#define WAIT_ON_PAGE_BIT_KILLABLE 0xffffffff811598d0
#endif

#ifndef __LOCK_PAGE_OR_RETRY
#define __LOCK_PAGE_OR_RETRY 0xffffffff81159990
#endif

#ifndef FILEMAP_FAULT
#define FILEMAP_FAULT 0xffffffff81159a40
#endif

#ifndef FIND_GET_ENTRIES
#define FIND_GET_ENTRIES 0xffffffff81159e70
#endif

#ifndef FIND_GET_PAGES
#define FIND_GET_PAGES 0xffffffff81159fc0
#endif

#ifndef MEMPOOL_KFREE
#define MEMPOOL_KFREE 0xffffffff8115a140
#endif

#ifndef MEMPOOL_ALLOC_SLAB
#define MEMPOOL_ALLOC_SLAB 0xffffffff8115a160
#endif

#ifndef MEMPOOL_FREE_SLAB
#define MEMPOOL_FREE_SLAB 0xffffffff8115a180
#endif

#ifndef MEMPOOL_KMALLOC
#define MEMPOOL_KMALLOC 0xffffffff8115a1a0
#endif

#ifndef MEMPOOL_ALLOC_PAGES
#define MEMPOOL_ALLOC_PAGES 0xffffffff8115a1c0
#endif

#ifndef MEMPOOL_FREE_PAGES
#define MEMPOOL_FREE_PAGES 0xffffffff8115a1e0
#endif

#ifndef MEMPOOL_ALLOC
#define MEMPOOL_ALLOC 0xffffffff8115a210
#endif

#ifndef MEMPOOL_DESTROY
#define MEMPOOL_DESTROY 0xffffffff8115a360
#endif

#ifndef MEMPOOL_RESIZE
#define MEMPOOL_RESIZE 0xffffffff8115a3f0
#endif

#ifndef MEMPOOL_FREE
#define MEMPOOL_FREE 0xffffffff8115a5d0
#endif

#ifndef MEMPOOL_CREATE_NODE
#define MEMPOOL_CREATE_NODE 0xffffffff8115a660
#endif

#ifndef MEMPOOL_CREATE
#define MEMPOOL_CREATE 0xffffffff8115a7b0
#endif

#ifndef REGISTER_OOM_NOTIFIER
#define REGISTER_OOM_NOTIFIER 0xffffffff8115aa00
#endif

#ifndef UNREGISTER_OOM_NOTIFIER
#define UNREGISTER_OOM_NOTIFIER 0xffffffff8115aa20
#endif

#ifndef FIND_LOCK_TASK_MM
#define FIND_LOCK_TASK_MM 0xffffffff8115ab40
#endif

#ifndef OOM_BADNESS
#define OOM_BADNESS 0xffffffff8115abe0
#endif

#ifndef OOM_SCAN_PROCESS_THREAD
#define OOM_SCAN_PROCESS_THREAD 0xffffffff8115acf0
#endif

#ifndef MARK_TSK_OOM_VICTIM
#define MARK_TSK_OOM_VICTIM 0xffffffff8115ad80
#endif

#ifndef UNMARK_OOM_VICTIM
#define UNMARK_OOM_VICTIM 0xffffffff8115add0
#endif

#ifndef OOM_KILLER_DISABLE
#define OOM_KILLER_DISABLE 0xffffffff8115ae50
#endif

#ifndef OOM_KILLER_ENABLE
#define OOM_KILLER_ENABLE 0xffffffff8115af20
#endif

#ifndef OOM_KILL_PROCESS
#define OOM_KILL_PROCESS 0xffffffff8115af50
#endif

#ifndef CHECK_PANIC_ON_OOM
#define CHECK_PANIC_ON_OOM 0xffffffff8115b300
#endif

#ifndef OOM_ZONELIST_TRYLOCK
#define OOM_ZONELIST_TRYLOCK 0xffffffff8115b8a0
#endif

#ifndef OOM_ZONELIST_UNLOCK
#define OOM_ZONELIST_UNLOCK 0xffffffff8115b970
#endif

#ifndef OUT_OF_MEMORY
#define OUT_OF_MEMORY 0xffffffff8115b9e0
#endif

#ifndef PAGEFAULT_OUT_OF_MEMORY
#define PAGEFAULT_OUT_OF_MEMORY 0xffffffff8115ba50
#endif

#ifndef __PROBE_KERNEL_READ
#define __PROBE_KERNEL_READ 0xffffffff8115bb30
#endif

#ifndef __PROBE_KERNEL_WRITE
#define __PROBE_KERNEL_WRITE 0xffffffff8115bb90
#endif

#ifndef SPLIT_PAGE
#define SPLIT_PAGE 0xffffffff8115bbf0
#endif

#ifndef ADJUST_MANAGED_PAGE_COUNT
#define ADJUST_MANAGED_PAGE_COUNT 0xffffffff8115be40
#endif

#ifndef NR_FREE_BUFFER_PAGES
#define NR_FREE_BUFFER_PAGES 0xffffffff8115bf30
#endif

#ifndef __GET_FREE_PAGES
#define __GET_FREE_PAGES 0xffffffff8115bfb0
#endif

#ifndef GET_ZEROED_PAGE
#define GET_ZEROED_PAGE 0xffffffff8115c000
#endif

#ifndef SI_MEMINFO
#define SI_MEMINFO 0xffffffff8115c020
#endif

#ifndef PM_RESTORE_GFP_MASK
#define PM_RESTORE_GFP_MASK 0xffffffff8115cd40
#endif

#ifndef PM_RESTRICT_GFP_MASK
#define PM_RESTRICT_GFP_MASK 0xffffffff8115cd90
#endif

#ifndef PM_SUSPENDED_STORAGE
#define PM_SUSPENDED_STORAGE 0xffffffff8115ce10
#endif

#ifndef PREP_COMPOUND_PAGE
#define PREP_COMPOUND_PAGE 0xffffffff8115ce30
#endif

#ifndef MOVE_FREEPAGES
#define MOVE_FREEPAGES 0xffffffff8115ce90
#endif

#ifndef MOVE_FREEPAGES_BLOCK
#define MOVE_FREEPAGES_BLOCK 0xffffffff8115cf50
#endif

#ifndef FIND_SUITABLE_FALLBACK
#define FIND_SUITABLE_FALLBACK 0xffffffff8115cfd0
#endif

#ifndef DRAIN_ALL_PAGES
#define DRAIN_ALL_PAGES 0xffffffff8115d000
#endif

#ifndef MARK_FREE_PAGES
#define MARK_FREE_PAGES 0xffffffff8115d0f0
#endif

#ifndef ZONE_WATERMARK_OK
#define ZONE_WATERMARK_OK 0xffffffff8115d280
#endif

#ifndef ZONE_WATERMARK_OK_SAFE
#define ZONE_WATERMARK_OK_SAFE 0xffffffff8115d2a0
#endif

#ifndef WARN_ALLOC_FAILED
#define WARN_ALLOC_FAILED 0xffffffff8115d360
#endif

#ifndef GFP_PFMEMALLOC_ALLOWED
#define GFP_PFMEMALLOC_ALLOWED 0xffffffff8115d490
#endif

#ifndef ALLOC_KMEM_PAGES
#define ALLOC_KMEM_PAGES 0xffffffff8115d580
#endif

#ifndef NR_FREE_PAGECACHE_PAGES
#define NR_FREE_PAGECACHE_PAGES 0xffffffff8115d5a0
#endif

#ifndef SI_MEMINFO_NODE
#define SI_MEMINFO_NODE 0xffffffff8115d5c0
#endif

#ifndef SKIP_FREE_AREAS_NODE
#define SKIP_FREE_AREAS_NODE 0xffffffff8115d6b0
#endif

#ifndef SHOW_FREE_AREAS
#define SHOW_FREE_AREAS 0xffffffff8115d6d0
#endif

#ifndef NUMA_ZONELIST_ORDER_HANDLER
#define NUMA_ZONELIST_ORDER_HANDLER 0xffffffff8115e070
#endif

#ifndef SYSCTL_MIN_UNMAPPED_RATIO_SYSCTL_HANDLER
#define SYSCTL_MIN_UNMAPPED_RATIO_SYSCTL_HANDLER 0xffffffff8115e240
#endif

#ifndef SYSCTL_MIN_SLAB_RATIO_SYSCTL_HANDLER
#define SYSCTL_MIN_SLAB_RATIO_SYSCTL_HANDLER 0xffffffff8115e2a0
#endif

#ifndef LOWMEM_RESERVE_RATIO_SYSCTL_HANDLER
#define LOWMEM_RESERVE_RATIO_SYSCTL_HANDLER 0xffffffff8115e300
#endif

#ifndef PERCPU_PAGELIST_FRACTION_SYSCTL_HANDLER
#define PERCPU_PAGELIST_FRACTION_SYSCTL_HANDLER 0xffffffff8115e320
#endif

#ifndef GET_PFNBLOCK_FLAGS_MASK
#define GET_PFNBLOCK_FLAGS_MASK 0xffffffff8115e440
#endif

#ifndef DRAIN_ZONE_PAGES
#define DRAIN_ZONE_PAGES 0xffffffff8115ed30
#endif

#ifndef DRAIN_LOCAL_PAGES
#define DRAIN_LOCAL_PAGES 0xffffffff8115ee80
#endif

#ifndef FREE_HOT_COLD_PAGE
#define FREE_HOT_COLD_PAGE 0xffffffff8115eec0
#endif

#ifndef FREE_HOT_COLD_PAGE_LIST
#define FREE_HOT_COLD_PAGE_LIST 0xffffffff8115f080
#endif

#ifndef __FREE_PAGES
#define __FREE_PAGES 0xffffffff8115f110
#endif

#ifndef FREE_PAGES
#define FREE_PAGES 0xffffffff8115f1a0
#endif

#ifndef ALLOC_PAGES_EXACT
#define ALLOC_PAGES_EXACT 0xffffffff8115f290
#endif

#ifndef FREE_PAGES_EXACT
#define FREE_PAGES_EXACT 0xffffffff8115f2d0
#endif

#ifndef __FREE_KMEM_PAGES
#define __FREE_KMEM_PAGES 0xffffffff8115f320
#endif

#ifndef FREE_KMEM_PAGES
#define FREE_KMEM_PAGES 0xffffffff8115f340
#endif

#ifndef FREE_RESERVED_AREA
#define FREE_RESERVED_AREA 0xffffffff8115f3a0
#endif

#ifndef SET_PFNBLOCK_FLAGS_MASK
#define SET_PFNBLOCK_FLAGS_MASK 0xffffffff8115f610
#endif

#ifndef SET_PAGEBLOCK_MIGRATETYPE
#define SET_PAGEBLOCK_MIGRATETYPE 0xffffffff8115f690
#endif

#ifndef __ISOLATE_FREE_PAGE
#define __ISOLATE_FREE_PAGE 0xffffffff8115f6e0
#endif

#ifndef SPLIT_FREE_PAGE
#define SPLIT_FREE_PAGE 0xffffffff8115f8c0
#endif

#ifndef __ALLOC_PAGES_NODEMASK
#define __ALLOC_PAGES_NODEMASK 0xffffffff81160890
#endif

#ifndef ALLOC_KMEM_PAGES_NODE
#define ALLOC_KMEM_PAGES_NODE 0xffffffff81161300
#endif

#ifndef SETUP_PER_ZONE_WMARKS
#define SETUP_PER_ZONE_WMARKS 0xffffffff81161360
#endif

#ifndef MIN_FREE_KBYTES_SYSCTL_HANDLER
#define MIN_FREE_KBYTES_SYSCTL_HANDLER 0xffffffff81161660
#endif

#ifndef HAS_UNMOVABLE_PAGES
#define HAS_UNMOVABLE_PAGES 0xffffffff811616a0
#endif

#ifndef IS_PAGEBLOCK_REMOVABLE_NOLOCK
#define IS_PAGEBLOCK_REMOVABLE_NOLOCK 0xffffffff811616e0
#endif

#ifndef ZONE_PCP_RESET
#define ZONE_PCP_RESET 0xffffffff811617a0
#endif

#ifndef __OFFLINE_ISOLATED_PAGES
#define __OFFLINE_ISOLATED_PAGES 0xffffffff81161840
#endif

#ifndef IS_FREE_BUDDY_PAGE
#define IS_FREE_BUDDY_PAGE 0xffffffff81161b00
#endif

#ifndef BDI_SET_MAX_RATIO
#define BDI_SET_MAX_RATIO 0xffffffff81161cd0
#endif

#ifndef TAG_PAGES_FOR_WRITEBACK
#define TAG_PAGES_FOR_WRITEBACK 0xffffffff81161d50
#endif

#ifndef __TEST_SET_PAGE_WRITEBACK
#define __TEST_SET_PAGE_WRITEBACK 0xffffffff81161e10
#endif

#ifndef MAPPING_TAGGED
#define MAPPING_TAGGED 0xffffffff81161fa0
#endif

#ifndef SET_PAGE_DIRTY
#define SET_PAGE_DIRTY 0xffffffff811621c0
#endif

#ifndef SET_PAGE_DIRTY_LOCK
#define SET_PAGE_DIRTY_LOCK 0xffffffff81162220
#endif

#ifndef WAIT_FOR_STABLE_PAGE
#define WAIT_FOR_STABLE_PAGE 0xffffffff81162270
#endif

#ifndef BDI_WRITEOUT_INC
#define BDI_WRITEOUT_INC 0xffffffff811622b0
#endif

#ifndef ACCOUNT_PAGE_CLEANED
#define ACCOUNT_PAGE_CLEANED 0xffffffff81162360
#endif

#ifndef ACCOUNT_PAGE_REDIRTY
#define ACCOUNT_PAGE_REDIRTY 0xffffffff811623f0
#endif

#ifndef ACCOUNT_PAGE_DIRTIED
#define ACCOUNT_PAGE_DIRTIED 0xffffffff811624a0
#endif

#ifndef __SET_PAGE_DIRTY_NOBUFFERS
#define __SET_PAGE_DIRTY_NOBUFFERS 0xffffffff811625a0
#endif

#ifndef REDIRTY_PAGE_FOR_WRITEPAGE
#define REDIRTY_PAGE_FOR_WRITEPAGE 0xffffffff811626b0
#endif

#ifndef CLEAR_PAGE_DIRTY_FOR_IO
#define CLEAR_PAGE_DIRTY_FOR_IO 0xffffffff811626e0
#endif

#ifndef WRITE_CACHE_PAGES
#define WRITE_CACHE_PAGES 0xffffffff811627d0
#endif

#ifndef GENERIC_WRITEPAGES
#define GENERIC_WRITEPAGES 0xffffffff81162bd0
#endif

#ifndef WRITE_ONE_PAGE
#define WRITE_ONE_PAGE 0xffffffff81162c20
#endif

#ifndef GLOBAL_DIRTY_LIMITS
#define GLOBAL_DIRTY_LIMITS 0xffffffff81162d50
#endif

#ifndef ZONE_DIRTY_OK
#define ZONE_DIRTY_OK 0xffffffff81162ea0
#endif

#ifndef DIRTY_BACKGROUND_RATIO_HANDLER
#define DIRTY_BACKGROUND_RATIO_HANDLER 0xffffffff81162fb0
#endif

#ifndef DIRTY_BACKGROUND_BYTES_HANDLER
#define DIRTY_BACKGROUND_BYTES_HANDLER 0xffffffff81162fe0
#endif

#ifndef BDI_SET_MIN_RATIO
#define BDI_SET_MIN_RATIO 0xffffffff81163010
#endif

#ifndef BDI_DIRTY_LIMIT
#define BDI_DIRTY_LIMIT 0xffffffff81163080
#endif

#ifndef __BDI_UPDATE_BANDWIDTH
#define __BDI_UPDATE_BANDWIDTH 0xffffffff81163130
#endif

#ifndef BALANCE_DIRTY_PAGES_RATELIMITED
#define BALANCE_DIRTY_PAGES_RATELIMITED 0xffffffff81163540
#endif

#ifndef THROTTLE_VM_WRITEOUT
#define THROTTLE_VM_WRITEOUT 0xffffffff81163ff0
#endif

#ifndef DIRTY_WRITEBACK_CENTISECS_HANDLER
#define DIRTY_WRITEBACK_CENTISECS_HANDLER 0xffffffff81164090
#endif

#ifndef LAPTOP_MODE_TIMER_FN
#define LAPTOP_MODE_TIMER_FN 0xffffffff811640b0
#endif

#ifndef LAPTOP_IO_COMPLETION
#define LAPTOP_IO_COMPLETION 0xffffffff81164110
#endif

#ifndef LAPTOP_SYNC_COMPLETION
#define LAPTOP_SYNC_COMPLETION 0xffffffff81164140
#endif

#ifndef WRITEBACK_SET_RATELIMIT
#define WRITEBACK_SET_RATELIMIT 0xffffffff81164190
#endif

#ifndef DIRTY_RATIO_HANDLER
#define DIRTY_RATIO_HANDLER 0xffffffff811641f0
#endif

#ifndef DIRTY_BYTES_HANDLER
#define DIRTY_BYTES_HANDLER 0xffffffff81164240
#endif

#ifndef DO_WRITEPAGES
#define DO_WRITEPAGES 0xffffffff811642c0
#endif

#ifndef __SET_PAGE_DIRTY_NO_WRITEBACK
#define __SET_PAGE_DIRTY_NO_WRITEBACK 0xffffffff81164300
#endif

#ifndef TEST_CLEAR_PAGE_WRITEBACK
#define TEST_CLEAR_PAGE_WRITEBACK 0xffffffff81164330
#endif

#ifndef FILE_RA_STATE_INIT
#define FILE_RA_STATE_INIT 0xffffffff811644e0
#endif

#ifndef READ_CACHE_PAGES
#define READ_CACHE_PAGES 0xffffffff81164560
#endif

#ifndef __DO_PAGE_CACHE_READAHEAD
#define __DO_PAGE_CACHE_READAHEAD 0xffffffff81164680
#endif

#ifndef PAGE_CACHE_ASYNC_READAHEAD
#define PAGE_CACHE_ASYNC_READAHEAD 0xffffffff81164ae0
#endif

#ifndef FORCE_PAGE_CACHE_READAHEAD
#define FORCE_PAGE_CACHE_READAHEAD 0xffffffff81164b80
#endif

#ifndef PAGE_CACHE_SYNC_READAHEAD
#define PAGE_CACHE_SYNC_READAHEAD 0xffffffff81164be0
#endif

#ifndef MAX_SANE_READAHEAD
#define MAX_SANE_READAHEAD 0xffffffff81164c30
#endif

#ifndef SYS_READAHEAD
#define SYS_READAHEAD 0xffffffff81164c50
#endif

#ifndef SYS_READAHEAD
#define SYS_READAHEAD 0xffffffff81164c50
#endif

#ifndef PAGEVEC_LOOKUP
#define PAGEVEC_LOOKUP 0xffffffff811650d0
#endif

#ifndef PAGEVEC_LOOKUP_TAG
#define PAGEVEC_LOOKUP_TAG 0xffffffff81165100
#endif

#ifndef PUT_PAGE
#define PUT_PAGE 0xffffffff81165b50
#endif

#ifndef __GET_PAGE_TAIL
#define __GET_PAGE_TAIL 0xffffffff81165b90
#endif

#ifndef GET_KERNEL_PAGES
#define GET_KERNEL_PAGES 0xffffffff81165d10
#endif

#ifndef GET_KERNEL_PAGE
#define GET_KERNEL_PAGE 0xffffffff81165e00
#endif

#ifndef PUT_PAGES_LIST
#define PUT_PAGES_LIST 0xffffffff81165e30
#endif

#ifndef RELEASE_PAGES
#define RELEASE_PAGES 0xffffffff81165e80
#endif

#ifndef __PAGEVEC_LRU_ADD
#define __PAGEVEC_LRU_ADD 0xffffffff81166260
#endif

#ifndef LRU_CACHE_ADD_FILE
#define LRU_CACHE_ADD_FILE 0xffffffff811662f0
#endif

#ifndef ROTATE_RECLAIMABLE_PAGE
#define ROTATE_RECLAIMABLE_PAGE 0xffffffff81166310
#endif

#ifndef ACTIVATE_PAGE
#define ACTIVATE_PAGE 0xffffffff811663b0
#endif

#ifndef MARK_PAGE_ACCESSED
#define MARK_PAGE_ACCESSED 0xffffffff81166440
#endif

#ifndef LRU_CACHE_ADD_ANON
#define LRU_CACHE_ADD_ANON 0xffffffff811664e0
#endif

#ifndef LRU_CACHE_ADD
#define LRU_CACHE_ADD 0xffffffff81166500
#endif

#ifndef ADD_PAGE_TO_UNEVICTABLE_LIST
#define ADD_PAGE_TO_UNEVICTABLE_LIST 0xffffffff81166520
#endif

#ifndef LRU_CACHE_ADD_ACTIVE_OR_UNEVICTABLE
#define LRU_CACHE_ADD_ACTIVE_OR_UNEVICTABLE 0xffffffff81166600
#endif

#ifndef LRU_ADD_DRAIN_CPU
#define LRU_ADD_DRAIN_CPU 0xffffffff81166690
#endif

#ifndef __PAGEVEC_RELEASE
#define __PAGEVEC_RELEASE 0xffffffff811667a0
#endif

#ifndef DEACTIVATE_FILE_PAGE
#define DEACTIVATE_FILE_PAGE 0xffffffff811667e0
#endif

#ifndef LRU_ADD_DRAIN
#define LRU_ADD_DRAIN 0xffffffff81166870
#endif

#ifndef LRU_ADD_DRAIN_ALL
#define LRU_ADD_DRAIN_ALL 0xffffffff81166890
#endif

#ifndef LRU_ADD_PAGE_TAIL
#define LRU_ADD_PAGE_TAIL 0xffffffff811669f0
#endif

#ifndef PAGEVEC_LOOKUP_ENTRIES
#define PAGEVEC_LOOKUP_ENTRIES 0xffffffff81166ba0
#endif

#ifndef PAGEVEC_REMOVE_EXCEPTIONALS
#define PAGEVEC_REMOVE_EXCEPTIONALS 0xffffffff81166bd0
#endif

#ifndef PAGECACHE_ISIZE_EXTENDED
#define PAGECACHE_ISIZE_EXTENDED 0xffffffff81166c10
#endif

#ifndef INVALIDATE_INODE_PAGES2_RANGE
#define INVALIDATE_INODE_PAGES2_RANGE 0xffffffff81166dc0
#endif

#ifndef INVALIDATE_INODE_PAGES2
#define INVALIDATE_INODE_PAGES2 0xffffffff811670d0
#endif

#ifndef DO_INVALIDATEPAGE
#define DO_INVALIDATEPAGE 0xffffffff811670f0
#endif

#ifndef TRUNCATE_INODE_PAGE
#define TRUNCATE_INODE_PAGE 0xffffffff81167120
#endif

#ifndef GENERIC_ERROR_REMOVE_PAGE
#define GENERIC_ERROR_REMOVE_PAGE 0xffffffff811671b0
#endif

#ifndef TRUNCATE_INODE_PAGES_RANGE
#define TRUNCATE_INODE_PAGES_RANGE 0xffffffff81167200
#endif

#ifndef TRUNCATE_INODE_PAGES
#define TRUNCATE_INODE_PAGES 0xffffffff811677e0
#endif

#ifndef TRUNCATE_INODE_PAGES_FINAL
#define TRUNCATE_INODE_PAGES_FINAL 0xffffffff81167800
#endif

#ifndef TRUNCATE_PAGECACHE
#define TRUNCATE_PAGECACHE 0xffffffff81167850
#endif

#ifndef TRUNCATE_SETSIZE
#define TRUNCATE_SETSIZE 0xffffffff811678b0
#endif

#ifndef TRUNCATE_PAGECACHE_RANGE
#define TRUNCATE_PAGECACHE_RANGE 0xffffffff811678f0
#endif

#ifndef INVALIDATE_INODE_PAGE
#define INVALIDATE_INODE_PAGE 0xffffffff81167950
#endif

#ifndef INVALIDATE_MAPPING_PAGES
#define INVALIDATE_MAPPING_PAGES 0xffffffff811679c0
#endif

#ifndef UNREGISTER_SHRINKER
#define UNREGISTER_SHRINKER 0xffffffff81168390
#endif

#ifndef REGISTER_SHRINKER
#define REGISTER_SHRINKER 0xffffffff81168ef0
#endif

#ifndef ZONE_RECLAIMABLE
#define ZONE_RECLAIMABLE 0xffffffff8116a070
#endif

#ifndef DROP_SLAB_NODE
#define DROP_SLAB_NODE 0xffffffff8116a0a0
#endif

#ifndef DROP_SLAB
#define DROP_SLAB 0xffffffff8116a100
#endif

#ifndef REMOVE_MAPPING
#define REMOVE_MAPPING 0xffffffff8116a170
#endif

#ifndef __ISOLATE_LRU_PAGE
#define __ISOLATE_LRU_PAGE 0xffffffff8116a1a0
#endif

#ifndef ISOLATE_LRU_PAGE
#define ISOLATE_LRU_PAGE 0xffffffff8116a430
#endif

#ifndef WAKEUP_KSWAPD
#define WAKEUP_KSWAPD 0xffffffff8116a5b0
#endif

#ifndef KSWAPD_RUN
#define KSWAPD_RUN 0xffffffff8116a6c0
#endif

#ifndef KSWAPD_STOP
#define KSWAPD_STOP 0xffffffff8116a780
#endif

#ifndef PAGE_EVICTABLE
#define PAGE_EVICTABLE 0xffffffff8116a7c0
#endif

#ifndef PUTBACK_LRU_PAGE
#define PUTBACK_LRU_PAGE 0xffffffff8116a7f0
#endif

#ifndef RECLAIM_CLEAN_PAGES_FROM_LIST
#define RECLAIM_CLEAN_PAGES_FROM_LIST 0xffffffff8116b300
#endif

#ifndef TRY_TO_FREE_PAGES
#define TRY_TO_FREE_PAGES 0xffffffff8116cdc0
#endif

#ifndef TRY_TO_FREE_MEM_CGROUP_PAGES
#define TRY_TO_FREE_MEM_CGROUP_PAGES 0xffffffff8116cf00
#endif

#ifndef SHRINK_ALL_MEMORY
#define SHRINK_ALL_MEMORY 0xffffffff8116d040
#endif

#ifndef ZONE_RECLAIM
#define ZONE_RECLAIM 0xffffffff8116d0d0
#endif

#ifndef MEM_CGROUP_SHRINK_NODE_ZONE
#define MEM_CGROUP_SHRINK_NODE_ZONE 0xffffffff8116d2f0
#endif

#ifndef CHECK_MOVE_UNEVICTABLE_PAGES
#define CHECK_MOVE_UNEVICTABLE_PAGES 0xffffffff8116de10
#endif

#ifndef SHMEM_GET_SEALS
#define SHMEM_GET_SEALS 0xffffffff8116e060
#endif

#ifndef SHMEM_FILL_SUPER
#define SHMEM_FILL_SUPER 0xffffffff8116f8b0
#endif

#ifndef SHMEM_FILE_SETUP
#define SHMEM_FILE_SETUP 0xffffffff8116fec0
#endif

#ifndef SHMEM_ADD_SEALS
#define SHMEM_ADD_SEALS 0xffffffff811703b0
#endif

#ifndef SHMEM_READ_MAPPING_PAGE_GFP
#define SHMEM_READ_MAPPING_PAGE_GFP 0xffffffff811713b0
#endif

#ifndef SHMEM_TRUNCATE_RANGE
#define SHMEM_TRUNCATE_RANGE 0xffffffff811725b0
#endif

#ifndef SHMEM_UNLOCK_MAPPING
#define SHMEM_UNLOCK_MAPPING 0xffffffff81172ce0
#endif

#ifndef SHMEM_UNUSE
#define SHMEM_UNUSE 0xffffffff81172da0
#endif

#ifndef SHMEM_LOCK
#define SHMEM_LOCK 0xffffffff811730b0
#endif

#ifndef SHMEM_MAPPING
#define SHMEM_MAPPING 0xffffffff81173160
#endif

#ifndef SHMEM_FCNTL
#define SHMEM_FCNTL 0xffffffff81173190
#endif

#ifndef SYS_MEMFD_CREATE
#define SYS_MEMFD_CREATE 0xffffffff81173210
#endif

#ifndef SYS_MEMFD_CREATE
#define SYS_MEMFD_CREATE 0xffffffff81173210
#endif

#ifndef SHMEM_KERNEL_FILE_SETUP
#define SHMEM_KERNEL_FILE_SETUP 0xffffffff81173390
#endif

#ifndef SHMEM_ZERO_SETUP
#define SHMEM_ZERO_SETUP 0xffffffff811733b0
#endif

#ifndef KFREE_CONST
#define KFREE_CONST 0xffffffff81173430
#endif

#ifndef KSTRDUP
#define KSTRDUP 0xffffffff81173460
#endif

#ifndef KSTRDUP_CONST
#define KSTRDUP_CONST 0xffffffff811734c0
#endif

#ifndef KMEMDUP
#define KMEMDUP 0xffffffff81173500
#endif

#ifndef KSTRNDUP
#define KSTRNDUP 0xffffffff81173550
#endif

#ifndef MEMDUP_USER
#define MEMDUP_USER 0xffffffff811735b0
#endif

#ifndef STRNDUP_USER
#define STRNDUP_USER 0xffffffff81173620
#endif

#ifndef KVFREE
#define KVFREE 0xffffffff811736c0
#endif

#ifndef __VMA_LINK_LIST
#define __VMA_LINK_LIST 0xffffffff81173700
#endif

#ifndef TASK_OF_STACK
#define TASK_OF_STACK 0xffffffff81173750
#endif

#ifndef VM_MMAP_PGOFF
#define VM_MMAP_PGOFF 0xffffffff81173860
#endif

#ifndef VM_MMAP
#define VM_MMAP 0xffffffff81173920
#endif

#ifndef PAGE_RMAPPING
#define PAGE_RMAPPING 0xffffffff81173970
#endif

#ifndef PAGE_ANON_VMA
#define PAGE_ANON_VMA 0xffffffff811739b0
#endif

#ifndef PAGE_MAPPING
#define PAGE_MAPPING 0xffffffff811739f0
#endif

#ifndef OVERCOMMIT_RATIO_HANDLER
#define OVERCOMMIT_RATIO_HANDLER 0xffffffff81173a50
#endif

#ifndef OVERCOMMIT_KBYTES_HANDLER
#define OVERCOMMIT_KBYTES_HANDLER 0xffffffff81173a80
#endif

#ifndef VM_COMMIT_LIMIT
#define VM_COMMIT_LIMIT 0xffffffff81173ab0
#endif

#ifndef GET_CMDLINE
#define GET_CMDLINE 0xffffffff81173b20
#endif

#ifndef FIRST_ONLINE_PGDAT
#define FIRST_ONLINE_PGDAT 0xffffffff81173c20
#endif

#ifndef NEXT_ONLINE_PGDAT
#define NEXT_ONLINE_PGDAT 0xffffffff81173c60
#endif

#ifndef NEXT_ZONE
#define NEXT_ZONE 0xffffffff81173cb0
#endif

#ifndef NEXT_ZONES_ZONELIST
#define NEXT_ZONES_ZONELIST 0xffffffff81173cf0
#endif

#ifndef LRUVEC_INIT
#define LRUVEC_INIT 0xffffffff81173d40
#endif

#ifndef PAGE_CPUPID_XCHG_LAST
#define PAGE_CPUPID_XCHG_LAST 0xffffffff81173d90
#endif

#ifndef DEC_ZONE_PAGE_STATE
#define DEC_ZONE_PAGE_STATE 0xffffffff81173dd0
#endif

#ifndef ALL_VM_EVENTS
#define ALL_VM_EVENTS 0xffffffff81174010
#endif

#ifndef __MOD_ZONE_PAGE_STATE
#define __MOD_ZONE_PAGE_STATE 0xffffffff81174030
#endif

#ifndef MOD_ZONE_PAGE_STATE
#define MOD_ZONE_PAGE_STATE 0xffffffff81174e50
#endif

#ifndef INC_ZONE_PAGE_STATE
#define INC_ZONE_PAGE_STATE 0xffffffff81174ec0
#endif

#ifndef VM_EVENTS_FOLD_CPU
#define VM_EVENTS_FOLD_CPU 0xffffffff81174f70
#endif

#ifndef CALCULATE_PRESSURE_THRESHOLD
#define CALCULATE_PRESSURE_THRESHOLD 0xffffffff81174fc0
#endif

#ifndef CALCULATE_NORMAL_THRESHOLD
#define CALCULATE_NORMAL_THRESHOLD 0xffffffff81175000
#endif

#ifndef REFRESH_ZONE_STAT_THRESHOLDS
#define REFRESH_ZONE_STAT_THRESHOLDS 0xffffffff81175050
#endif

#ifndef SET_PGDAT_PERCPU_THRESHOLD
#define SET_PGDAT_PERCPU_THRESHOLD 0xffffffff81175260
#endif

#ifndef __INC_ZONE_STATE
#define __INC_ZONE_STATE 0xffffffff81175310
#endif

#ifndef __INC_ZONE_PAGE_STATE
#define __INC_ZONE_PAGE_STATE 0xffffffff81175370
#endif

#ifndef __DEC_ZONE_STATE
#define __DEC_ZONE_STATE 0xffffffff811753a0
#endif

#ifndef __DEC_ZONE_PAGE_STATE
#define __DEC_ZONE_PAGE_STATE 0xffffffff81175400
#endif

#ifndef INC_ZONE_STATE
#define INC_ZONE_STATE 0xffffffff81175430
#endif

#ifndef CPU_VM_STATS_FOLD
#define CPU_VM_STATS_FOLD 0xffffffff811754b0
#endif

#ifndef DRAIN_ZONESTAT
#define DRAIN_ZONESTAT 0xffffffff81175570
#endif

#ifndef ZONE_STATISTICS
#define ZONE_STATISTICS 0xffffffff811755c0
#endif

#ifndef FRAGMENTATION_INDEX
#define FRAGMENTATION_INDEX 0xffffffff81175640
#endif

#ifndef BDI_REGISTER
#define BDI_REGISTER 0xffffffff811758b0
#endif

#ifndef BDI_REGISTER_DEV
#define BDI_REGISTER_DEV 0xffffffff81175a00
#endif

#ifndef BDI_INIT
#define BDI_INIT 0xffffffff81175c80
#endif

#ifndef BDI_DESTROY
#define BDI_DESTROY 0xffffffff81175ec0
#endif

#ifndef CLEAR_BDI_CONGESTED
#define CLEAR_BDI_CONGESTED 0xffffffff81176050
#endif

#ifndef CONGESTION_WAIT
#define CONGESTION_WAIT 0xffffffff811760d0
#endif

#ifndef WAIT_IFF_CONGESTED
#define WAIT_IFF_CONGESTED 0xffffffff811761c0
#endif

#ifndef SET_BDI_CONGESTED
#define SET_BDI_CONGESTED 0xffffffff81176300
#endif

#ifndef BDI_SETUP_AND_REGISTER
#define BDI_SETUP_AND_REGISTER 0xffffffff81176330
#endif

#ifndef BDI_HAS_DIRTY_IO
#define BDI_HAS_DIRTY_IO 0xffffffff811763b0
#endif

#ifndef BDI_WAKEUP_THREAD_DELAYED
#define BDI_WAKEUP_THREAD_DELAYED 0xffffffff81176400
#endif

#ifndef PDFLUSH_PROC_OBSOLETE
#define PDFLUSH_PROC_OBSOLETE 0xffffffff81176460
#endif

#ifndef UNUSE_MM
#define UNUSE_MM 0xffffffff81176510
#endif

#ifndef USE_MM
#define USE_MM 0xffffffff81176570
#endif

#ifndef FREE_PERCPU
#define FREE_PERCPU 0xffffffff81177180
#endif

#ifndef __ALLOC_PERCPU_GFP
#define __ALLOC_PERCPU_GFP 0xffffffff81177fe0
#endif

#ifndef __ALLOC_PERCPU
#define __ALLOC_PERCPU 0xffffffff81178000
#endif

#ifndef __ALLOC_RESERVED_PERCPU
#define __ALLOC_RESERVED_PERCPU 0xffffffff81178610
#endif

#ifndef IS_KERNEL_PERCPU_ADDRESS
#define IS_KERNEL_PERCPU_ADDRESS 0xffffffff81178630
#endif

#ifndef PER_CPU_PTR_TO_PHYS
#define PER_CPU_PTR_TO_PHYS 0xffffffff811786d0
#endif

#ifndef KMEM_CACHE_SIZE
#define KMEM_CACHE_SIZE 0xffffffff811787f0
#endif

#ifndef SLAB_STOP
#define SLAB_STOP 0xffffffff81178fb0
#endif

#ifndef KMEM_CACHE_SHRINK
#define KMEM_CACHE_SHRINK 0xffffffff81178fd0
#endif

#ifndef KMALLOC_ORDER
#define KMALLOC_ORDER 0xffffffff81179000
#endif

#ifndef KMALLOC_ORDER_TRACE
#define KMALLOC_ORDER_TRACE 0xffffffff81179050
#endif

#ifndef SLAB_START
#define SLAB_START 0xffffffff811790e0
#endif

#ifndef SLAB_NEXT
#define SLAB_NEXT 0xffffffff81179110
#endif

#ifndef __KREALLOC
#define __KREALLOC 0xffffffff81179280
#endif

#ifndef KREALLOC
#define KREALLOC 0xffffffff81179320
#endif

#ifndef KZFREE
#define KZFREE 0xffffffff811793f0
#endif

#ifndef KMEM_CACHE_CREATE
#define KMEM_CACHE_CREATE 0xffffffff81179430
#endif

#ifndef SLAB_UNMERGEABLE
#define SLAB_UNMERGEABLE 0xffffffff8117a350
#endif

#ifndef FIND_MERGEABLE
#define FIND_MERGEABLE 0xffffffff8117a390
#endif

#ifndef CALCULATE_ALIGNMENT
#define CALCULATE_ALIGNMENT 0xffffffff8117a4e0
#endif

#ifndef SLAB_KMEM_CACHE_RELEASE
#define SLAB_KMEM_CACHE_RELEASE 0xffffffff8117a540
#endif

#ifndef KMEM_CACHE_DESTROY
#define KMEM_CACHE_DESTROY 0xffffffff8117a570
#endif

#ifndef SLAB_IS_AVAILABLE
#define SLAB_IS_AVAILABLE 0xffffffff8117a690
#endif

#ifndef KMALLOC_SLAB
#define KMALLOC_SLAB 0xffffffff8117a6b0
#endif

#ifndef DEFER_COMPACTION
#define DEFER_COMPACTION 0xffffffff8117c6e0
#endif

#ifndef COMPACTION_DEFERRED
#define COMPACTION_DEFERRED 0xffffffff8117c770
#endif

#ifndef COMPACTION_DEFER_RESET
#define COMPACTION_DEFER_RESET 0xffffffff8117c810
#endif

#ifndef COMPACTION_RESTARTING
#define COMPACTION_RESTARTING 0xffffffff8117c890
#endif

#ifndef RESET_ISOLATION_SUITABLE
#define RESET_ISOLATION_SUITABLE 0xffffffff8117c8c0
#endif

#ifndef ISOLATE_FREEPAGES_RANGE
#define ISOLATE_FREEPAGES_RANGE 0xffffffff8117c910
#endif

#ifndef ISOLATE_MIGRATEPAGES_RANGE
#define ISOLATE_MIGRATEPAGES_RANGE 0xffffffff8117ca30
#endif

#ifndef COMPACTION_SUITABLE
#define COMPACTION_SUITABLE 0xffffffff8117cb00
#endif

#ifndef TRY_TO_COMPACT_PAGES
#define TRY_TO_COMPACT_PAGES 0xffffffff8117d610
#endif

#ifndef COMPACT_PGDAT
#define COMPACT_PGDAT 0xffffffff8117d840
#endif

#ifndef SYSCTL_COMPACTION_HANDLER
#define SYSCTL_COMPACTION_HANDLER 0xffffffff8117d880
#endif

#ifndef SYSCTL_EXTFRAG_HANDLER
#define SYSCTL_EXTFRAG_HANDLER 0xffffffff8117d900
#endif

#ifndef COMPACTION_REGISTER_NODE
#define COMPACTION_REGISTER_NODE 0xffffffff8117d920
#endif

#ifndef COMPACTION_UNREGISTER_NODE
#define COMPACTION_UNREGISTER_NODE 0xffffffff8117d940
#endif

#ifndef VMACACHE_FLUSH_ALL
#define VMACACHE_FLUSH_ALL 0xffffffff8117d960
#endif

#ifndef VMACACHE_UPDATE
#define VMACACHE_UPDATE 0xffffffff8117da40
#endif

#ifndef VMACACHE_FIND
#define VMACACHE_FIND 0xffffffff8117da90
#endif

#ifndef VMA_INTERVAL_TREE_INSERT
#define VMA_INTERVAL_TREE_INSERT 0xffffffff8117dd30
#endif

#ifndef VMA_INTERVAL_TREE_REMOVE
#define VMA_INTERVAL_TREE_REMOVE 0xffffffff8117ddc0
#endif

#ifndef VMA_INTERVAL_TREE_ITER_FIRST
#define VMA_INTERVAL_TREE_ITER_FIRST 0xffffffff8117e010
#endif

#ifndef VMA_INTERVAL_TREE_ITER_NEXT
#define VMA_INTERVAL_TREE_ITER_NEXT 0xffffffff8117e040
#endif

#ifndef VMA_INTERVAL_TREE_INSERT_AFTER
#define VMA_INTERVAL_TREE_INSERT_AFTER 0xffffffff8117e0b0
#endif

#ifndef ANON_VMA_INTERVAL_TREE_INSERT
#define ANON_VMA_INTERVAL_TREE_INSERT 0xffffffff8117e140
#endif

#ifndef ANON_VMA_INTERVAL_TREE_REMOVE
#define ANON_VMA_INTERVAL_TREE_REMOVE 0xffffffff8117e1d0
#endif

#ifndef ANON_VMA_INTERVAL_TREE_ITER_FIRST
#define ANON_VMA_INTERVAL_TREE_ITER_FIRST 0xffffffff8117e450
#endif

#ifndef ANON_VMA_INTERVAL_TREE_ITER_NEXT
#define ANON_VMA_INTERVAL_TREE_ITER_NEXT 0xffffffff8117e480
#endif

#ifndef LIST_LRU_ISOLATE
#define LIST_LRU_ISOLATE 0xffffffff8117e500
#endif

#ifndef LIST_LRU_ISOLATE_MOVE
#define LIST_LRU_ISOLATE_MOVE 0xffffffff8117e520
#endif

#ifndef LIST_LRU_ADD
#define LIST_LRU_ADD 0xffffffff8117e550
#endif

#ifndef LIST_LRU_DEL
#define LIST_LRU_DEL 0xffffffff8117e5f0
#endif

#ifndef LIST_LRU_COUNT_ONE
#define LIST_LRU_COUNT_ONE 0xffffffff8117e690
#endif

#ifndef LIST_LRU_COUNT_NODE
#define LIST_LRU_COUNT_NODE 0xffffffff8117e6c0
#endif

#ifndef LIST_LRU_DESTROY
#define LIST_LRU_DESTROY 0xffffffff8117e6f0
#endif

#ifndef LIST_LRU_WALK_ONE
#define LIST_LRU_WALK_ONE 0xffffffff8117e860
#endif

#ifndef LIST_LRU_WALK_NODE
#define LIST_LRU_WALK_NODE 0xffffffff8117e880
#endif

#ifndef __LIST_LRU_INIT
#define __LIST_LRU_INIT 0xffffffff8117e8a0
#endif

#ifndef WORKINGSET_EVICTION
#define WORKINGSET_EVICTION 0xffffffff8117eb70
#endif

#ifndef WORKINGSET_REFAULT
#define WORKINGSET_REFAULT 0xffffffff8117ebf0
#endif

#ifndef WORKINGSET_ACTIVATION
#define WORKINGSET_ACTIVATION 0xffffffff8117ec90
#endif

#ifndef DUMP_PAGE_BADFLAGS
#define DUMP_PAGE_BADFLAGS 0xffffffff8117ed80
#endif

#ifndef DUMP_PAGE
#define DUMP_PAGE 0xffffffff8117ee20
#endif

#ifndef __GET_USER_PAGES_UNLOCKED
#define __GET_USER_PAGES_UNLOCKED 0xffffffff8117ee40
#endif

#ifndef FOLLOW_PAGE_MASK
#define FOLLOW_PAGE_MASK 0xffffffff8117f3a0
#endif

#ifndef __GET_USER_PAGES
#define __GET_USER_PAGES 0xffffffff8117f6b0
#endif

#ifndef GET_USER_PAGES_LOCKED
#define GET_USER_PAGES_LOCKED 0xffffffff8117fcc0
#endif

#ifndef GET_USER_PAGES_UNLOCKED
#define GET_USER_PAGES_UNLOCKED 0xffffffff8117feb0
#endif

#ifndef GET_USER_PAGES
#define GET_USER_PAGES 0xffffffff811800b0
#endif

#ifndef FIXUP_USER_FAULT
#define FIXUP_USER_FAULT 0xffffffff81180100
#endif

#ifndef POPULATE_VMA_PAGE_RANGE
#define POPULATE_VMA_PAGE_RANGE 0xffffffff811801e0
#endif

#ifndef __MM_POPULATE
#define __MM_POPULATE 0xffffffff81180250
#endif

#ifndef GET_DUMP_PAGE
#define GET_DUMP_PAGE 0xffffffff81180370
#endif

#ifndef FOLLOW_PFN
#define FOLLOW_PFN 0xffffffff81180ef0
#endif

#ifndef SYNC_MM_RSS
#define SYNC_MM_RSS 0xffffffff81181410
#endif

#ifndef TLB_GATHER_MMU
#define TLB_GATHER_MMU 0xffffffff81181480
#endif

#ifndef TLB_FLUSH_MMU
#define TLB_FLUSH_MMU 0xffffffff81181530
#endif

#ifndef TLB_FINISH_MMU
#define TLB_FINISH_MMU 0xffffffff81181550
#endif

#ifndef __TLB_REMOVE_PAGE
#define __TLB_REMOVE_PAGE 0xffffffff811815a0
#endif

#ifndef FREE_PGD_RANGE
#define FREE_PGD_RANGE 0xffffffff81181640
#endif

#ifndef FREE_PGTABLES
#define FREE_PGTABLES 0xffffffff81181b60
#endif

#ifndef __PTE_ALLOC
#define __PTE_ALLOC 0xffffffff81181c80
#endif

#ifndef __PTE_ALLOC_KERNEL
#define __PTE_ALLOC_KERNEL 0xffffffff81181df0
#endif

#ifndef VM_NORMAL_PAGE
#define VM_NORMAL_PAGE 0xffffffff81181ee0
#endif

#ifndef ZAP_VMA_PTES
#define ZAP_VMA_PTES 0xffffffff81182860
#endif

#ifndef UNMAP_MAPPING_RANGE
#define UNMAP_MAPPING_RANGE 0xffffffff811828b0
#endif

#ifndef UNMAP_VMAS
#define UNMAP_VMAS 0xffffffff81183000
#endif

#ifndef ZAP_PAGE_RANGE
#define ZAP_PAGE_RANGE 0xffffffff811830a0
#endif

#ifndef DO_SET_PTE
#define DO_SET_PTE 0xffffffff81183190
#endif

#ifndef __PUD_ALLOC
#define __PUD_ALLOC 0xffffffff81183260
#endif

#ifndef __PMD_ALLOC
#define __PMD_ALLOC 0xffffffff81183330
#endif

#ifndef COPY_PAGE_RANGE
#define COPY_PAGE_RANGE 0xffffffff81183440
#endif

#ifndef __GET_LOCKED_PTE
#define __GET_LOCKED_PTE 0xffffffff81183e00
#endif

#ifndef VM_INSERT_PAGE
#define VM_INSERT_PAGE 0xffffffff81183f90
#endif

#ifndef VM_INSERT_PFN
#define VM_INSERT_PFN 0xffffffff811841e0
#endif

#ifndef VM_INSERT_MIXED
#define VM_INSERT_MIXED 0xffffffff811842e0
#endif

#ifndef HANDLE_MM_FAULT
#define HANDLE_MM_FAULT 0xffffffff81184330
#endif

#ifndef APPLY_TO_PAGE_RANGE
#define APPLY_TO_PAGE_RANGE 0xffffffff81185940
#endif

#ifndef REMAP_PFN_RANGE
#define REMAP_PFN_RANGE 0xffffffff81185d60
#endif

#ifndef VM_IOMAP_MEMORY
#define VM_IOMAP_MEMORY 0xffffffff811861c0
#endif

#ifndef FOLLOW_PHYS
#define FOLLOW_PHYS 0xffffffff81186240
#endif

#ifndef GENERIC_ACCESS_PHYS
#define GENERIC_ACCESS_PHYS 0xffffffff811862f0
#endif

#ifndef ACCESS_REMOTE_VM
#define ACCESS_REMOTE_VM 0xffffffff811863a0
#endif

#ifndef ACCESS_PROCESS_VM
#define ACCESS_PROCESS_VM 0xffffffff811863d0
#endif

#ifndef PRINT_VMA_ADDR
#define PRINT_VMA_ADDR 0xffffffff81186440
#endif

#ifndef CLEAR_HUGE_PAGE
#define CLEAR_HUGE_PAGE 0xffffffff81186550
#endif

#ifndef COPY_USER_HUGE_PAGE
#define COPY_USER_HUGE_PAGE 0xffffffff811866b0
#endif

#ifndef SYS_MINCORE
#define SYS_MINCORE 0xffffffff81186d10
#endif

#ifndef SYS_MINCORE
#define SYS_MINCORE 0xffffffff81186d10
#endif

#ifndef CAN_DO_MLOCK
#define CAN_DO_MLOCK 0xffffffff81186fc0
#endif

#ifndef CLEAR_PAGE_MLOCK
#define CLEAR_PAGE_MLOCK 0xffffffff811873c0
#endif

#ifndef MLOCK_VMA_PAGE
#define MLOCK_VMA_PAGE 0xffffffff81187460
#endif

#ifndef MUNLOCK_VMA_PAGE
#define MUNLOCK_VMA_PAGE 0xffffffff81187500
#endif

#ifndef MUNLOCK_VMA_PAGES_RANGE
#define MUNLOCK_VMA_PAGES_RANGE 0xffffffff81187630
#endif

#ifndef SYS_MLOCK
#define SYS_MLOCK 0xffffffff81187c00
#endif

#ifndef SYS_MLOCK
#define SYS_MLOCK 0xffffffff81187c00
#endif

#ifndef SYS_MUNLOCK
#define SYS_MUNLOCK 0xffffffff81187d80
#endif

#ifndef SYS_MUNLOCK
#define SYS_MUNLOCK 0xffffffff81187d80
#endif

#ifndef SYS_MLOCKALL
#define SYS_MLOCKALL 0xffffffff81187e00
#endif

#ifndef SYS_MLOCKALL
#define SYS_MLOCKALL 0xffffffff81187e00
#endif

#ifndef SYS_MUNLOCKALL
#define SYS_MUNLOCKALL 0xffffffff81188000
#endif

#ifndef USER_SHM_LOCK
#define USER_SHM_LOCK 0xffffffff81188050
#endif

#ifndef USER_SHM_UNLOCK
#define USER_SHM_UNLOCK 0xffffffff811880f0
#endif

#ifndef VM_GET_PAGE_PROT
#define VM_GET_PAGE_PROT 0xffffffff81188140
#endif

#ifndef VM_MEMORY_COMMITTED
#define VM_MEMORY_COMMITTED 0xffffffff81188160
#endif

#ifndef GET_UNMAPPED_AREA
#define GET_UNMAPPED_AREA 0xffffffff811885e0
#endif

#ifndef FIND_VMA
#define FIND_VMA 0xffffffff81188710
#endif

#ifndef __VM_ENOUGH_MEMORY
#define __VM_ENOUGH_MEMORY 0xffffffff81188be0
#endif

#ifndef UNLINK_FILE_VMA
#define UNLINK_FILE_VMA 0xffffffff81188d10
#endif

#ifndef __VMA_LINK_RB
#define __VMA_LINK_RB 0xffffffff81188d80
#endif

#ifndef VMA_ADJUST
#define VMA_ADJUST 0xffffffff81188f20
#endif

#ifndef VMA_MERGE
#define VMA_MERGE 0xffffffff81189970
#endif

#ifndef FIND_MERGEABLE_ANON_VMA
#define FIND_MERGEABLE_ANON_VMA 0xffffffff81189cf0
#endif

#ifndef VM_STAT_ACCOUNT
#define VM_STAT_ACCOUNT 0xffffffff81189d40
#endif

#ifndef SYS_MMAP_PGOFF
#define SYS_MMAP_PGOFF 0xffffffff81189d80
#endif

#ifndef SYS_MMAP_PGOFF
#define SYS_MMAP_PGOFF 0xffffffff81189d80
#endif

#ifndef VMA_WANTS_WRITENOTIFY
#define VMA_WANTS_WRITENOTIFY 0xffffffff8118a000
#endif

#ifndef VMA_SET_PAGE_PROT
#define VMA_SET_PAGE_PROT 0xffffffff8118a0a0
#endif

#ifndef UNMAPPED_AREA
#define UNMAPPED_AREA 0xffffffff8118a100
#endif

#ifndef UNMAPPED_AREA_TOPDOWN
#define UNMAPPED_AREA_TOPDOWN 0xffffffff8118a250
#endif

#ifndef FIND_VMA_PREV
#define FIND_VMA_PREV 0xffffffff8118a390
#endif

#ifndef EXPAND_DOWNWARDS
#define EXPAND_DOWNWARDS 0xffffffff8118a400
#endif

#ifndef EXPAND_STACK
#define EXPAND_STACK 0xffffffff8118a6a0
#endif

#ifndef FIND_EXTEND_VMA
#define FIND_EXTEND_VMA 0xffffffff8118a6e0
#endif

#ifndef SPLIT_VMA
#define SPLIT_VMA 0xffffffff8118a760
#endif

#ifndef DO_MUNMAP
#define DO_MUNMAP 0xffffffff8118a7a0
#endif

#ifndef VM_MUNMAP
#define VM_MUNMAP 0xffffffff8118abf0
#endif

#ifndef VM_BRK
#define VM_BRK 0xffffffff8118af50
#endif

#ifndef SYS_BRK
#define SYS_BRK 0xffffffff8118afd0
#endif

#ifndef SYS_BRK
#define SYS_BRK 0xffffffff8118afd0
#endif

#ifndef MMAP_REGION
#define MMAP_REGION 0xffffffff8118b140
#endif

#ifndef DO_MMAP_PGOFF
#define DO_MMAP_PGOFF 0xffffffff8118b760
#endif

#ifndef SYS_MUNMAP
#define SYS_MUNMAP 0xffffffff8118bb70
#endif

#ifndef SYS_MUNMAP
#define SYS_MUNMAP 0xffffffff8118bb70
#endif

#ifndef SYS_REMAP_FILE_PAGES
#define SYS_REMAP_FILE_PAGES 0xffffffff8118bba0
#endif

#ifndef SYS_REMAP_FILE_PAGES
#define SYS_REMAP_FILE_PAGES 0xffffffff8118bba0
#endif

#ifndef EXIT_MMAP
#define EXIT_MMAP 0xffffffff8118be20
#endif

#ifndef INSERT_VM_STRUCT
#define INSERT_VM_STRUCT 0xffffffff8118bf70
#endif

#ifndef COPY_VMA
#define COPY_VMA 0xffffffff8118c160
#endif

#ifndef MAY_EXPAND_VM
#define MAY_EXPAND_VM 0xffffffff8118c3d0
#endif

#ifndef _INSTALL_SPECIAL_MAPPING
#define _INSTALL_SPECIAL_MAPPING 0xffffffff8118c410
#endif

#ifndef INSTALL_SPECIAL_MAPPING
#define INSTALL_SPECIAL_MAPPING 0xffffffff8118c430
#endif

#ifndef MM_DROP_ALL_LOCKS
#define MM_DROP_ALL_LOCKS 0xffffffff8118c460
#endif

#ifndef MM_TAKE_ALL_LOCKS
#define MM_TAKE_ALL_LOCKS 0xffffffff8118c560
#endif

#ifndef CHANGE_PROTECTION
#define CHANGE_PROTECTION 0xffffffff8118c6e0
#endif

#ifndef MPROTECT_FIXUP
#define MPROTECT_FIXUP 0xffffffff8118cec0
#endif

#ifndef SYS_MPROTECT
#define SYS_MPROTECT 0xffffffff8118d0d0
#endif

#ifndef SYS_MPROTECT
#define SYS_MPROTECT 0xffffffff8118d0d0
#endif

#ifndef MOVE_PAGE_TABLES
#define MOVE_PAGE_TABLES 0xffffffff8118d4b0
#endif

#ifndef SYS_MREMAP
#define SYS_MREMAP 0xffffffff8118dea0
#endif

#ifndef SYS_MREMAP
#define SYS_MREMAP 0xffffffff8118dea0
#endif

#ifndef SYS_MSYNC
#define SYS_MSYNC 0xffffffff8118e3c0
#endif

#ifndef SYS_MSYNC
#define SYS_MSYNC 0xffffffff8118e3c0
#endif

#ifndef PAGE_UNLOCK_ANON_VMA_READ
#define PAGE_UNLOCK_ANON_VMA_READ 0xffffffff8118e780
#endif

#ifndef VMA_ADDRESS
#define VMA_ADDRESS 0xffffffff8118e7a0
#endif

#ifndef PAGE_ADDRESS_IN_VMA
#define PAGE_ADDRESS_IN_VMA 0xffffffff8118e7f0
#endif

#ifndef MM_FIND_PMD
#define MM_FIND_PMD 0xffffffff8118e8b0
#endif

#ifndef __PAGE_CHECK_ADDRESS
#define __PAGE_CHECK_ADDRESS 0xffffffff8118e950
#endif

#ifndef PAGE_MAPPED_IN_VMA
#define PAGE_MAPPED_IN_VMA 0xffffffff8118ed10
#endif

#ifndef PAGE_MOVE_ANON_RMAP
#define PAGE_MOVE_ANON_RMAP 0xffffffff8118eda0
#endif

#ifndef DO_PAGE_ADD_ANON_RMAP
#define DO_PAGE_ADD_ANON_RMAP 0xffffffff8118edc0
#endif

#ifndef PAGE_ADD_ANON_RMAP
#define PAGE_ADD_ANON_RMAP 0xffffffff8118ee90
#endif

#ifndef PAGE_ADD_NEW_ANON_RMAP
#define PAGE_ADD_NEW_ANON_RMAP 0xffffffff8118eeb0
#endif

#ifndef PAGE_ADD_FILE_RMAP
#define PAGE_ADD_FILE_RMAP 0xffffffff8118ef50
#endif

#ifndef PAGE_REMOVE_RMAP
#define PAGE_REMOVE_RMAP 0xffffffff8118efb0
#endif

#ifndef IS_VMA_TEMPORARY_STACK
#define IS_VMA_TEMPORARY_STACK 0xffffffff8118f560
#endif

#ifndef __PUT_ANON_VMA
#define __PUT_ANON_VMA 0xffffffff8118f590
#endif

#ifndef PAGE_GET_ANON_VMA
#define PAGE_GET_ANON_VMA 0xffffffff8118f650
#endif

#ifndef PAGE_LOCK_ANON_VMA_READ
#define PAGE_LOCK_ANON_VMA_READ 0xffffffff8118f6e0
#endif

#ifndef UNLINK_ANON_VMAS
#define UNLINK_ANON_VMAS 0xffffffff8118f7e0
#endif

#ifndef ANON_VMA_CLONE
#define ANON_VMA_CLONE 0xffffffff8118f9e0
#endif

#ifndef ANON_VMA_FORK
#define ANON_VMA_FORK 0xffffffff8118fbe0
#endif

#ifndef ANON_VMA_PREPARE
#define ANON_VMA_PREPARE 0xffffffff8118fd20
#endif

#ifndef RMAP_WALK
#define RMAP_WALK 0xffffffff8118fe90
#endif

#ifndef PAGE_REFERENCED
#define PAGE_REFERENCED 0xffffffff81190190
#endif

#ifndef PAGE_MKCLEAN
#define PAGE_MKCLEAN 0xffffffff811902c0
#endif

#ifndef TRY_TO_UNMAP
#define TRY_TO_UNMAP 0xffffffff81190350
#endif

#ifndef TRY_TO_MUNLOCK
#define TRY_TO_MUNLOCK 0xffffffff811903e0
#endif

#ifndef HUGEPAGE_ADD_ANON_RMAP
#define HUGEPAGE_ADD_ANON_RMAP 0xffffffff81190430
#endif

#ifndef HUGEPAGE_ADD_NEW_ANON_RMAP
#define HUGEPAGE_ADD_NEW_ANON_RMAP 0xffffffff81190480
#endif

#ifndef VM_UNMAP_ALIASES
#define VM_UNMAP_ALIASES 0xffffffff81191040
#endif

#ifndef __GET_VM_AREA
#define __GET_VM_AREA 0xffffffff81191670
#endif

#ifndef VMALLOC_TO_PAGE
#define VMALLOC_TO_PAGE 0xffffffff811916b0
#endif

#ifndef VMALLOC_TO_PFN
#define VMALLOC_TO_PFN 0xffffffff81191780
#endif

#ifndef MAP_VM_AREA
#define MAP_VM_AREA 0xffffffff81191af0
#endif

#ifndef UNMAP_KERNEL_RANGE_NOFLUSH
#define UNMAP_KERNEL_RANGE_NOFLUSH 0xffffffff81191e60
#endif

#ifndef UNMAP_KERNEL_RANGE
#define UNMAP_KERNEL_RANGE 0xffffffff81191e80
#endif

#ifndef VM_UNMAP_RAM
#define VM_UNMAP_RAM 0xffffffff81191eb0
#endif

#ifndef VM_MAP_RAM
#define VM_MAP_RAM 0xffffffff81192040
#endif

#ifndef PCPU_GET_VM_AREAS
#define PCPU_GET_VM_AREAS 0xffffffff81192400
#endif

#ifndef IS_VMALLOC_OR_MODULE_ADDR
#define IS_VMALLOC_OR_MODULE_ADDR 0xffffffff81192940
#endif

#ifndef SET_IOUNMAP_NONLAZY
#define SET_IOUNMAP_NONLAZY 0xffffffff81192980
#endif

#ifndef MAP_KERNEL_RANGE_NOFLUSH
#define MAP_KERNEL_RANGE_NOFLUSH 0xffffffff811929a0
#endif

#ifndef __GET_VM_AREA_CALLER
#define __GET_VM_AREA_CALLER 0xffffffff811929c0
#endif

#ifndef GET_VM_AREA
#define GET_VM_AREA 0xffffffff81192a00
#endif

#ifndef GET_VM_AREA_CALLER
#define GET_VM_AREA_CALLER 0xffffffff81192a50
#endif

#ifndef FIND_VM_AREA
#define FIND_VM_AREA 0xffffffff81192aa0
#endif

#ifndef REMAP_VMALLOC_RANGE_PARTIAL
#define REMAP_VMALLOC_RANGE_PARTIAL 0xffffffff81192ad0
#endif

#ifndef REMAP_VMALLOC_RANGE
#define REMAP_VMALLOC_RANGE 0xffffffff81192ba0
#endif

#ifndef REMOVE_VM_AREA
#define REMOVE_VM_AREA 0xffffffff81192bd0
#endif

#ifndef VFREE
#define VFREE 0xffffffff81192d70
#endif

#ifndef VUNMAP
#define VUNMAP 0xffffffff81192df0
#endif

#ifndef VMAP
#define VMAP 0xffffffff81192e30
#endif

#ifndef FREE_VM_AREA
#define FREE_VM_AREA 0xffffffff81192ee0
#endif

#ifndef ALLOC_VM_AREA
#define ALLOC_VM_AREA 0xffffffff81192f10
#endif

#ifndef __VMALLOC_NODE_RANGE
#define __VMALLOC_NODE_RANGE 0xffffffff81192fc0
#endif

#ifndef __VMALLOC
#define __VMALLOC 0xffffffff811932a0
#endif

#ifndef VZALLOC_NODE
#define VZALLOC_NODE 0xffffffff811932f0
#endif

#ifndef VMALLOC_USER
#define VMALLOC_USER 0xffffffff81193350
#endif

#ifndef VMALLOC_NODE
#define VMALLOC_NODE 0xffffffff811933c0
#endif

#ifndef VMALLOC_32
#define VMALLOC_32 0xffffffff81193420
#endif

#ifndef VMALLOC_32_USER
#define VMALLOC_32_USER 0xffffffff81193480
#endif

#ifndef VMALLOC
#define VMALLOC 0xffffffff811934f0
#endif

#ifndef VZALLOC
#define VZALLOC 0xffffffff81193550
#endif

#ifndef VMALLOC_EXEC
#define VMALLOC_EXEC 0xffffffff811935b0
#endif

#ifndef VREAD
#define VREAD 0xffffffff81193610
#endif

#ifndef VWRITE
#define VWRITE 0xffffffff81193990
#endif

#ifndef PCPU_FREE_VM_AREAS
#define PCPU_FREE_VM_AREAS 0xffffffff81193c50
#endif

#ifndef GET_VMALLOC_INFO
#define GET_VMALLOC_INFO 0xffffffff81193ca0
#endif

#ifndef WALK_PAGE_RANGE
#define WALK_PAGE_RANGE 0xffffffff81194260
#endif

#ifndef WALK_PAGE_VMA
#define WALK_PAGE_VMA 0xffffffff81194350
#endif

#ifndef PGD_CLEAR_BAD
#define PGD_CLEAR_BAD 0xffffffff811943d0
#endif

#ifndef PUD_CLEAR_BAD
#define PUD_CLEAR_BAD 0xffffffff81194420
#endif

#ifndef PMD_CLEAR_BAD
#define PMD_CLEAR_BAD 0xffffffff81194470
#endif

#ifndef PTEP_CLEAR_FLUSH
#define PTEP_CLEAR_FLUSH 0xffffffff811944c0
#endif

#ifndef PMDP_CLEAR_FLUSH
#define PMDP_CLEAR_FLUSH 0xffffffff81194520
#endif

#ifndef PGTABLE_TRANS_HUGE_DEPOSIT
#define PGTABLE_TRANS_HUGE_DEPOSIT 0xffffffff81194570
#endif

#ifndef PGTABLE_TRANS_HUGE_WITHDRAW
#define PGTABLE_TRANS_HUGE_WITHDRAW 0xffffffff81194680
#endif

#ifndef PMDP_INVALIDATE
#define PMDP_INVALIDATE 0xffffffff81194790
#endif

#ifndef SYS_PROCESS_VM_READV
#define SYS_PROCESS_VM_READV 0xffffffff81194e60
#endif

#ifndef SYS_PROCESS_VM_READV
#define SYS_PROCESS_VM_READV 0xffffffff81194e60
#endif

#ifndef SYS_PROCESS_VM_WRITEV
#define SYS_PROCESS_VM_WRITEV 0xffffffff81194e80
#endif

#ifndef SYS_PROCESS_VM_WRITEV
#define SYS_PROCESS_VM_WRITEV 0xffffffff81194e80
#endif

#ifndef COMPAT_SYS_PROCESS_VM_READV
#define COMPAT_SYS_PROCESS_VM_READV 0xffffffff81194ea0
#endif

#ifndef COMPAT_SYS_PROCESS_VM_READV
#define COMPAT_SYS_PROCESS_VM_READV 0xffffffff81194ea0
#endif

#ifndef COMPAT_SYS_PROCESS_VM_WRITEV
#define COMPAT_SYS_PROCESS_VM_WRITEV 0xffffffff81194ed0
#endif

#ifndef COMPAT_SYS_PROCESS_VM_WRITEV
#define COMPAT_SYS_PROCESS_VM_WRITEV 0xffffffff81194ed0
#endif

#ifndef RESET_NODE_MANAGED_PAGES
#define RESET_NODE_MANAGED_PAGES 0xffffffff81194f00
#endif

#ifndef SYS_FADVISE64_64
#define SYS_FADVISE64_64 0xffffffff81194f30
#endif

#ifndef SYS_FADVISE64_64
#define SYS_FADVISE64_64 0xffffffff81194f30
#endif

#ifndef SYS_FADVISE64
#define SYS_FADVISE64 0xffffffff811951b0
#endif

#ifndef SYS_FADVISE64
#define SYS_FADVISE64 0xffffffff811951b0
#endif

#ifndef SYS_MADVISE
#define SYS_MADVISE 0xffffffff81195750
#endif

#ifndef SYS_MADVISE
#define SYS_MADVISE 0xffffffff81195750
#endif

#ifndef END_SWAP_BIO_WRITE
#define END_SWAP_BIO_WRITE 0xffffffff81195ec0
#endif

#ifndef END_SWAP_BIO_READ
#define END_SWAP_BIO_READ 0xffffffff81195f40
#endif

#ifndef GENERIC_SWAPFILE_ACTIVATE
#define GENERIC_SWAPFILE_ACTIVATE 0xffffffff81196090
#endif

#ifndef __SWAP_WRITEPAGE
#define __SWAP_WRITEPAGE 0xffffffff811962e0
#endif

#ifndef SWAP_WRITEPAGE
#define SWAP_WRITEPAGE 0xffffffff81196530
#endif

#ifndef SWAP_READPAGE
#define SWAP_READPAGE 0xffffffff811965b0
#endif

#ifndef SWAP_SET_PAGE_DIRTY
#define SWAP_SET_PAGE_DIRTY 0xffffffff811966a0
#endif

#ifndef TOTAL_SWAPCACHE_PAGES
#define TOTAL_SWAPCACHE_PAGES 0xffffffff811966e0
#endif

#ifndef SHOW_SWAP_CACHE_INFO
#define SHOW_SWAP_CACHE_INFO 0xffffffff81196710
#endif

#ifndef __ADD_TO_SWAP_CACHE
#define __ADD_TO_SWAP_CACHE 0xffffffff811967b0
#endif

#ifndef ADD_TO_SWAP_CACHE
#define ADD_TO_SWAP_CACHE 0xffffffff811968a0
#endif

#ifndef __DELETE_FROM_SWAP_CACHE
#define __DELETE_FROM_SWAP_CACHE 0xffffffff811968d0
#endif

#ifndef ADD_TO_SWAP
#define ADD_TO_SWAP 0xffffffff81196940
#endif

#ifndef DELETE_FROM_SWAP_CACHE
#define DELETE_FROM_SWAP_CACHE 0xffffffff811969b0
#endif

#ifndef FREE_PAGE_AND_SWAP_CACHE
#define FREE_PAGE_AND_SWAP_CACHE 0xffffffff81196a10
#endif

#ifndef FREE_PAGES_AND_SWAP_CACHE
#define FREE_PAGES_AND_SWAP_CACHE 0xffffffff81196a50
#endif

#ifndef LOOKUP_SWAP_CACHE
#define LOOKUP_SWAP_CACHE 0xffffffff81196af0
#endif

#ifndef READ_SWAP_CACHE_ASYNC
#define READ_SWAP_CACHE_ASYNC 0xffffffff81196b60
#endif

#ifndef SWAPIN_READAHEAD
#define SWAPIN_READAHEAD 0xffffffff81196cc0
#endif

#ifndef __PAGE_FILE_INDEX
#define __PAGE_FILE_INDEX 0xffffffff81196f90
#endif

#ifndef SYS_SWAPON
#define SYS_SWAPON 0xffffffff81197e70
#endif

#ifndef SYS_SWAPON
#define SYS_SWAPON 0xffffffff81197e70
#endif

#ifndef SWAP_FREE
#define SWAP_FREE 0xffffffff81198df0
#endif

#ifndef SWAPCACHE_FREE
#define SWAPCACHE_FREE 0xffffffff811994a0
#endif

#ifndef PAGE_SWAPCOUNT
#define PAGE_SWAPCOUNT 0xffffffff811994e0
#endif

#ifndef REUSE_SWAP_PAGE
#define REUSE_SWAP_PAGE 0xffffffff81199530
#endif

#ifndef TRY_TO_FREE_SWAP
#define TRY_TO_FREE_SWAP 0xffffffff811995c0
#endif

#ifndef GET_SWAP_PAGE
#define GET_SWAP_PAGE 0xffffffff81199ad0
#endif

#ifndef GET_SWAP_PAGE_OF_TYPE
#define GET_SWAP_PAGE_OF_TYPE 0xffffffff81199cd0
#endif

#ifndef FREE_SWAP_AND_CACHE
#define FREE_SWAP_AND_CACHE 0xffffffff81199d60
#endif

#ifndef SWAP_TYPE_OF
#define SWAP_TYPE_OF 0xffffffff81199e60
#endif

#ifndef SWAPDEV_BLOCK
#define SWAPDEV_BLOCK 0xffffffff81199f90
#endif

#ifndef COUNT_SWAP_PAGES
#define COUNT_SWAP_PAGES 0xffffffff81199fe0
#endif

#ifndef TRY_TO_UNUSE
#define TRY_TO_UNUSE 0xffffffff8119a050
#endif

#ifndef MAP_SWAP_PAGE
#define MAP_SWAP_PAGE 0xffffffff8119a5d0
#endif

#ifndef ADD_SWAP_EXTENT
#define ADD_SWAP_EXTENT 0xffffffff8119a5e0
#endif

#ifndef SYS_SWAPOFF
#define SYS_SWAPOFF 0xffffffff8119a6e0
#endif

#ifndef SYS_SWAPOFF
#define SYS_SWAPOFF 0xffffffff8119a6e0
#endif

#ifndef SI_SWAPINFO
#define SI_SWAPINFO 0xffffffff8119acc0
#endif

#ifndef SWAP_SHMEM_ALLOC
#define SWAP_SHMEM_ALLOC 0xffffffff8119ad60
#endif

#ifndef SWAPCACHE_PREPARE
#define SWAPCACHE_PREPARE 0xffffffff8119ad80
#endif

#ifndef PAGE_SWAP_INFO
#define PAGE_SWAP_INFO 0xffffffff8119ada0
#endif

#ifndef __PAGE_FILE_MAPPING
#define __PAGE_FILE_MAPPING 0xffffffff8119add0
#endif

#ifndef ADD_SWAP_COUNT_CONTINUATION
#define ADD_SWAP_COUNT_CONTINUATION 0xffffffff8119adf0
#endif

#ifndef SWAP_DUPLICATE
#define SWAP_DUPLICATE 0xffffffff8119af80
#endif

#ifndef FRONTSWAP_REGISTER_OPS
#define FRONTSWAP_REGISTER_OPS 0xffffffff8119afc0
#endif

#ifndef FRONTSWAP_WRITETHROUGH
#define FRONTSWAP_WRITETHROUGH 0xffffffff8119b050
#endif

#ifndef FRONTSWAP_TMEM_EXCLUSIVE_GETS
#define FRONTSWAP_TMEM_EXCLUSIVE_GETS 0xffffffff8119b060
#endif

#ifndef __FRONTSWAP_TEST
#define __FRONTSWAP_TEST 0xffffffff8119b070
#endif

#ifndef __FRONTSWAP_STORE
#define __FRONTSWAP_STORE 0xffffffff8119b0b0
#endif

#ifndef __FRONTSWAP_INVALIDATE_AREA
#define __FRONTSWAP_INVALIDATE_AREA 0xffffffff8119b200
#endif

#ifndef FRONTSWAP_CURR_PAGES
#define FRONTSWAP_CURR_PAGES 0xffffffff8119b2e0
#endif

#ifndef FRONTSWAP_SHRINK
#define FRONTSWAP_SHRINK 0xffffffff8119b310
#endif

#ifndef __FRONTSWAP_INIT
#define __FRONTSWAP_INIT 0xffffffff8119b470
#endif

#ifndef __FRONTSWAP_INVALIDATE_PAGE
#define __FRONTSWAP_INVALIDATE_PAGE 0xffffffff8119b4f0
#endif

#ifndef __FRONTSWAP_LOAD
#define __FRONTSWAP_LOAD 0xffffffff8119b560
#endif

#ifndef DMA_POOL_CREATE
#define DMA_POOL_CREATE 0xffffffff8119c2a0
#endif

#ifndef DMA_POOL_FREE
#define DMA_POOL_FREE 0xffffffff8119c4d0
#endif

#ifndef DMAM_POOL_CREATE
#define DMAM_POOL_CREATE 0xffffffff8119c5b0
#endif

#ifndef DMAM_POOL_DESTROY
#define DMAM_POOL_DESTROY 0xffffffff8119c650
#endif

#ifndef DMA_POOL_ALLOC
#define DMA_POOL_ALLOC 0xffffffff8119c6a0
#endif

#ifndef DMA_POOL_DESTROY
#define DMA_POOL_DESTROY 0xffffffff8119c8e0
#endif

#ifndef RESV_MAP_RELEASE
#define RESV_MAP_RELEASE 0xffffffff8119cc80
#endif

#ifndef PAGEHUGE
#define PAGEHUGE 0xffffffff8119d890
#endif

#ifndef VMA_KERNEL_PAGESIZE
#define VMA_KERNEL_PAGESIZE 0xffffffff8119d8b0
#endif

#ifndef FREE_HUGE_PAGE
#define FREE_HUGE_PAGE 0xffffffff8119e330
#endif

#ifndef HUGEPAGE_NEW_SUBPOOL
#define HUGEPAGE_NEW_SUBPOOL 0xffffffff8119ec00
#endif

#ifndef HUGEPAGE_PUT_SUBPOOL
#define HUGEPAGE_PUT_SUBPOOL 0xffffffff8119eca0
#endif

#ifndef LINEAR_HUGEPAGE_INDEX
#define LINEAR_HUGEPAGE_INDEX 0xffffffff8119ed10
#endif

#ifndef VMA_MMU_PAGESIZE
#define VMA_MMU_PAGESIZE 0xffffffff8119ed50
#endif

#ifndef RESV_MAP_ALLOC
#define RESV_MAP_ALLOC 0xffffffff8119eda0
#endif

#ifndef RESET_VMA_RESV_HUGE_PAGES
#define RESET_VMA_RESV_HUGE_PAGES 0xffffffff8119edf0
#endif

#ifndef SIZE_TO_HSTATE
#define SIZE_TO_HSTATE 0xffffffff8119ee10
#endif

#ifndef PAGE_HUGE_ACTIVE
#define PAGE_HUGE_ACTIVE 0xffffffff8119ee80
#endif

#ifndef PAGEHEADHUGE
#define PAGEHEADHUGE 0xffffffff8119eea0
#endif

#ifndef __BASEPAGE_INDEX
#define __BASEPAGE_INDEX 0xffffffff8119eec0
#endif

#ifndef DISSOLVE_FREE_HUGE_PAGES
#define DISSOLVE_FREE_HUGE_PAGES 0xffffffff8119efb0
#endif

#ifndef ALLOC_HUGE_PAGE_NODE
#define ALLOC_HUGE_PAGE_NODE 0xffffffff8119f150
#endif

#ifndef ALLOC_HUGE_PAGE_NOERR
#define ALLOC_HUGE_PAGE_NOERR 0xffffffff8119f1b0
#endif

#ifndef HUGETLB_SYSCTL_HANDLER
#define HUGETLB_SYSCTL_HANDLER 0xffffffff8119f1e0
#endif

#ifndef HUGETLB_MEMPOLICY_SYSCTL_HANDLER
#define HUGETLB_MEMPOLICY_SYSCTL_HANDLER 0xffffffff8119f210
#endif

#ifndef HUGETLB_OVERCOMMIT_HANDLER
#define HUGETLB_OVERCOMMIT_HANDLER 0xffffffff8119f240
#endif

#ifndef HUGETLB_REPORT_MEMINFO
#define HUGETLB_REPORT_MEMINFO 0xffffffff8119f2f0
#endif

#ifndef HUGETLB_REPORT_NODE_MEMINFO
#define HUGETLB_REPORT_NODE_MEMINFO 0xffffffff8119f350
#endif

#ifndef HUGETLB_SHOW_MEMINFO
#define HUGETLB_SHOW_MEMINFO 0xffffffff8119f3b0
#endif

#ifndef HUGETLB_TOTAL_PAGES
#define HUGETLB_TOTAL_PAGES 0xffffffff8119f4b0
#endif

#ifndef HUGETLB_RESERVE_PAGES
#define HUGETLB_RESERVE_PAGES 0xffffffff8119f510
#endif

#ifndef HUGETLB_UNRESERVE_PAGES
#define HUGETLB_UNRESERVE_PAGES 0xffffffff8119f6a0
#endif

#ifndef HUGE_PMD_UNSHARE
#define HUGE_PMD_UNSHARE 0xffffffff8119f740
#endif

#ifndef HUGE_PTE_OFFSET
#define HUGE_PTE_OFFSET 0xffffffff8119f8f0
#endif

#ifndef __UNMAP_HUGEPAGE_RANGE
#define __UNMAP_HUGEPAGE_RANGE 0xffffffff8119f9a0
#endif

#ifndef __UNMAP_HUGEPAGE_RANGE_FINAL
#define __UNMAP_HUGEPAGE_RANGE_FINAL 0xffffffff8119fcb0
#endif

#ifndef UNMAP_HUGEPAGE_RANGE
#define UNMAP_HUGEPAGE_RANGE 0xffffffff8119fcd0
#endif

#ifndef HUGETLB_CHANGE_PROTECTION
#define HUGETLB_CHANGE_PROTECTION 0xffffffff811a0140
#endif

#ifndef HUGE_PMD_SHARE
#define HUGE_PMD_SHARE 0xffffffff811a0460
#endif

#ifndef HUGE_PTE_ALLOC
#define HUGE_PTE_ALLOC 0xffffffff811a0860
#endif

#ifndef COPY_HUGETLB_PAGE_RANGE
#define COPY_HUGETLB_PAGE_RANGE 0xffffffff811a0970
#endif

#ifndef HUGETLB_FAULT
#define HUGETLB_FAULT 0xffffffff811a0da0
#endif

#ifndef FOLLOW_HUGETLB_PAGE
#define FOLLOW_HUGETLB_PAGE 0xffffffff811a1660
#endif

#ifndef DEQUEUE_HWPOISONED_HUGE_PAGE
#define DEQUEUE_HWPOISONED_HUGE_PAGE 0xffffffff811a1bd0
#endif

#ifndef ISOLATE_HUGE_PAGE
#define ISOLATE_HUGE_PAGE 0xffffffff811a1d00
#endif

#ifndef PUTBACK_ACTIVE_HUGEPAGE
#define PUTBACK_ACTIVE_HUGEPAGE 0xffffffff811a1db0
#endif

#ifndef ALLOC_PAGES_CURRENT
#define ALLOC_PAGES_CURRENT 0xffffffff811a2660
#endif

#ifndef GET_TASK_POLICY
#define GET_TASK_POLICY 0xffffffff811a2f60
#endif

#ifndef __MPOL_PUT
#define __MPOL_PUT 0xffffffff811a2f80
#endif

#ifndef MPOL_REBIND_TASK
#define MPOL_REBIND_TASK 0xffffffff811a3550
#endif

#ifndef MPOL_REBIND_MM
#define MPOL_REBIND_MM 0xffffffff811a3570
#endif

#ifndef CHANGE_PROT_NUMA
#define CHANGE_PROT_NUMA 0xffffffff811a35c0
#endif

#ifndef DO_MIGRATE_PAGES
#define DO_MIGRATE_PAGES 0xffffffff811a3700
#endif

#ifndef SYS_SET_MEMPOLICY
#define SYS_SET_MEMPOLICY 0xffffffff811a38f0
#endif

#ifndef SYS_SET_MEMPOLICY
#define SYS_SET_MEMPOLICY 0xffffffff811a38f0
#endif

#ifndef SYS_MIGRATE_PAGES
#define SYS_MIGRATE_PAGES 0xffffffff811a3960
#endif

#ifndef SYS_MIGRATE_PAGES
#define SYS_MIGRATE_PAGES 0xffffffff811a3960
#endif

#ifndef SYS_GET_MEMPOLICY
#define SYS_GET_MEMPOLICY 0xffffffff811a3b50
#endif

#ifndef SYS_GET_MEMPOLICY
#define SYS_GET_MEMPOLICY 0xffffffff811a3b50
#endif

#ifndef COMPAT_SYS_GET_MEMPOLICY
#define COMPAT_SYS_GET_MEMPOLICY 0xffffffff811a3c30
#endif

#ifndef COMPAT_SYS_GET_MEMPOLICY
#define COMPAT_SYS_GET_MEMPOLICY 0xffffffff811a3c30
#endif

#ifndef COMPAT_SYS_SET_MEMPOLICY
#define COMPAT_SYS_SET_MEMPOLICY 0xffffffff811a3da0
#endif

#ifndef COMPAT_SYS_SET_MEMPOLICY
#define COMPAT_SYS_SET_MEMPOLICY 0xffffffff811a3da0
#endif

#ifndef __GET_VMA_POLICY
#define __GET_VMA_POLICY 0xffffffff811a3e90
#endif

#ifndef VMA_POLICY_MOF
#define VMA_POLICY_MOF 0xffffffff811a3f30
#endif

#ifndef MEMPOLICY_SLAB_NODE
#define MEMPOLICY_SLAB_NODE 0xffffffff811a3fc0
#endif

#ifndef NODE_RANDOM
#define NODE_RANDOM 0xffffffff811a4060
#endif

#ifndef HUGE_ZONELIST
#define HUGE_ZONELIST 0xffffffff811a40b0
#endif

#ifndef INIT_NODEMASK_OF_MEMPOLICY
#define INIT_NODEMASK_OF_MEMPOLICY 0xffffffff811a41a0
#endif

#ifndef MEMPOLICY_NODEMASK_INTERSECTS
#define MEMPOLICY_NODEMASK_INTERSECTS 0xffffffff811a4260
#endif

#ifndef ALLOC_PAGES_VMA
#define ALLOC_PAGES_VMA 0xffffffff811a42e0
#endif

#ifndef __MPOL_DUP
#define __MPOL_DUP 0xffffffff811a4600
#endif

#ifndef VMA_DUP_POLICY
#define VMA_DUP_POLICY 0xffffffff811a4710
#endif

#ifndef __MPOL_EQUAL
#define __MPOL_EQUAL 0xffffffff811a4740
#endif

#ifndef COMPAT_SYS_MBIND
#define COMPAT_SYS_MBIND 0xffffffff811a4d80
#endif

#ifndef COMPAT_SYS_MBIND
#define COMPAT_SYS_MBIND 0xffffffff811a4d80
#endif

#ifndef SYS_MBIND
#define SYS_MBIND 0xffffffff811a4eb0
#endif

#ifndef SYS_MBIND
#define SYS_MBIND 0xffffffff811a4eb0
#endif

#ifndef MPOL_SHARED_POLICY_LOOKUP
#define MPOL_SHARED_POLICY_LOOKUP 0xffffffff811a4f50
#endif

#ifndef MPOL_MISPLACED
#define MPOL_MISPLACED 0xffffffff811a4fb0
#endif

#ifndef MPOL_SET_SHARED_POLICY
#define MPOL_SET_SHARED_POLICY 0xffffffff811a5170
#endif

#ifndef MPOL_SHARED_POLICY_INIT
#define MPOL_SHARED_POLICY_INIT 0xffffffff811a5490
#endif

#ifndef MPOL_FREE_SHARED_POLICY
#define MPOL_FREE_SHARED_POLICY 0xffffffff811a55b0
#endif

#ifndef NUMA_DEFAULT_POLICY
#define NUMA_DEFAULT_POLICY 0xffffffff811a5610
#endif

#ifndef MPOL_PARSE_STR
#define MPOL_PARSE_STR 0xffffffff811a5630
#endif

#ifndef MPOL_TO_STR
#define MPOL_TO_STR 0xffffffff811a58e0
#endif

#ifndef __SECTION_NR
#define __SECTION_NR 0xffffffff811a5ab0
#endif

#ifndef SPARSE_DECODE_MEM_MAP
#define SPARSE_DECODE_MEM_MAP 0xffffffff811a5b20
#endif

#ifndef USEMAP_SIZE
#define USEMAP_SIZE 0xffffffff811a5b40
#endif

#ifndef SPARSE_REMOVE_ONE_SECTION
#define SPARSE_REMOVE_ONE_SECTION 0xffffffff811a5b50
#endif

#ifndef MMU_NOTIFIER_CALL_SRCU
#define MMU_NOTIFIER_CALL_SRCU 0xffffffff811a5c90
#endif

#ifndef MMU_NOTIFIER_SYNCHRONIZE
#define MMU_NOTIFIER_SYNCHRONIZE 0xffffffff811a5cb0
#endif

#ifndef __MMU_NOTIFIER_INVALIDATE_RANGE_START
#define __MMU_NOTIFIER_INVALIDATE_RANGE_START 0xffffffff811a5cd0
#endif

#ifndef __MMU_NOTIFIER_INVALIDATE_RANGE_END
#define __MMU_NOTIFIER_INVALIDATE_RANGE_END 0xffffffff811a5d50
#endif

#ifndef __MMU_NOTIFIER_INVALIDATE_RANGE
#define __MMU_NOTIFIER_INVALIDATE_RANGE 0xffffffff811a5de0
#endif

#ifndef MMU_NOTIFIER_REGISTER
#define MMU_NOTIFIER_REGISTER 0xffffffff811a5fd0
#endif

#ifndef __MMU_NOTIFIER_REGISTER
#define __MMU_NOTIFIER_REGISTER 0xffffffff811a5ff0
#endif

#ifndef MMU_NOTIFIER_UNREGISTER
#define MMU_NOTIFIER_UNREGISTER 0xffffffff811a6010
#endif

#ifndef MMU_NOTIFIER_UNREGISTER_NO_RELEASE
#define MMU_NOTIFIER_UNREGISTER_NO_RELEASE 0xffffffff811a60e0
#endif

#ifndef __MMU_NOTIFIER_RELEASE
#define __MMU_NOTIFIER_RELEASE 0xffffffff811a6170
#endif

#ifndef __MMU_NOTIFIER_CLEAR_FLUSH_YOUNG
#define __MMU_NOTIFIER_CLEAR_FLUSH_YOUNG 0xffffffff811a6230
#endif

#ifndef __MMU_NOTIFIER_TEST_YOUNG
#define __MMU_NOTIFIER_TEST_YOUNG 0xffffffff811a62c0
#endif

#ifndef __MMU_NOTIFIER_CHANGE_PTE
#define __MMU_NOTIFIER_CHANGE_PTE 0xffffffff811a6340
#endif

#ifndef __MMU_NOTIFIER_INVALIDATE_PAGE
#define __MMU_NOTIFIER_INVALIDATE_PAGE 0xffffffff811a63c0
#endif

#ifndef __MMU_NOTIFIER_MM_DESTROY
#define __MMU_NOTIFIER_MM_DESTROY 0xffffffff811a6440
#endif

#ifndef __KSM_ENTER
#define __KSM_ENTER 0xffffffff811a8b60
#endif

#ifndef KSM_MADVISE
#define KSM_MADVISE 0xffffffff811a8ca0
#endif

#ifndef __KSM_EXIT
#define __KSM_EXIT 0xffffffff811a8d50
#endif

#ifndef KSM_MIGHT_NEED_TO_COPY
#define KSM_MIGHT_NEED_TO_COPY 0xffffffff811a8ea0
#endif

#ifndef RMAP_WALK_KSM
#define RMAP_WALK_KSM 0xffffffff811a9000
#endif

#ifndef KSM_MIGRATE_PAGE
#define KSM_MIGRATE_PAGE 0xffffffff811a91a0
#endif

#ifndef KSIZE
#define KSIZE 0xffffffff811a9b30
#endif

#ifndef KMEM_CACHE_FREE
#define KMEM_CACHE_FREE 0xffffffff811a9ba0
#endif

#ifndef KFREE
#define KFREE 0xffffffff811aa520
#endif

#ifndef KMEM_CACHE_ALLOC_NODE
#define KMEM_CACHE_ALLOC_NODE 0xffffffff811aaaa0
#endif

#ifndef KMEM_CACHE_ALLOC_NODE_TRACE
#define KMEM_CACHE_ALLOC_NODE_TRACE 0xffffffff811ab5c0
#endif

#ifndef __KMALLOC_NODE_TRACK_CALLER
#define __KMALLOC_NODE_TRACK_CALLER 0xffffffff811abab0
#endif

#ifndef __KMALLOC_NODE
#define __KMALLOC_NODE 0xffffffff811abc70
#endif

#ifndef KMEM_CACHE_ALLOC
#define KMEM_CACHE_ALLOC 0xffffffff811ac610
#endif

#ifndef KMEM_CACHE_ALLOC_TRACE
#define KMEM_CACHE_ALLOC_TRACE 0xffffffff811acaa0
#endif

#ifndef __KMALLOC_TRACK_CALLER
#define __KMALLOC_TRACK_CALLER 0xffffffff811acf40
#endif

#ifndef __KMALLOC
#define __KMALLOC 0xffffffff811ad410
#endif

#ifndef KMEM_CACHE_FLAGS
#define KMEM_CACHE_FLAGS 0xffffffff811ad8f0
#endif

#ifndef __KMEM_CACHE_ALIAS
#define __KMEM_CACHE_ALIAS 0xffffffff811ad900
#endif

#ifndef __KMEM_CACHE_SHRINK
#define __KMEM_CACHE_SHRINK 0xffffffff811ad930
#endif

#ifndef __KMEM_CACHE_SHUTDOWN
#define __KMEM_CACHE_SHUTDOWN 0xffffffff811ada70
#endif

#ifndef __KMEM_CACHE_CREATE
#define __KMEM_CACHE_CREATE 0xffffffff811adb10
#endif

#ifndef GET_SLABINFO
#define GET_SLABINFO 0xffffffff811ade70
#endif

#ifndef SLABINFO_SHOW_STATS
#define SLABINFO_SHOW_STATS 0xffffffff811ae0c0
#endif

#ifndef SLABINFO_WRITE
#define SLABINFO_WRITE 0xffffffff811ae0d0
#endif

#ifndef __ONLINE_PAGE_SET_LIMITS
#define __ONLINE_PAGE_SET_LIMITS 0xffffffff811ae240
#endif

#ifndef __ONLINE_PAGE_INCREMENT_COUNTERS
#define __ONLINE_PAGE_INCREMENT_COUNTERS 0xffffffff811ae440
#endif

#ifndef __REMOVE_PAGES
#define __REMOVE_PAGES 0xffffffff811ae4b0
#endif

#ifndef __ONLINE_PAGE_FREE
#define __ONLINE_PAGE_FREE 0xffffffff811aea10
#endif

#ifndef TRY_OFFLINE_NODE
#define TRY_OFFLINE_NODE 0xffffffff811aea60
#endif

#ifndef GET_ONLINE_MEMS
#define GET_ONLINE_MEMS 0xffffffff811aec40
#endif

#ifndef PUT_ONLINE_MEMS
#define PUT_ONLINE_MEMS 0xffffffff811aec90
#endif

#ifndef SET_ONLINE_PAGE_CALLBACK
#define SET_ONLINE_PAGE_CALLBACK 0xffffffff811aed20
#endif

#ifndef RESTORE_ONLINE_PAGE_CALLBACK
#define RESTORE_ONLINE_PAGE_CALLBACK 0xffffffff811aed80
#endif

#ifndef MEM_HOTPLUG_BEGIN
#define MEM_HOTPLUG_BEGIN 0xffffffff811aede0
#endif

#ifndef MEM_HOTPLUG_DONE
#define MEM_HOTPLUG_DONE 0xffffffff811aee40
#endif

#ifndef GET_PAGE_BOOTMEM
#define GET_PAGE_BOOTMEM 0xffffffff811aee70
#endif

#ifndef PUT_PAGE_BOOTMEM
#define PUT_PAGE_BOOTMEM 0xffffffff811aee90
#endif

#ifndef REGISTER_PAGE_BOOTMEM_INFO_NODE
#define REGISTER_PAGE_BOOTMEM_INFO_NODE 0xffffffff811aef10
#endif

#ifndef TRY_ONLINE_NODE
#define TRY_ONLINE_NODE 0xffffffff811af1e0
#endif

#ifndef ZONE_FOR_MEMORY
#define ZONE_FOR_MEMORY 0xffffffff811af2c0
#endif

#ifndef IS_MEM_SECTION_REMOVABLE
#define IS_MEM_SECTION_REMOVABLE 0xffffffff811af300
#endif

#ifndef TEST_PAGES_IN_A_ZONE
#define TEST_PAGES_IN_A_ZONE 0xffffffff811af3b0
#endif

#ifndef OFFLINE_PAGES
#define OFFLINE_PAGES 0xffffffff811af470
#endif

#ifndef WALK_MEMORY_RANGE
#define WALK_MEMORY_RANGE 0xffffffff811af490
#endif

#ifndef MIGRATE_PREP
#define MIGRATE_PREP 0xffffffff811b0270
#endif

#ifndef MIGRATE_PREP_LOCAL
#define MIGRATE_PREP_LOCAL 0xffffffff811b0290
#endif

#ifndef PUTBACK_MOVABLE_PAGES
#define PUTBACK_MOVABLE_PAGES 0xffffffff811b02b0
#endif

#ifndef __MIGRATION_ENTRY_WAIT
#define __MIGRATION_ENTRY_WAIT 0xffffffff811b0370
#endif

#ifndef MIGRATION_ENTRY_WAIT
#define MIGRATION_ENTRY_WAIT 0xffffffff811b0480
#endif

#ifndef MIGRATION_ENTRY_WAIT_HUGE
#define MIGRATION_ENTRY_WAIT_HUGE 0xffffffff811b0500
#endif

#ifndef MIGRATE_PAGE_MOVE_MAPPING
#define MIGRATE_PAGE_MOVE_MAPPING 0xffffffff811b05a0
#endif

#ifndef MIGRATE_HUGE_PAGE_MOVE_MAPPING
#define MIGRATE_HUGE_PAGE_MOVE_MAPPING 0xffffffff811b07e0
#endif

#ifndef MIGRATE_PAGE_COPY
#define MIGRATE_PAGE_COPY 0xffffffff811b0950
#endif

#ifndef MIGRATE_PAGE
#define MIGRATE_PAGE 0xffffffff811b0e30
#endif

#ifndef BUFFER_MIGRATE_PAGE
#define BUFFER_MIGRATE_PAGE 0xffffffff811b10c0
#endif

#ifndef MIGRATE_PAGES
#define MIGRATE_PAGES 0xffffffff811b11e0
#endif

#ifndef SYS_MOVE_PAGES
#define SYS_MOVE_PAGES 0xffffffff811b1a10
#endif

#ifndef SYS_MOVE_PAGES
#define SYS_MOVE_PAGES 0xffffffff811b1a10
#endif

#ifndef PMD_TRANS_MIGRATING
#define PMD_TRANS_MIGRATING 0xffffffff811b1fd0
#endif

#ifndef MIGRATE_MISPLACED_PAGE
#define MIGRATE_MISPLACED_PAGE 0xffffffff811b2000
#endif

#ifndef MIGRATE_MISPLACED_TRANSHUGE_PAGE
#define MIGRATE_MISPLACED_TRANSHUGE_PAGE 0xffffffff811b2140
#endif

#ifndef MAYBE_PMD_MKWRITE
#define MAYBE_PMD_MKWRITE 0xffffffff811b3420
#endif

#ifndef COPY_HUGE_PMD
#define COPY_HUGE_PMD 0xffffffff811b48f0
#endif

#ifndef HUGE_PMD_SET_ACCESSED
#define HUGE_PMD_SET_ACCESSED 0xffffffff811b4c00
#endif

#ifndef FOLLOW_TRANS_HUGE_PMD
#define FOLLOW_TRANS_HUGE_PMD 0xffffffff811b4cc0
#endif

#ifndef DO_HUGE_PMD_NUMA_PAGE
#define DO_HUGE_PMD_NUMA_PAGE 0xffffffff811b4ee0
#endif

#ifndef __PMD_TRANS_HUGE_LOCK
#define __PMD_TRANS_HUGE_LOCK 0xffffffff811b5310
#endif

#ifndef ZAP_HUGE_PMD
#define ZAP_HUGE_PMD 0xffffffff811b5430
#endif

#ifndef MOVE_HUGE_PMD
#define MOVE_HUGE_PMD 0xffffffff811b55a0
#endif

#ifndef CHANGE_HUGE_PMD
#define CHANGE_HUGE_PMD 0xffffffff811b5720
#endif

#ifndef PAGE_CHECK_ADDRESS_PMD
#define PAGE_CHECK_ADDRESS_PMD 0xffffffff811b58e0
#endif

#ifndef SPLIT_HUGE_PAGE_TO_LIST
#define SPLIT_HUGE_PAGE_TO_LIST 0xffffffff811b5a50
#endif

#ifndef __KHUGEPAGED_ENTER
#define __KHUGEPAGED_ENTER 0xffffffff811b61c0
#endif

#ifndef DO_HUGE_PMD_ANONYMOUS_PAGE
#define DO_HUGE_PMD_ANONYMOUS_PAGE 0xffffffff811b62e0
#endif

#ifndef KHUGEPAGED_ENTER_VMA_MERGE
#define KHUGEPAGED_ENTER_VMA_MERGE 0xffffffff811b66d0
#endif

#ifndef HUGEPAGE_MADVISE
#define HUGEPAGE_MADVISE 0xffffffff811b6770
#endif

#ifndef __KHUGEPAGED_EXIT
#define __KHUGEPAGED_EXIT 0xffffffff811b6800
#endif

#ifndef __SPLIT_HUGE_PAGE_PMD
#define __SPLIT_HUGE_PAGE_PMD 0xffffffff811b6920
#endif

#ifndef DO_HUGE_PMD_WP_PAGE
#define DO_HUGE_PMD_WP_PAGE 0xffffffff811b6c90
#endif

#ifndef SPLIT_HUGE_PAGE_PMD_MM
#define SPLIT_HUGE_PAGE_PMD_MM 0xffffffff811b7770
#endif

#ifndef __VMA_ADJUST_TRANS_HUGE
#define __VMA_ADJUST_TRANS_HUGE 0xffffffff811b7870
#endif

#ifndef PAGE_COUNTER_CANCEL
#define PAGE_COUNTER_CANCEL 0xffffffff811b7960
#endif

#ifndef PAGE_COUNTER_CHARGE
#define PAGE_COUNTER_CHARGE 0xffffffff811b79b0
#endif

#ifndef PAGE_COUNTER_TRY_CHARGE
#define PAGE_COUNTER_TRY_CHARGE 0xffffffff811b79e0
#endif

#ifndef PAGE_COUNTER_UNCHARGE
#define PAGE_COUNTER_UNCHARGE 0xffffffff811b7a80
#endif

#ifndef PAGE_COUNTER_LIMIT
#define PAGE_COUNTER_LIMIT 0xffffffff811b7ac0
#endif

#ifndef PAGE_COUNTER_MEMPARSE
#define PAGE_COUNTER_MEMPARSE 0xffffffff811b7b30
#endif

#ifndef PARENT_MEM_CGROUP
#define PARENT_MEM_CGROUP 0xffffffff811b7c90
#endif

#ifndef __MEM_CGROUP_COUNT_VM_EVENT
#define __MEM_CGROUP_COUNT_VM_EVENT 0xffffffff811b9000
#endif

#ifndef MEM_CGROUP_FROM_CSS
#define MEM_CGROUP_FROM_CSS 0xffffffff811b9c20
#endif

#ifndef MEMCG_TO_VMPRESSURE
#define MEMCG_TO_VMPRESSURE 0xffffffff811b9c30
#endif

#ifndef VMPRESSURE_TO_CSS
#define VMPRESSURE_TO_CSS 0xffffffff811b9c50
#endif

#ifndef MEM_CGROUP_CSS
#define MEM_CGROUP_CSS 0xffffffff811b9c60
#endif

#ifndef MEM_CGROUP_GET_LRU_SIZE
#define MEM_CGROUP_GET_LRU_SIZE 0xffffffff811b9c70
#endif

#ifndef MEM_CGROUP_FROM_TASK
#define MEM_CGROUP_FROM_TASK 0xffffffff811b9c80
#endif

#ifndef MEM_CGROUP_ITER
#define MEM_CGROUP_ITER 0xffffffff811b9cb0
#endif

#ifndef MEM_CGROUP_ITER_BREAK
#define MEM_CGROUP_ITER_BREAK 0xffffffff811bbb90
#endif

#ifndef MEM_CGROUP_ZONE_LRUVEC
#define MEM_CGROUP_ZONE_LRUVEC 0xffffffff811bbbf0
#endif

#ifndef MEM_CGROUP_PAGE_LRUVEC
#define MEM_CGROUP_PAGE_LRUVEC 0xffffffff811bbc50
#endif

#ifndef MEM_CGROUP_UPDATE_LRU_SIZE
#define MEM_CGROUP_UPDATE_LRU_SIZE 0xffffffff811bbcb0
#endif

#ifndef MEM_CGROUP_IS_DESCENDANT
#define MEM_CGROUP_IS_DESCENDANT 0xffffffff811bbf90
#endif

#ifndef TASK_IN_MEM_CGROUP
#define TASK_IN_MEM_CGROUP 0xffffffff811bbfd0
#endif

#ifndef MEM_CGROUP_INACTIVE_ANON_IS_LOW
#define MEM_CGROUP_INACTIVE_ANON_IS_LOW 0xffffffff811bc0e0
#endif

#ifndef MEM_CGROUP_LRUVEC_ONLINE
#define MEM_CGROUP_LRUVEC_ONLINE 0xffffffff811bc130
#endif

#ifndef MEM_CGROUP_SWAPPINESS
#define MEM_CGROUP_SWAPPINESS 0xffffffff811bc160
#endif

#ifndef MEM_CGROUP_PRINT_OOM_INFO
#define MEM_CGROUP_PRINT_OOM_INFO 0xffffffff811bc190
#endif

#ifndef MEM_CGROUP_SELECT_VICTIM_NODE
#define MEM_CGROUP_SELECT_VICTIM_NODE 0xffffffff811bc3b0
#endif

#ifndef MEM_CGROUP_OOM_SYNCHRONIZE
#define MEM_CGROUP_OOM_SYNCHRONIZE 0xffffffff811bc5b0
#endif

#ifndef MEM_CGROUP_BEGIN_PAGE_STAT
#define MEM_CGROUP_BEGIN_PAGE_STAT 0xffffffff811bcb40
#endif

#ifndef MEM_CGROUP_END_PAGE_STAT
#define MEM_CGROUP_END_PAGE_STAT 0xffffffff811bcbe0
#endif

#ifndef MEM_CGROUP_UPDATE_PAGE_STAT
#define MEM_CGROUP_UPDATE_PAGE_STAT 0xffffffff811bcc40
#endif

#ifndef TRY_GET_MEM_CGROUP_FROM_PAGE
#define TRY_GET_MEM_CGROUP_FROM_PAGE 0xffffffff811bcc60
#endif

#ifndef MEM_CGROUP_SPLIT_HUGE_FIXUP
#define MEM_CGROUP_SPLIT_HUGE_FIXUP 0xffffffff811bcdc0
#endif

#ifndef MEM_CGROUP_SOFT_LIMIT_RECLAIM
#define MEM_CGROUP_SOFT_LIMIT_RECLAIM 0xffffffff811bce10
#endif

#ifndef MEM_CGROUP_EVENTS
#define MEM_CGROUP_EVENTS 0xffffffff811bd150
#endif

#ifndef MEM_CGROUP_LOW
#define MEM_CGROUP_LOW 0xffffffff811bdd60
#endif

#ifndef MEM_CGROUP_TRY_CHARGE
#define MEM_CGROUP_TRY_CHARGE 0xffffffff811bddf0
#endif

#ifndef MEM_CGROUP_CANCEL_CHARGE
#define MEM_CGROUP_CANCEL_CHARGE 0xffffffff811bdf00
#endif

#ifndef MEM_CGROUP_UNCHARGE
#define MEM_CGROUP_UNCHARGE 0xffffffff811bdf60
#endif

#ifndef MEM_CGROUP_UNCHARGE_LIST
#define MEM_CGROUP_UNCHARGE_LIST 0xffffffff811bdfa0
#endif

#ifndef MEM_CGROUP_MIGRATE
#define MEM_CGROUP_MIGRATE 0xffffffff811bdfd0
#endif

#ifndef MEM_CGROUP_SWAPOUT
#define MEM_CGROUP_SWAPOUT 0xffffffff811be060
#endif

#ifndef MEM_CGROUP_UNCHARGE_SWAP
#define MEM_CGROUP_UNCHARGE_SWAP 0xffffffff811be0f0
#endif

#ifndef MEM_CGROUP_COMMIT_CHARGE
#define MEM_CGROUP_COMMIT_CHARGE 0xffffffff811be180
#endif

#ifndef VMPRESSURE
#define VMPRESSURE 0xffffffff811be3f0
#endif

#ifndef VMPRESSURE_PRIO
#define VMPRESSURE_PRIO 0xffffffff811be480
#endif

#ifndef VMPRESSURE_REGISTER_EVENT
#define VMPRESSURE_REGISTER_EVENT 0xffffffff811be4b0
#endif

#ifndef VMPRESSURE_UNREGISTER_EVENT
#define VMPRESSURE_UNREGISTER_EVENT 0xffffffff811be570
#endif

#ifndef VMPRESSURE_INIT
#define VMPRESSURE_INIT 0xffffffff811be600
#endif

#ifndef VMPRESSURE_CLEANUP
#define VMPRESSURE_CLEANUP 0xffffffff811be660
#endif

#ifndef SWAP_CGROUP_CMPXCHG
#define SWAP_CGROUP_CMPXCHG 0xffffffff811be6f0
#endif

#ifndef SWAP_CGROUP_RECORD
#define SWAP_CGROUP_RECORD 0xffffffff811be760
#endif

#ifndef LOOKUP_SWAP_CGROUP_ID
#define LOOKUP_SWAP_CGROUP_ID 0xffffffff811be7b0
#endif

#ifndef SWAP_CGROUP_SWAPON
#define SWAP_CGROUP_SWAPON 0xffffffff811be7c0
#endif

#ifndef SWAP_CGROUP_SWAPOFF
#define SWAP_CGROUP_SWAPOFF 0xffffffff811be920
#endif

#ifndef MEMORY_FAILURE_QUEUE
#define MEMORY_FAILURE_QUEUE 0xffffffff811bebd0
#endif

#ifndef SHAKE_PAGE
#define SHAKE_PAGE 0xffffffff811bed20
#endif

#ifndef HWPOISON_FILTER
#define HWPOISON_FILTER 0xffffffff811bee90
#endif

#ifndef UNPOISON_MEMORY
#define UNPOISON_MEMORY 0xffffffff811bf330
#endif

#ifndef MEMORY_FAILURE
#define MEMORY_FAILURE 0xffffffff811bf610
#endif

#ifndef SOFT_OFFLINE_PAGE
#define SOFT_OFFLINE_PAGE 0xffffffff811c02d0
#endif

#ifndef SET_MIGRATETYPE_ISOLATE
#define SET_MIGRATETYPE_ISOLATE 0xffffffff811c09a0
#endif

#ifndef UNSET_MIGRATETYPE_ISOLATE
#define UNSET_MIGRATETYPE_ISOLATE 0xffffffff811c0ae0
#endif

#ifndef START_ISOLATE_PAGE_RANGE
#define START_ISOLATE_PAGE_RANGE 0xffffffff811c0c90
#endif

#ifndef UNDO_ISOLATE_PAGE_RANGE
#define UNDO_ISOLATE_PAGE_RANGE 0xffffffff811c0d70
#endif

#ifndef TEST_PAGES_ISOLATED
#define TEST_PAGES_ISOLATED 0xffffffff811c0e30
#endif

#ifndef ALLOC_MIGRATE_TARGET
#define ALLOC_MIGRATE_TARGET 0xffffffff811c1050
#endif

#ifndef ZPOOL_REGISTER_DRIVER
#define ZPOOL_REGISTER_DRIVER 0xffffffff811c1100
#endif

#ifndef ZPOOL_EVICT
#define ZPOOL_EVICT 0xffffffff811c1150
#endif

#ifndef ZPOOL_UNREGISTER_DRIVER
#define ZPOOL_UNREGISTER_DRIVER 0xffffffff811c11f0
#endif

#ifndef ZPOOL_CREATE_POOL
#define ZPOOL_CREATE_POOL 0xffffffff811c1330
#endif

#ifndef ZPOOL_DESTROY_POOL
#define ZPOOL_DESTROY_POOL 0xffffffff811c14c0
#endif

#ifndef ZPOOL_GET_TYPE
#define ZPOOL_GET_TYPE 0xffffffff811c1540
#endif

#ifndef ZPOOL_MALLOC
#define ZPOOL_MALLOC 0xffffffff811c1550
#endif

#ifndef ZPOOL_FREE
#define ZPOOL_FREE 0xffffffff811c1570
#endif

#ifndef ZPOOL_SHRINK
#define ZPOOL_SHRINK 0xffffffff811c1590
#endif

#ifndef ZPOOL_MAP_HANDLE
#define ZPOOL_MAP_HANDLE 0xffffffff811c15b0
#endif

#ifndef ZPOOL_UNMAP_HANDLE
#define ZPOOL_UNMAP_HANDLE 0xffffffff811c15d0
#endif

#ifndef ZPOOL_GET_TOTAL_SIZE
#define ZPOOL_GET_TOTAL_SIZE 0xffffffff811c15f0
#endif

#ifndef ZBUD_CREATE_POOL
#define ZBUD_CREATE_POOL 0xffffffff811c16e0
#endif

#ifndef ZBUD_DESTROY_POOL
#define ZBUD_DESTROY_POOL 0xffffffff811c17b0
#endif

#ifndef ZBUD_ALLOC
#define ZBUD_ALLOC 0xffffffff811c17d0
#endif

#ifndef ZBUD_FREE
#define ZBUD_FREE 0xffffffff811c1a30
#endif

#ifndef ZBUD_RECLAIM_PAGE
#define ZBUD_RECLAIM_PAGE 0xffffffff811c1b50
#endif

#ifndef ZBUD_MAP
#define ZBUD_MAP 0xffffffff811c1e00
#endif

#ifndef ZBUD_UNMAP
#define ZBUD_UNMAP 0xffffffff811c1e10
#endif

#ifndef ZBUD_GET_POOL_SIZE
#define ZBUD_GET_POOL_SIZE 0xffffffff811c1e20
#endif

#ifndef ZS_GET_TOTAL_PAGES
#define ZS_GET_TOTAL_PAGES 0xffffffff811c1e80
#endif

#ifndef ZS_DESTROY_POOL
#define ZS_DESTROY_POOL 0xffffffff811c1f70
#endif

#ifndef ZS_MALLOC
#define ZS_MALLOC 0xffffffff811c2480
#endif

#ifndef ZS_MAP_OBJECT
#define ZS_MAP_OBJECT 0xffffffff811c2980
#endif

#ifndef ZS_UNMAP_OBJECT
#define ZS_UNMAP_OBJECT 0xffffffff811c2bc0
#endif

#ifndef ZS_FREE
#define ZS_FREE 0xffffffff811c2eb0
#endif

#ifndef ZS_COMPACT
#define ZS_COMPACT 0xffffffff811c2f10
#endif

#ifndef ZS_CREATE_POOL
#define ZS_CREATE_POOL 0xffffffff811c35d0
#endif

#ifndef BALLOON_PAGE_ENQUEUE
#define BALLOON_PAGE_ENQUEUE 0xffffffff811c3820
#endif

#ifndef BALLOON_PAGE_DEQUEUE
#define BALLOON_PAGE_DEQUEUE 0xffffffff811c38b0
#endif

#ifndef BALLOON_PAGE_ISOLATE
#define BALLOON_PAGE_ISOLATE 0xffffffff811c39d0
#endif

#ifndef BALLOON_PAGE_PUTBACK
#define BALLOON_PAGE_PUTBACK 0xffffffff811c3ab0
#endif

#ifndef BALLOON_PAGE_MIGRATE
#define BALLOON_PAGE_MIGRATE 0xffffffff811c3b70
#endif

#ifndef FINISH_NO_OPEN
#define FINISH_NO_OPEN 0xffffffff811c3c20
#endif

#ifndef GENERIC_FILE_OPEN
#define GENERIC_FILE_OPEN 0xffffffff811c3c30
#endif

#ifndef NONSEEKABLE_OPEN
#define NONSEEKABLE_OPEN 0xffffffff811c3c50
#endif

#ifndef VFS_FALLOCATE
#define VFS_FALLOCATE 0xffffffff811c3c60
#endif

#ifndef FILP_CLOSE
#define FILP_CLOSE 0xffffffff811c3e90
#endif

#ifndef SYS_CLOSE
#define SYS_CLOSE 0xffffffff811c3f00
#endif

#ifndef SYS_CLOSE
#define SYS_CLOSE 0xffffffff811c3f00
#endif

#ifndef FINISH_OPEN
#define FINISH_OPEN 0xffffffff811c4570
#endif

#ifndef VFS_OPEN
#define VFS_OPEN 0xffffffff811c45c0
#endif

#ifndef DENTRY_OPEN
#define DENTRY_OPEN 0xffffffff811c4610
#endif

#ifndef FILE_OPEN_ROOT
#define FILE_OPEN_ROOT 0xffffffff811c46d0
#endif

#ifndef DO_TRUNCATE
#define DO_TRUNCATE 0xffffffff811c4850
#endif

#ifndef VFS_TRUNCATE
#define VFS_TRUNCATE 0xffffffff811c48e0
#endif

#ifndef SYS_TRUNCATE
#define SYS_TRUNCATE 0xffffffff811c4c80
#endif

#ifndef SYS_TRUNCATE
#define SYS_TRUNCATE 0xffffffff811c4c80
#endif

#ifndef COMPAT_SYS_TRUNCATE
#define COMPAT_SYS_TRUNCATE 0xffffffff811c4ca0
#endif

#ifndef COMPAT_SYS_TRUNCATE
#define COMPAT_SYS_TRUNCATE 0xffffffff811c4ca0
#endif

#ifndef SYS_FTRUNCATE
#define SYS_FTRUNCATE 0xffffffff811c4cc0
#endif

#ifndef SYS_FTRUNCATE
#define SYS_FTRUNCATE 0xffffffff811c4cc0
#endif

#ifndef COMPAT_SYS_FTRUNCATE
#define COMPAT_SYS_FTRUNCATE 0xffffffff811c4ce0
#endif

#ifndef COMPAT_SYS_FTRUNCATE
#define COMPAT_SYS_FTRUNCATE 0xffffffff811c4ce0
#endif

#ifndef SYS_FALLOCATE
#define SYS_FALLOCATE 0xffffffff811c4d00
#endif

#ifndef SYS_FALLOCATE
#define SYS_FALLOCATE 0xffffffff811c4d00
#endif

#ifndef SYS_FACCESSAT
#define SYS_FACCESSAT 0xffffffff811c4d70
#endif

#ifndef SYS_FACCESSAT
#define SYS_FACCESSAT 0xffffffff811c4d70
#endif

#ifndef SYS_ACCESS
#define SYS_ACCESS 0xffffffff811c4f80
#endif

#ifndef SYS_ACCESS
#define SYS_ACCESS 0xffffffff811c4f80
#endif

#ifndef SYS_CHDIR
#define SYS_CHDIR 0xffffffff811c5190
#endif

#ifndef SYS_CHDIR
#define SYS_CHDIR 0xffffffff811c5190
#endif

#ifndef SYS_FCHDIR
#define SYS_FCHDIR 0xffffffff811c5240
#endif

#ifndef SYS_FCHDIR
#define SYS_FCHDIR 0xffffffff811c5240
#endif

#ifndef SYS_CHROOT
#define SYS_CHROOT 0xffffffff811c52e0
#endif

#ifndef SYS_CHROOT
#define SYS_CHROOT 0xffffffff811c52e0
#endif

#ifndef SYS_FCHMOD
#define SYS_FCHMOD 0xffffffff811c53f0
#endif

#ifndef SYS_FCHMOD
#define SYS_FCHMOD 0xffffffff811c53f0
#endif

#ifndef SYS_FCHMODAT
#define SYS_FCHMODAT 0xffffffff811c5470
#endif

#ifndef SYS_FCHMODAT
#define SYS_FCHMODAT 0xffffffff811c5470
#endif

#ifndef SYS_CHMOD
#define SYS_CHMOD 0xffffffff811c5500
#endif

#ifndef SYS_CHMOD
#define SYS_CHMOD 0xffffffff811c5500
#endif

#ifndef SYS_FCHOWNAT
#define SYS_FCHOWNAT 0xffffffff811c5590
#endif

#ifndef SYS_FCHOWNAT
#define SYS_FCHOWNAT 0xffffffff811c5590
#endif

#ifndef SYS_CHOWN
#define SYS_CHOWN 0xffffffff811c5680
#endif

#ifndef SYS_CHOWN
#define SYS_CHOWN 0xffffffff811c5680
#endif

#ifndef SYS_LCHOWN
#define SYS_LCHOWN 0xffffffff811c5740
#endif

#ifndef SYS_LCHOWN
#define SYS_LCHOWN 0xffffffff811c5740
#endif

#ifndef SYS_FCHOWN
#define SYS_FCHOWN 0xffffffff811c5800
#endif

#ifndef SYS_FCHOWN
#define SYS_FCHOWN 0xffffffff811c5800
#endif

#ifndef OPEN_CHECK_O_DIRECT
#define OPEN_CHECK_O_DIRECT 0xffffffff811c58a0
#endif

#ifndef FILE_OPEN_NAME
#define FILE_OPEN_NAME 0xffffffff811c58e0
#endif

#ifndef FILP_OPEN
#define FILP_OPEN 0xffffffff811c5a30
#endif

#ifndef DO_SYS_OPEN
#define DO_SYS_OPEN 0xffffffff811c5a80
#endif

#ifndef SYS_OPEN
#define SYS_OPEN 0xffffffff811c5ca0
#endif

#ifndef SYS_OPEN
#define SYS_OPEN 0xffffffff811c5ca0
#endif

#ifndef SYS_OPENAT
#define SYS_OPENAT 0xffffffff811c5cd0
#endif

#ifndef SYS_OPENAT
#define SYS_OPENAT 0xffffffff811c5cd0
#endif

#ifndef SYS_CREAT
#define SYS_CREAT 0xffffffff811c5cf0
#endif

#ifndef SYS_CREAT
#define SYS_CREAT 0xffffffff811c5cf0
#endif

#ifndef SYS_VHANGUP
#define SYS_VHANGUP 0xffffffff811c5d20
#endif

#ifndef VFS_SETPOS
#define VFS_SETPOS 0xffffffff811c5d50
#endif

#ifndef NOOP_LLSEEK
#define NOOP_LLSEEK 0xffffffff811c5da0
#endif

#ifndef NO_LLSEEK
#define NO_LLSEEK 0xffffffff811c5db0
#endif

#ifndef VFS_LLSEEK
#define VFS_LLSEEK 0xffffffff811c5dc0
#endif

#ifndef IOV_SHORTEN
#define IOV_SHORTEN 0xffffffff811c5e00
#endif

#ifndef DEFAULT_LLSEEK
#define DEFAULT_LLSEEK 0xffffffff811c5e60
#endif

#ifndef GENERIC_FILE_LLSEEK_SIZE
#define GENERIC_FILE_LLSEEK_SIZE 0xffffffff811c5fe0
#endif

#ifndef GENERIC_FILE_LLSEEK
#define GENERIC_FILE_LLSEEK 0xffffffff811c60f0
#endif

#ifndef FIXED_SIZE_LLSEEK
#define FIXED_SIZE_LLSEEK 0xffffffff811c6120
#endif

#ifndef VFS_ITER_READ
#define VFS_ITER_READ 0xffffffff811c6160
#endif

#ifndef VFS_ITER_WRITE
#define VFS_ITER_WRITE 0xffffffff811c61f0
#endif

#ifndef __VFS_READ
#define __VFS_READ 0xffffffff811c6290
#endif

#ifndef __VFS_WRITE
#define __VFS_WRITE 0xffffffff811c6370
#endif

#ifndef __KERNEL_WRITE
#define __KERNEL_WRITE 0xffffffff811c6460
#endif

#ifndef SYS_LSEEK
#define SYS_LSEEK 0xffffffff811c6560
#endif

#ifndef SYS_LSEEK
#define SYS_LSEEK 0xffffffff811c6560
#endif

#ifndef COMPAT_SYS_LSEEK
#define COMPAT_SYS_LSEEK 0xffffffff811c6610
#endif

#ifndef COMPAT_SYS_LSEEK
#define COMPAT_SYS_LSEEK 0xffffffff811c6610
#endif

#ifndef SYS_LLSEEK
#define SYS_LLSEEK 0xffffffff811c66c0
#endif

#ifndef SYS_LLSEEK
#define SYS_LLSEEK 0xffffffff811c66c0
#endif

#ifndef RW_VERIFY_AREA
#define RW_VERIFY_AREA 0xffffffff811c67c0
#endif

#ifndef VFS_READ
#define VFS_READ 0xffffffff811c68c0
#endif

#ifndef VFS_WRITE
#define VFS_WRITE 0xffffffff811c69f0
#endif

#ifndef VFS_READV
#define VFS_READV 0xffffffff811c6e30
#endif

#ifndef VFS_WRITEV
#define VFS_WRITEV 0xffffffff811c6e80
#endif

#ifndef SYS_READ
#define SYS_READ 0xffffffff811c7710
#endif

#ifndef SYS_READ
#define SYS_READ 0xffffffff811c7710
#endif

#ifndef SYS_WRITE
#define SYS_WRITE 0xffffffff811c77c0
#endif

#ifndef SYS_WRITE
#define SYS_WRITE 0xffffffff811c77c0
#endif

#ifndef SYS_PREAD64
#define SYS_PREAD64 0xffffffff811c7870
#endif

#ifndef SYS_PREAD64
#define SYS_PREAD64 0xffffffff811c7870
#endif

#ifndef SYS_PWRITE64
#define SYS_PWRITE64 0xffffffff811c7910
#endif

#ifndef SYS_PWRITE64
#define SYS_PWRITE64 0xffffffff811c7910
#endif

#ifndef RW_COPY_CHECK_UVECTOR
#define RW_COPY_CHECK_UVECTOR 0xffffffff811c79b0
#endif

#ifndef SYS_READV
#define SYS_READV 0xffffffff811c7ac0
#endif

#ifndef SYS_READV
#define SYS_READV 0xffffffff811c7ac0
#endif

#ifndef SYS_WRITEV
#define SYS_WRITEV 0xffffffff811c7b90
#endif

#ifndef SYS_WRITEV
#define SYS_WRITEV 0xffffffff811c7b90
#endif

#ifndef SYS_PREADV
#define SYS_PREADV 0xffffffff811c7c60
#endif

#ifndef SYS_PREADV
#define SYS_PREADV 0xffffffff811c7c60
#endif

#ifndef SYS_PWRITEV
#define SYS_PWRITEV 0xffffffff811c7d30
#endif

#ifndef SYS_PWRITEV
#define SYS_PWRITEV 0xffffffff811c7d30
#endif

#ifndef COMPAT_SYS_READV
#define COMPAT_SYS_READV 0xffffffff811c7e00
#endif

#ifndef COMPAT_SYS_READV
#define COMPAT_SYS_READV 0xffffffff811c7e00
#endif

#ifndef COMPAT_SYS_PREADV64
#define COMPAT_SYS_PREADV64 0xffffffff811c7ea0
#endif

#ifndef COMPAT_SYS_PREADV64
#define COMPAT_SYS_PREADV64 0xffffffff811c7ea0
#endif

#ifndef COMPAT_SYS_PREADV
#define COMPAT_SYS_PREADV 0xffffffff811c7ec0
#endif

#ifndef COMPAT_SYS_PREADV
#define COMPAT_SYS_PREADV 0xffffffff811c7ec0
#endif

#ifndef COMPAT_SYS_WRITEV
#define COMPAT_SYS_WRITEV 0xffffffff811c7ee0
#endif

#ifndef COMPAT_SYS_WRITEV
#define COMPAT_SYS_WRITEV 0xffffffff811c7ee0
#endif

#ifndef COMPAT_SYS_PWRITEV64
#define COMPAT_SYS_PWRITEV64 0xffffffff811c7f80
#endif

#ifndef COMPAT_SYS_PWRITEV64
#define COMPAT_SYS_PWRITEV64 0xffffffff811c7f80
#endif

#ifndef COMPAT_SYS_PWRITEV
#define COMPAT_SYS_PWRITEV 0xffffffff811c7fa0
#endif

#ifndef COMPAT_SYS_PWRITEV
#define COMPAT_SYS_PWRITEV 0xffffffff811c7fa0
#endif

#ifndef SYS_SENDFILE
#define SYS_SENDFILE 0xffffffff811c7fc0
#endif

#ifndef SYS_SENDFILE
#define SYS_SENDFILE 0xffffffff811c7fc0
#endif

#ifndef SYS_SENDFILE64
#define SYS_SENDFILE64 0xffffffff811c8040
#endif

#ifndef SYS_SENDFILE64
#define SYS_SENDFILE64 0xffffffff811c8040
#endif

#ifndef COMPAT_SYS_SENDFILE
#define COMPAT_SYS_SENDFILE 0xffffffff811c80e0
#endif

#ifndef COMPAT_SYS_SENDFILE
#define COMPAT_SYS_SENDFILE 0xffffffff811c80e0
#endif

#ifndef COMPAT_SYS_SENDFILE64
#define COMPAT_SYS_SENDFILE64 0xffffffff811c8160
#endif

#ifndef COMPAT_SYS_SENDFILE64
#define COMPAT_SYS_SENDFILE64 0xffffffff811c8160
#endif

#ifndef GET_MAX_FILES
#define GET_MAX_FILES 0xffffffff811c8200
#endif

#ifndef FPUT
#define FPUT 0xffffffff811c8240
#endif

#ifndef PROC_NR_FILES
#define PROC_NR_FILES 0xffffffff811c8500
#endif

#ifndef GET_EMPTY_FILP
#define GET_EMPTY_FILP 0xffffffff811c8530
#endif

#ifndef ALLOC_FILE
#define ALLOC_FILE 0xffffffff811c86f0
#endif

#ifndef FLUSH_DELAYED_FPUT
#define FLUSH_DELAYED_FPUT 0xffffffff811c8790
#endif

#ifndef __FPUT_SYNC
#define __FPUT_SYNC 0xffffffff811c87c0
#endif

#ifndef PUT_FILP
#define PUT_FILP 0xffffffff811c8800
#endif

#ifndef GENERIC_SHUTDOWN_SUPER
#define GENERIC_SHUTDOWN_SUPER 0xffffffff811c8980
#endif

#ifndef GET_ANON_BDEV
#define GET_ANON_BDEV 0xffffffff811c8b50
#endif

#ifndef SET_ANON_SUPER
#define SET_ANON_SUPER 0xffffffff811c8c30
#endif

#ifndef FREE_ANON_BDEV
#define FREE_ANON_BDEV 0xffffffff811c8c70
#endif

#ifndef KILL_ANON_SUPER
#define KILL_ANON_SUPER 0xffffffff811c8cb0
#endif

#ifndef KILL_LITTER_SUPER
#define KILL_LITTER_SUPER 0xffffffff811c8cd0
#endif

#ifndef KILL_BLOCK_SUPER
#define KILL_BLOCK_SUPER 0xffffffff811c8d10
#endif

#ifndef __SB_END_WRITE
#define __SB_END_WRITE 0xffffffff811c8d80
#endif

#ifndef __SB_START_WRITE
#define __SB_START_WRITE 0xffffffff811c8df0
#endif

#ifndef DEACTIVATE_LOCKED_SUPER
#define DEACTIVATE_LOCKED_SUPER 0xffffffff811c9000
#endif

#ifndef THAW_SUPER
#define THAW_SUPER 0xffffffff811c9080
#endif

#ifndef FREEZE_SUPER
#define FREEZE_SUPER 0xffffffff811c9120
#endif

#ifndef DROP_SUPER
#define DROP_SUPER 0xffffffff811c9300
#endif

#ifndef ITERATE_SUPERS_TYPE
#define ITERATE_SUPERS_TYPE 0xffffffff811c9320
#endif

#ifndef DEACTIVATE_SUPER
#define DEACTIVATE_SUPER 0xffffffff811c9420
#endif

#ifndef GET_SUPER
#define GET_SUPER 0xffffffff811c9480
#endif

#ifndef GET_SUPER_THAWED
#define GET_SUPER_THAWED 0xffffffff811c9550
#endif

#ifndef SGET
#define SGET 0xffffffff811c9620
#endif

#ifndef MOUNT_NS
#define MOUNT_NS 0xffffffff811c99d0
#endif

#ifndef MOUNT_NODEV
#define MOUNT_NODEV 0xffffffff811c9a90
#endif

#ifndef MOUNT_BDEV
#define MOUNT_BDEV 0xffffffff811c9b30
#endif

#ifndef TRYLOCK_SUPER
#define TRYLOCK_SUPER 0xffffffff811c9d20
#endif

#ifndef ITERATE_SUPERS
#define ITERATE_SUPERS 0xffffffff811c9f20
#endif

#ifndef GET_ACTIVE_SUPER
#define GET_ACTIVE_SUPER 0xffffffff811ca020
#endif

#ifndef USER_GET_SUPER
#define USER_GET_SUPER 0xffffffff811ca0a0
#endif

#ifndef DO_REMOUNT_SB
#define DO_REMOUNT_SB 0xffffffff811ca160
#endif

#ifndef MOUNT_SINGLE
#define MOUNT_SINGLE 0xffffffff811ca490
#endif

#ifndef EMERGENCY_REMOUNT
#define EMERGENCY_REMOUNT 0xffffffff811ca540
#endif

#ifndef MOUNT_FS
#define MOUNT_FS 0xffffffff811ca5b0
#endif

#ifndef UNREGISTER_CHRDEV_REGION
#define UNREGISTER_CHRDEV_REGION 0xffffffff811ca7f0
#endif

#ifndef CDEV_ADD
#define CDEV_ADD 0xffffffff811ca980
#endif

#ifndef CDEV_DEL
#define CDEV_DEL 0xffffffff811ca9d0
#endif

#ifndef __UNREGISTER_CHRDEV
#define __UNREGISTER_CHRDEV 0xffffffff811caa00
#endif

#ifndef CDEV_INIT
#define CDEV_INIT 0xffffffff811caa30
#endif

#ifndef REGISTER_CHRDEV_REGION
#define REGISTER_CHRDEV_REGION 0xffffffff811cac60
#endif

#ifndef ALLOC_CHRDEV_REGION
#define ALLOC_CHRDEV_REGION 0xffffffff811cad30
#endif

#ifndef CDEV_ALLOC
#define CDEV_ALLOC 0xffffffff811cad60
#endif

#ifndef __REGISTER_CHRDEV
#define __REGISTER_CHRDEV 0xffffffff811cadb0
#endif

#ifndef CHRDEV_SHOW
#define CHRDEV_SHOW 0xffffffff811caea0
#endif

#ifndef CDEV_PUT
#define CDEV_PUT 0xffffffff811caf10
#endif

#ifndef CD_FORGET
#define CD_FORGET 0xffffffff811cb0c0
#endif

#ifndef GENERIC_FILLATTR
#define GENERIC_FILLATTR 0xffffffff811cb120
#endif

#ifndef VFS_GETATTR_NOSEC
#define VFS_GETATTR_NOSEC 0xffffffff811cb1b0
#endif

#ifndef __INODE_SUB_BYTES
#define __INODE_SUB_BYTES 0xffffffff811cb200
#endif

#ifndef INODE_SET_BYTES
#define INODE_SET_BYTES 0xffffffff811cb250
#endif

#ifndef VFS_GETATTR
#define VFS_GETATTR 0xffffffff811cb270
#endif

#ifndef VFS_FSTAT
#define VFS_FSTAT 0xffffffff811cb2b0
#endif

#ifndef VFS_FSTATAT
#define VFS_FSTATAT 0xffffffff811cb310
#endif

#ifndef VFS_STAT
#define VFS_STAT 0xffffffff811cb3b0
#endif

#ifndef VFS_LSTAT
#define VFS_LSTAT 0xffffffff811cb3d0
#endif

#ifndef INODE_SUB_BYTES
#define INODE_SUB_BYTES 0xffffffff811cb8e0
#endif

#ifndef INODE_GET_BYTES
#define INODE_GET_BYTES 0xffffffff811cb960
#endif

#ifndef INODE_ADD_BYTES
#define INODE_ADD_BYTES 0xffffffff811cb9a0
#endif

#ifndef SYS_STAT
#define SYS_STAT 0xffffffff811cba20
#endif

#ifndef SYS_STAT
#define SYS_STAT 0xffffffff811cba20
#endif

#ifndef SYS_LSTAT
#define SYS_LSTAT 0xffffffff811cba40
#endif

#ifndef SYS_LSTAT
#define SYS_LSTAT 0xffffffff811cba40
#endif

#ifndef SYS_FSTAT
#define SYS_FSTAT 0xffffffff811cba60
#endif

#ifndef SYS_FSTAT
#define SYS_FSTAT 0xffffffff811cba60
#endif

#ifndef SYS_NEWSTAT
#define SYS_NEWSTAT 0xffffffff811cba80
#endif

#ifndef SYS_NEWSTAT
#define SYS_NEWSTAT 0xffffffff811cba80
#endif

#ifndef SYS_NEWLSTAT
#define SYS_NEWLSTAT 0xffffffff811cbaa0
#endif

#ifndef SYS_NEWLSTAT
#define SYS_NEWLSTAT 0xffffffff811cbaa0
#endif

#ifndef SYS_NEWFSTATAT
#define SYS_NEWFSTATAT 0xffffffff811cbac0
#endif

#ifndef SYS_NEWFSTATAT
#define SYS_NEWFSTATAT 0xffffffff811cbac0
#endif

#ifndef SYS_NEWFSTAT
#define SYS_NEWFSTAT 0xffffffff811cbae0
#endif

#ifndef SYS_NEWFSTAT
#define SYS_NEWFSTAT 0xffffffff811cbae0
#endif

#ifndef SYS_READLINKAT
#define SYS_READLINKAT 0xffffffff811cbb00
#endif

#ifndef SYS_READLINKAT
#define SYS_READLINKAT 0xffffffff811cbb00
#endif

#ifndef SYS_READLINK
#define SYS_READLINK 0xffffffff811cbc20
#endif

#ifndef SYS_READLINK
#define SYS_READLINK 0xffffffff811cbc20
#endif

#ifndef __INODE_ADD_BYTES
#define __INODE_ADD_BYTES 0xffffffff811cbd40
#endif

#ifndef UNREGISTER_BINFMT
#define UNREGISTER_BINFMT 0xffffffff811cbd90
#endif

#ifndef SETUP_ARG_PAGES
#define SETUP_ARG_PAGES 0xffffffff811cbf60
#endif

#ifndef KERNEL_READ
#define KERNEL_READ 0xffffffff811cc190
#endif

#ifndef READ_CODE
#define READ_CODE 0xffffffff811cc1f0
#endif

#ifndef GET_TASK_COMM
#define GET_TASK_COMM 0xffffffff811cc210
#endif

#ifndef WOULD_DUMP
#define WOULD_DUMP 0xffffffff811cc260
#endif

#ifndef BPRM_CHANGE_INTERP
#define BPRM_CHANGE_INTERP 0xffffffff811cc290
#endif

#ifndef INSTALL_EXEC_CREDS
#define INSTALL_EXEC_CREDS 0xffffffff811cc2e0
#endif

#ifndef SET_BINFMT
#define SET_BINFMT 0xffffffff811cc3e0
#endif

#ifndef __REGISTER_BINFMT
#define __REGISTER_BINFMT 0xffffffff811cc470
#endif

#ifndef COPY_STRINGS_KERNEL
#define COPY_STRINGS_KERNEL 0xffffffff811cc820
#endif

#ifndef PREPARE_BINPRM
#define PREPARE_BINPRM 0xffffffff811cc870
#endif

#ifndef SEARCH_BINARY_HANDLER
#define SEARCH_BINARY_HANDLER 0xffffffff811cca00
#endif

#ifndef REMOVE_ARG_ZERO
#define REMOVE_ARG_ZERO 0xffffffff811ccca0
#endif

#ifndef OPEN_EXEC
#define OPEN_EXEC 0xffffffff811ccf10
#endif

#ifndef FLUSH_OLD_EXEC
#define FLUSH_OLD_EXEC 0xffffffff811ccf60
#endif

#ifndef SYS_USELIB
#define SYS_USELIB 0xffffffff811cd830
#endif

#ifndef SYS_USELIB
#define SYS_USELIB 0xffffffff811cd830
#endif

#ifndef __SET_TASK_COMM
#define __SET_TASK_COMM 0xffffffff811cd990
#endif

#ifndef PREPARE_BPRM_CREDS
#define PREPARE_BPRM_CREDS 0xffffffff811cda20
#endif

#ifndef DO_EXECVE
#define DO_EXECVE 0xffffffff811ce210
#endif

#ifndef DO_EXECVEAT
#define DO_EXECVEAT 0xffffffff811ce240
#endif

#ifndef SET_DUMPABLE
#define SET_DUMPABLE 0xffffffff811ce270
#endif

#ifndef SETUP_NEW_EXEC
#define SETUP_NEW_EXEC 0xffffffff811ce2d0
#endif

#ifndef SYS_EXECVE
#define SYS_EXECVE 0xffffffff811ce510
#endif

#ifndef SYS_EXECVE
#define SYS_EXECVE 0xffffffff811ce510
#endif

#ifndef SYS_EXECVEAT
#define SYS_EXECVEAT 0xffffffff811ce550
#endif

#ifndef SYS_EXECVEAT
#define SYS_EXECVEAT 0xffffffff811ce550
#endif

#ifndef COMPAT_SYS_EXECVE
#define COMPAT_SYS_EXECVE 0xffffffff811ce5b0
#endif

#ifndef COMPAT_SYS_EXECVE
#define COMPAT_SYS_EXECVE 0xffffffff811ce5b0
#endif

#ifndef COMPAT_SYS_EXECVEAT
#define COMPAT_SYS_EXECVEAT 0xffffffff811ce600
#endif

#ifndef COMPAT_SYS_EXECVEAT
#define COMPAT_SYS_EXECVEAT 0xffffffff811ce600
#endif

#ifndef GENERIC_PIPE_BUF_CONFIRM
#define GENERIC_PIPE_BUF_CONFIRM 0xffffffff811ce670
#endif

#ifndef PIPE_LOCK
#define PIPE_LOCK 0xffffffff811ce710
#endif

#ifndef PIPE_UNLOCK
#define PIPE_UNLOCK 0xffffffff811ce740
#endif

#ifndef GENERIC_PIPE_BUF_GET
#define GENERIC_PIPE_BUF_GET 0xffffffff811ce800
#endif

#ifndef GENERIC_PIPE_BUF_RELEASE
#define GENERIC_PIPE_BUF_RELEASE 0xffffffff811ce830
#endif

#ifndef GENERIC_PIPE_BUF_STEAL
#define GENERIC_PIPE_BUF_STEAL 0xffffffff811ce9b0
#endif

#ifndef PIPE_DOUBLE_LOCK
#define PIPE_DOUBLE_LOCK 0xffffffff811cea10
#endif

#ifndef PIPE_WAIT
#define PIPE_WAIT 0xffffffff811ceaa0
#endif

#ifndef ALLOC_PIPE_INFO
#define ALLOC_PIPE_INFO 0xffffffff811cf330
#endif

#ifndef FREE_PIPE_INFO
#define FREE_PIPE_INFO 0xffffffff811cf3e0
#endif

#ifndef CREATE_PIPE_FILES
#define CREATE_PIPE_FILES 0xffffffff811cf840
#endif

#ifndef DO_PIPE_FLAGS
#define DO_PIPE_FLAGS 0xffffffff811cfb30
#endif

#ifndef SYS_PIPE2
#define SYS_PIPE2 0xffffffff811cfb80
#endif

#ifndef SYS_PIPE2
#define SYS_PIPE2 0xffffffff811cfb80
#endif

#ifndef SYS_PIPE
#define SYS_PIPE 0xffffffff811cfc20
#endif

#ifndef SYS_PIPE
#define SYS_PIPE 0xffffffff811cfc20
#endif

#ifndef PIPE_PROC_FN
#define PIPE_PROC_FN 0xffffffff811cfcc0
#endif

#ifndef GET_PIPE_INFO
#define GET_PIPE_INFO 0xffffffff811cfd10
#endif

#ifndef PIPE_FCNTL
#define PIPE_FCNTL 0xffffffff811cfd30
#endif

#ifndef ND_SET_LINK
#define ND_SET_LINK 0xffffffff811cfef0
#endif

#ifndef ND_GET_LINK
#define ND_GET_LINK 0xffffffff811cff00
#endif

#ifndef PATH_GET
#define PATH_GET 0xffffffff811cff10
#endif

#ifndef PATH_PUT
#define PATH_PUT 0xffffffff811cffb0
#endif

#ifndef FOLLOW_UP
#define FOLLOW_UP 0xffffffff811cffd0
#endif

#ifndef FOLLOW_DOWN_ONE
#define FOLLOW_DOWN_ONE 0xffffffff811d0060
#endif

#ifndef FOLLOW_DOWN
#define FOLLOW_DOWN 0xffffffff811d00c0
#endif

#ifndef UNLOCK_RENAME
#define UNLOCK_RENAME 0xffffffff811d01f0
#endif

#ifndef DONE_PATH_CREATE
#define DONE_PATH_CREATE 0xffffffff811d09e0
#endif

#ifndef DENTRY_UNHASH
#define DENTRY_UNHASH 0xffffffff811d0a20
#endif

#ifndef READLINK_COPY
#define READLINK_COPY 0xffffffff811d0a60
#endif

#ifndef GENERIC_READLINK
#define GENERIC_READLINK 0xffffffff811d0ab0
#endif

#ifndef PAGE_PUT_LINK
#define PAGE_PUT_LINK 0xffffffff811d0b50
#endif

#ifndef __PAGE_SYMLINK
#define __PAGE_SYMLINK 0xffffffff811d0b80
#endif

#ifndef PAGE_SYMLINK
#define PAGE_SYMLINK 0xffffffff811d0c80
#endif

#ifndef __CHECK_STICKY
#define __CHECK_STICKY 0xffffffff811d0cb0
#endif

#ifndef GENERIC_PERMISSION
#define GENERIC_PERMISSION 0xffffffff811d0d00
#endif

#ifndef __INODE_PERMISSION
#define __INODE_PERMISSION 0xffffffff811d0ea0
#endif

#ifndef INODE_PERMISSION
#define INODE_PERMISSION 0xffffffff811d0f60
#endif

#ifndef LOCK_RENAME
#define LOCK_RENAME 0xffffffff811d1430
#endif

#ifndef PAGE_FOLLOW_LINK_LIGHT
#define PAGE_FOLLOW_LINK_LIGHT 0xffffffff811d15b0
#endif

#ifndef PAGE_READLINK
#define PAGE_READLINK 0xffffffff811d15f0
#endif

#ifndef FULL_NAME_HASH
#define FULL_NAME_HASH 0xffffffff811d1640
#endif

#ifndef LOOKUP_ONE_LEN
#define LOOKUP_ONE_LEN 0xffffffff811d16a0
#endif

#ifndef VFS_RMDIR
#define VFS_RMDIR 0xffffffff811d19b0
#endif

#ifndef VFS_WHITEOUT
#define VFS_WHITEOUT 0xffffffff811d1ad0
#endif

#ifndef VFS_MKDIR
#define VFS_MKDIR 0xffffffff811d1b80
#endif

#ifndef VFS_LINK
#define VFS_LINK 0xffffffff811d1cf0
#endif

#ifndef VFS_SYMLINK
#define VFS_SYMLINK 0xffffffff811d1fa0
#endif

#ifndef VFS_CREATE
#define VFS_CREATE 0xffffffff811d20c0
#endif

#ifndef VFS_MKNOD
#define VFS_MKNOD 0xffffffff811d21f0
#endif

#ifndef VFS_UNLINK
#define VFS_UNLINK 0xffffffff811d39f0
#endif

#ifndef VFS_RENAME
#define VFS_RENAME 0xffffffff811d6660
#endif

#ifndef GETNAME_KERNEL
#define GETNAME_KERNEL 0xffffffff811d6f40
#endif

#ifndef PUTNAME
#define PUTNAME 0xffffffff811d7070
#endif

#ifndef GETNAME_FLAGS
#define GETNAME_FLAGS 0xffffffff811d70d0
#endif

#ifndef GETNAME
#define GETNAME 0xffffffff811d72c0
#endif

#ifndef KERN_PATH
#define KERN_PATH 0xffffffff811d72e0
#endif

#ifndef VFS_PATH_LOOKUP
#define VFS_PATH_LOOKUP 0xffffffff811d7360
#endif

#ifndef KERN_PATH_MOUNTPOINT
#define KERN_PATH_MOUNTPOINT 0xffffffff811d74d0
#endif

#ifndef KERN_PATH_CREATE
#define KERN_PATH_CREATE 0xffffffff811d7500
#endif

#ifndef USER_PATH_CREATE
#define USER_PATH_CREATE 0xffffffff811d7560
#endif

#ifndef ND_JUMP_LINK
#define ND_JUMP_LINK 0xffffffff811d80d0
#endif

#ifndef KERN_PATH_LOCKED
#define KERN_PATH_LOCKED 0xffffffff811d8120
#endif

#ifndef USER_PATH_AT_EMPTY
#define USER_PATH_AT_EMPTY 0xffffffff811d8220
#endif

#ifndef USER_PATH_AT
#define USER_PATH_AT 0xffffffff811d82c0
#endif

#ifndef USER_PATH_MOUNTPOINT_AT
#define USER_PATH_MOUNTPOINT_AT 0xffffffff811d82e0
#endif

#ifndef DO_FILP_OPEN
#define DO_FILP_OPEN 0xffffffff811d8320
#endif

#ifndef DO_FILE_OPEN_ROOT
#define DO_FILE_OPEN_ROOT 0xffffffff811d83c0
#endif

#ifndef SYS_MKNODAT
#define SYS_MKNODAT 0xffffffff811d84c0
#endif

#ifndef SYS_MKNODAT
#define SYS_MKNODAT 0xffffffff811d84c0
#endif

#ifndef SYS_MKNOD
#define SYS_MKNOD 0xffffffff811d86c0
#endif

#ifndef SYS_MKNOD
#define SYS_MKNOD 0xffffffff811d86c0
#endif

#ifndef SYS_MKDIRAT
#define SYS_MKDIRAT 0xffffffff811d88e0
#endif

#ifndef SYS_MKDIRAT
#define SYS_MKDIRAT 0xffffffff811d88e0
#endif

#ifndef SYS_MKDIR
#define SYS_MKDIR 0xffffffff811d89c0
#endif

#ifndef SYS_MKDIR
#define SYS_MKDIR 0xffffffff811d89c0
#endif

#ifndef SYS_RMDIR
#define SYS_RMDIR 0xffffffff811d8aa0
#endif

#ifndef SYS_RMDIR
#define SYS_RMDIR 0xffffffff811d8aa0
#endif

#ifndef SYS_UNLINKAT
#define SYS_UNLINKAT 0xffffffff811d8ac0
#endif

#ifndef SYS_UNLINKAT
#define SYS_UNLINKAT 0xffffffff811d8ac0
#endif

#ifndef SYS_UNLINK
#define SYS_UNLINK 0xffffffff811d8b00
#endif

#ifndef SYS_UNLINK
#define SYS_UNLINK 0xffffffff811d8b00
#endif

#ifndef SYS_SYMLINKAT
#define SYS_SYMLINKAT 0xffffffff811d8b20
#endif

#ifndef SYS_SYMLINKAT
#define SYS_SYMLINKAT 0xffffffff811d8b20
#endif

#ifndef SYS_SYMLINK
#define SYS_SYMLINK 0xffffffff811d8c10
#endif

#ifndef SYS_SYMLINK
#define SYS_SYMLINK 0xffffffff811d8c10
#endif

#ifndef SYS_LINKAT
#define SYS_LINKAT 0xffffffff811d8cf0
#endif

#ifndef SYS_LINKAT
#define SYS_LINKAT 0xffffffff811d8cf0
#endif

#ifndef SYS_LINK
#define SYS_LINK 0xffffffff811d9030
#endif

#ifndef SYS_LINK
#define SYS_LINK 0xffffffff811d9030
#endif

#ifndef SYS_RENAMEAT2
#define SYS_RENAMEAT2 0xffffffff811d92f0
#endif

#ifndef SYS_RENAMEAT2
#define SYS_RENAMEAT2 0xffffffff811d92f0
#endif

#ifndef SYS_RENAMEAT
#define SYS_RENAMEAT 0xffffffff811d9310
#endif

#ifndef SYS_RENAMEAT
#define SYS_RENAMEAT 0xffffffff811d9310
#endif

#ifndef SYS_RENAME
#define SYS_RENAME 0xffffffff811d9330
#endif

#ifndef SYS_RENAME
#define SYS_RENAME 0xffffffff811d9330
#endif

#ifndef __F_SETOWN
#define __F_SETOWN 0xffffffff811d9410
#endif

#ifndef F_SETOWN
#define F_SETOWN 0xffffffff811d9450
#endif

#ifndef F_DELOWN
#define F_DELOWN 0xffffffff811d95e0
#endif

#ifndef F_GETOWN
#define F_GETOWN 0xffffffff811d9600
#endif

#ifndef SYS_FCNTL
#define SYS_FCNTL 0xffffffff811d9640
#endif

#ifndef SYS_FCNTL
#define SYS_FCNTL 0xffffffff811d9640
#endif

#ifndef SEND_SIGIO
#define SEND_SIGIO 0xffffffff811d9c40
#endif

#ifndef KILL_FASYNC
#define KILL_FASYNC 0xffffffff811d9d40
#endif

#ifndef SEND_SIGURG
#define SEND_SIGURG 0xffffffff811d9de0
#endif

#ifndef FASYNC_REMOVE_ENTRY
#define FASYNC_REMOVE_ENTRY 0xffffffff811d9f10
#endif

#ifndef FASYNC_ALLOC
#define FASYNC_ALLOC 0xffffffff811d9fd0
#endif

#ifndef FASYNC_FREE
#define FASYNC_FREE 0xffffffff811d9ff0
#endif

#ifndef FASYNC_INSERT_ENTRY
#define FASYNC_INSERT_ENTRY 0xffffffff811da010
#endif

#ifndef FASYNC_HELPER
#define FASYNC_HELPER 0xffffffff811da0d0
#endif

#ifndef FIEMAP_CHECK_FLAGS
#define FIEMAP_CHECK_FLAGS 0xffffffff811da160
#endif

#ifndef FIEMAP_FILL_NEXT_EXTENT
#define FIEMAP_FILL_NEXT_EXTENT 0xffffffff811da180
#endif

#ifndef __GENERIC_BLOCK_FIEMAP
#define __GENERIC_BLOCK_FIEMAP 0xffffffff811da280
#endif

#ifndef GENERIC_BLOCK_FIEMAP
#define GENERIC_BLOCK_FIEMAP 0xffffffff811da530
#endif

#ifndef IOCTL_PREALLOCATE
#define IOCTL_PREALLOCATE 0xffffffff811da590
#endif

#ifndef DO_VFS_IOCTL
#define DO_VFS_IOCTL 0xffffffff811da630
#endif

#ifndef SYS_IOCTL
#define SYS_IOCTL 0xffffffff811dab20
#endif

#ifndef SYS_IOCTL
#define SYS_IOCTL 0xffffffff811dab20
#endif

#ifndef ITERATE_DIR
#define ITERATE_DIR 0xffffffff811dabc0
#endif

#ifndef SYS_OLD_READDIR
#define SYS_OLD_READDIR 0xffffffff811daf90
#endif

#ifndef SYS_OLD_READDIR
#define SYS_OLD_READDIR 0xffffffff811daf90
#endif

#ifndef SYS_GETDENTS
#define SYS_GETDENTS 0xffffffff811db020
#endif

#ifndef SYS_GETDENTS
#define SYS_GETDENTS 0xffffffff811db020
#endif

#ifndef SYS_GETDENTS64
#define SYS_GETDENTS64 0xffffffff811db120
#endif

#ifndef SYS_GETDENTS64
#define SYS_GETDENTS64 0xffffffff811db120
#endif

#ifndef POLL_INITWAIT
#define POLL_INITWAIT 0xffffffff811db220
#endif

#ifndef POLL_SCHEDULE_TIMEOUT
#define POLL_SCHEDULE_TIMEOUT 0xffffffff811db360
#endif

#ifndef POLL_FREEWAIT
#define POLL_FREEWAIT 0xffffffff811db5b0
#endif

#ifndef SELECT_ESTIMATE_ACCURACY
#define SELECT_ESTIMATE_ACCURACY 0xffffffff811db660
#endif

#ifndef POLL_SELECT_SET_TIMEOUT
#define POLL_SELECT_SET_TIMEOUT 0xffffffff811db770
#endif

#ifndef DO_SELECT
#define DO_SELECT 0xffffffff811db7e0
#endif

#ifndef CORE_SYS_SELECT
#define CORE_SYS_SELECT 0xffffffff811dbf60
#endif

#ifndef SYS_SELECT
#define SYS_SELECT 0xffffffff811dc200
#endif

#ifndef SYS_SELECT
#define SYS_SELECT 0xffffffff811dc200
#endif

#ifndef SYS_PSELECT6
#define SYS_PSELECT6 0xffffffff811dc2f0
#endif

#ifndef SYS_PSELECT6
#define SYS_PSELECT6 0xffffffff811dc2f0
#endif

#ifndef DO_SYS_POLL
#define DO_SYS_POLL 0xffffffff811dc540
#endif

#ifndef SYS_POLL
#define SYS_POLL 0xffffffff811dcae0
#endif

#ifndef SYS_POLL
#define SYS_POLL 0xffffffff811dcae0
#endif

#ifndef SYS_PPOLL
#define SYS_PPOLL 0xffffffff811dcbe0
#endif

#ifndef SYS_PPOLL
#define SYS_PPOLL 0xffffffff811dcbe0
#endif

#ifndef D_SET_FALLTHRU
#define D_SET_FALLTHRU 0xffffffff811dcf00
#endif

#ifndef D_SET_D_OP
#define D_SET_D_OP 0xffffffff811dcfa0
#endif

#ifndef D_FIND_ANY_ALIAS
#define D_FIND_ANY_ALIAS 0xffffffff811dd260
#endif

#ifndef SIMPLE_DNAME
#define SIMPLE_DNAME 0xffffffff811dd2c0
#endif

#ifndef D_FIND_ALIAS
#define D_FIND_ALIAS 0xffffffff811dd380
#endif

#ifndef DENTRY_UPDATE_NAME_CASE
#define DENTRY_UPDATE_NAME_CASE 0xffffffff811dd650
#endif

#ifndef D_REHASH
#define D_REHASH 0xffffffff811dd830
#endif

#ifndef HAVE_SUBMOUNTS
#define HAVE_SUBMOUNTS 0xffffffff811ddb50
#endif

#ifndef D_GENOCIDE
#define D_GENOCIDE 0xffffffff811ddb80
#endif

#ifndef __D_DROP
#define __D_DROP 0xffffffff811ddba0
#endif

#ifndef D_DROP
#define D_DROP 0xffffffff811ddc70
#endif

#ifndef DPUT
#define DPUT 0xffffffff811dde90
#endif

#ifndef DGET_PARENT
#define DGET_PARENT 0xffffffff811de0b0
#endif

#ifndef D_DELETE
#define D_DELETE 0xffffffff811de140
#endif

#ifndef DENTRY_PATH_RAW
#define DENTRY_PATH_RAW 0xffffffff811de440
#endif

#ifndef D_PRUNE_ALIASES
#define D_PRUNE_ALIASES 0xffffffff811de460
#endif

#ifndef D_PATH
#define D_PATH 0xffffffff811de7d0
#endif

#ifndef SHRINK_DCACHE_SB
#define SHRINK_DCACHE_SB 0xffffffff811debb0
#endif

#ifndef SHRINK_DCACHE_PARENT
#define SHRINK_DCACHE_PARENT 0xffffffff811decc0
#endif

#ifndef D_INVALIDATE
#define D_INVALIDATE 0xffffffff811ded60
#endif

#ifndef D_INSTANTIATE
#define D_INSTANTIATE 0xffffffff811def60
#endif

#ifndef D_TMPFILE
#define D_TMPFILE 0xffffffff811defd0
#endif

#ifndef D_INSTANTIATE_NO_DIRALIAS
#define D_INSTANTIATE_NO_DIRALIAS 0xffffffff811df070
#endif

#ifndef D_INSTANTIATE_UNIQUE
#define D_INSTANTIATE_UNIQUE 0xffffffff811df100
#endif

#ifndef D_MOVE
#define D_MOVE 0xffffffff811df770
#endif

#ifndef D_SPLICE_ALIAS
#define D_SPLICE_ALIAS 0xffffffff811df7c0
#endif

#ifndef PROC_NR_DENTRY
#define PROC_NR_DENTRY 0xffffffff811dfa60
#endif

#ifndef PRUNE_DCACHE_SB
#define PRUNE_DCACHE_SB 0xffffffff811dfb60
#endif

#ifndef D_SET_MOUNTED
#define D_SET_MOUNTED 0xffffffff811dfbb0
#endif

#ifndef SHRINK_DCACHE_FOR_UMOUNT
#define SHRINK_DCACHE_FOR_UMOUNT 0xffffffff811dfc60
#endif

#ifndef __D_ALLOC
#define __D_ALLOC 0xffffffff811dfcf0
#endif

#ifndef D_ALLOC
#define D_ALLOC 0xffffffff811dfe70
#endif

#ifndef D_ALLOC_NAME
#define D_ALLOC_NAME 0xffffffff811dfee0
#endif

#ifndef D_ALLOC_PSEUDO
#define D_ALLOC_PSEUDO 0xffffffff811dff30
#endif

#ifndef D_MAKE_ROOT
#define D_MAKE_ROOT 0xffffffff811dff50
#endif

#ifndef D_OBTAIN_ALIAS
#define D_OBTAIN_ALIAS 0xffffffff811e0180
#endif

#ifndef D_OBTAIN_ROOT
#define D_OBTAIN_ROOT 0xffffffff811e01a0
#endif

#ifndef __D_LOOKUP_RCU
#define __D_LOOKUP_RCU 0xffffffff811e01c0
#endif

#ifndef __D_LOOKUP
#define __D_LOOKUP 0xffffffff811e0330
#endif

#ifndef D_LOOKUP
#define D_LOOKUP 0xffffffff811e0480
#endif

#ifndef D_HASH_AND_LOOKUP
#define D_HASH_AND_LOOKUP 0xffffffff811e04d0
#endif

#ifndef D_ADD_CI
#define D_ADD_CI 0xffffffff811e0530
#endif

#ifndef D_EXCHANGE
#define D_EXCHANGE 0xffffffff811e05c0
#endif

#ifndef D_ANCESTOR
#define D_ANCESTOR 0xffffffff811e06b0
#endif

#ifndef __D_PATH
#define __D_PATH 0xffffffff811e06e0
#endif

#ifndef D_ABSOLUTE_PATH
#define D_ABSOLUTE_PATH 0xffffffff811e0750
#endif

#ifndef DYNAMIC_DNAME
#define DYNAMIC_DNAME 0xffffffff811e07e0
#endif

#ifndef DENTRY_PATH
#define DENTRY_PATH 0xffffffff811e08a0
#endif

#ifndef SYS_GETCWD
#define SYS_GETCWD 0xffffffff811e0920
#endif

#ifndef SYS_GETCWD
#define SYS_GETCWD 0xffffffff811e0920
#endif

#ifndef IS_SUBDIR
#define IS_SUBDIR 0xffffffff811e0ac0
#endif

#ifndef GENERIC_DELETE_INODE
#define GENERIC_DELETE_INODE 0xffffffff811e0b30
#endif

#ifndef BMAP
#define BMAP 0xffffffff811e0b40
#endif

#ifndef INODE_NEEDS_SYNC
#define INODE_NEEDS_SYNC 0xffffffff811e0b70
#endif

#ifndef INODE_INIT_OWNER
#define INODE_INIT_OWNER 0xffffffff811e0bc0
#endif

#ifndef INODE_INIT_ALWAYS
#define INODE_INIT_ALWAYS 0xffffffff811e0ca0
#endif

#ifndef FREE_INODE_NONRCU
#define FREE_INODE_NONRCU 0xffffffff811e0e50
#endif

#ifndef GET_NEXT_INO
#define GET_NEXT_INO 0xffffffff811e0e90
#endif

#ifndef INC_NLINK
#define INC_NLINK 0xffffffff811e0ed0
#endif

#ifndef INODE_SET_FLAGS
#define INODE_SET_FLAGS 0xffffffff811e0f30
#endif

#ifndef ADDRESS_SPACE_INIT_ONCE
#define ADDRESS_SPACE_INIT_ONCE 0xffffffff811e0fa0
#endif

#ifndef INODE_INIT_ONCE
#define INODE_INIT_ONCE 0xffffffff811e1040
#endif

#ifndef INODE_SB_LIST_ADD
#define INODE_SB_LIST_ADD 0xffffffff811e1110
#endif

#ifndef __INSERT_INODE_HASH
#define __INSERT_INODE_HASH 0xffffffff811e1170
#endif

#ifndef __REMOVE_INODE_HASH
#define __REMOVE_INODE_HASH 0xffffffff811e1210
#endif

#ifndef IUNIQUE
#define IUNIQUE 0xffffffff811e1280
#endif

#ifndef FIND_INODE_NOWAIT
#define FIND_INODE_NOWAIT 0xffffffff811e1390
#endif

#ifndef IGRAB
#define IGRAB 0xffffffff811e1450
#endif

#ifndef CLEAR_INODE
#define CLEAR_INODE 0xffffffff811e14a0
#endif

#ifndef UNLOCK_NEW_INODE
#define UNLOCK_NEW_INODE 0xffffffff811e1580
#endif

#ifndef LOCK_TWO_NONDIRECTORIES
#define LOCK_TWO_NONDIRECTORIES 0xffffffff811e1690
#endif

#ifndef UNLOCK_TWO_NONDIRECTORIES
#define UNLOCK_TWO_NONDIRECTORIES 0xffffffff811e1700
#endif

#ifndef ILOOKUP5_NOWAIT
#define ILOOKUP5_NOWAIT 0xffffffff811e18c0
#endif

#ifndef INODE_DIO_WAIT
#define INODE_DIO_WAIT 0xffffffff811e1a00
#endif

#ifndef GENERIC_UPDATE_TIME
#define GENERIC_UPDATE_TIME 0xffffffff811e1ad0
#endif

#ifndef SHOULD_REMOVE_SUID
#define SHOULD_REMOVE_SUID 0xffffffff811e1ba0
#endif

#ifndef FILE_REMOVE_SUID
#define FILE_REMOVE_SUID 0xffffffff811e1c20
#endif

#ifndef FILE_UPDATE_TIME
#define FILE_UPDATE_TIME 0xffffffff811e1cd0
#endif

#ifndef CLEAR_NLINK
#define CLEAR_NLINK 0xffffffff811e1dc0
#endif

#ifndef TOUCH_ATIME
#define TOUCH_ATIME 0xffffffff811e1df0
#endif

#ifndef DROP_NLINK
#define DROP_NLINK 0xffffffff811e1f40
#endif

#ifndef IHOLD
#define IHOLD 0xffffffff811e1f90
#endif

#ifndef INIT_SPECIAL_INODE
#define INIT_SPECIAL_INODE 0xffffffff811e1fd0
#endif

#ifndef INODE_OWNER_OR_CAPABLE
#define INODE_OWNER_OR_CAPABLE 0xffffffff811e2070
#endif

#ifndef __DESTROY_INODE
#define __DESTROY_INODE 0xffffffff811e20f0
#endif

#ifndef ILOOKUP5
#define ILOOKUP5 0xffffffff811e2410
#endif

#ifndef ILOOKUP
#define ILOOKUP 0xffffffff811e2470
#endif

#ifndef IGET_LOCKED
#define IGET_LOCKED 0xffffffff811e2530
#endif

#ifndef IGET5_LOCKED
#define IGET5_LOCKED 0xffffffff811e26b0
#endif

#ifndef SET_NLINK
#define SET_NLINK 0xffffffff811e2890
#endif

#ifndef GET_NR_DIRTY_INODES
#define GET_NR_DIRTY_INODES 0xffffffff811e28e0
#endif

#ifndef PROC_NR_INODES
#define PROC_NR_INODES 0xffffffff811e2960
#endif

#ifndef __IGET
#define __IGET 0xffffffff811e2a20
#endif

#ifndef INODE_ADD_LRU
#define INODE_ADD_LRU 0xffffffff811e2a30
#endif

#ifndef IPUT
#define IPUT 0xffffffff811e2a90
#endif

#ifndef INSERT_INODE_LOCKED
#define INSERT_INODE_LOCKED 0xffffffff811e2e20
#endif

#ifndef INSERT_INODE_LOCKED4
#define INSERT_INODE_LOCKED4 0xffffffff811e2fd0
#endif

#ifndef EVICT_INODES
#define EVICT_INODES 0xffffffff811e3180
#endif

#ifndef INVALIDATE_INODES
#define INVALIDATE_INODES 0xffffffff811e3290
#endif

#ifndef PRUNE_ICACHE_SB
#define PRUNE_ICACHE_SB 0xffffffff811e33d0
#endif

#ifndef NEW_INODE_PSEUDO
#define NEW_INODE_PSEUDO 0xffffffff811e3420
#endif

#ifndef NEW_INODE
#define NEW_INODE 0xffffffff811e3470
#endif

#ifndef SETATTR_COPY
#define SETATTR_COPY 0xffffffff811e34a0
#endif

#ifndef INODE_NEWSIZE_OK
#define INODE_NEWSIZE_OK 0xffffffff811e35c0
#endif

#ifndef INODE_CHANGE_OK
#define INODE_CHANGE_OK 0xffffffff811e3640
#endif

#ifndef NOTIFY_CHANGE
#define NOTIFY_CHANGE 0xffffffff811e37d0
#endif

#ifndef IS_BAD_INODE
#define IS_BAD_INODE 0xffffffff811e3c90
#endif

#ifndef MAKE_BAD_INODE
#define MAKE_BAD_INODE 0xffffffff811e3cb0
#endif

#ifndef IGET_FAILED
#define IGET_FAILED 0xffffffff811e3d10
#endif

#ifndef FGET
#define FGET 0xffffffff811e3dc0
#endif

#ifndef FGET_RAW
#define FGET_RAW 0xffffffff811e3dd0
#endif

#ifndef PUT_UNUSED_FD
#define PUT_UNUSED_FD 0xffffffff811e3f40
#endif

#ifndef ITERATE_FD
#define ITERATE_FD 0xffffffff811e3f90
#endif

#ifndef __FDGET
#define __FDGET 0xffffffff811e4270
#endif

#ifndef DUP_FD
#define DUP_FD 0xffffffff811e4280
#endif

#ifndef GET_FILES_STRUCT
#define GET_FILES_STRUCT 0xffffffff811e4530
#endif

#ifndef PUT_FILES_STRUCT
#define PUT_FILES_STRUCT 0xffffffff811e4560
#endif

#ifndef RESET_FILES_STRUCT
#define RESET_FILES_STRUCT 0xffffffff811e4650
#endif

#ifndef EXIT_FILES
#define EXIT_FILES 0xffffffff811e46a0
#endif

#ifndef __ALLOC_FD
#define __ALLOC_FD 0xffffffff811e4700
#endif

#ifndef GET_UNUSED_FD_FLAGS
#define GET_UNUSED_FD_FLAGS 0xffffffff811e4820
#endif

#ifndef __FD_INSTALL
#define __FD_INSTALL 0xffffffff811e4860
#endif

#ifndef FD_INSTALL
#define FD_INSTALL 0xffffffff811e48b0
#endif

#ifndef __CLOSE_FD
#define __CLOSE_FD 0xffffffff811e48e0
#endif

#ifndef DO_CLOSE_ON_EXEC
#define DO_CLOSE_ON_EXEC 0xffffffff811e4970
#endif

#ifndef __FDGET_RAW
#define __FDGET_RAW 0xffffffff811e4a70
#endif

#ifndef __FDGET_POS
#define __FDGET_POS 0xffffffff811e4a80
#endif

#ifndef SET_CLOSE_ON_EXEC
#define SET_CLOSE_ON_EXEC 0xffffffff811e4ad0
#endif

#ifndef GET_CLOSE_ON_EXEC
#define GET_CLOSE_ON_EXEC 0xffffffff811e4b20
#endif

#ifndef REPLACE_FD
#define REPLACE_FD 0xffffffff811e4b50
#endif

#ifndef SYS_DUP3
#define SYS_DUP3 0xffffffff811e4c30
#endif

#ifndef SYS_DUP3
#define SYS_DUP3 0xffffffff811e4c30
#endif

#ifndef SYS_DUP2
#define SYS_DUP2 0xffffffff811e4d60
#endif

#ifndef SYS_DUP2
#define SYS_DUP2 0xffffffff811e4d60
#endif

#ifndef SYS_DUP
#define SYS_DUP 0xffffffff811e4ea0
#endif

#ifndef SYS_DUP
#define SYS_DUP 0xffffffff811e4ea0
#endif

#ifndef F_DUPFD
#define F_DUPFD 0xffffffff811e4f10
#endif

#ifndef UNREGISTER_FILESYSTEM
#define UNREGISTER_FILESYSTEM 0xffffffff811e5020
#endif

#ifndef GET_FS_TYPE
#define GET_FS_TYPE 0xffffffff811e51a0
#endif

#ifndef REGISTER_FILESYSTEM
#define REGISTER_FILESYSTEM 0xffffffff811e5250
#endif

#ifndef GET_FILESYSTEM
#define GET_FILESYSTEM 0xffffffff811e52d0
#endif

#ifndef PUT_FILESYSTEM
#define PUT_FILESYSTEM 0xffffffff811e52f0
#endif

#ifndef SYS_SYSFS
#define SYS_SYSFS 0xffffffff811e5310
#endif

#ifndef SYS_SYSFS
#define SYS_SYSFS 0xffffffff811e5310
#endif

#ifndef MNTGET
#define MNTGET 0xffffffff811e5550
#endif

#ifndef MNT_DROP_WRITE
#define MNT_DROP_WRITE 0xffffffff811e5590
#endif

#ifndef MNT_DROP_WRITE_FILE
#define MNT_DROP_WRITE_FILE 0xffffffff811e55c0
#endif

#ifndef GENERIC_SHOW_OPTIONS
#define GENERIC_SHOW_OPTIONS 0xffffffff811e5710
#endif

#ifndef REPLACE_MOUNT_OPTIONS
#define REPLACE_MOUNT_OPTIONS 0xffffffff811e5760
#endif

#ifndef MAY_UMOUNT
#define MAY_UMOUNT 0xffffffff811e5880
#endif

#ifndef MNT_SET_EXPIRY
#define MNT_SET_EXPIRY 0xffffffff811e59a0
#endif

#ifndef __MNT_IS_READONLY
#define __MNT_IS_READONLY 0xffffffff811e5b00
#endif

#ifndef VFS_KERN_MOUNT
#define VFS_KERN_MOUNT 0xffffffff811e5dd0
#endif

#ifndef KERN_MOUNT_DATA
#define KERN_MOUNT_DATA 0xffffffff811e5ee0
#endif

#ifndef CLONE_PRIVATE_MOUNT
#define CLONE_PRIVATE_MOUNT 0xffffffff811e6240
#endif

#ifndef MARK_MOUNTS_FOR_EXPIRY
#define MARK_MOUNTS_FOR_EXPIRY 0xffffffff811e6760
#endif

#ifndef SAVE_MOUNT_OPTIONS
#define SAVE_MOUNT_OPTIONS 0xffffffff811e68c0
#endif

#ifndef MNT_CLONE_WRITE
#define MNT_CLONE_WRITE 0xffffffff811e6a80
#endif

#ifndef MNT_RELEASE_GROUP_ID
#define MNT_RELEASE_GROUP_ID 0xffffffff811e6ab0
#endif

#ifndef MNT_GET_COUNT
#define MNT_GET_COUNT 0xffffffff811e6c70
#endif

#ifndef MNTPUT
#define MNTPUT 0xffffffff811e6e50
#endif

#ifndef KERN_UNMOUNT
#define KERN_UNMOUNT 0xffffffff811e6f40
#endif

#ifndef MAY_UMOUNT_TREE
#define MAY_UMOUNT_TREE 0xffffffff811e6f80
#endif

#ifndef __MNT_WANT_WRITE
#define __MNT_WANT_WRITE 0xffffffff811e7370
#endif

#ifndef MNT_WANT_WRITE
#define MNT_WANT_WRITE 0xffffffff811e73d0
#endif

#ifndef __MNT_WANT_WRITE_FILE
#define __MNT_WANT_WRITE_FILE 0xffffffff811e7420
#endif

#ifndef MNT_WANT_WRITE_FILE
#define MNT_WANT_WRITE_FILE 0xffffffff811e7440
#endif

#ifndef __MNT_DROP_WRITE
#define __MNT_DROP_WRITE 0xffffffff811e7490
#endif

#ifndef __MNT_DROP_WRITE_FILE
#define __MNT_DROP_WRITE_FILE 0xffffffff811e74a0
#endif

#ifndef SB_PREPARE_REMOUNT_READONLY
#define SB_PREPARE_REMOUNT_READONLY 0xffffffff811e74c0
#endif

#ifndef LEGITIMIZE_MNT
#define LEGITIMIZE_MNT 0xffffffff811e75a0
#endif

#ifndef __LOOKUP_MNT
#define __LOOKUP_MNT 0xffffffff811e7600
#endif

#ifndef __LOOKUP_MNT_LAST
#define __LOOKUP_MNT_LAST 0xffffffff811e7670
#endif

#ifndef LOOKUP_MNT
#define LOOKUP_MNT 0xffffffff811e76f0
#endif

#ifndef __IS_LOCAL_MOUNTPOINT
#define __IS_LOCAL_MOUNTPOINT 0xffffffff811e7930
#endif

#ifndef MNT_SET_MOUNTPOINT
#define MNT_SET_MOUNTPOINT 0xffffffff811e79e0
#endif

#ifndef MNT_CLONE_INTERNAL
#define MNT_CLONE_INTERNAL 0xffffffff811e7e80
#endif

#ifndef __DETACH_MOUNTS
#define __DETACH_MOUNTS 0xffffffff811e7ec0
#endif

#ifndef SYS_UMOUNT
#define SYS_UMOUNT 0xffffffff811e7f90
#endif

#ifndef SYS_UMOUNT
#define SYS_UMOUNT 0xffffffff811e7f90
#endif

#ifndef SYS_OLDUMOUNT
#define SYS_OLDUMOUNT 0xffffffff811e80b0
#endif

#ifndef SYS_OLDUMOUNT
#define SYS_OLDUMOUNT 0xffffffff811e80b0
#endif

#ifndef TO_MNT_NS
#define TO_MNT_NS 0xffffffff811e8180
#endif

#ifndef COPY_TREE
#define COPY_TREE 0xffffffff811e8190
#endif

#ifndef COLLECT_MOUNTS
#define COLLECT_MOUNTS 0xffffffff811e8510
#endif

#ifndef DROP_COLLECTED_MOUNTS
#define DROP_COLLECTED_MOUNTS 0xffffffff811e8590
#endif

#ifndef ITERATE_MOUNTS
#define ITERATE_MOUNTS 0xffffffff811e85e0
#endif

#ifndef FINISH_AUTOMOUNT
#define FINISH_AUTOMOUNT 0xffffffff811e8660
#endif

#ifndef COPY_MOUNT_OPTIONS
#define COPY_MOUNT_OPTIONS 0xffffffff811e8720
#endif

#ifndef COPY_MOUNT_STRING
#define COPY_MOUNT_STRING 0xffffffff811e8960
#endif

#ifndef DO_MOUNT
#define DO_MOUNT 0xffffffff811e8990
#endif

#ifndef COPY_MNT_NS
#define COPY_MNT_NS 0xffffffff811e9660
#endif

#ifndef SYS_MOUNT
#define SYS_MOUNT 0xffffffff811e98f0
#endif

#ifndef SYS_MOUNT
#define SYS_MOUNT 0xffffffff811e98f0
#endif

#ifndef IS_PATH_REACHABLE
#define IS_PATH_REACHABLE 0xffffffff811e99c0
#endif

#ifndef PATH_IS_UNDER
#define PATH_IS_UNDER 0xffffffff811e9a30
#endif

#ifndef SYS_PIVOT_ROOT
#define SYS_PIVOT_ROOT 0xffffffff811e9a80
#endif

#ifndef SYS_PIVOT_ROOT
#define SYS_PIVOT_ROOT 0xffffffff811e9a80
#endif

#ifndef PUT_MNT_NS
#define PUT_MNT_NS 0xffffffff811e9e10
#endif

#ifndef MOUNT_SUBTREE
#define MOUNT_SUBTREE 0xffffffff811e9e40
#endif

#ifndef OUR_MNT
#define OUR_MNT 0xffffffff811ea010
#endif

#ifndef CURRENT_CHROOTED
#define CURRENT_CHROOTED 0xffffffff811ea040
#endif

#ifndef SEQ_PUTC
#define SEQ_PUTC 0xffffffff811ea140
#endif

#ifndef SEQ_LIST_START
#define SEQ_LIST_START 0xffffffff811ea170
#endif

#ifndef SEQ_LIST_NEXT
#define SEQ_LIST_NEXT 0xffffffff811ea1a0
#endif

#ifndef SEQ_HLIST_START
#define SEQ_HLIST_START 0xffffffff811ea1c0
#endif

#ifndef SEQ_HLIST_NEXT
#define SEQ_HLIST_NEXT 0xffffffff811ea200
#endif

#ifndef SEQ_HLIST_START_RCU
#define SEQ_HLIST_START_RCU 0xffffffff811ea220
#endif

#ifndef SEQ_HLIST_NEXT_RCU
#define SEQ_HLIST_NEXT_RCU 0xffffffff811ea260
#endif

#ifndef SEQ_OPEN
#define SEQ_OPEN 0xffffffff811ea280
#endif

#ifndef SEQ_LSEEK
#define SEQ_LSEEK 0xffffffff811ea580
#endif

#ifndef SEQ_READ
#define SEQ_READ 0xffffffff811ea680
#endif

#ifndef SEQ_RELEASE
#define SEQ_RELEASE 0xffffffff811eaa40
#endif

#ifndef SINGLE_OPEN
#define SINGLE_OPEN 0xffffffff811eaa70
#endif

#ifndef SINGLE_OPEN_SIZE
#define SINGLE_OPEN_SIZE 0xffffffff811eab20
#endif

#ifndef SINGLE_RELEASE
#define SINGLE_RELEASE 0xffffffff811eabb0
#endif

#ifndef SEQ_RELEASE_PRIVATE
#define SEQ_RELEASE_PRIVATE 0xffffffff811eabf0
#endif

#ifndef SEQ_ESCAPE
#define SEQ_ESCAPE 0xffffffff811eac40
#endif

#ifndef MANGLE_PATH
#define MANGLE_PATH 0xffffffff811ead50
#endif

#ifndef SEQ_VPRINTF
#define SEQ_VPRINTF 0xffffffff811eae10
#endif

#ifndef SEQ_PRINTF
#define SEQ_PRINTF 0xffffffff811eae70
#endif

#ifndef SEQ_PUTS
#define SEQ_PUTS 0xffffffff811eaec0
#endif

#ifndef SEQ_WRITE
#define SEQ_WRITE 0xffffffff811eaf20
#endif

#ifndef SEQ_HLIST_START_PERCPU
#define SEQ_HLIST_START_PERCPU 0xffffffff811eaf70
#endif

#ifndef SEQ_LIST_START_HEAD
#define SEQ_LIST_START_HEAD 0xffffffff811eb010
#endif

#ifndef SEQ_HLIST_START_HEAD
#define SEQ_HLIST_START_HEAD 0xffffffff811eb050
#endif

#ifndef SEQ_HLIST_START_HEAD_RCU
#define SEQ_HLIST_START_HEAD_RCU 0xffffffff811eb0a0
#endif

#ifndef SEQ_PAD
#define SEQ_PAD 0xffffffff811eb0f0
#endif

#ifndef SEQ_PUT_DECIMAL_ULL
#define SEQ_PUT_DECIMAL_ULL 0xffffffff811eb150
#endif

#ifndef SEQ_PUT_DECIMAL_LL
#define SEQ_PUT_DECIMAL_LL 0xffffffff811eb1e0
#endif

#ifndef SEQ_HLIST_NEXT_PERCPU
#define SEQ_HLIST_NEXT_PERCPU 0xffffffff811eb250
#endif

#ifndef __SEQ_OPEN_PRIVATE
#define __SEQ_OPEN_PRIVATE 0xffffffff811eb320
#endif

#ifndef SEQ_OPEN_PRIVATE
#define SEQ_OPEN_PRIVATE 0xffffffff811eb380
#endif

#ifndef SEQ_PATH
#define SEQ_PATH 0xffffffff811eb3a0
#endif

#ifndef SEQ_PATH_ROOT
#define SEQ_PATH_ROOT 0xffffffff811eb450
#endif

#ifndef SEQ_DENTRY
#define SEQ_DENTRY 0xffffffff811eb520
#endif

#ifndef GENERIC_GETXATTR
#define GENERIC_GETXATTR 0xffffffff811eb640
#endif

#ifndef GENERIC_LISTXATTR
#define GENERIC_LISTXATTR 0xffffffff811eb6b0
#endif

#ifndef GENERIC_SETXATTR
#define GENERIC_SETXATTR 0xffffffff811eb790
#endif

#ifndef GENERIC_REMOVEXATTR
#define GENERIC_REMOVEXATTR 0xffffffff811eb810
#endif

#ifndef XATTR_GETSECURITY
#define XATTR_GETSECURITY 0xffffffff811eb960
#endif

#ifndef VFS_GETXATTR
#define VFS_GETXATTR 0xffffffff811eba10
#endif

#ifndef VFS_LISTXATTR
#define VFS_LISTXATTR 0xffffffff811ebac0
#endif

#ifndef VFS_REMOVEXATTR
#define VFS_REMOVEXATTR 0xffffffff811ebf20
#endif

#ifndef __VFS_SETXATTR_NOPERM
#define __VFS_SETXATTR_NOPERM 0xffffffff811ec140
#endif

#ifndef VFS_SETXATTR
#define VFS_SETXATTR 0xffffffff811ec2f0
#endif

#ifndef VFS_GETXATTR_ALLOC
#define VFS_GETXATTR_ALLOC 0xffffffff811ec680
#endif

#ifndef VFS_XATTR_CMP
#define VFS_XATTR_CMP 0xffffffff811ec780
#endif

#ifndef SYS_SETXATTR
#define SYS_SETXATTR 0xffffffff811ec7f0
#endif

#ifndef SYS_SETXATTR
#define SYS_SETXATTR 0xffffffff811ec7f0
#endif

#ifndef SYS_LSETXATTR
#define SYS_LSETXATTR 0xffffffff811ec810
#endif

#ifndef SYS_LSETXATTR
#define SYS_LSETXATTR 0xffffffff811ec810
#endif

#ifndef SYS_FSETXATTR
#define SYS_FSETXATTR 0xffffffff811ec830
#endif

#ifndef SYS_FSETXATTR
#define SYS_FSETXATTR 0xffffffff811ec830
#endif

#ifndef SYS_GETXATTR
#define SYS_GETXATTR 0xffffffff811ec910
#endif

#ifndef SYS_GETXATTR
#define SYS_GETXATTR 0xffffffff811ec910
#endif

#ifndef SYS_LGETXATTR
#define SYS_LGETXATTR 0xffffffff811ec930
#endif

#ifndef SYS_LGETXATTR
#define SYS_LGETXATTR 0xffffffff811ec930
#endif

#ifndef SYS_FGETXATTR
#define SYS_FGETXATTR 0xffffffff811ec950
#endif

#ifndef SYS_FGETXATTR
#define SYS_FGETXATTR 0xffffffff811ec950
#endif

#ifndef SYS_LISTXATTR
#define SYS_LISTXATTR 0xffffffff811eca00
#endif

#ifndef SYS_LISTXATTR
#define SYS_LISTXATTR 0xffffffff811eca00
#endif

#ifndef SYS_LLISTXATTR
#define SYS_LLISTXATTR 0xffffffff811eca20
#endif

#ifndef SYS_LLISTXATTR
#define SYS_LLISTXATTR 0xffffffff811eca20
#endif

#ifndef SYS_FLISTXATTR
#define SYS_FLISTXATTR 0xffffffff811eca40
#endif

#ifndef SYS_FLISTXATTR
#define SYS_FLISTXATTR 0xffffffff811eca40
#endif

#ifndef SYS_REMOVEXATTR
#define SYS_REMOVEXATTR 0xffffffff811ecae0
#endif

#ifndef SYS_REMOVEXATTR
#define SYS_REMOVEXATTR 0xffffffff811ecae0
#endif

#ifndef SYS_LREMOVEXATTR
#define SYS_LREMOVEXATTR 0xffffffff811ecb00
#endif

#ifndef SYS_LREMOVEXATTR
#define SYS_LREMOVEXATTR 0xffffffff811ecb00
#endif

#ifndef SYS_FREMOVEXATTR
#define SYS_FREMOVEXATTR 0xffffffff811ecb20
#endif

#ifndef SYS_FREMOVEXATTR
#define SYS_FREMOVEXATTR 0xffffffff811ecb20
#endif

#ifndef SIMPLE_XATTR_ALLOC
#define SIMPLE_XATTR_ALLOC 0xffffffff811ecbd0
#endif

#ifndef SIMPLE_XATTR_GET
#define SIMPLE_XATTR_GET 0xffffffff811ecda0
#endif

#ifndef SIMPLE_XATTR_SET
#define SIMPLE_XATTR_SET 0xffffffff811ece40
#endif

#ifndef SIMPLE_XATTR_REMOVE
#define SIMPLE_XATTR_REMOVE 0xffffffff811ece60
#endif

#ifndef SIMPLE_XATTR_LIST
#define SIMPLE_XATTR_LIST 0xffffffff811ece80
#endif

#ifndef SIMPLE_XATTR_LIST_ADD
#define SIMPLE_XATTR_LIST_ADD 0xffffffff811ecf50
#endif

#ifndef SIMPLE_STATFS
#define SIMPLE_STATFS 0xffffffff811ecf90
#endif

#ifndef ALWAYS_DELETE_DENTRY
#define ALWAYS_DELETE_DENTRY 0xffffffff811ecfc0
#endif

#ifndef GENERIC_READ_DIR
#define GENERIC_READ_DIR 0xffffffff811ecfd0
#endif

#ifndef SIMPLE_OPEN
#define SIMPLE_OPEN 0xffffffff811ecfe0
#endif

#ifndef NOOP_FSYNC
#define NOOP_FSYNC 0xffffffff811ed000
#endif

#ifndef SIMPLE_NOSETLEASE
#define SIMPLE_NOSETLEASE 0xffffffff811ed020
#endif

#ifndef SIMPLE_GETATTR
#define SIMPLE_GETATTR 0xffffffff811ed090
#endif

#ifndef DCACHE_DIR_OPEN
#define DCACHE_DIR_OPEN 0xffffffff811ed0f0
#endif

#ifndef DCACHE_DIR_CLOSE
#define DCACHE_DIR_CLOSE 0xffffffff811ed120
#endif

#ifndef DCACHE_DIR_LSEEK
#define DCACHE_DIR_LSEEK 0xffffffff811ed140
#endif

#ifndef SIMPLE_EMPTY
#define SIMPLE_EMPTY 0xffffffff811ed2d0
#endif

#ifndef GENERIC_CHECK_ADDRESSABLE
#define GENERIC_CHECK_ADDRESSABLE 0xffffffff811ed370
#endif

#ifndef MOUNT_PSEUDO
#define MOUNT_PSEUDO 0xffffffff811ed3b0
#endif

#ifndef SIMPLE_LINK
#define SIMPLE_LINK 0xffffffff811ed510
#endif

#ifndef SIMPLE_UNLINK
#define SIMPLE_UNLINK 0xffffffff811ed580
#endif

#ifndef SIMPLE_RMDIR
#define SIMPLE_RMDIR 0xffffffff811ed5e0
#endif

#ifndef SIMPLE_RENAME
#define SIMPLE_RENAME 0xffffffff811ed630
#endif

#ifndef SIMPLE_SETATTR
#define SIMPLE_SETATTR 0xffffffff811ed720
#endif

#ifndef SIMPLE_READPAGE
#define SIMPLE_READPAGE 0xffffffff811ed780
#endif

#ifndef SIMPLE_FILL_SUPER
#define SIMPLE_FILL_SUPER 0xffffffff811ed7d0
#endif

#ifndef SIMPLE_PIN_FS
#define SIMPLE_PIN_FS 0xffffffff811ed9c0
#endif

#ifndef SIMPLE_RELEASE_FS
#define SIMPLE_RELEASE_FS 0xffffffff811eda60
#endif

#ifndef SIMPLE_READ_FROM_BUFFER
#define SIMPLE_READ_FROM_BUFFER 0xffffffff811edab0
#endif

#ifndef SIMPLE_TRANSACTION_READ
#define SIMPLE_TRANSACTION_READ 0xffffffff811edb30
#endif

#ifndef SIMPLE_WRITE_TO_BUFFER
#define SIMPLE_WRITE_TO_BUFFER 0xffffffff811edb70
#endif

#ifndef MEMORY_READ_FROM_BUFFER
#define MEMORY_READ_FROM_BUFFER 0xffffffff811edbf0
#endif

#ifndef SIMPLE_TRANSACTION_RELEASE
#define SIMPLE_TRANSACTION_RELEASE 0xffffffff811edc50
#endif

#ifndef SIMPLE_ATTR_OPEN
#define SIMPLE_ATTR_OPEN 0xffffffff811edc70
#endif

#ifndef SIMPLE_ATTR_RELEASE
#define SIMPLE_ATTR_RELEASE 0xffffffff811edd20
#endif

#ifndef SIMPLE_ATTR_READ
#define SIMPLE_ATTR_READ 0xffffffff811edd40
#endif

#ifndef SIMPLE_ATTR_WRITE
#define SIMPLE_ATTR_WRITE 0xffffffff811ede10
#endif

#ifndef GENERIC_FH_TO_DENTRY
#define GENERIC_FH_TO_DENTRY 0xffffffff811edef0
#endif

#ifndef GENERIC_FH_TO_PARENT
#define GENERIC_FH_TO_PARENT 0xffffffff811edf40
#endif

#ifndef __GENERIC_FILE_FSYNC
#define __GENERIC_FILE_FSYNC 0xffffffff811edf90
#endif

#ifndef GENERIC_FILE_FSYNC
#define GENERIC_FILE_FSYNC 0xffffffff811ee020
#endif

#ifndef KFREE_PUT_LINK
#define KFREE_PUT_LINK 0xffffffff811ee060
#endif

#ifndef ALLOC_ANON_INODE
#define ALLOC_ANON_INODE 0xffffffff811ee090
#endif

#ifndef SIMPLE_LOOKUP
#define SIMPLE_LOOKUP 0xffffffff811ee150
#endif

#ifndef SIMPLE_TRANSACTION_SET
#define SIMPLE_TRANSACTION_SET 0xffffffff811ee1b0
#endif

#ifndef SIMPLE_TRANSACTION_GET
#define SIMPLE_TRANSACTION_GET 0xffffffff811ee1e0
#endif

#ifndef SIMPLE_WRITE_BEGIN
#define SIMPLE_WRITE_BEGIN 0xffffffff811ee360
#endif

#ifndef SIMPLE_WRITE_END
#define SIMPLE_WRITE_END 0xffffffff811ee4d0
#endif

#ifndef DCACHE_READDIR
#define DCACHE_READDIR 0xffffffff811ee5b0
#endif

#ifndef MAKE_EMPTY_DIR_INODE
#define MAKE_EMPTY_DIR_INODE 0xffffffff811ee7f0
#endif

#ifndef IS_EMPTY_DIR_INODE
#define IS_EMPTY_DIR_INODE 0xffffffff811ee860
#endif

#ifndef WRITEBACK_IN_PROGRESS
#define WRITEBACK_IN_PROGRESS 0xffffffff811ee890
#endif

#ifndef WRITEBACK_INODES_SB_NR
#define WRITEBACK_INODES_SB_NR 0xffffffff811efcf0
#endif

#ifndef WRITEBACK_INODES_SB
#define WRITEBACK_INODES_SB 0xffffffff811efda0
#endif

#ifndef SYNC_INODES_SB
#define SYNC_INODES_SB 0xffffffff811efdd0
#endif

#ifndef INODE_TO_BDI
#define INODE_TO_BDI 0xffffffff811eff90
#endif

#ifndef TRY_TO_WRITEBACK_INODES_SB_NR
#define TRY_TO_WRITEBACK_INODES_SB_NR 0xffffffff811f01f0
#endif

#ifndef TRY_TO_WRITEBACK_INODES_SB
#define TRY_TO_WRITEBACK_INODES_SB 0xffffffff811f0260
#endif

#ifndef __MARK_INODE_DIRTY
#define __MARK_INODE_DIRTY 0xffffffff811f1ff0
#endif

#ifndef SYNC_INODE
#define SYNC_INODE 0xffffffff811f2fb0
#endif

#ifndef SYNC_INODE_METADATA
#define SYNC_INODE_METADATA 0xffffffff811f2fe0
#endif

#ifndef WRITE_INODE_NOW
#define WRITE_INODE_NOW 0xffffffff811f3030
#endif

#ifndef BDI_START_WRITEBACK
#define BDI_START_WRITEBACK 0xffffffff811f30d0
#endif

#ifndef BDI_START_BACKGROUND_WRITEBACK
#define BDI_START_BACKGROUND_WRITEBACK 0xffffffff811f30f0
#endif

#ifndef INODE_WB_LIST_DEL
#define INODE_WB_LIST_DEL 0xffffffff811f3160
#endif

#ifndef INODE_WAIT_FOR_WRITEBACK
#define INODE_WAIT_FOR_WRITEBACK 0xffffffff811f31c0
#endif

#ifndef BDI_WRITEBACK_WORKFN
#define BDI_WRITEBACK_WORKFN 0xffffffff811f31f0
#endif

#ifndef WAKEUP_FLUSHER_THREADS
#define WAKEUP_FLUSHER_THREADS 0xffffffff811f3610
#endif

#ifndef DIRTYTIME_INTERVAL_HANDLER
#define DIRTYTIME_INTERVAL_HANDLER 0xffffffff811f36a0
#endif

#ifndef GET_DOMINATING_ID
#define GET_DOMINATING_ID 0xffffffff811f39f0
#endif

#ifndef CHANGE_MNT_PROPAGATION
#define CHANGE_MNT_PROPAGATION 0xffffffff811f3a80
#endif

#ifndef PROPAGATE_MNT
#define PROPAGATE_MNT 0xffffffff811f3d40
#endif

#ifndef PROPAGATE_MOUNT_BUSY
#define PROPAGATE_MOUNT_BUSY 0xffffffff811f3ea0
#endif

#ifndef PROPAGATE_MOUNT_UNLOCK
#define PROPAGATE_MOUNT_UNLOCK 0xffffffff811f3f70
#endif

#ifndef PROPAGATE_UMOUNT
#define PROPAGATE_UMOUNT 0xffffffff811f3fe0
#endif

#ifndef SPD_RELEASE_PAGE
#define SPD_RELEASE_PAGE 0xffffffff811f4280
#endif

#ifndef __SPLICE_FROM_PIPE
#define __SPLICE_FROM_PIPE 0xffffffff811f4400
#endif

#ifndef KERNEL_WRITE
#define KERNEL_WRITE 0xffffffff811f4580
#endif

#ifndef SPLICE_DIRECT_TO_ACTOR
#define SPLICE_DIRECT_TO_ACTOR 0xffffffff811f4690
#endif

#ifndef DO_SPLICE_DIRECT
#define DO_SPLICE_DIRECT 0xffffffff811f4880
#endif

#ifndef ITER_FILE_SPLICE_WRITE
#define ITER_FILE_SPLICE_WRITE 0xffffffff811f4c70
#endif

#ifndef SPLICE_TO_PIPE
#define SPLICE_TO_PIPE 0xffffffff811f5120
#endif

#ifndef SPLICE_GROW_SPD
#define SPLICE_GROW_SPD 0xffffffff811f5350
#endif

#ifndef GENERIC_FILE_SPLICE_READ
#define GENERIC_FILE_SPLICE_READ 0xffffffff811f5960
#endif

#ifndef DEFAULT_FILE_SPLICE_READ
#define DEFAULT_FILE_SPLICE_READ 0xffffffff811f59e0
#endif

#ifndef SPLICE_SHRINK_SPD
#define SPLICE_SHRINK_SPD 0xffffffff811f6020
#endif

#ifndef SPLICE_FROM_PIPE
#define SPLICE_FROM_PIPE 0xffffffff811f6050
#endif

#ifndef GENERIC_SPLICE_SENDPAGE
#define GENERIC_SPLICE_SENDPAGE 0xffffffff811f60c0
#endif

#ifndef SYS_VMSPLICE
#define SYS_VMSPLICE 0xffffffff811f6100
#endif

#ifndef SYS_VMSPLICE
#define SYS_VMSPLICE 0xffffffff811f6100
#endif

#ifndef COMPAT_SYS_VMSPLICE
#define COMPAT_SYS_VMSPLICE 0xffffffff811f61d0
#endif

#ifndef COMPAT_SYS_VMSPLICE
#define COMPAT_SYS_VMSPLICE 0xffffffff811f61d0
#endif

#ifndef SYS_SPLICE
#define SYS_SPLICE 0xffffffff811f6350
#endif

#ifndef SYS_SPLICE
#define SYS_SPLICE 0xffffffff811f6350
#endif

#ifndef SYS_TEE
#define SYS_TEE 0xffffffff811f6ae0
#endif

#ifndef SYS_TEE
#define SYS_TEE 0xffffffff811f6ae0
#endif

#ifndef VFS_FSYNC_RANGE
#define VFS_FSYNC_RANGE 0xffffffff811f6f80
#endif

#ifndef VFS_FSYNC
#define VFS_FSYNC 0xffffffff811f7040
#endif

#ifndef SYNC_FILESYSTEM
#define SYNC_FILESYSTEM 0xffffffff811f7100
#endif

#ifndef SYS_SYNC
#define SYS_SYNC 0xffffffff811f71a0
#endif

#ifndef EMERGENCY_SYNC
#define EMERGENCY_SYNC 0xffffffff811f7240
#endif

#ifndef SYS_SYNCFS
#define SYS_SYNCFS 0xffffffff811f72b0
#endif

#ifndef SYS_SYNCFS
#define SYS_SYNCFS 0xffffffff811f72b0
#endif

#ifndef SYS_FSYNC
#define SYS_FSYNC 0xffffffff811f7330
#endif

#ifndef SYS_FSYNC
#define SYS_FSYNC 0xffffffff811f7330
#endif

#ifndef SYS_FDATASYNC
#define SYS_FDATASYNC 0xffffffff811f7350
#endif

#ifndef SYS_FDATASYNC
#define SYS_FDATASYNC 0xffffffff811f7350
#endif

#ifndef SYS_SYNC_FILE_RANGE
#define SYS_SYNC_FILE_RANGE 0xffffffff811f7370
#endif

#ifndef SYS_SYNC_FILE_RANGE
#define SYS_SYNC_FILE_RANGE 0xffffffff811f7370
#endif

#ifndef SYS_SYNC_FILE_RANGE2
#define SYS_SYNC_FILE_RANGE2 0xffffffff811f74f0
#endif

#ifndef SYS_SYNC_FILE_RANGE2
#define SYS_SYNC_FILE_RANGE2 0xffffffff811f74f0
#endif

#ifndef DO_UTIMES
#define DO_UTIMES 0xffffffff811f7830
#endif

#ifndef SYS_UTIME
#define SYS_UTIME 0xffffffff811f7970
#endif

#ifndef SYS_UTIME
#define SYS_UTIME 0xffffffff811f7970
#endif

#ifndef SYS_UTIMENSAT
#define SYS_UTIMENSAT 0xffffffff811f79f0
#endif

#ifndef SYS_UTIMENSAT
#define SYS_UTIMENSAT 0xffffffff811f79f0
#endif

#ifndef SYS_FUTIMESAT
#define SYS_FUTIMESAT 0xffffffff811f7a70
#endif

#ifndef SYS_FUTIMESAT
#define SYS_FUTIMESAT 0xffffffff811f7a70
#endif

#ifndef SYS_UTIMES
#define SYS_UTIMES 0xffffffff811f7b30
#endif

#ifndef SYS_UTIMES
#define SYS_UTIMES 0xffffffff811f7b30
#endif

#ifndef FSSTACK_COPY_INODE_SIZE
#define FSSTACK_COPY_INODE_SIZE 0xffffffff811f7be0
#endif

#ifndef FSSTACK_COPY_ATTR_ALL
#define FSSTACK_COPY_ATTR_ALL 0xffffffff811f7c00
#endif

#ifndef CURRENT_UMASK
#define CURRENT_UMASK 0xffffffff811f7c80
#endif

#ifndef SET_FS_ROOT
#define SET_FS_ROOT 0xffffffff811f7ca0
#endif

#ifndef SET_FS_PWD
#define SET_FS_PWD 0xffffffff811f7d10
#endif

#ifndef CHROOT_FS_REFS
#define CHROOT_FS_REFS 0xffffffff811f7d80
#endif

#ifndef FREE_FS_STRUCT
#define FREE_FS_STRUCT 0xffffffff811f7f30
#endif

#ifndef EXIT_FS
#define EXIT_FS 0xffffffff811f7f60
#endif

#ifndef COPY_FS_STRUCT
#define COPY_FS_STRUCT 0xffffffff811f7fd0
#endif

#ifndef UNSHARE_FS_STRUCT
#define UNSHARE_FS_STRUCT 0xffffffff811f8070
#endif

#ifndef VFS_STATFS
#define VFS_STATFS 0xffffffff811f8340
#endif

#ifndef USER_STATFS
#define USER_STATFS 0xffffffff811f83f0
#endif

#ifndef FD_STATFS
#define FD_STATFS 0xffffffff811f84e0
#endif

#ifndef SYS_STATFS
#define SYS_STATFS 0xffffffff811f85b0
#endif

#ifndef SYS_STATFS
#define SYS_STATFS 0xffffffff811f85b0
#endif

#ifndef SYS_STATFS64
#define SYS_STATFS64 0xffffffff811f85d0
#endif

#ifndef SYS_STATFS64
#define SYS_STATFS64 0xffffffff811f85d0
#endif

#ifndef SYS_FSTATFS
#define SYS_FSTATFS 0xffffffff811f85f0
#endif

#ifndef SYS_FSTATFS
#define SYS_FSTATFS 0xffffffff811f85f0
#endif

#ifndef SYS_FSTATFS64
#define SYS_FSTATFS64 0xffffffff811f8610
#endif

#ifndef SYS_FSTATFS64
#define SYS_FSTATFS64 0xffffffff811f8610
#endif

#ifndef VFS_USTAT
#define VFS_USTAT 0xffffffff811f8630
#endif

#ifndef SYS_USTAT
#define SYS_USTAT 0xffffffff811f8720
#endif

#ifndef SYS_USTAT
#define SYS_USTAT 0xffffffff811f8720
#endif

#ifndef PIN_REMOVE
#define PIN_REMOVE 0xffffffff811f8740
#endif

#ifndef PIN_INSERT_GROUP
#define PIN_INSERT_GROUP 0xffffffff811f87e0
#endif

#ifndef PIN_INSERT
#define PIN_INSERT 0xffffffff811f8860
#endif

#ifndef PIN_KILL
#define PIN_KILL 0xffffffff811f8880
#endif

#ifndef MNT_PIN_KILL
#define MNT_PIN_KILL 0xffffffff811f8980
#endif

#ifndef GROUP_PIN_KILL
#define GROUP_PIN_KILL 0xffffffff811f89b0
#endif

#ifndef NS_GET_PATH
#define NS_GET_PATH 0xffffffff811f8a80
#endif

#ifndef NS_GET_NAME
#define NS_GET_NAME 0xffffffff811f8c40
#endif

#ifndef PROC_NS_FGET
#define PROC_NS_FGET 0xffffffff811f8cb0
#endif

#ifndef INIT_BUFFER
#define INIT_BUFFER 0xffffffff811f8cf0
#endif

#ifndef MARK_BUFFER_ASYNC_WRITE
#define MARK_BUFFER_ASYNC_WRITE 0xffffffff811f8d00
#endif

#ifndef GENERIC_BLOCK_BMAP
#define GENERIC_BLOCK_BMAP 0xffffffff811f8d60
#endif

#ifndef INVALIDATE_INODE_BUFFERS
#define INVALIDATE_INODE_BUFFERS 0xffffffff811f8ed0
#endif

#ifndef __SET_PAGE_DIRTY_BUFFERS
#define __SET_PAGE_DIRTY_BUFFERS 0xffffffff811f9010
#endif

#ifndef MARK_BUFFER_DIRTY
#define MARK_BUFFER_DIRTY 0xffffffff811f90d0
#endif

#ifndef INVALIDATE_BH_LRUS
#define INVALIDATE_BH_LRUS 0xffffffff811f9550
#endif

#ifndef BUFFER_CHECK_DIRTY_WRITEBACK
#define BUFFER_CHECK_DIRTY_WRITEBACK 0xffffffff811f95d0
#endif

#ifndef SET_BH_PAGE
#define SET_BH_PAGE 0xffffffff811f9650
#endif

#ifndef BLOCK_IS_PARTIALLY_UPTODATE
#define BLOCK_IS_PARTIALLY_UPTODATE 0xffffffff811f96a0
#endif

#ifndef MARK_BUFFER_DIRTY_INODE
#define MARK_BUFFER_DIRTY_INODE 0xffffffff811f97d0
#endif

#ifndef BLOCK_COMMIT_WRITE
#define BLOCK_COMMIT_WRITE 0xffffffff811f9930
#endif

#ifndef ALLOC_BUFFER_HEAD
#define ALLOC_BUFFER_HEAD 0xffffffff811f99d0
#endif

#ifndef __BRELSE
#define __BRELSE 0xffffffff811f9a40
#endif

#ifndef __BFORGET
#define __BFORGET 0xffffffff811f9b60
#endif

#ifndef GENERIC_CONT_EXPAND_SIMPLE
#define GENERIC_CONT_EXPAND_SIMPLE 0xffffffff811f9bc0
#endif

#ifndef FREE_BUFFER_HEAD
#define FREE_BUFFER_HEAD 0xffffffff811f9c40
#endif

#ifndef ALLOC_PAGE_BUFFERS
#define ALLOC_PAGE_BUFFERS 0xffffffff811f9ca0
#endif

#ifndef TRY_TO_FREE_BUFFERS
#define TRY_TO_FREE_BUFFERS 0xffffffff811f9d90
#endif

#ifndef UNLOCK_BUFFER
#define UNLOCK_BUFFER 0xffffffff811f9e50
#endif

#ifndef END_BUFFER_READ_SYNC
#define END_BUFFER_READ_SYNC 0xffffffff811f9ea0
#endif

#ifndef END_BUFFER_WRITE_SYNC
#define END_BUFFER_WRITE_SYNC 0xffffffff811f9ed0
#endif

#ifndef __WAIT_ON_BUFFER
#define __WAIT_ON_BUFFER 0xffffffff811f9f10
#endif

#ifndef __LOCK_BUFFER
#define __LOCK_BUFFER 0xffffffff811f9f50
#endif

#ifndef TOUCH_BUFFER
#define TOUCH_BUFFER 0xffffffff811fa310
#endif

#ifndef CREATE_EMPTY_BUFFERS
#define CREATE_EMPTY_BUFFERS 0xffffffff811fa370
#endif

#ifndef __FIND_GET_BLOCK
#define __FIND_GET_BLOCK 0xffffffff811fa490
#endif

#ifndef __GETBLK_SLOW
#define __GETBLK_SLOW 0xffffffff811fa5b0
#endif

#ifndef __GETBLK_GFP
#define __GETBLK_GFP 0xffffffff811fa860
#endif

#ifndef UNMAP_UNDERLYING_METADATA
#define UNMAP_UNDERLYING_METADATA 0xffffffff811fa8c0
#endif

#ifndef END_BUFFER_ASYNC_WRITE
#define END_BUFFER_ASYNC_WRITE 0xffffffff811fa950
#endif

#ifndef BH_UPTODATE_OR_LOCK
#define BH_UPTODATE_OR_LOCK 0xffffffff811faa80
#endif

#ifndef BLOCK_INVALIDATEPAGE
#define BLOCK_INVALIDATEPAGE 0xffffffff811fab00
#endif

#ifndef PAGE_ZERO_NEW_BUFFERS
#define PAGE_ZERO_NEW_BUFFERS 0xffffffff811fac40
#endif

#ifndef BLOCK_WRITE_END
#define BLOCK_WRITE_END 0xffffffff811fad60
#endif

#ifndef GENERIC_WRITE_END
#define GENERIC_WRITE_END 0xffffffff811fade0
#endif

#ifndef NOBH_WRITE_END
#define NOBH_WRITE_END 0xffffffff811faeb0
#endif

#ifndef INODE_HAS_BUFFERS
#define INODE_HAS_BUFFERS 0xffffffff811faff0
#endif

#ifndef EMERGENCY_THAW_ALL
#define EMERGENCY_THAW_ALL 0xffffffff811fb010
#endif

#ifndef REMOVE_INODE_BUFFERS
#define REMOVE_INODE_BUFFERS 0xffffffff811fb080
#endif

#ifndef GUARD_BIO_EOD
#define GUARD_BIO_EOD 0xffffffff811fb100
#endif

#ifndef _SUBMIT_BH
#define _SUBMIT_BH 0xffffffff811fb1c0
#endif

#ifndef SUBMIT_BH
#define SUBMIT_BH 0xffffffff811fb340
#endif

#ifndef __BREAD_GFP
#define __BREAD_GFP 0xffffffff811fb360
#endif

#ifndef BLOCK_READ_FULL_PAGE
#define BLOCK_READ_FULL_PAGE 0xffffffff811fb440
#endif

#ifndef LL_RW_BLOCK
#define LL_RW_BLOCK 0xffffffff811fb710
#endif

#ifndef WRITE_BOUNDARY_BLOCK
#define WRITE_BOUNDARY_BLOCK 0xffffffff811fb7c0
#endif

#ifndef __BREADAHEAD
#define __BREADAHEAD 0xffffffff811fb810
#endif

#ifndef __BLOCK_WRITE_BEGIN
#define __BLOCK_WRITE_BEGIN 0xffffffff811fb860
#endif

#ifndef BLOCK_WRITE_BEGIN
#define BLOCK_WRITE_BEGIN 0xffffffff811fbcc0
#endif

#ifndef CONT_WRITE_BEGIN
#define CONT_WRITE_BEGIN 0xffffffff811fbd50
#endif

#ifndef __BLOCK_PAGE_MKWRITE
#define __BLOCK_PAGE_MKWRITE 0xffffffff811fc0b0
#endif

#ifndef BLOCK_PAGE_MKWRITE
#define BLOCK_PAGE_MKWRITE 0xffffffff811fc1a0
#endif

#ifndef BLOCK_TRUNCATE_PAGE
#define BLOCK_TRUNCATE_PAGE 0xffffffff811fc260
#endif

#ifndef NOBH_TRUNCATE_PAGE
#define NOBH_TRUNCATE_PAGE 0xffffffff811fc510
#endif

#ifndef NOBH_WRITE_BEGIN
#define NOBH_WRITE_BEGIN 0xffffffff811fc740
#endif

#ifndef WRITE_DIRTY_BUFFER
#define WRITE_DIRTY_BUFFER 0xffffffff811fcba0
#endif

#ifndef SYNC_MAPPING_BUFFERS
#define SYNC_MAPPING_BUFFERS 0xffffffff811fcc30
#endif

#ifndef __SYNC_DIRTY_BUFFER
#define __SYNC_DIRTY_BUFFER 0xffffffff811fcf10
#endif

#ifndef SYNC_DIRTY_BUFFER
#define SYNC_DIRTY_BUFFER 0xffffffff811fd020
#endif

#ifndef BH_SUBMIT_READ
#define BH_SUBMIT_READ 0xffffffff811fd040
#endif

#ifndef BLOCK_WRITE_FULL_PAGE
#define BLOCK_WRITE_FULL_PAGE 0xffffffff811fd4e0
#endif

#ifndef NOBH_WRITEPAGE
#define NOBH_WRITEPAGE 0xffffffff811fd600
#endif

#ifndef SYS_BDFLUSH
#define SYS_BDFLUSH 0xffffffff811fd740
#endif

#ifndef SYS_BDFLUSH
#define SYS_BDFLUSH 0xffffffff811fd740
#endif

#ifndef I_BDEV
#define I_BDEV 0xffffffff811fd7c0
#endif

#ifndef BDEV_READ_PAGE
#define BDEV_READ_PAGE 0xffffffff811fd7f0
#endif

#ifndef BDEV_DIRECT_ACCESS
#define BDEV_DIRECT_ACCESS 0xffffffff811fd840
#endif

#ifndef KILL_BDEV
#define KILL_BDEV 0xffffffff811fd910
#endif

#ifndef INVALIDATE_BDEV
#define INVALIDATE_BDEV 0xffffffff811fd950
#endif

#ifndef BD_SET_SIZE
#define BD_SET_SIZE 0xffffffff811fd990
#endif

#ifndef THAW_BDEV
#define THAW_BDEV 0xffffffff811fda90
#endif

#ifndef BLKDEV_FSYNC
#define BLKDEV_FSYNC 0xffffffff811fdb30
#endif

#ifndef BDEV_WRITE_PAGE
#define BDEV_WRITE_PAGE 0xffffffff811fdb80
#endif

#ifndef BDGET
#define BDGET 0xffffffff811fde30
#endif

#ifndef BDGRAB
#define BDGRAB 0xffffffff811fe0f0
#endif

#ifndef BDPUT
#define BDPUT 0xffffffff811fe110
#endif

#ifndef BD_UNLINK_DISK_HOLDER
#define BD_UNLINK_DISK_HOLDER 0xffffffff811fe130
#endif

#ifndef BLKDEV_WRITE_ITER
#define BLKDEV_WRITE_ITER 0xffffffff811fe230
#endif

#ifndef BLKDEV_READ_ITER
#define BLKDEV_READ_ITER 0xffffffff811fe330
#endif

#ifndef IOCTL_BY_BDEV
#define IOCTL_BY_BDEV 0xffffffff811fe3d0
#endif

#ifndef __INVALIDATE_DEVICE
#define __INVALIDATE_DEVICE 0xffffffff811fe480
#endif

#ifndef CHECK_DISK_SIZE_CHANGE
#define CHECK_DISK_SIZE_CHANGE 0xffffffff811fe5a0
#endif

#ifndef REVALIDATE_DISK
#define REVALIDATE_DISK 0xffffffff811fe630
#endif

#ifndef CHECK_DISK_CHANGE
#define CHECK_DISK_CHANGE 0xffffffff811fe6b0
#endif

#ifndef LOOKUP_BDEV
#define LOOKUP_BDEV 0xffffffff811fe890
#endif

#ifndef BD_LINK_DISK_HOLDER
#define BD_LINK_DISK_HOLDER 0xffffffff811fe8c0
#endif

#ifndef __SYNC_BLOCKDEV
#define __SYNC_BLOCKDEV 0xffffffff811feae0
#endif

#ifndef SYNC_BLOCKDEV
#define SYNC_BLOCKDEV 0xffffffff811feb20
#endif

#ifndef SET_BLOCKSIZE
#define SET_BLOCKSIZE 0xffffffff811feb40
#endif

#ifndef SB_SET_BLOCKSIZE
#define SB_SET_BLOCKSIZE 0xffffffff811fec00
#endif

#ifndef SB_MIN_BLOCKSIZE
#define SB_MIN_BLOCKSIZE 0xffffffff811fec50
#endif

#ifndef FSYNC_BDEV
#define FSYNC_BDEV 0xffffffff811fecb0
#endif

#ifndef FREEZE_BDEV
#define FREEZE_BDEV 0xffffffff811fed10
#endif

#ifndef BLKDEV_GET
#define BLKDEV_GET 0xffffffff811ff430
#endif

#ifndef BLKDEV_GET_BY_DEV
#define BLKDEV_GET_BY_DEV 0xffffffff811ff760
#endif

#ifndef BLKDEV_PUT
#define BLKDEV_PUT 0xffffffff811ff820
#endif

#ifndef BLKDEV_GET_BY_PATH
#define BLKDEV_GET_BY_PATH 0xffffffff811ff940
#endif

#ifndef NR_BLOCKDEV_PAGES
#define NR_BLOCKDEV_PAGES 0xffffffff811ffa00
#endif

#ifndef SB_IS_BLKDEV_SB
#define SB_IS_BLKDEV_SB 0xffffffff811ffa60
#endif

#ifndef BD_FORGET
#define BD_FORGET 0xffffffff811ffa80
#endif

#ifndef ITERATE_BDEVS
#define ITERATE_BDEVS 0xffffffff811ffb10
#endif

#ifndef DIO_END_IO
#define DIO_END_IO 0xffffffff81200020
#endif

#ifndef __BLOCKDEV_DIRECT_IO
#define __BLOCKDEV_DIRECT_IO 0xffffffff81203150
#endif

#ifndef MPAGE_WRITEPAGES
#define MPAGE_WRITEPAGES 0xffffffff812032a0
#endif

#ifndef MPAGE_WRITEPAGE
#define MPAGE_WRITEPAGE 0xffffffff81203a00
#endif

#ifndef MPAGE_READPAGES
#define MPAGE_READPAGES 0xffffffff812040d0
#endif

#ifndef MPAGE_READPAGE
#define MPAGE_READPAGE 0xffffffff812041f0
#endif

#ifndef __FSNOTIFY_INODE_DELETE
#define __FSNOTIFY_INODE_DELETE 0xffffffff81204b80
#endif

#ifndef FSNOTIFY
#define FSNOTIFY 0xffffffff81204ba0
#endif

#ifndef __FSNOTIFY_PARENT
#define __FSNOTIFY_PARENT 0xffffffff81205240
#endif

#ifndef __FSNOTIFY_VFSMOUNT_DELETE
#define __FSNOTIFY_VFSMOUNT_DELETE 0xffffffff81205320
#endif

#ifndef __FSNOTIFY_UPDATE_CHILD_DENTRY_FLAGS
#define __FSNOTIFY_UPDATE_CHILD_DENTRY_FLAGS 0xffffffff81205340
#endif

#ifndef FSNOTIFY_GET_COOKIE
#define FSNOTIFY_GET_COOKIE 0xffffffff81205370
#endif

#ifndef FSNOTIFY_NOTIFY_QUEUE_IS_EMPTY
#define FSNOTIFY_NOTIFY_QUEUE_IS_EMPTY 0xffffffff812053a0
#endif

#ifndef FSNOTIFY_DESTROY_EVENT
#define FSNOTIFY_DESTROY_EVENT 0xffffffff812053d0
#endif

#ifndef FSNOTIFY_ADD_EVENT
#define FSNOTIFY_ADD_EVENT 0xffffffff81205430
#endif

#ifndef FSNOTIFY_REMOVE_EVENT
#define FSNOTIFY_REMOVE_EVENT 0xffffffff81205580
#endif

#ifndef FSNOTIFY_REMOVE_FIRST_EVENT
#define FSNOTIFY_REMOVE_FIRST_EVENT 0xffffffff812055d0
#endif

#ifndef FSNOTIFY_PEEK_FIRST_EVENT
#define FSNOTIFY_PEEK_FIRST_EVENT 0xffffffff81205640
#endif

#ifndef FSNOTIFY_FLUSH_NOTIFY
#define FSNOTIFY_FLUSH_NOTIFY 0xffffffff81205660
#endif

#ifndef FSNOTIFY_INIT_EVENT
#define FSNOTIFY_INIT_EVENT 0xffffffff812056c0
#endif

#ifndef FSNOTIFY_GET_GROUP
#define FSNOTIFY_GET_GROUP 0xffffffff812056e0
#endif

#ifndef FSNOTIFY_PUT_GROUP
#define FSNOTIFY_PUT_GROUP 0xffffffff812056f0
#endif

#ifndef FSNOTIFY_DESTROY_GROUP
#define FSNOTIFY_DESTROY_GROUP 0xffffffff81205720
#endif

#ifndef FSNOTIFY_ALLOC_GROUP
#define FSNOTIFY_ALLOC_GROUP 0xffffffff81205760
#endif

#ifndef FSNOTIFY_FASYNC
#define FSNOTIFY_FASYNC 0xffffffff81205830
#endif

#ifndef FSNOTIFY_RECALC_INODE_MASK
#define FSNOTIFY_RECALC_INODE_MASK 0xffffffff81205860
#endif

#ifndef FSNOTIFY_DESTROY_INODE_MARK
#define FSNOTIFY_DESTROY_INODE_MARK 0xffffffff812058a0
#endif

#ifndef FSNOTIFY_CLEAR_MARKS_BY_INODE
#define FSNOTIFY_CLEAR_MARKS_BY_INODE 0xffffffff81205940
#endif

#ifndef FSNOTIFY_CLEAR_INODE_MARKS_BY_GROUP
#define FSNOTIFY_CLEAR_INODE_MARKS_BY_GROUP 0xffffffff812059f0
#endif

#ifndef FSNOTIFY_FIND_INODE_MARK
#define FSNOTIFY_FIND_INODE_MARK 0xffffffff81205a10
#endif

#ifndef FSNOTIFY_SET_INODE_MARK_MASK_LOCKED
#define FSNOTIFY_SET_INODE_MARK_MASK_LOCKED 0xffffffff81205a50
#endif

#ifndef FSNOTIFY_ADD_INODE_MARK
#define FSNOTIFY_ADD_INODE_MARK 0xffffffff81205ab0
#endif

#ifndef FSNOTIFY_UNMOUNT_INODES
#define FSNOTIFY_UNMOUNT_INODES 0xffffffff81205b40
#endif

#ifndef FSNOTIFY_GET_MARK
#define FSNOTIFY_GET_MARK 0xffffffff81205cf0
#endif

#ifndef FSNOTIFY_PUT_MARK
#define FSNOTIFY_PUT_MARK 0xffffffff81205d00
#endif

#ifndef FSNOTIFY_RECALC_MASK
#define FSNOTIFY_RECALC_MASK 0xffffffff81205e70
#endif

#ifndef FSNOTIFY_DESTROY_MARK_LOCKED
#define FSNOTIFY_DESTROY_MARK_LOCKED 0xffffffff81205eb0
#endif

#ifndef FSNOTIFY_DESTROY_MARK
#define FSNOTIFY_DESTROY_MARK 0xffffffff81206000
#endif

#ifndef FSNOTIFY_DESTROY_MARKS
#define FSNOTIFY_DESTROY_MARKS 0xffffffff81206040
#endif

#ifndef FSNOTIFY_SET_MARK_MASK_LOCKED
#define FSNOTIFY_SET_MARK_MASK_LOCKED 0xffffffff812060c0
#endif

#ifndef FSNOTIFY_SET_MARK_IGNORED_MASK_LOCKED
#define FSNOTIFY_SET_MARK_IGNORED_MASK_LOCKED 0xffffffff81206100
#endif

#ifndef FSNOTIFY_COMPARE_GROUPS
#define FSNOTIFY_COMPARE_GROUPS 0xffffffff81206130
#endif

#ifndef FSNOTIFY_ADD_MARK_LIST
#define FSNOTIFY_ADD_MARK_LIST 0xffffffff81206180
#endif

#ifndef FSNOTIFY_ADD_MARK_LOCKED
#define FSNOTIFY_ADD_MARK_LOCKED 0xffffffff81206260
#endif

#ifndef FSNOTIFY_ADD_MARK
#define FSNOTIFY_ADD_MARK 0xffffffff81206420
#endif

#ifndef FSNOTIFY_FIND_MARK
#define FSNOTIFY_FIND_MARK 0xffffffff81206480
#endif

#ifndef FSNOTIFY_CLEAR_MARKS_BY_GROUP_FLAGS
#define FSNOTIFY_CLEAR_MARKS_BY_GROUP_FLAGS 0xffffffff812064d0
#endif

#ifndef FSNOTIFY_CLEAR_MARKS_BY_GROUP
#define FSNOTIFY_CLEAR_MARKS_BY_GROUP 0xffffffff812065c0
#endif

#ifndef FSNOTIFY_DUPLICATE_MARK
#define FSNOTIFY_DUPLICATE_MARK 0xffffffff812065e0
#endif

#ifndef FSNOTIFY_INIT_MARK
#define FSNOTIFY_INIT_MARK 0xffffffff81206650
#endif

#ifndef FSNOTIFY_CLEAR_MARKS_BY_MOUNT
#define FSNOTIFY_CLEAR_MARKS_BY_MOUNT 0xffffffff81206690
#endif

#ifndef FSNOTIFY_CLEAR_VFSMOUNT_MARKS_BY_GROUP
#define FSNOTIFY_CLEAR_VFSMOUNT_MARKS_BY_GROUP 0xffffffff81206740
#endif

#ifndef FSNOTIFY_RECALC_VFSMOUNT_MASK
#define FSNOTIFY_RECALC_VFSMOUNT_MASK 0xffffffff81206760
#endif

#ifndef FSNOTIFY_DESTROY_VFSMOUNT_MARK
#define FSNOTIFY_DESTROY_VFSMOUNT_MARK 0xffffffff812067a0
#endif

#ifndef FSNOTIFY_FIND_VFSMOUNT_MARK
#define FSNOTIFY_FIND_VFSMOUNT_MARK 0xffffffff81206840
#endif

#ifndef FSNOTIFY_ADD_VFSMOUNT_MARK
#define FSNOTIFY_ADD_VFSMOUNT_MARK 0xffffffff81206880
#endif

#ifndef INOTIFY_SHOW_FDINFO
#define INOTIFY_SHOW_FDINFO 0xffffffff81206c10
#endif

#ifndef FANOTIFY_SHOW_FDINFO
#define FANOTIFY_SHOW_FDINFO 0xffffffff81206c30
#endif

#ifndef DNOTIFY_FLUSH
#define DNOTIFY_FLUSH 0xffffffff81206e10
#endif

#ifndef FCNTL_DIRNOTIFY
#define FCNTL_DIRNOTIFY 0xffffffff81206f00
#endif

#ifndef INOTIFY_HANDLE_EVENT
#define INOTIFY_HANDLE_EVENT 0xffffffff812072c0
#endif

#ifndef INOTIFY_IGNORED_AND_REMOVE_IDR
#define INOTIFY_IGNORED_AND_REMOVE_IDR 0xffffffff81207f20
#endif

#ifndef SYS_INOTIFY_INIT1
#define SYS_INOTIFY_INIT1 0xffffffff81207f80
#endif

#ifndef SYS_INOTIFY_INIT1
#define SYS_INOTIFY_INIT1 0xffffffff81207f80
#endif

#ifndef SYS_INOTIFY_INIT
#define SYS_INOTIFY_INIT 0xffffffff81208000
#endif

#ifndef SYS_INOTIFY_ADD_WATCH
#define SYS_INOTIFY_ADD_WATCH 0xffffffff81208060
#endif

#ifndef SYS_INOTIFY_ADD_WATCH
#define SYS_INOTIFY_ADD_WATCH 0xffffffff81208060
#endif

#ifndef SYS_INOTIFY_RM_WATCH
#define SYS_INOTIFY_RM_WATCH 0xffffffff81208380
#endif

#ifndef SYS_INOTIFY_RM_WATCH
#define SYS_INOTIFY_RM_WATCH 0xffffffff81208380
#endif

#ifndef FANOTIFY_ALLOC_EVENT
#define FANOTIFY_ALLOC_EVENT 0xffffffff81208570
#endif

#ifndef SYS_FANOTIFY_INIT
#define SYS_FANOTIFY_INIT 0xffffffff81209180
#endif

#ifndef SYS_FANOTIFY_INIT
#define SYS_FANOTIFY_INIT 0xffffffff81209180
#endif

#ifndef SYS_FANOTIFY_MARK
#define SYS_FANOTIFY_MARK 0xffffffff81209400
#endif

#ifndef SYS_FANOTIFY_MARK
#define SYS_FANOTIFY_MARK 0xffffffff81209400
#endif

#ifndef COMPAT_SYS_FANOTIFY_MARK
#define COMPAT_SYS_FANOTIFY_MARK 0xffffffff81209a10
#endif

#ifndef COMPAT_SYS_FANOTIFY_MARK
#define COMPAT_SYS_FANOTIFY_MARK 0xffffffff81209a10
#endif

#ifndef EVENTPOLL_RELEASE_FILE
#define EVENTPOLL_RELEASE_FILE 0xffffffff8120b1a0
#endif

#ifndef SYS_EPOLL_CREATE1
#define SYS_EPOLL_CREATE1 0xffffffff8120b230
#endif

#ifndef SYS_EPOLL_CREATE1
#define SYS_EPOLL_CREATE1 0xffffffff8120b230
#endif

#ifndef SYS_EPOLL_CREATE
#define SYS_EPOLL_CREATE 0xffffffff8120b3a0
#endif

#ifndef SYS_EPOLL_CREATE
#define SYS_EPOLL_CREATE 0xffffffff8120b3a0
#endif

#ifndef SYS_EPOLL_CTL
#define SYS_EPOLL_CTL 0xffffffff8120b500
#endif

#ifndef SYS_EPOLL_CTL
#define SYS_EPOLL_CTL 0xffffffff8120b500
#endif

#ifndef SYS_EPOLL_WAIT
#define SYS_EPOLL_WAIT 0xffffffff8120c0d0
#endif

#ifndef SYS_EPOLL_WAIT
#define SYS_EPOLL_WAIT 0xffffffff8120c0d0
#endif

#ifndef SYS_EPOLL_PWAIT
#define SYS_EPOLL_PWAIT 0xffffffff8120c1b0
#endif

#ifndef SYS_EPOLL_PWAIT
#define SYS_EPOLL_PWAIT 0xffffffff8120c1b0
#endif

#ifndef COMPAT_SYS_EPOLL_PWAIT
#define COMPAT_SYS_EPOLL_PWAIT 0xffffffff8120c3d0
#endif

#ifndef COMPAT_SYS_EPOLL_PWAIT
#define COMPAT_SYS_EPOLL_PWAIT 0xffffffff8120c3d0
#endif

#ifndef ANON_INODE_GETFILE
#define ANON_INODE_GETFILE 0xffffffff8120c650
#endif

#ifndef ANON_INODE_GETFD
#define ANON_INODE_GETFD 0xffffffff8120c7a0
#endif

#ifndef SIGNALFD_CLEANUP
#define SIGNALFD_CLEANUP 0xffffffff8120cf30
#endif

#ifndef SYS_SIGNALFD4
#define SYS_SIGNALFD4 0xffffffff8120cf80
#endif

#ifndef SYS_SIGNALFD4
#define SYS_SIGNALFD4 0xffffffff8120cf80
#endif

#ifndef SYS_SIGNALFD
#define SYS_SIGNALFD 0xffffffff8120d140
#endif

#ifndef SYS_SIGNALFD
#define SYS_SIGNALFD 0xffffffff8120d140
#endif

#ifndef COMPAT_SYS_SIGNALFD4
#define COMPAT_SYS_SIGNALFD4 0xffffffff8120d2f0
#endif

#ifndef COMPAT_SYS_SIGNALFD4
#define COMPAT_SYS_SIGNALFD4 0xffffffff8120d2f0
#endif

#ifndef COMPAT_SYS_SIGNALFD
#define COMPAT_SYS_SIGNALFD 0xffffffff8120d510
#endif

#ifndef COMPAT_SYS_SIGNALFD
#define COMPAT_SYS_SIGNALFD 0xffffffff8120d510
#endif

#ifndef TIMERFD_CLOCK_WAS_SET
#define TIMERFD_CLOCK_WAS_SET 0xffffffff8120e360
#endif

#ifndef SYS_TIMERFD_CREATE
#define SYS_TIMERFD_CREATE 0xffffffff8120e430
#endif

#ifndef SYS_TIMERFD_CREATE
#define SYS_TIMERFD_CREATE 0xffffffff8120e430
#endif

#ifndef SYS_TIMERFD_SETTIME
#define SYS_TIMERFD_SETTIME 0xffffffff8120e560
#endif

#ifndef SYS_TIMERFD_SETTIME
#define SYS_TIMERFD_SETTIME 0xffffffff8120e560
#endif

#ifndef SYS_TIMERFD_GETTIME
#define SYS_TIMERFD_GETTIME 0xffffffff8120e5f0
#endif

#ifndef SYS_TIMERFD_GETTIME
#define SYS_TIMERFD_GETTIME 0xffffffff8120e5f0
#endif

#ifndef COMPAT_SYS_TIMERFD_SETTIME
#define COMPAT_SYS_TIMERFD_SETTIME 0xffffffff8120e640
#endif

#ifndef COMPAT_SYS_TIMERFD_SETTIME
#define COMPAT_SYS_TIMERFD_SETTIME 0xffffffff8120e640
#endif

#ifndef COMPAT_SYS_TIMERFD_GETTIME
#define COMPAT_SYS_TIMERFD_GETTIME 0xffffffff8120e6c0
#endif

#ifndef COMPAT_SYS_TIMERFD_GETTIME
#define COMPAT_SYS_TIMERFD_GETTIME 0xffffffff8120e6c0
#endif

#ifndef EVENTFD_SIGNAL
#define EVENTFD_SIGNAL 0xffffffff8120e770
#endif

#ifndef EVENTFD_CTX_REMOVE_WAIT_QUEUE
#define EVENTFD_CTX_REMOVE_WAIT_QUEUE 0xffffffff8120e7f0
#endif

#ifndef EVENTFD_FGET
#define EVENTFD_FGET 0xffffffff8120e8d0
#endif

#ifndef EVENTFD_CTX_FDGET
#define EVENTFD_CTX_FDGET 0xffffffff8120e910
#endif

#ifndef EVENTFD_CTX_PUT
#define EVENTFD_CTX_PUT 0xffffffff8120eaa0
#endif

#ifndef EVENTFD_CTX_GET
#define EVENTFD_CTX_GET 0xffffffff8120ead0
#endif

#ifndef EVENTFD_CTX_READ
#define EVENTFD_CTX_READ 0xffffffff8120eb80
#endif

#ifndef EVENTFD_CTX_FILEGET
#define EVENTFD_CTX_FILEGET 0xffffffff8120ee10
#endif

#ifndef EVENTFD_FILE_CREATE
#define EVENTFD_FILE_CREATE 0xffffffff8120f100
#endif

#ifndef SYS_EVENTFD2
#define SYS_EVENTFD2 0xffffffff8120f130
#endif

#ifndef SYS_EVENTFD2
#define SYS_EVENTFD2 0xffffffff8120f130
#endif

#ifndef SYS_EVENTFD
#define SYS_EVENTFD 0xffffffff8120f1c0
#endif

#ifndef SYS_EVENTFD
#define SYS_EVENTFD 0xffffffff8120f1c0
#endif

#ifndef KIOCB_SET_CANCEL_FN
#define KIOCB_SET_CANCEL_FN 0xffffffff8120f380
#endif

#ifndef EXIT_AIO
#define EXIT_AIO 0xffffffff812107a0
#endif

#ifndef SYS_IO_SETUP
#define SYS_IO_SETUP 0xffffffff81210870
#endif

#ifndef SYS_IO_SETUP
#define SYS_IO_SETUP 0xffffffff81210870
#endif

#ifndef SYS_IO_DESTROY
#define SYS_IO_DESTROY 0xffffffff81211280
#endif

#ifndef SYS_IO_DESTROY
#define SYS_IO_DESTROY 0xffffffff81211280
#endif

#ifndef DO_IO_SUBMIT
#define DO_IO_SUBMIT 0xffffffff81211360
#endif

#ifndef SYS_IO_SUBMIT
#define SYS_IO_SUBMIT 0xffffffff81211810
#endif

#ifndef SYS_IO_SUBMIT
#define SYS_IO_SUBMIT 0xffffffff81211810
#endif

#ifndef SYS_IO_CANCEL
#define SYS_IO_CANCEL 0xffffffff81211830
#endif

#ifndef SYS_IO_CANCEL
#define SYS_IO_CANCEL 0xffffffff81211830
#endif

#ifndef SYS_IO_GETEVENTS
#define SYS_IO_GETEVENTS 0xffffffff81211960
#endif

#ifndef SYS_IO_GETEVENTS
#define SYS_IO_GETEVENTS 0xffffffff81211960
#endif

#ifndef LOCKS_RELEASE_PRIVATE
#define LOCKS_RELEASE_PRIVATE 0xffffffff81211a10
#endif

#ifndef LOCKS_COPY_CONFLOCK
#define LOCKS_COPY_CONFLOCK 0xffffffff81211a70
#endif

#ifndef VFS_CANCEL_LOCK
#define VFS_CANCEL_LOCK 0xffffffff81211cd0
#endif

#ifndef LOCKS_COPY_LOCK
#define LOCKS_COPY_LOCK 0xffffffff81212050
#endif

#ifndef LOCKS_ALLOC_LOCK
#define LOCKS_ALLOC_LOCK 0xffffffff81212180
#endif

#ifndef LOCKS_INIT_LOCK
#define LOCKS_INIT_LOCK 0xffffffff812121f0
#endif

#ifndef LOCKS_FREE_LOCK
#define LOCKS_FREE_LOCK 0xffffffff81212270
#endif

#ifndef POSIX_UNBLOCK_LOCK
#define POSIX_UNBLOCK_LOCK 0xffffffff81212430
#endif

#ifndef POSIX_TEST_LOCK
#define POSIX_TEST_LOCK 0xffffffff81212db0
#endif

#ifndef VFS_TEST_LOCK
#define VFS_TEST_LOCK 0xffffffff81212e70
#endif

#ifndef FLOCK_LOCK_FILE_WAIT
#define FLOCK_LOCK_FILE_WAIT 0xffffffff812132e0
#endif

#ifndef POSIX_LOCK_FILE
#define POSIX_LOCK_FILE 0xffffffff81213a10
#endif

#ifndef POSIX_LOCK_FILE_WAIT
#define POSIX_LOCK_FILE_WAIT 0xffffffff81213a30
#endif

#ifndef LOCKS_MANDATORY_AREA
#define LOCKS_MANDATORY_AREA 0xffffffff81213b10
#endif

#ifndef VFS_LOCK_FILE
#define VFS_LOCK_FILE 0xffffffff81213ce0
#endif

#ifndef LOCKS_REMOVE_POSIX
#define LOCKS_REMOVE_POSIX 0xffffffff81213dc0
#endif

#ifndef LEASE_MODIFY
#define LEASE_MODIFY 0xffffffff81213e00
#endif

#ifndef LEASE_GET_MTIME
#define LEASE_GET_MTIME 0xffffffff81213ec0
#endif

#ifndef __BREAK_LEASE
#define __BREAK_LEASE 0xffffffff81214070
#endif

#ifndef GENERIC_SETLEASE
#define GENERIC_SETLEASE 0xffffffff81214480
#endif

#ifndef VFS_SETLEASE
#define VFS_SETLEASE 0xffffffff81214a70
#endif

#ifndef LOCKS_FREE_LOCK_CONTEXT
#define LOCKS_FREE_LOCK_CONTEXT 0xffffffff81214aa0
#endif

#ifndef LOCKS_MANDATORY_LOCKED
#define LOCKS_MANDATORY_LOCKED 0xffffffff81214b60
#endif

#ifndef FCNTL_GETLEASE
#define FCNTL_GETLEASE 0xffffffff81214c20
#endif

#ifndef FCNTL_SETLEASE
#define FCNTL_SETLEASE 0xffffffff81214d00
#endif

#ifndef SYS_FLOCK
#define SYS_FLOCK 0xffffffff81214dd0
#endif

#ifndef SYS_FLOCK
#define SYS_FLOCK 0xffffffff81214dd0
#endif

#ifndef FCNTL_GETLK
#define FCNTL_GETLK 0xffffffff81214f70
#endif

#ifndef FCNTL_SETLK
#define FCNTL_SETLK 0xffffffff81215100
#endif

#ifndef LOCKS_REMOVE_FILE
#define LOCKS_REMOVE_FILE 0xffffffff81215450
#endif

#ifndef SHOW_FD_LOCKS
#define SHOW_FD_LOCKS 0xffffffff81215510
#endif

#ifndef COMPAT_PRINTK
#define COMPAT_PRINTK 0xffffffff812162c0
#endif

#ifndef COMPAT_SYS_UTIME
#define COMPAT_SYS_UTIME 0xffffffff81216320
#endif

#ifndef COMPAT_SYS_UTIME
#define COMPAT_SYS_UTIME 0xffffffff81216320
#endif

#ifndef COMPAT_SYS_UTIMENSAT
#define COMPAT_SYS_UTIMENSAT 0xffffffff812163a0
#endif

#ifndef COMPAT_SYS_UTIMENSAT
#define COMPAT_SYS_UTIMENSAT 0xffffffff812163a0
#endif

#ifndef COMPAT_SYS_FUTIMESAT
#define COMPAT_SYS_FUTIMESAT 0xffffffff81216440
#endif

#ifndef COMPAT_SYS_FUTIMESAT
#define COMPAT_SYS_FUTIMESAT 0xffffffff81216440
#endif

#ifndef COMPAT_SYS_UTIMES
#define COMPAT_SYS_UTIMES 0xffffffff81216500
#endif

#ifndef COMPAT_SYS_UTIMES
#define COMPAT_SYS_UTIMES 0xffffffff81216500
#endif

#ifndef COMPAT_SYS_NEWSTAT
#define COMPAT_SYS_NEWSTAT 0xffffffff812165d0
#endif

#ifndef COMPAT_SYS_NEWSTAT
#define COMPAT_SYS_NEWSTAT 0xffffffff812165d0
#endif

#ifndef COMPAT_SYS_NEWLSTAT
#define COMPAT_SYS_NEWLSTAT 0xffffffff812165f0
#endif

#ifndef COMPAT_SYS_NEWLSTAT
#define COMPAT_SYS_NEWLSTAT 0xffffffff812165f0
#endif

#ifndef COMPAT_SYS_NEWFSTATAT
#define COMPAT_SYS_NEWFSTATAT 0xffffffff81216610
#endif

#ifndef COMPAT_SYS_NEWFSTATAT
#define COMPAT_SYS_NEWFSTATAT 0xffffffff81216610
#endif

#ifndef COMPAT_SYS_NEWFSTAT
#define COMPAT_SYS_NEWFSTAT 0xffffffff81216630
#endif

#ifndef COMPAT_SYS_NEWFSTAT
#define COMPAT_SYS_NEWFSTAT 0xffffffff81216630
#endif

#ifndef COMPAT_SYS_STATFS
#define COMPAT_SYS_STATFS 0xffffffff81216650
#endif

#ifndef COMPAT_SYS_STATFS
#define COMPAT_SYS_STATFS 0xffffffff81216650
#endif

#ifndef COMPAT_SYS_FSTATFS
#define COMPAT_SYS_FSTATFS 0xffffffff81216670
#endif

#ifndef COMPAT_SYS_FSTATFS
#define COMPAT_SYS_FSTATFS 0xffffffff81216670
#endif

#ifndef COMPAT_SYS_STATFS64
#define COMPAT_SYS_STATFS64 0xffffffff81216690
#endif

#ifndef COMPAT_SYS_STATFS64
#define COMPAT_SYS_STATFS64 0xffffffff81216690
#endif

#ifndef COMPAT_SYS_FSTATFS64
#define COMPAT_SYS_FSTATFS64 0xffffffff812166b0
#endif

#ifndef COMPAT_SYS_FSTATFS64
#define COMPAT_SYS_FSTATFS64 0xffffffff812166b0
#endif

#ifndef COMPAT_SYS_USTAT
#define COMPAT_SYS_USTAT 0xffffffff812166d0
#endif

#ifndef COMPAT_SYS_USTAT
#define COMPAT_SYS_USTAT 0xffffffff812166d0
#endif

#ifndef COMPAT_SYS_FCNTL64
#define COMPAT_SYS_FCNTL64 0xffffffff812166f0
#endif

#ifndef COMPAT_SYS_FCNTL64
#define COMPAT_SYS_FCNTL64 0xffffffff812166f0
#endif

#ifndef COMPAT_SYS_FCNTL
#define COMPAT_SYS_FCNTL 0xffffffff81216aa0
#endif

#ifndef COMPAT_SYS_FCNTL
#define COMPAT_SYS_FCNTL 0xffffffff81216aa0
#endif

#ifndef COMPAT_SYS_IO_SETUP
#define COMPAT_SYS_IO_SETUP 0xffffffff81216e70
#endif

#ifndef COMPAT_SYS_IO_SETUP
#define COMPAT_SYS_IO_SETUP 0xffffffff81216e70
#endif

#ifndef COMPAT_SYS_IO_GETEVENTS
#define COMPAT_SYS_IO_GETEVENTS 0xffffffff81216f00
#endif

#ifndef COMPAT_SYS_IO_GETEVENTS
#define COMPAT_SYS_IO_GETEVENTS 0xffffffff81216f00
#endif

#ifndef COMPAT_RW_COPY_CHECK_UVECTOR
#define COMPAT_RW_COPY_CHECK_UVECTOR 0xffffffff81216fa0
#endif

#ifndef COMPAT_SYS_IO_SUBMIT
#define COMPAT_SYS_IO_SUBMIT 0xffffffff81217160
#endif

#ifndef COMPAT_SYS_IO_SUBMIT
#define COMPAT_SYS_IO_SUBMIT 0xffffffff81217160
#endif

#ifndef COMPAT_SYS_MOUNT
#define COMPAT_SYS_MOUNT 0xffffffff81217270
#endif

#ifndef COMPAT_SYS_MOUNT
#define COMPAT_SYS_MOUNT 0xffffffff81217270
#endif

#ifndef COMPAT_SYS_OLD_READDIR
#define COMPAT_SYS_OLD_READDIR 0xffffffff81217480
#endif

#ifndef COMPAT_SYS_OLD_READDIR
#define COMPAT_SYS_OLD_READDIR 0xffffffff81217480
#endif

#ifndef COMPAT_SYS_GETDENTS
#define COMPAT_SYS_GETDENTS 0xffffffff81217510
#endif

#ifndef COMPAT_SYS_GETDENTS
#define COMPAT_SYS_GETDENTS 0xffffffff81217510
#endif

#ifndef COMPAT_SYS_GETDENTS64
#define COMPAT_SYS_GETDENTS64 0xffffffff81217610
#endif

#ifndef COMPAT_SYS_GETDENTS64
#define COMPAT_SYS_GETDENTS64 0xffffffff81217610
#endif

#ifndef COMPAT_SYS_OPEN
#define COMPAT_SYS_OPEN 0xffffffff81217710
#endif

#ifndef COMPAT_SYS_OPEN
#define COMPAT_SYS_OPEN 0xffffffff81217710
#endif

#ifndef COMPAT_SYS_OPENAT
#define COMPAT_SYS_OPENAT 0xffffffff81217730
#endif

#ifndef COMPAT_SYS_OPENAT
#define COMPAT_SYS_OPENAT 0xffffffff81217730
#endif

#ifndef COMPAT_CORE_SYS_SELECT
#define COMPAT_CORE_SYS_SELECT 0xffffffff81217750
#endif

#ifndef COMPAT_SYS_SELECT
#define COMPAT_SYS_SELECT 0xffffffff81217980
#endif

#ifndef COMPAT_SYS_SELECT
#define COMPAT_SYS_SELECT 0xffffffff81217980
#endif

#ifndef COMPAT_SYS_OLD_SELECT
#define COMPAT_SYS_OLD_SELECT 0xffffffff81217a70
#endif

#ifndef COMPAT_SYS_OLD_SELECT
#define COMPAT_SYS_OLD_SELECT 0xffffffff81217a70
#endif

#ifndef COMPAT_SYS_PSELECT6
#define COMPAT_SYS_PSELECT6 0xffffffff81217b80
#endif

#ifndef COMPAT_SYS_PSELECT6
#define COMPAT_SYS_PSELECT6 0xffffffff81217b80
#endif

#ifndef COMPAT_SYS_PPOLL
#define COMPAT_SYS_PPOLL 0xffffffff81217df0
#endif

#ifndef COMPAT_SYS_PPOLL
#define COMPAT_SYS_PPOLL 0xffffffff81217df0
#endif

#ifndef COMPAT_SYS_OPEN_BY_HANDLE_AT
#define COMPAT_SYS_OPEN_BY_HANDLE_AT 0xffffffff81217fc0
#endif

#ifndef COMPAT_SYS_OPEN_BY_HANDLE_AT
#define COMPAT_SYS_OPEN_BY_HANDLE_AT 0xffffffff81217fc0
#endif

#ifndef COMPAT_SYS_IOCTL
#define COMPAT_SYS_IOCTL 0xffffffff81217fe0
#endif

#ifndef COMPAT_SYS_IOCTL
#define COMPAT_SYS_IOCTL 0xffffffff81217fe0
#endif

#ifndef POSIX_ACL_INIT
#define POSIX_ACL_INIT 0xffffffff8121f610
#endif

#ifndef POSIX_ACL_VALID
#define POSIX_ACL_VALID 0xffffffff8121f620
#endif

#ifndef POSIX_ACL_EQUIV_MODE
#define POSIX_ACL_EQUIV_MODE 0xffffffff8121f700
#endif

#ifndef POSIX_ACL_ALLOC
#define POSIX_ACL_ALLOC 0xffffffff8121f900
#endif

#ifndef POSIX_ACL_FROM_MODE
#define POSIX_ACL_FROM_MODE 0xffffffff8121f930
#endif

#ifndef POSIX_ACL_TO_XATTR
#define POSIX_ACL_TO_XATTR 0xffffffff8121faa0
#endif

#ifndef ACL_BY_TYPE
#define ACL_BY_TYPE 0xffffffff8121fb90
#endif

#ifndef GET_CACHED_ACL_RCU
#define GET_CACHED_ACL_RCU 0xffffffff8121fbc0
#endif

#ifndef GET_CACHED_ACL
#define GET_CACHED_ACL 0xffffffff8121fbf0
#endif

#ifndef FORGET_CACHED_ACL
#define FORGET_CACHED_ACL 0xffffffff8121fd20
#endif

#ifndef SET_CACHED_ACL
#define SET_CACHED_ACL 0xffffffff8121fda0
#endif

#ifndef GET_ACL
#define GET_ACL 0xffffffff8121fe20
#endif

#ifndef FORGET_ALL_CACHED_ACLS
#define FORGET_ALL_CACHED_ACLS 0xffffffff8121ff30
#endif

#ifndef __POSIX_ACL_CHMOD
#define __POSIX_ACL_CHMOD 0xffffffff8121ffb0
#endif

#ifndef __POSIX_ACL_CREATE
#define __POSIX_ACL_CREATE 0xffffffff812200e0
#endif

#ifndef POSIX_ACL_CHMOD
#define POSIX_ACL_CHMOD 0xffffffff81220190
#endif

#ifndef POSIX_ACL_FROM_XATTR
#define POSIX_ACL_FROM_XATTR 0xffffffff81220270
#endif

#ifndef POSIX_ACL_CREATE
#define POSIX_ACL_CREATE 0xffffffff81220540
#endif

#ifndef POSIX_ACL_PERMISSION
#define POSIX_ACL_PERMISSION 0xffffffff812206b0
#endif

#ifndef POSIX_ACL_FIX_XATTR_FROM_USER
#define POSIX_ACL_FIX_XATTR_FROM_USER 0xffffffff81220840
#endif

#ifndef POSIX_ACL_FIX_XATTR_TO_USER
#define POSIX_ACL_FIX_XATTR_TO_USER 0xffffffff81220890
#endif

#ifndef SIMPLE_SET_ACL
#define SIMPLE_SET_ACL 0xffffffff812208e0
#endif

#ifndef SIMPLE_ACL_CREATE
#define SIMPLE_ACL_CREATE 0xffffffff81220940
#endif

#ifndef DUMP_EMIT
#define DUMP_EMIT 0xffffffff81220cc0
#endif

#ifndef DUMP_SKIP
#define DUMP_SKIP 0xffffffff81220d80
#endif

#ifndef DUMP_ALIGN
#define DUMP_ALIGN 0xffffffff81220e40
#endif

#ifndef DO_COREDUMP
#define DO_COREDUMP 0xffffffff81220e80
#endif

#ifndef DROP_CACHES_SYSCTL_HANDLER
#define DROP_CACHES_SYSCTL_HANDLER 0xffffffff81221e00
#endif

#ifndef SYS_NAME_TO_HANDLE_AT
#define SYS_NAME_TO_HANDLE_AT 0xffffffff81221ed0
#endif

#ifndef SYS_NAME_TO_HANDLE_AT
#define SYS_NAME_TO_HANDLE_AT 0xffffffff81221ed0
#endif

#ifndef DO_HANDLE_OPEN
#define DO_HANDLE_OPEN 0xffffffff812220c0
#endif

#ifndef SYS_OPEN_BY_HANDLE_AT
#define SYS_OPEN_BY_HANDLE_AT 0xffffffff81222380
#endif

#ifndef SYS_OPEN_BY_HANDLE_AT
#define SYS_OPEN_BY_HANDLE_AT 0xffffffff81222380
#endif

#ifndef MARK_INFO_DIRTY
#define MARK_INFO_DIRTY 0xffffffff812223a0
#endif

#ifndef __QUOTA_ERROR
#define __QUOTA_ERROR 0xffffffff812224e0
#endif

#ifndef REGISTER_QUOTA_FORMAT
#define REGISTER_QUOTA_FORMAT 0xffffffff81222570
#endif

#ifndef UNREGISTER_QUOTA_FORMAT
#define UNREGISTER_QUOTA_FORMAT 0xffffffff812225b0
#endif

#ifndef DQUOT_ACQUIRE
#define DQUOT_ACQUIRE 0xffffffff81222620
#endif

#ifndef DQUOT_RELEASE
#define DQUOT_RELEASE 0xffffffff81222750
#endif

#ifndef DQUOT_COMMIT_INFO
#define DQUOT_COMMIT_INFO 0xffffffff81222840
#endif

#ifndef DQUOT_SET_DQINFO
#define DQUOT_SET_DQINFO 0xffffffff81222890
#endif

#ifndef DQUOT_DESTROY
#define DQUOT_DESTROY 0xffffffff812229d0
#endif

#ifndef DQUOT_ALLOC
#define DQUOT_ALLOC 0xffffffff812229f0
#endif

#ifndef DQUOT_GET_STATE
#define DQUOT_GET_STATE 0xffffffff81222b70
#endif

#ifndef DQUOT_MARK_DQUOT_DIRTY
#define DQUOT_MARK_DQUOT_DIRTY 0xffffffff81222d40
#endif

#ifndef INODE_ADD_RSV_SPACE
#define INODE_ADD_RSV_SPACE 0xffffffff81222e50
#endif

#ifndef INODE_SUB_RSV_SPACE
#define INODE_SUB_RSV_SPACE 0xffffffff81222e90
#endif

#ifndef INODE_CLAIM_RSV_SPACE
#define INODE_CLAIM_RSV_SPACE 0xffffffff81222ed0
#endif

#ifndef INODE_RECLAIM_RSV_SPACE
#define INODE_RECLAIM_RSV_SPACE 0xffffffff81222f20
#endif

#ifndef __DQUOT_FREE_SPACE
#define __DQUOT_FREE_SPACE 0xffffffff81223580
#endif

#ifndef DQUOT_COMMIT
#define DQUOT_COMMIT 0xffffffff81223840
#endif

#ifndef DQUOT_RECLAIM_SPACE_NODIRTY
#define DQUOT_RECLAIM_SPACE_NODIRTY 0xffffffff81223900
#endif

#ifndef DQUOT_CLAIM_SPACE_NODIRTY
#define DQUOT_CLAIM_SPACE_NODIRTY 0xffffffff81223a30
#endif

#ifndef DQUOT_FREE_INODE
#define DQUOT_FREE_INODE 0xffffffff81223b70
#endif

#ifndef DQPUT
#define DQPUT 0xffffffff81223cd0
#endif

#ifndef DQUOT_SCAN_ACTIVE
#define DQUOT_SCAN_ACTIVE 0xffffffff81223ec0
#endif

#ifndef DQUOT_WRITEBACK_DQUOTS
#define DQUOT_WRITEBACK_DQUOTS 0xffffffff81223ff0
#endif

#ifndef DQUOT_QUOTA_SYNC
#define DQUOT_QUOTA_SYNC 0xffffffff81224280
#endif

#ifndef DQGET
#define DQGET 0xffffffff81224380
#endif

#ifndef DQUOT_INITIALIZE
#define DQUOT_INITIALIZE 0xffffffff812249b0
#endif

#ifndef DQUOT_FILE_OPEN
#define DQUOT_FILE_OPEN 0xffffffff812249d0
#endif

#ifndef DQUOT_SET_DQBLK
#define DQUOT_SET_DQBLK 0xffffffff81224a20
#endif

#ifndef DQUOT_DISABLE
#define DQUOT_DISABLE 0xffffffff81224d90
#endif

#ifndef DQUOT_QUOTA_OFF
#define DQUOT_QUOTA_OFF 0xffffffff812254d0
#endif

#ifndef DQUOT_GET_DQBLK
#define DQUOT_GET_DQBLK 0xffffffff812254f0
#endif

#ifndef DQUOT_DROP
#define DQUOT_DROP 0xffffffff81225660
#endif

#ifndef DQUOT_RESUME
#define DQUOT_RESUME 0xffffffff81225c60
#endif

#ifndef DQUOT_ENABLE
#define DQUOT_ENABLE 0xffffffff81225d90
#endif

#ifndef DQUOT_QUOTA_ON
#define DQUOT_QUOTA_ON 0xffffffff812260f0
#endif

#ifndef DQUOT_QUOTA_ON_MOUNT
#define DQUOT_QUOTA_ON_MOUNT 0xffffffff81226160
#endif

#ifndef __DQUOT_TRANSFER
#define __DQUOT_TRANSFER 0xffffffff81226220
#endif

#ifndef DQUOT_TRANSFER
#define DQUOT_TRANSFER 0xffffffff81226670
#endif

#ifndef __DQUOT_ALLOC_SPACE
#define __DQUOT_ALLOC_SPACE 0xffffffff81226750
#endif

#ifndef DQUOT_ALLOC_INODE
#define DQUOT_ALLOC_INODE 0xffffffff81226950
#endif

#ifndef QTYPE_ENFORCE_FLAG
#define QTYPE_ENFORCE_FLAG 0xffffffff812278e0
#endif

#ifndef SYS_QUOTACTL
#define SYS_QUOTACTL 0xffffffff81227900
#endif

#ifndef SYS_QUOTACTL
#define SYS_QUOTACTL 0xffffffff81227900
#endif

#ifndef QID_EQ
#define QID_EQ 0xffffffff812280d0
#endif

#ifndef QID_LT
#define QID_LT 0xffffffff81228110
#endif

#ifndef QID_VALID
#define QID_VALID 0xffffffff81228160
#endif

#ifndef FROM_KQID
#define FROM_KQID 0xffffffff81228190
#endif

#ifndef FROM_KQID_MUNGED
#define FROM_KQID_MUNGED 0xffffffff812281e0
#endif

#ifndef SYS32_QUOTACTL
#define SYS32_QUOTACTL 0xffffffff81228230
#endif

#ifndef QUOTA_SEND_WARNING
#define QUOTA_SEND_WARNING 0xffffffff81228470
#endif

#ifndef TASK_MEM
#define TASK_MEM 0xffffffff8122ab30
#endif

#ifndef TASK_VSIZE
#define TASK_VSIZE 0xffffffff8122ac80
#endif

#ifndef TASK_STATM
#define TASK_STATM 0xffffffff8122aca0
#endif

#ifndef PROC_ENTRY_RUNDOWN
#define PROC_ENTRY_RUNDOWN 0xffffffff8122b590
#endif

#ifndef PROC_GET_INODE
#define PROC_GET_INODE 0xffffffff8122b630
#endif

#ifndef PROC_FILL_SUPER
#define PROC_FILL_SUPER 0xffffffff8122b7b0
#endif

#ifndef PROC_REMOUNT
#define PROC_REMOUNT 0xffffffff8122bc70
#endif

#ifndef PID_NS_PREPARE_PROC
#define PID_NS_PREPARE_PROC 0xffffffff8122bcb0
#endif

#ifndef PID_NS_RELEASE_PROC
#define PID_NS_RELEASE_PROC 0xffffffff8122bce0
#endif

#ifndef MEM_LSEEK
#define MEM_LSEEK 0xffffffff8122bd00
#endif

#ifndef PID_DELETE_DENTRY
#define PID_DELETE_DENTRY 0xffffffff8122bd40
#endif

#ifndef PROC_SETATTR
#define PROC_SETATTR 0xffffffff8122bd60
#endif

#ifndef PID_GETATTR
#define PID_GETATTR 0xffffffff8122ce60
#endif

#ifndef PID_REVALIDATE
#define PID_REVALIDATE 0xffffffff8122d860
#endif

#ifndef PROC_MEM_OPEN
#define PROC_MEM_OPEN 0xffffffff8122eba0
#endif

#ifndef PROC_PID_MAKE_INODE
#define PROC_PID_MAKE_INODE 0xffffffff8122ec80
#endif

#ifndef PROC_FILL_CACHE
#define PROC_FILL_CACHE 0xffffffff8122f410
#endif

#ifndef PROC_FLUSH_TASK
#define PROC_FLUSH_TASK 0xffffffff8122fdb0
#endif

#ifndef PROC_PID_LOOKUP
#define PROC_PID_LOOKUP 0xffffffff8122ff60
#endif

#ifndef PROC_PID_READDIR
#define PROC_PID_READDIR 0xffffffff81230040
#endif

#ifndef PROC_SET_SIZE
#define PROC_SET_SIZE 0xffffffff81230240
#endif

#ifndef PROC_SET_USER
#define PROC_SET_USER 0xffffffff81230250
#endif

#ifndef PROC_GET_PARENT_DATA
#define PROC_GET_PARENT_DATA 0xffffffff81230260
#endif

#ifndef PDE_DATA
#define PDE_DATA 0xffffffff81230280
#endif

#ifndef PROC_ALLOC_INUM
#define PROC_ALLOC_INUM 0xffffffff81230720
#endif

#ifndef PROC_FREE_INUM
#define PROC_FREE_INUM 0xffffffff812307e0
#endif

#ifndef PROC_SYMLINK
#define PROC_SYMLINK 0xffffffff81230950
#endif

#ifndef PROC_MKDIR_DATA
#define PROC_MKDIR_DATA 0xffffffff81230a00
#endif

#ifndef PROC_MKDIR_MODE
#define PROC_MKDIR_MODE 0xffffffff81230a90
#endif

#ifndef PROC_MKDIR
#define PROC_MKDIR 0xffffffff81230ab0
#endif

#ifndef PROC_CREATE_DATA
#define PROC_CREATE_DATA 0xffffffff81230ad0
#endif

#ifndef PROC_LOOKUP_DE
#define PROC_LOOKUP_DE 0xffffffff81230bb0
#endif

#ifndef PROC_LOOKUP
#define PROC_LOOKUP 0xffffffff81230c60
#endif

#ifndef PROC_CREATE_MOUNT_POINT
#define PROC_CREATE_MOUNT_POINT 0xffffffff81230c80
#endif

#ifndef PDE_PUT
#define PDE_PUT 0xffffffff81230d00
#endif

#ifndef PROC_READDIR_DE
#define PROC_READDIR_DE 0xffffffff81230d50
#endif

#ifndef PROC_READDIR
#define PROC_READDIR 0xffffffff81230f30
#endif

#ifndef REMOVE_PROC_ENTRY
#define REMOVE_PROC_ENTRY 0xffffffff81230f60
#endif

#ifndef REMOVE_PROC_SUBTREE
#define REMOVE_PROC_SUBTREE 0xffffffff812310e0
#endif

#ifndef PROC_REMOVE
#define PROC_REMOVE 0xffffffff81231230
#endif

#ifndef CHILDREN_SEQ_RELEASE
#define CHILDREN_SEQ_RELEASE 0xffffffff81231e10
#endif

#ifndef RENDER_SIGSET_T
#define RENDER_SIGSET_T 0xffffffff81231fc0
#endif

#ifndef PROC_PID_STATUS
#define PROC_PID_STATUS 0xffffffff81232060
#endif

#ifndef PROC_TID_STAT
#define PROC_TID_STAT 0xffffffff81232890
#endif

#ifndef PROC_TGID_STAT
#define PROC_TGID_STAT 0xffffffff812328b0
#endif

#ifndef PROC_PID_STATM
#define PROC_PID_STATM 0xffffffff812328d0
#endif

#ifndef PROC_FD_PERMISSION
#define PROC_FD_PERMISSION 0xffffffff812329d0
#endif

#ifndef PROC_TTY_REGISTER_DRIVER
#define PROC_TTY_REGISTER_DRIVER 0xffffffff812336b0
#endif

#ifndef PROC_TTY_UNREGISTER_DRIVER
#define PROC_TTY_UNREGISTER_DRIVER 0xffffffff81233710
#endif

#ifndef PROC_SETUP_SELF
#define PROC_SETUP_SELF 0xffffffff812352a0
#endif

#ifndef PROC_SETUP_THREAD_SELF
#define PROC_SETUP_THREAD_SELF 0xffffffff81235530
#endif

#ifndef UNREGISTER_SYSCTL_TABLE
#define UNREGISTER_SYSCTL_TABLE 0xffffffff81235fa0
#endif

#ifndef PROC_SYS_POLL_NOTIFY
#define PROC_SYS_POLL_NOTIFY 0xffffffff81236e70
#endif

#ifndef SYSCTL_HEAD_PUT
#define SYSCTL_HEAD_PUT 0xffffffff81236eb0
#endif

#ifndef REGISTER_SYSCTL_ROOT
#define REGISTER_SYSCTL_ROOT 0xffffffff81236ee0
#endif

#ifndef __REGISTER_SYSCTL_TABLE
#define __REGISTER_SYSCTL_TABLE 0xffffffff81236ef0
#endif

#ifndef REGISTER_SYSCTL
#define REGISTER_SYSCTL 0xffffffff81237490
#endif

#ifndef __REGISTER_SYSCTL_PATHS
#define __REGISTER_SYSCTL_PATHS 0xffffffff812376a0
#endif

#ifndef REGISTER_SYSCTL_PATHS
#define REGISTER_SYSCTL_PATHS 0xffffffff81237890
#endif

#ifndef REGISTER_SYSCTL_TABLE
#define REGISTER_SYSCTL_TABLE 0xffffffff812378b0
#endif

#ifndef SETUP_SYSCTL_SET
#define SETUP_SYSCTL_SET 0xffffffff812378e0
#endif

#ifndef RETIRE_SYSCTL_SET
#define RETIRE_SYSCTL_SET 0xffffffff81237960
#endif

#ifndef SEQ_OPEN_NET
#define SEQ_OPEN_NET 0xffffffff81237a20
#endif

#ifndef SEQ_RELEASE_NET
#define SEQ_RELEASE_NET 0xffffffff81237b70
#endif

#ifndef SINGLE_RELEASE_NET
#define SINGLE_RELEASE_NET 0xffffffff81237bd0
#endif

#ifndef SINGLE_OPEN_NET
#define SINGLE_OPEN_NET 0xffffffff81237d60
#endif

#ifndef KCLIST_ADD
#define KCLIST_ADD 0xffffffff81238a20
#endif

#ifndef REGISTER_OLDMEM_PFN_IS_RAM
#define REGISTER_OLDMEM_PFN_IS_RAM 0xffffffff81238a70
#endif

#ifndef UNREGISTER_OLDMEM_PFN_IS_RAM
#define UNREGISTER_OLDMEM_PFN_IS_RAM 0xffffffff81238a90
#endif

#ifndef VMCORE_CLEANUP
#define VMCORE_CLEANUP 0xffffffff812392b0
#endif

#ifndef STABLE_PAGE_FLAGS
#define STABLE_PAGE_FLAGS 0xffffffff81239540
#endif

#ifndef KERNFS_ROOT_FROM_SB
#define KERNFS_ROOT_FROM_SB 0xffffffff81239990
#endif

#ifndef KERNFS_SUPER_NS
#define KERNFS_SUPER_NS 0xffffffff812399b0
#endif

#ifndef KERNFS_MOUNT_NS
#define KERNFS_MOUNT_NS 0xffffffff812399d0
#endif

#ifndef KERNFS_KILL_SB
#define KERNFS_KILL_SB 0xffffffff81239c00
#endif

#ifndef KERNFS_PIN_SB
#define KERNFS_PIN_SB 0xffffffff81239c80
#endif

#ifndef KERNFS_IOP_GETATTR
#define KERNFS_IOP_GETATTR 0xffffffff81239dd0
#endif

#ifndef KERNFS_IOP_PERMISSION
#define KERNFS_IOP_PERMISSION 0xffffffff81239e20
#endif

#ifndef KERNFS_IOP_SETATTR
#define KERNFS_IOP_SETATTR 0xffffffff8123a000
#endif

#ifndef KERNFS_IOP_SETXATTR
#define KERNFS_IOP_SETXATTR 0xffffffff8123a090
#endif

#ifndef KERNFS_IOP_REMOVEXATTR
#define KERNFS_IOP_REMOVEXATTR 0xffffffff8123a200
#endif

#ifndef KERNFS_IOP_GETXATTR
#define KERNFS_IOP_GETXATTR 0xffffffff8123a240
#endif

#ifndef KERNFS_IOP_LISTXATTR
#define KERNFS_IOP_LISTXATTR 0xffffffff8123a2a0
#endif

#ifndef KERNFS_SETATTR
#define KERNFS_SETATTR 0xffffffff8123a2f0
#endif

#ifndef KERNFS_GET_INODE
#define KERNFS_GET_INODE 0xffffffff8123a330
#endif

#ifndef KERNFS_EVICT_INODE
#define KERNFS_EVICT_INODE 0xffffffff8123a440
#endif

#ifndef KERNFS_PATH
#define KERNFS_PATH 0xffffffff8123a5c0
#endif

#ifndef KERNFS_GET
#define KERNFS_GET 0xffffffff8123a620
#endif

#ifndef KERNFS_PUT
#define KERNFS_PUT 0xffffffff8123a960
#endif

#ifndef KERNFS_FIND_AND_GET_NS
#define KERNFS_FIND_AND_GET_NS 0xffffffff8123b180
#endif

#ifndef KERNFS_NAME
#define KERNFS_NAME 0xffffffff8123b340
#endif

#ifndef PR_CONT_KERNFS_NAME
#define PR_CONT_KERNFS_NAME 0xffffffff8123b3b0
#endif

#ifndef PR_CONT_KERNFS_PATH
#define PR_CONT_KERNFS_PATH 0xffffffff8123b420
#endif

#ifndef KERNFS_GET_PARENT
#define KERNFS_GET_PARENT 0xffffffff8123b490
#endif

#ifndef KERNFS_GET_ACTIVE
#define KERNFS_GET_ACTIVE 0xffffffff8123b4e0
#endif

#ifndef KERNFS_PUT_ACTIVE
#define KERNFS_PUT_ACTIVE 0xffffffff8123b520
#endif

#ifndef KERNFS_NODE_FROM_DENTRY
#define KERNFS_NODE_FROM_DENTRY 0xffffffff8123b720
#endif

#ifndef KERNFS_NEW_NODE
#define KERNFS_NEW_NODE 0xffffffff8123b740
#endif

#ifndef KERNFS_ACTIVATE
#define KERNFS_ACTIVATE 0xffffffff8123b790
#endif

#ifndef KERNFS_ADD_ONE
#define KERNFS_ADD_ONE 0xffffffff8123b870
#endif

#ifndef KERNFS_CREATE_DIR_NS
#define KERNFS_CREATE_DIR_NS 0xffffffff8123b9d0
#endif

#ifndef KERNFS_CREATE_EMPTY_DIR
#define KERNFS_CREATE_EMPTY_DIR 0xffffffff8123ba50
#endif

#ifndef KERNFS_CREATE_ROOT
#define KERNFS_CREATE_ROOT 0xffffffff8123bad0
#endif

#ifndef KERNFS_REMOVE
#define KERNFS_REMOVE 0xffffffff8123bbc0
#endif

#ifndef KERNFS_DESTROY_ROOT
#define KERNFS_DESTROY_ROOT 0xffffffff8123bbf0
#endif

#ifndef KERNFS_BREAK_ACTIVE_PROTECTION
#define KERNFS_BREAK_ACTIVE_PROTECTION 0xffffffff8123bc10
#endif

#ifndef KERNFS_UNBREAK_ACTIVE_PROTECTION
#define KERNFS_UNBREAK_ACTIVE_PROTECTION 0xffffffff8123bc30
#endif

#ifndef KERNFS_REMOVE_SELF
#define KERNFS_REMOVE_SELF 0xffffffff8123bc40
#endif

#ifndef KERNFS_REMOVE_BY_NAME_NS
#define KERNFS_REMOVE_BY_NAME_NS 0xffffffff8123bd70
#endif

#ifndef KERNFS_RENAME_NS
#define KERNFS_RENAME_NS 0xffffffff8123be10
#endif

#ifndef KERNFS_NOTIFY
#define KERNFS_NOTIFY 0xffffffff8123bfe0
#endif

#ifndef KERNFS_UNMAP_BIN_FILE
#define KERNFS_UNMAP_BIN_FILE 0xffffffff8123cfb0
#endif

#ifndef __KERNFS_CREATE_FILE
#define __KERNFS_CREATE_FILE 0xffffffff8123d070
#endif

#ifndef KERNFS_CREATE_LINK
#define KERNFS_CREATE_LINK 0xffffffff8123d300
#endif

#ifndef SYSFS_NOTIFY
#define SYSFS_NOTIFY 0xffffffff8123d520
#endif

#ifndef SYSFS_CHMOD_FILE
#define SYSFS_CHMOD_FILE 0xffffffff8123d640
#endif

#ifndef SYSFS_REMOVE_FILE_NS
#define SYSFS_REMOVE_FILE_NS 0xffffffff8123d6b0
#endif

#ifndef SYSFS_REMOVE_FILES
#define SYSFS_REMOVE_FILES 0xffffffff8123d6d0
#endif

#ifndef SYSFS_REMOVE_FILE_FROM_GROUP
#define SYSFS_REMOVE_FILE_FROM_GROUP 0xffffffff8123d720
#endif

#ifndef SYSFS_REMOVE_BIN_FILE
#define SYSFS_REMOVE_BIN_FILE 0xffffffff8123d780
#endif

#ifndef SYSFS_ADD_FILE_MODE_NS
#define SYSFS_ADD_FILE_MODE_NS 0xffffffff8123d8f0
#endif

#ifndef SYSFS_CREATE_FILE_NS
#define SYSFS_CREATE_FILE_NS 0xffffffff8123daa0
#endif

#ifndef SYSFS_CREATE_FILES
#define SYSFS_CREATE_FILES 0xffffffff8123dae0
#endif

#ifndef SYSFS_ADD_FILE_TO_GROUP
#define SYSFS_ADD_FILE_TO_GROUP 0xffffffff8123db70
#endif

#ifndef SYSFS_CREATE_BIN_FILE
#define SYSFS_CREATE_BIN_FILE 0xffffffff8123dbe0
#endif

#ifndef SYSFS_ADD_FILE
#define SYSFS_ADD_FILE 0xffffffff8123dc20
#endif

#ifndef SYSFS_REMOVE_FILE_SELF
#define SYSFS_REMOVE_FILE_SELF 0xffffffff8123dc40
#endif

#ifndef SYSFS_REMOVE_MOUNT_POINT
#define SYSFS_REMOVE_MOUNT_POINT 0xffffffff8123dcc0
#endif

#ifndef SYSFS_WARN_DUP
#define SYSFS_WARN_DUP 0xffffffff8123dce0
#endif

#ifndef SYSFS_CREATE_MOUNT_POINT
#define SYSFS_CREATE_MOUNT_POINT 0xffffffff8123dd50
#endif

#ifndef SYSFS_CREATE_DIR_NS
#define SYSFS_CREATE_DIR_NS 0xffffffff8123dda0
#endif

#ifndef SYSFS_REMOVE_DIR
#define SYSFS_REMOVE_DIR 0xffffffff8123de30
#endif

#ifndef SYSFS_RENAME_DIR_NS
#define SYSFS_RENAME_DIR_NS 0xffffffff8123dec0
#endif

#ifndef SYSFS_MOVE_DIR_NS
#define SYSFS_MOVE_DIR_NS 0xffffffff8123df10
#endif

#ifndef SYSFS_REMOVE_LINK
#define SYSFS_REMOVE_LINK 0xffffffff8123df60
#endif

#ifndef SYSFS_RENAME_LINK_NS
#define SYSFS_RENAME_LINK_NS 0xffffffff8123dfa0
#endif

#ifndef SYSFS_CREATE_LINK
#define SYSFS_CREATE_LINK 0xffffffff8123e100
#endif

#ifndef SYSFS_CREATE_LINK_SD
#define SYSFS_CREATE_LINK_SD 0xffffffff8123e150
#endif

#ifndef SYSFS_CREATE_LINK_NOWARN
#define SYSFS_CREATE_LINK_NOWARN 0xffffffff8123e170
#endif

#ifndef SYSFS_DELETE_LINK
#define SYSFS_DELETE_LINK 0xffffffff8123e1c0
#endif

#ifndef SYSFS_UNMERGE_GROUP
#define SYSFS_UNMERGE_GROUP 0xffffffff8123e2f0
#endif

#ifndef SYSFS_REMOVE_LINK_FROM_GROUP
#define SYSFS_REMOVE_LINK_FROM_GROUP 0xffffffff8123e360
#endif

#ifndef SYSFS_MERGE_GROUP
#define SYSFS_MERGE_GROUP 0xffffffff8123e3b0
#endif

#ifndef SYSFS_ADD_LINK_TO_GROUP
#define SYSFS_ADD_LINK_TO_GROUP 0xffffffff8123e470
#endif

#ifndef SYSFS_CREATE_GROUP
#define SYSFS_CREATE_GROUP 0xffffffff8123e7e0
#endif

#ifndef SYSFS_UPDATE_GROUP
#define SYSFS_UPDATE_GROUP 0xffffffff8123e800
#endif

#ifndef SYSFS_REMOVE_GROUP
#define SYSFS_REMOVE_GROUP 0xffffffff8123e820
#endif

#ifndef SYSFS_CREATE_GROUPS
#define SYSFS_CREATE_GROUPS 0xffffffff8123e8c0
#endif

#ifndef SYSFS_REMOVE_GROUPS
#define SYSFS_REMOVE_GROUPS 0xffffffff8123e960
#endif

#ifndef DEVPTS_NEW_INDEX
#define DEVPTS_NEW_INDEX 0xffffffff8123f140
#endif

#ifndef DEVPTS_KILL_INDEX
#define DEVPTS_KILL_INDEX 0xffffffff8123f240
#endif

#ifndef DEVPTS_PTY_NEW
#define DEVPTS_PTY_NEW 0xffffffff8123f2a0
#endif

#ifndef DEVPTS_GET_PRIV
#define DEVPTS_GET_PRIV 0xffffffff8123f4b0
#endif

#ifndef DEVPTS_PTY_KILL
#define DEVPTS_PTY_KILL 0xffffffff8123f520
#endif

#ifndef GET_DCOOKIE
#define GET_DCOOKIE 0xffffffff8123f600
#endif

#ifndef DCOOKIE_REGISTER
#define DCOOKIE_REGISTER 0xffffffff8123f710
#endif

#ifndef DCOOKIE_UNREGISTER
#define DCOOKIE_UNREGISTER 0xffffffff8123f820
#endif

#ifndef SYS_LOOKUP_DCOOKIE
#define SYS_LOOKUP_DCOOKIE 0xffffffff8123f970
#endif

#ifndef SYS_LOOKUP_DCOOKIE
#define SYS_LOOKUP_DCOOKIE 0xffffffff8123f970
#endif

#ifndef COMPAT_SYS_LOOKUP_DCOOKIE
#define COMPAT_SYS_LOOKUP_DCOOKIE 0xffffffff8123faa0
#endif

#ifndef COMPAT_SYS_LOOKUP_DCOOKIE
#define COMPAT_SYS_LOOKUP_DCOOKIE 0xffffffff8123faa0
#endif

#ifndef RAMFS_MOUNT
#define RAMFS_MOUNT 0xffffffff8123fbe0
#endif

#ifndef RAMFS_GET_INODE
#define RAMFS_GET_INODE 0xffffffff8123fc20
#endif

#ifndef RAMFS_FILL_SUPER
#define RAMFS_FILL_SUPER 0xffffffff8123fee0
#endif

#ifndef HUGETLB_FILE_SETUP
#define HUGETLB_FILE_SETUP 0xffffffff812412b0
#endif

#ifndef EXPORTFS_ENCODE_INODE_FH
#define EXPORTFS_ENCODE_INODE_FH 0xffffffff81241780
#endif

#ifndef EXPORTFS_ENCODE_FH
#define EXPORTFS_ENCODE_FH 0xffffffff81241830
#endif

#ifndef EXPORTFS_DECODE_FH
#define EXPORTFS_DECODE_FH 0xffffffff81241ca0
#endif

#ifndef UTF8_TO_UTF32
#define UTF8_TO_UTF32 0xffffffff81241fe0
#endif

#ifndef UTF32_TO_UTF8
#define UTF32_TO_UTF8 0xffffffff812420a0
#endif

#ifndef UNREGISTER_NLS
#define UNREGISTER_NLS 0xffffffff812421c0
#endif

#ifndef UNLOAD_NLS
#define UNLOAD_NLS 0xffffffff812422c0
#endif

#ifndef __REGISTER_NLS
#define __REGISTER_NLS 0xffffffff812422f0
#endif

#ifndef LOAD_NLS
#define LOAD_NLS 0xffffffff81242370
#endif

#ifndef LOAD_NLS_DEFAULT
#define LOAD_NLS_DEFAULT 0xffffffff812423b0
#endif

#ifndef UTF16S_TO_UTF8S
#define UTF16S_TO_UTF8S 0xffffffff812423e0
#endif

#ifndef UTF8S_TO_UTF16S
#define UTF8S_TO_UTF16S 0xffffffff81242520
#endif

#ifndef DEBUGFS_INITIALIZED
#define DEBUGFS_INITIALIZED 0xffffffff812426d0
#endif

#ifndef DEBUGFS_CREATE_AUTOMOUNT
#define DEBUGFS_CREATE_AUTOMOUNT 0xffffffff81242a90
#endif

#ifndef DEBUGFS_CREATE_SYMLINK
#define DEBUGFS_CREATE_SYMLINK 0xffffffff81242b20
#endif

#ifndef DEBUGFS_REMOVE
#define DEBUGFS_REMOVE 0xffffffff81242ce0
#endif

#ifndef DEBUGFS_REMOVE_RECURSIVE
#define DEBUGFS_REMOVE_RECURSIVE 0xffffffff81242d70
#endif

#ifndef DEBUGFS_RENAME
#define DEBUGFS_RENAME 0xffffffff81242fd0
#endif

#ifndef DEBUGFS_CREATE_FILE
#define DEBUGFS_CREATE_FILE 0xffffffff81243260
#endif

#ifndef DEBUGFS_CREATE_FILE_SIZE
#define DEBUGFS_CREATE_FILE_SIZE 0xffffffff81243390
#endif

#ifndef DEBUGFS_CREATE_DIR
#define DEBUGFS_CREATE_DIR 0xffffffff812433b0
#endif

#ifndef DEBUGFS_CREATE_X64
#define DEBUGFS_CREATE_X64 0xffffffff812435c0
#endif

#ifndef DEBUGFS_CREATE_SIZE_T
#define DEBUGFS_CREATE_SIZE_T 0xffffffff812435e0
#endif

#ifndef DEBUGFS_CREATE_BOOL
#define DEBUGFS_CREATE_BOOL 0xffffffff81243600
#endif

#ifndef DEBUGFS_CREATE_BLOB
#define DEBUGFS_CREATE_BLOB 0xffffffff81243620
#endif

#ifndef DEBUGFS_CREATE_REGSET32
#define DEBUGFS_CREATE_REGSET32 0xffffffff81243640
#endif

#ifndef DEBUGFS_CREATE_U32_ARRAY
#define DEBUGFS_CREATE_U32_ARRAY 0xffffffff81243cd0
#endif

#ifndef DEBUGFS_PRINT_REGS32
#define DEBUGFS_PRINT_REGS32 0xffffffff81243e30
#endif

#ifndef DEBUGFS_CREATE_DEVM_SEQFILE
#define DEBUGFS_CREATE_DEVM_SEQFILE 0xffffffff81243f50
#endif

#ifndef DEBUGFS_CREATE_U8
#define DEBUGFS_CREATE_U8 0xffffffff81243fe0
#endif

#ifndef DEBUGFS_CREATE_U16
#define DEBUGFS_CREATE_U16 0xffffffff81244040
#endif

#ifndef DEBUGFS_CREATE_U32
#define DEBUGFS_CREATE_U32 0xffffffff812440a0
#endif

#ifndef DEBUGFS_CREATE_U64
#define DEBUGFS_CREATE_U64 0xffffffff81244100
#endif

#ifndef DEBUGFS_CREATE_X8
#define DEBUGFS_CREATE_X8 0xffffffff81244160
#endif

#ifndef DEBUGFS_CREATE_X16
#define DEBUGFS_CREATE_X16 0xffffffff812441c0
#endif

#ifndef DEBUGFS_CREATE_X32
#define DEBUGFS_CREATE_X32 0xffffffff81244220
#endif

#ifndef DEBUGFS_CREATE_ATOMIC_T
#define DEBUGFS_CREATE_ATOMIC_T 0xffffffff81244280
#endif

#ifndef TRACEFS_CREATE_FILE
#define TRACEFS_CREATE_FILE 0xffffffff81244a70
#endif

#ifndef TRACEFS_CREATE_DIR
#define TRACEFS_CREATE_DIR 0xffffffff81244bc0
#endif

#ifndef TRACEFS_CREATE_INSTANCE_DIR
#define TRACEFS_CREATE_INSTANCE_DIR 0xffffffff81244be0
#endif

#ifndef TRACEFS_REMOVE
#define TRACEFS_REMOVE 0xffffffff81244c50
#endif

#ifndef TRACEFS_REMOVE_RECURSIVE
#define TRACEFS_REMOVE_RECURSIVE 0xffffffff81244ce0
#endif

#ifndef TRACEFS_INITIALIZED
#define TRACEFS_INITIALIZED 0xffffffff81244e70
#endif

#ifndef PSTORE_IS_MOUNTED
#define PSTORE_IS_MOUNTED 0xffffffff812453a0
#endif

#ifndef PSTORE_MKFILE
#define PSTORE_MKFILE 0xffffffff812453c0
#endif

#ifndef PSTORE_CANNOT_BLOCK_PATH
#define PSTORE_CANNOT_BLOCK_PATH 0xffffffff812458f0
#endif

#ifndef PSTORE_SET_KMSG_BYTES
#define PSTORE_SET_KMSG_BYTES 0xffffffff81245d60
#endif

#ifndef PSTORE_GET_RECORDS
#define PSTORE_GET_RECORDS 0xffffffff81245d70
#endif

#ifndef PSTORE_REGISTER
#define PSTORE_REGISTER 0xffffffff81246040
#endif

#ifndef COMPAT_SYS_IPC
#define COMPAT_SYS_IPC 0xffffffff81247300
#endif

#ifndef COMPAT_SYS_IPC
#define COMPAT_SYS_IPC 0xffffffff81247300
#endif

#ifndef COMPAT_SYS_SEMCTL
#define COMPAT_SYS_SEMCTL 0xffffffff81247580
#endif

#ifndef COMPAT_SYS_SEMCTL
#define COMPAT_SYS_SEMCTL 0xffffffff81247580
#endif

#ifndef COMPAT_SYS_MSGSND
#define COMPAT_SYS_MSGSND 0xffffffff812475a0
#endif

#ifndef COMPAT_SYS_MSGSND
#define COMPAT_SYS_MSGSND 0xffffffff812475a0
#endif

#ifndef COMPAT_SYS_MSGRCV
#define COMPAT_SYS_MSGRCV 0xffffffff812475f0
#endif

#ifndef COMPAT_SYS_MSGRCV
#define COMPAT_SYS_MSGRCV 0xffffffff812475f0
#endif

#ifndef COMPAT_SYS_MSGCTL
#define COMPAT_SYS_MSGCTL 0xffffffff81247620
#endif

#ifndef COMPAT_SYS_MSGCTL
#define COMPAT_SYS_MSGCTL 0xffffffff81247620
#endif

#ifndef COMPAT_SYS_SHMAT
#define COMPAT_SYS_SHMAT 0xffffffff81247640
#endif

#ifndef COMPAT_SYS_SHMAT
#define COMPAT_SYS_SHMAT 0xffffffff81247640
#endif

#ifndef COMPAT_SYS_SHMCTL
#define COMPAT_SYS_SHMCTL 0xffffffff81247670
#endif

#ifndef COMPAT_SYS_SHMCTL
#define COMPAT_SYS_SHMCTL 0xffffffff81247670
#endif

#ifndef COMPAT_SYS_SEMTIMEDOP
#define COMPAT_SYS_SEMTIMEDOP 0xffffffff81247690
#endif

#ifndef COMPAT_SYS_SEMTIMEDOP
#define COMPAT_SYS_SEMTIMEDOP 0xffffffff81247690
#endif

#ifndef IPC_INIT_IDS
#define IPC_INIT_IDS 0xffffffff81247a00
#endif

#ifndef IPC_GET_MAXID
#define IPC_GET_MAXID 0xffffffff81247a40
#endif

#ifndef IPC_ADDID
#define IPC_ADDID 0xffffffff81247ae0
#endif

#ifndef IPC_RMID
#define IPC_RMID 0xffffffff81247bd0
#endif

#ifndef IPC_ALLOC
#define IPC_ALLOC 0xffffffff81247c10
#endif

#ifndef IPC_FREE
#define IPC_FREE 0xffffffff81247c50
#endif

#ifndef IPC_RCU_ALLOC
#define IPC_RCU_ALLOC 0xffffffff81247c80
#endif

#ifndef IPC_RCU_GETREF
#define IPC_RCU_GETREF 0xffffffff81247cc0
#endif

#ifndef IPC_RCU_PUTREF
#define IPC_RCU_PUTREF 0xffffffff81247d20
#endif

#ifndef IPC_RCU_FREE
#define IPC_RCU_FREE 0xffffffff81247d50
#endif

#ifndef IPCPERMS
#define IPCPERMS 0xffffffff81247d90
#endif

#ifndef KERNEL_TO_IPC64_PERM
#define KERNEL_TO_IPC64_PERM 0xffffffff81247eb0
#endif

#ifndef IPC64_PERM_TO_IPC_PERM
#define IPC64_PERM_TO_IPC_PERM 0xffffffff81247f70
#endif

#ifndef IPC_OBTAIN_OBJECT
#define IPC_OBTAIN_OBJECT 0xffffffff81247fa0
#endif

#ifndef IPC_LOCK
#define IPC_LOCK 0xffffffff81248000
#endif

#ifndef IPC_OBTAIN_OBJECT_CHECK
#define IPC_OBTAIN_OBJECT_CHECK 0xffffffff81248090
#endif

#ifndef IPCGET
#define IPCGET 0xffffffff81248120
#endif

#ifndef IPC_UPDATE_PERM
#define IPC_UPDATE_PERM 0xffffffff812482e0
#endif

#ifndef IPCCTL_PRE_DOWN_NOLOCK
#define IPCCTL_PRE_DOWN_NOLOCK 0xffffffff81248370
#endif

#ifndef COPY_MSG
#define COPY_MSG 0xffffffff81248460
#endif

#ifndef STORE_MSG
#define STORE_MSG 0xffffffff81248630
#endif

#ifndef FREE_MSG
#define FREE_MSG 0xffffffff812486d0
#endif

#ifndef LOAD_MSG
#define LOAD_MSG 0xffffffff81248720
#endif

#ifndef SYS_MSGGET
#define SYS_MSGGET 0xffffffff81249160
#endif

#ifndef SYS_MSGGET
#define SYS_MSGGET 0xffffffff81249160
#endif

#ifndef SYS_MSGCTL
#define SYS_MSGCTL 0xffffffff812491b0
#endif

#ifndef SYS_MSGCTL
#define SYS_MSGCTL 0xffffffff812491b0
#endif

#ifndef DO_MSGSND
#define DO_MSGSND 0xffffffff81249240
#endif

#ifndef SYS_MSGSND
#define SYS_MSGSND 0xffffffff81249610
#endif

#ifndef SYS_MSGSND
#define SYS_MSGSND 0xffffffff81249610
#endif

#ifndef DO_MSGRCV
#define DO_MSGRCV 0xffffffff81249660
#endif

#ifndef SYS_MSGRCV
#define SYS_MSGRCV 0xffffffff81249bb0
#endif

#ifndef SYS_MSGRCV
#define SYS_MSGRCV 0xffffffff81249bb0
#endif

#ifndef MSG_INIT_NS
#define MSG_INIT_NS 0xffffffff81249bd0
#endif

#ifndef MSG_EXIT_NS
#define MSG_EXIT_NS 0xffffffff81249c20
#endif

#ifndef SEM_INIT_NS
#define SEM_INIT_NS 0xffffffff8124c280
#endif

#ifndef SEM_EXIT_NS
#define SEM_EXIT_NS 0xffffffff8124c2d0
#endif

#ifndef SYS_SEMGET
#define SYS_SEMGET 0xffffffff8124c300
#endif

#ifndef SYS_SEMGET
#define SYS_SEMGET 0xffffffff8124c300
#endif

#ifndef SYS_SEMCTL
#define SYS_SEMCTL 0xffffffff8124c370
#endif

#ifndef SYS_SEMCTL
#define SYS_SEMCTL 0xffffffff8124c370
#endif

#ifndef SYS_SEMTIMEDOP
#define SYS_SEMTIMEDOP 0xffffffff8124c5f0
#endif

#ifndef SYS_SEMTIMEDOP
#define SYS_SEMTIMEDOP 0xffffffff8124c5f0
#endif

#ifndef SYS_SEMOP
#define SYS_SEMOP 0xffffffff8124c610
#endif

#ifndef SYS_SEMOP
#define SYS_SEMOP 0xffffffff8124c610
#endif

#ifndef COPY_SEMUNDO
#define COPY_SEMUNDO 0xffffffff8124c630
#endif

#ifndef EXIT_SEM
#define EXIT_SEM 0xffffffff8124c6d0
#endif

#ifndef SHM_INIT_NS
#define SHM_INIT_NS 0xffffffff8124d8d0
#endif

#ifndef SHM_EXIT_NS
#define SHM_EXIT_NS 0xffffffff8124d920
#endif

#ifndef SHM_DESTROY_ORPHANED
#define SHM_DESTROY_ORPHANED 0xffffffff8124d950
#endif

#ifndef EXIT_SHM
#define EXIT_SHM 0xffffffff8124d9a0
#endif

#ifndef IS_FILE_SHM_HUGEPAGES
#define IS_FILE_SHM_HUGEPAGES 0xffffffff8124db60
#endif

#ifndef SYS_SHMGET
#define SYS_SHMGET 0xffffffff8124db80
#endif

#ifndef SYS_SHMGET
#define SYS_SHMGET 0xffffffff8124db80
#endif

#ifndef SYS_SHMCTL
#define SYS_SHMCTL 0xffffffff8124dbd0
#endif

#ifndef SYS_SHMCTL
#define SYS_SHMCTL 0xffffffff8124dbd0
#endif

#ifndef DO_SHMAT
#define DO_SHMAT 0xffffffff8124de80
#endif

#ifndef SYS_SHMAT
#define SYS_SHMAT 0xffffffff8124e2c0
#endif

#ifndef SYS_SHMAT
#define SYS_SHMAT 0xffffffff8124e2c0
#endif

#ifndef SYS_SHMDT
#define SYS_SHMDT 0xffffffff8124e2f0
#endif

#ifndef SYS_SHMDT
#define SYS_SHMDT 0xffffffff8124e2f0
#endif

#ifndef SYS_MQ_OPEN
#define SYS_MQ_OPEN 0xffffffff8124fb90
#endif

#ifndef SYS_MQ_OPEN
#define SYS_MQ_OPEN 0xffffffff8124fb90
#endif

#ifndef SYS_MQ_UNLINK
#define SYS_MQ_UNLINK 0xffffffff8124fed0
#endif

#ifndef SYS_MQ_UNLINK
#define SYS_MQ_UNLINK 0xffffffff8124fed0
#endif

#ifndef SYS_MQ_TIMEDSEND
#define SYS_MQ_TIMEDSEND 0xffffffff81250050
#endif

#ifndef SYS_MQ_TIMEDSEND
#define SYS_MQ_TIMEDSEND 0xffffffff81250050
#endif

#ifndef SYS_MQ_TIMEDRECEIVE
#define SYS_MQ_TIMEDRECEIVE 0xffffffff812503c0
#endif

#ifndef SYS_MQ_TIMEDRECEIVE
#define SYS_MQ_TIMEDRECEIVE 0xffffffff812503c0
#endif

#ifndef SYS_MQ_NOTIFY
#define SYS_MQ_NOTIFY 0xffffffff812508f0
#endif

#ifndef SYS_MQ_NOTIFY
#define SYS_MQ_NOTIFY 0xffffffff812508f0
#endif

#ifndef SYS_MQ_GETSETATTR
#define SYS_MQ_GETSETATTR 0xffffffff81250d30
#endif

#ifndef SYS_MQ_GETSETATTR
#define SYS_MQ_GETSETATTR 0xffffffff81250d30
#endif

#ifndef MQ_INIT_NS
#define MQ_INIT_NS 0xffffffff81250d50
#endif

#ifndef MQ_CLEAR_SBINFO
#define MQ_CLEAR_SBINFO 0xffffffff81250dd0
#endif

#ifndef MQ_PUT_MNT
#define MQ_PUT_MNT 0xffffffff81250df0
#endif

#ifndef COMPAT_SYS_MQ_OPEN
#define COMPAT_SYS_MQ_OPEN 0xffffffff81250e10
#endif

#ifndef COMPAT_SYS_MQ_OPEN
#define COMPAT_SYS_MQ_OPEN 0xffffffff81250e10
#endif

#ifndef COMPAT_SYS_MQ_TIMEDSEND
#define COMPAT_SYS_MQ_TIMEDSEND 0xffffffff81250f10
#endif

#ifndef COMPAT_SYS_MQ_TIMEDSEND
#define COMPAT_SYS_MQ_TIMEDSEND 0xffffffff81250f10
#endif

#ifndef COMPAT_SYS_MQ_TIMEDRECEIVE
#define COMPAT_SYS_MQ_TIMEDRECEIVE 0xffffffff81250f70
#endif

#ifndef COMPAT_SYS_MQ_TIMEDRECEIVE
#define COMPAT_SYS_MQ_TIMEDRECEIVE 0xffffffff81250f70
#endif

#ifndef COMPAT_SYS_MQ_NOTIFY
#define COMPAT_SYS_MQ_NOTIFY 0xffffffff81250fd0
#endif

#ifndef COMPAT_SYS_MQ_NOTIFY
#define COMPAT_SYS_MQ_NOTIFY 0xffffffff81250fd0
#endif

#ifndef COMPAT_SYS_MQ_GETSETATTR
#define COMPAT_SYS_MQ_GETSETATTR 0xffffffff81251060
#endif

#ifndef COMPAT_SYS_MQ_GETSETATTR
#define COMPAT_SYS_MQ_GETSETATTR 0xffffffff81251060
#endif

#ifndef COPY_IPCS
#define COPY_IPCS 0xffffffff81251280
#endif

#ifndef FREE_IPCS
#define FREE_IPCS 0xffffffff81251370
#endif

#ifndef PUT_IPC_NS
#define PUT_IPC_NS 0xffffffff81251430
#endif

#ifndef MQ_REGISTER_SYSCTL_TABLE
#define MQ_REGISTER_SYSCTL_TABLE 0xffffffff81251670
#endif

#ifndef KEY_SCHEDULE_GC
#define KEY_SCHEDULE_GC 0xffffffff81251790
#endif

#ifndef KEY_SCHEDULE_GC_LINKS
#define KEY_SCHEDULE_GC_LINKS 0xffffffff81251bd0
#endif

#ifndef KEY_GC_KEYTYPE
#define KEY_GC_KEYTYPE 0xffffffff81251c30
#endif

#ifndef KEY_PAYLOAD_RESERVE
#define KEY_PAYLOAD_RESERVE 0xffffffff81251cb0
#endif

#ifndef KEY_SET_TIMEOUT
#define KEY_SET_TIMEOUT 0xffffffff81251d70
#endif

#ifndef KEY_REVOKE
#define KEY_REVOKE 0xffffffff81251dc0
#endif

#ifndef KEY_INSTANTIATE_AND_LINK
#define KEY_INSTANTIATE_AND_LINK 0xffffffff81251f70
#endif

#ifndef KEY_REJECT_AND_LINK
#define KEY_REJECT_AND_LINK 0xffffffff81252070
#endif

#ifndef KEY_UPDATE
#define KEY_UPDATE 0xffffffff81252230
#endif

#ifndef REGISTER_KEY_TYPE
#define REGISTER_KEY_TYPE 0xffffffff81252340
#endif

#ifndef UNREGISTER_KEY_TYPE
#define UNREGISTER_KEY_TYPE 0xffffffff812523f0
#endif

#ifndef KEY_PUT
#define KEY_PUT 0xffffffff81252460
#endif

#ifndef KEY_INVALIDATE
#define KEY_INVALIDATE 0xffffffff812524a0
#endif

#ifndef GENERIC_KEY_INSTANTIATE
#define GENERIC_KEY_INSTANTIATE 0xffffffff812524e0
#endif

#ifndef KEY_USER_LOOKUP
#define KEY_USER_LOOKUP 0xffffffff81252560
#endif

#ifndef KEY_USER_PUT
#define KEY_USER_PUT 0xffffffff81252690
#endif

#ifndef KEY_ALLOC
#define KEY_ALLOC 0xffffffff812526d0
#endif

#ifndef KEY_LOOKUP
#define KEY_LOOKUP 0xffffffff81252b30
#endif

#ifndef KEY_TYPE_LOOKUP
#define KEY_TYPE_LOOKUP 0xffffffff81252bb0
#endif

#ifndef KEY_CREATE_OR_UPDATE
#define KEY_CREATE_OR_UPDATE 0xffffffff81252c30
#endif

#ifndef KEY_TYPE_PUT
#define KEY_TYPE_PUT 0xffffffff81252ff0
#endif

#ifndef KEYRING_ALLOC
#define KEYRING_ALLOC 0xffffffff81253700
#endif

#ifndef KEY_DEFAULT_CMP
#define KEY_DEFAULT_CMP 0xffffffff81253780
#endif

#ifndef KEYRING_CLEAR
#define KEYRING_CLEAR 0xffffffff81253cd0
#endif

#ifndef KEY_UNLINK
#define KEY_UNLINK 0xffffffff81253d50
#endif

#ifndef KEYRING_SEARCH_AUX
#define KEYRING_SEARCH_AUX 0xffffffff81253de0
#endif

#ifndef KEYRING_SEARCH
#define KEYRING_SEARCH 0xffffffff81253e90
#endif

#ifndef FIND_KEY_TO_UPDATE
#define FIND_KEY_TO_UPDATE 0xffffffff81253f40
#endif

#ifndef FIND_KEYRING_BY_NAME
#define FIND_KEYRING_BY_NAME 0xffffffff81253f90
#endif

#ifndef __KEY_LINK_BEGIN
#define __KEY_LINK_BEGIN 0xffffffff81254120
#endif

#ifndef __KEY_LINK_CHECK_LIVE_KEY
#define __KEY_LINK_CHECK_LIVE_KEY 0xffffffff81254230
#endif

#ifndef __KEY_LINK
#define __KEY_LINK 0xffffffff81254260
#endif

#ifndef __KEY_LINK_END
#define __KEY_LINK_END 0xffffffff812542a0
#endif

#ifndef KEY_LINK
#define KEY_LINK 0xffffffff81254320
#endif

#ifndef KEYRING_GC
#define KEYRING_GC 0xffffffff812543c0
#endif

#ifndef SYS_ADD_KEY
#define SYS_ADD_KEY 0xffffffff81254580
#endif

#ifndef SYS_ADD_KEY
#define SYS_ADD_KEY 0xffffffff81254580
#endif

#ifndef SYS_REQUEST_KEY
#define SYS_REQUEST_KEY 0xffffffff812547e0
#endif

#ifndef SYS_REQUEST_KEY
#define SYS_REQUEST_KEY 0xffffffff812547e0
#endif

#ifndef KEYCTL_GET_KEYRING_ID
#define KEYCTL_GET_KEYRING_ID 0xffffffff81254980
#endif

#ifndef KEYCTL_JOIN_SESSION_KEYRING
#define KEYCTL_JOIN_SESSION_KEYRING 0xffffffff812549c0
#endif

#ifndef KEYCTL_UPDATE_KEY
#define KEYCTL_UPDATE_KEY 0xffffffff81254a10
#endif

#ifndef KEYCTL_REVOKE_KEY
#define KEYCTL_REVOKE_KEY 0xffffffff81254af0
#endif

#ifndef KEYCTL_INVALIDATE_KEY
#define KEYCTL_INVALIDATE_KEY 0xffffffff81254b60
#endif

#ifndef KEYCTL_KEYRING_CLEAR
#define KEYCTL_KEYRING_CLEAR 0xffffffff81254be0
#endif

#ifndef KEYCTL_KEYRING_LINK
#define KEYCTL_KEYRING_LINK 0xffffffff81254c70
#endif

#ifndef KEYCTL_KEYRING_UNLINK
#define KEYCTL_KEYRING_UNLINK 0xffffffff81254d00
#endif

#ifndef KEYCTL_DESCRIBE_KEY
#define KEYCTL_DESCRIBE_KEY 0xffffffff81254d80
#endif

#ifndef KEYCTL_KEYRING_SEARCH
#define KEYCTL_KEYRING_SEARCH 0xffffffff81254f30
#endif

#ifndef KEYCTL_READ_KEY
#define KEYCTL_READ_KEY 0xffffffff81255100
#endif

#ifndef KEYCTL_CHOWN_KEY
#define KEYCTL_CHOWN_KEY 0xffffffff812551f0
#endif

#ifndef KEYCTL_SETPERM_KEY
#define KEYCTL_SETPERM_KEY 0xffffffff81255520
#endif

#ifndef KEYCTL_INSTANTIATE_KEY_COMMON
#define KEYCTL_INSTANTIATE_KEY_COMMON 0xffffffff812555d0
#endif

#ifndef KEYCTL_INSTANTIATE_KEY
#define KEYCTL_INSTANTIATE_KEY 0xffffffff81255740
#endif

#ifndef KEYCTL_INSTANTIATE_KEY_IOV
#define KEYCTL_INSTANTIATE_KEY_IOV 0xffffffff812557b0
#endif

#ifndef KEYCTL_REJECT_KEY
#define KEYCTL_REJECT_KEY 0xffffffff81255820
#endif

#ifndef KEYCTL_NEGATE_KEY
#define KEYCTL_NEGATE_KEY 0xffffffff81255900
#endif

#ifndef KEYCTL_SET_REQKEY_KEYRING
#define KEYCTL_SET_REQKEY_KEYRING 0xffffffff81255920
#endif

#ifndef KEYCTL_SET_TIMEOUT
#define KEYCTL_SET_TIMEOUT 0xffffffff81255a00
#endif

#ifndef KEYCTL_ASSUME_AUTHORITY
#define KEYCTL_ASSUME_AUTHORITY 0xffffffff81255a90
#endif

#ifndef KEYCTL_GET_SECURITY
#define KEYCTL_GET_SECURITY 0xffffffff81255af0
#endif

#ifndef KEYCTL_SESSION_TO_PARENT
#define KEYCTL_SESSION_TO_PARENT 0xffffffff81255c10
#endif

#ifndef SYS_KEYCTL
#define SYS_KEYCTL 0xffffffff81255e30
#endif

#ifndef SYS_KEYCTL
#define SYS_KEYCTL 0xffffffff81255e30
#endif

#ifndef KEY_TASK_PERMISSION
#define KEY_TASK_PERMISSION 0xffffffff81255fe0
#endif

#ifndef KEY_VALIDATE
#define KEY_VALIDATE 0xffffffff81256090
#endif

#ifndef LOOKUP_USER_KEY_POSSESSED
#define LOOKUP_USER_KEY_POSSESSED 0xffffffff812560f0
#endif

#ifndef INSTALL_USER_KEYRINGS
#define INSTALL_USER_KEYRINGS 0xffffffff81256150
#endif

#ifndef INSTALL_THREAD_KEYRING_TO_CRED
#define INSTALL_THREAD_KEYRING_TO_CRED 0xffffffff81256300
#endif

#ifndef INSTALL_PROCESS_KEYRING_TO_CRED
#define INSTALL_PROCESS_KEYRING_TO_CRED 0xffffffff81256350
#endif

#ifndef INSTALL_SESSION_KEYRING_TO_CRED
#define INSTALL_SESSION_KEYRING_TO_CRED 0xffffffff81256380
#endif

#ifndef KEY_FSUID_CHANGED
#define KEY_FSUID_CHANGED 0xffffffff81256400
#endif

#ifndef KEY_FSGID_CHANGED
#define KEY_FSGID_CHANGED 0xffffffff81256460
#endif

#ifndef SEARCH_MY_PROCESS_KEYRINGS
#define SEARCH_MY_PROCESS_KEYRINGS 0xffffffff812564c0
#endif

#ifndef SEARCH_PROCESS_KEYRINGS
#define SEARCH_PROCESS_KEYRINGS 0xffffffff81256620
#endif

#ifndef JOIN_SESSION_KEYRING
#define JOIN_SESSION_KEYRING 0xffffffff81256730
#endif

#ifndef LOOKUP_USER_KEY
#define LOOKUP_USER_KEY 0xffffffff812568a0
#endif

#ifndef KEY_CHANGE_SESSION_KEYRING
#define KEY_CHANGE_SESSION_KEYRING 0xffffffff81256dd0
#endif

#ifndef COMPLETE_REQUEST_KEY
#define COMPLETE_REQUEST_KEY 0xffffffff81256f10
#endif

#ifndef WAIT_FOR_KEY_CONSTRUCTION
#define WAIT_FOR_KEY_CONSTRUCTION 0xffffffff812573c0
#endif

#ifndef REQUEST_KEY_AND_LINK
#define REQUEST_KEY_AND_LINK 0xffffffff81257440
#endif

#ifndef REQUEST_KEY
#define REQUEST_KEY 0xffffffff81257940
#endif

#ifndef REQUEST_KEY_WITH_AUXDATA
#define REQUEST_KEY_WITH_AUXDATA 0xffffffff812579e0
#endif

#ifndef REQUEST_KEY_ASYNC
#define REQUEST_KEY_ASYNC 0xffffffff81257a40
#endif

#ifndef REQUEST_KEY_ASYNC_WITH_AUXDATA
#define REQUEST_KEY_ASYNC_WITH_AUXDATA 0xffffffff81257a70
#endif

#ifndef REQUEST_KEY_AUTH_NEW
#define REQUEST_KEY_AUTH_NEW 0xffffffff81257c30
#endif

#ifndef KEY_GET_INSTANTIATION_AUTHKEY
#define KEY_GET_INSTANTIATION_AUTHKEY 0xffffffff81257e80
#endif

#ifndef USER_FREE_PREPARSE
#define USER_FREE_PREPARSE 0xffffffff81257f90
#endif

#ifndef USER_DESTROY
#define USER_DESTROY 0xffffffff81257fb0
#endif

#ifndef USER_REVOKE
#define USER_REVOKE 0xffffffff81257fd0
#endif

#ifndef USER_READ
#define USER_READ 0xffffffff81258020
#endif

#ifndef USER_DESCRIBE
#define USER_DESCRIBE 0xffffffff81258070
#endif

#ifndef USER_UPDATE
#define USER_UPDATE 0xffffffff812580d0
#endif

#ifndef USER_PREPARSE
#define USER_PREPARSE 0xffffffff81258190
#endif

#ifndef COMPAT_SYS_KEYCTL
#define COMPAT_SYS_KEYCTL 0xffffffff81258280
#endif

#ifndef COMPAT_SYS_KEYCTL
#define COMPAT_SYS_KEYCTL 0xffffffff81258280
#endif

#ifndef CAP_NETLINK_SEND
#define CAP_NETLINK_SEND 0xffffffff81258bf0
#endif

#ifndef CAP_CAPABLE
#define CAP_CAPABLE 0xffffffff81258c00
#endif

#ifndef CAP_SETTIME
#define CAP_SETTIME 0xffffffff81258c70
#endif

#ifndef CAP_PTRACE_ACCESS_CHECK
#define CAP_PTRACE_ACCESS_CHECK 0xffffffff81258c90
#endif

#ifndef CAP_PTRACE_TRACEME
#define CAP_PTRACE_TRACEME 0xffffffff81258d10
#endif

#ifndef CAP_CAPGET
#define CAP_CAPGET 0xffffffff81258d90
#endif

#ifndef CAP_CAPSET
#define CAP_CAPSET 0xffffffff81258dc0
#endif

#ifndef CAP_INODE_NEED_KILLPRIV
#define CAP_INODE_NEED_KILLPRIV 0xffffffff81258ee0
#endif

#ifndef CAP_INODE_KILLPRIV
#define CAP_INODE_KILLPRIV 0xffffffff81258f20
#endif

#ifndef GET_VFS_CAPS_FROM_DISK
#define GET_VFS_CAPS_FROM_DISK 0xffffffff81258f60
#endif

#ifndef CAP_BPRM_SET_CREDS
#define CAP_BPRM_SET_CREDS 0xffffffff81259070
#endif

#ifndef CAP_BPRM_SECUREEXEC
#define CAP_BPRM_SECUREEXEC 0xffffffff812594b0
#endif

#ifndef CAP_INODE_SETXATTR
#define CAP_INODE_SETXATTR 0xffffffff81259530
#endif

#ifndef CAP_INODE_REMOVEXATTR
#define CAP_INODE_REMOVEXATTR 0xffffffff812595b0
#endif

#ifndef CAP_TASK_FIX_SETUID
#define CAP_TASK_FIX_SETUID 0xffffffff81259630
#endif

#ifndef CAP_TASK_SETSCHEDULER
#define CAP_TASK_SETSCHEDULER 0xffffffff81259820
#endif

#ifndef CAP_TASK_SETIOPRIO
#define CAP_TASK_SETIOPRIO 0xffffffff81259840
#endif

#ifndef CAP_TASK_SETNICE
#define CAP_TASK_SETNICE 0xffffffff81259860
#endif

#ifndef CAP_TASK_PRCTL
#define CAP_TASK_PRCTL 0xffffffff81259880
#endif

#ifndef CAP_VM_ENOUGH_MEMORY
#define CAP_VM_ENOUGH_MEMORY 0xffffffff81259a90
#endif

#ifndef CAP_MMAP_ADDR
#define CAP_MMAP_ADDR 0xffffffff81259ae0
#endif

#ifndef CAP_MMAP_FILE
#define CAP_MMAP_FILE 0xffffffff81259b40
#endif

#ifndef MMAP_MIN_ADDR_HANDLER
#define MMAP_MIN_ADDR_HANDLER 0xffffffff81259b50
#endif

#ifndef SECURITY_SB_COPY_DATA
#define SECURITY_SB_COPY_DATA 0xffffffff81259be0
#endif

#ifndef SECURITY_SB_SET_MNT_OPTS
#define SECURITY_SB_SET_MNT_OPTS 0xffffffff81259c00
#endif

#ifndef SECURITY_SB_CLONE_MNT_OPTS
#define SECURITY_SB_CLONE_MNT_OPTS 0xffffffff81259c20
#endif

#ifndef SECURITY_SB_PARSE_OPTS_STR
#define SECURITY_SB_PARSE_OPTS_STR 0xffffffff81259c40
#endif

#ifndef SECURITY_DENTRY_INIT_SECURITY
#define SECURITY_DENTRY_INIT_SECURITY 0xffffffff81259c60
#endif

#ifndef SECURITY_KERNEL_FW_FROM_FILE
#define SECURITY_KERNEL_FW_FROM_FILE 0xffffffff81259c80
#endif

#ifndef SECURITY_TASK_GETSECID
#define SECURITY_TASK_GETSECID 0xffffffff81259ca0
#endif

#ifndef SECURITY_ISMACLABEL
#define SECURITY_ISMACLABEL 0xffffffff81259cc0
#endif

#ifndef SECURITY_SECID_TO_SECCTX
#define SECURITY_SECID_TO_SECCTX 0xffffffff81259ce0
#endif

#ifndef SECURITY_SECCTX_TO_SECID
#define SECURITY_SECCTX_TO_SECID 0xffffffff81259d00
#endif

#ifndef SECURITY_RELEASE_SECCTX
#define SECURITY_RELEASE_SECCTX 0xffffffff81259d20
#endif

#ifndef SECURITY_INODE_NOTIFYSECCTX
#define SECURITY_INODE_NOTIFYSECCTX 0xffffffff81259d40
#endif

#ifndef SECURITY_INODE_SETSECCTX
#define SECURITY_INODE_SETSECCTX 0xffffffff81259d60
#endif

#ifndef SECURITY_INODE_GETSECCTX
#define SECURITY_INODE_GETSECCTX 0xffffffff81259d80
#endif

#ifndef SECURITY_UNIX_STREAM_CONNECT
#define SECURITY_UNIX_STREAM_CONNECT 0xffffffff81259da0
#endif

#ifndef SECURITY_UNIX_MAY_SEND
#define SECURITY_UNIX_MAY_SEND 0xffffffff81259dc0
#endif

#ifndef SECURITY_SOCK_RCV_SKB
#define SECURITY_SOCK_RCV_SKB 0xffffffff81259de0
#endif

#ifndef SECURITY_SOCKET_GETPEERSEC_DGRAM
#define SECURITY_SOCKET_GETPEERSEC_DGRAM 0xffffffff81259e00
#endif

#ifndef SECURITY_SK_CLONE
#define SECURITY_SK_CLONE 0xffffffff81259e20
#endif

#ifndef SECURITY_SK_CLASSIFY_FLOW
#define SECURITY_SK_CLASSIFY_FLOW 0xffffffff81259e40
#endif

#ifndef SECURITY_REQ_CLASSIFY_FLOW
#define SECURITY_REQ_CLASSIFY_FLOW 0xffffffff81259e70
#endif

#ifndef SECURITY_SOCK_GRAFT
#define SECURITY_SOCK_GRAFT 0xffffffff81259e90
#endif

#ifndef SECURITY_INET_CONN_REQUEST
#define SECURITY_INET_CONN_REQUEST 0xffffffff81259eb0
#endif

#ifndef SECURITY_SECMARK_RELABEL_PACKET
#define SECURITY_SECMARK_RELABEL_PACKET 0xffffffff81259ed0
#endif

#ifndef SECURITY_SECMARK_REFCOUNT_INC
#define SECURITY_SECMARK_REFCOUNT_INC 0xffffffff81259ef0
#endif

#ifndef SECURITY_SECMARK_REFCOUNT_DEC
#define SECURITY_SECMARK_REFCOUNT_DEC 0xffffffff81259f10
#endif

#ifndef SECURITY_TUN_DEV_ALLOC_SECURITY
#define SECURITY_TUN_DEV_ALLOC_SECURITY 0xffffffff81259f30
#endif

#ifndef SECURITY_TUN_DEV_FREE_SECURITY
#define SECURITY_TUN_DEV_FREE_SECURITY 0xffffffff81259f50
#endif

#ifndef SECURITY_TUN_DEV_CREATE
#define SECURITY_TUN_DEV_CREATE 0xffffffff81259f70
#endif

#ifndef SECURITY_TUN_DEV_ATTACH_QUEUE
#define SECURITY_TUN_DEV_ATTACH_QUEUE 0xffffffff81259f90
#endif

#ifndef SECURITY_TUN_DEV_ATTACH
#define SECURITY_TUN_DEV_ATTACH 0xffffffff81259fb0
#endif

#ifndef SECURITY_TUN_DEV_OPEN
#define SECURITY_TUN_DEV_OPEN 0xffffffff81259fd0
#endif

#ifndef SECURITY_XFRM_POLICY_ALLOC
#define SECURITY_XFRM_POLICY_ALLOC 0xffffffff81259ff0
#endif

#ifndef SECURITY_XFRM_POLICY_FREE
#define SECURITY_XFRM_POLICY_FREE 0xffffffff8125a010
#endif

#ifndef SECURITY_XFRM_STATE_ALLOC
#define SECURITY_XFRM_STATE_ALLOC 0xffffffff8125a030
#endif

#ifndef SECURITY_XFRM_STATE_DELETE
#define SECURITY_XFRM_STATE_DELETE 0xffffffff8125a050
#endif

#ifndef SECURITY_OLD_INODE_INIT_SECURITY
#define SECURITY_OLD_INODE_INIT_SECURITY 0xffffffff8125a070
#endif

#ifndef SECURITY_PATH_MKNOD
#define SECURITY_PATH_MKNOD 0xffffffff8125a0b0
#endif

#ifndef SECURITY_PATH_MKDIR
#define SECURITY_PATH_MKDIR 0xffffffff8125a0f0
#endif

#ifndef SECURITY_PATH_UNLINK
#define SECURITY_PATH_UNLINK 0xffffffff8125a130
#endif

#ifndef SECURITY_INODE_CREATE
#define SECURITY_INODE_CREATE 0xffffffff8125a170
#endif

#ifndef SECURITY_INODE_MKDIR
#define SECURITY_INODE_MKDIR 0xffffffff8125a1b0
#endif

#ifndef SECURITY_INODE_SETATTR
#define SECURITY_INODE_SETATTR 0xffffffff8125a1f0
#endif

#ifndef SECURITY_INODE_LISTSECURITY
#define SECURITY_INODE_LISTSECURITY 0xffffffff8125a230
#endif

#ifndef SECURITY_D_INSTANTIATE
#define SECURITY_D_INSTANTIATE 0xffffffff8125a260
#endif

#ifndef SECURITY_INODE_INIT_SECURITY
#define SECURITY_INODE_INIT_SECURITY 0xffffffff8125a2a0
#endif

#ifndef SECURITY_PATH_RENAME
#define SECURITY_PATH_RENAME 0xffffffff8125a370
#endif

#ifndef SECURITY_SKB_CLASSIFY_FLOW
#define SECURITY_SKB_CLASSIFY_FLOW 0xffffffff8125a410
#endif

#ifndef RESET_SECURITY_OPS
#define RESET_SECURITY_OPS 0xffffffff8125a440
#endif

#ifndef SECURITY_BINDER_SET_CONTEXT_MGR
#define SECURITY_BINDER_SET_CONTEXT_MGR 0xffffffff8125a460
#endif

#ifndef SECURITY_BINDER_TRANSACTION
#define SECURITY_BINDER_TRANSACTION 0xffffffff8125a480
#endif

#ifndef SECURITY_BINDER_TRANSFER_BINDER
#define SECURITY_BINDER_TRANSFER_BINDER 0xffffffff8125a4a0
#endif

#ifndef SECURITY_BINDER_TRANSFER_FILE
#define SECURITY_BINDER_TRANSFER_FILE 0xffffffff8125a4c0
#endif

#ifndef SECURITY_PTRACE_ACCESS_CHECK
#define SECURITY_PTRACE_ACCESS_CHECK 0xffffffff8125a4e0
#endif

#ifndef SECURITY_PTRACE_TRACEME
#define SECURITY_PTRACE_TRACEME 0xffffffff8125a520
#endif

#ifndef SECURITY_CAPGET
#define SECURITY_CAPGET 0xffffffff8125a550
#endif

#ifndef SECURITY_CAPSET
#define SECURITY_CAPSET 0xffffffff8125a570
#endif

#ifndef SECURITY_CAPABLE
#define SECURITY_CAPABLE 0xffffffff8125a590
#endif

#ifndef SECURITY_CAPABLE_NOAUDIT
#define SECURITY_CAPABLE_NOAUDIT 0xffffffff8125a5b0
#endif

#ifndef SECURITY_QUOTACTL
#define SECURITY_QUOTACTL 0xffffffff8125a5d0
#endif

#ifndef SECURITY_QUOTA_ON
#define SECURITY_QUOTA_ON 0xffffffff8125a5f0
#endif

#ifndef SECURITY_SYSLOG
#define SECURITY_SYSLOG 0xffffffff8125a610
#endif

#ifndef SECURITY_SETTIME
#define SECURITY_SETTIME 0xffffffff8125a630
#endif

#ifndef SECURITY_VM_ENOUGH_MEMORY_MM
#define SECURITY_VM_ENOUGH_MEMORY_MM 0xffffffff8125a650
#endif

#ifndef SECURITY_BPRM_SET_CREDS
#define SECURITY_BPRM_SET_CREDS 0xffffffff8125a670
#endif

#ifndef SECURITY_BPRM_CHECK
#define SECURITY_BPRM_CHECK 0xffffffff8125a690
#endif

#ifndef SECURITY_BPRM_COMMITTING_CREDS
#define SECURITY_BPRM_COMMITTING_CREDS 0xffffffff8125a6b0
#endif

#ifndef SECURITY_BPRM_COMMITTED_CREDS
#define SECURITY_BPRM_COMMITTED_CREDS 0xffffffff8125a6d0
#endif

#ifndef SECURITY_BPRM_SECUREEXEC
#define SECURITY_BPRM_SECUREEXEC 0xffffffff8125a6f0
#endif

#ifndef SECURITY_SB_ALLOC
#define SECURITY_SB_ALLOC 0xffffffff8125a710
#endif

#ifndef SECURITY_SB_FREE
#define SECURITY_SB_FREE 0xffffffff8125a730
#endif

#ifndef SECURITY_SB_REMOUNT
#define SECURITY_SB_REMOUNT 0xffffffff8125a750
#endif

#ifndef SECURITY_SB_KERN_MOUNT
#define SECURITY_SB_KERN_MOUNT 0xffffffff8125a770
#endif

#ifndef SECURITY_SB_SHOW_OPTIONS
#define SECURITY_SB_SHOW_OPTIONS 0xffffffff8125a790
#endif

#ifndef SECURITY_SB_STATFS
#define SECURITY_SB_STATFS 0xffffffff8125a7b0
#endif

#ifndef SECURITY_SB_MOUNT
#define SECURITY_SB_MOUNT 0xffffffff8125a7d0
#endif

#ifndef SECURITY_SB_UMOUNT
#define SECURITY_SB_UMOUNT 0xffffffff8125a7f0
#endif

#ifndef SECURITY_SB_PIVOTROOT
#define SECURITY_SB_PIVOTROOT 0xffffffff8125a810
#endif

#ifndef SECURITY_INODE_ALLOC
#define SECURITY_INODE_ALLOC 0xffffffff8125a830
#endif

#ifndef SECURITY_INODE_FREE
#define SECURITY_INODE_FREE 0xffffffff8125a860
#endif

#ifndef SECURITY_PATH_RMDIR
#define SECURITY_PATH_RMDIR 0xffffffff8125a890
#endif

#ifndef SECURITY_PATH_SYMLINK
#define SECURITY_PATH_SYMLINK 0xffffffff8125a8d0
#endif

#ifndef SECURITY_PATH_LINK
#define SECURITY_PATH_LINK 0xffffffff8125a910
#endif

#ifndef SECURITY_PATH_TRUNCATE
#define SECURITY_PATH_TRUNCATE 0xffffffff8125a950
#endif

#ifndef SECURITY_PATH_CHMOD
#define SECURITY_PATH_CHMOD 0xffffffff8125a990
#endif

#ifndef SECURITY_PATH_CHOWN
#define SECURITY_PATH_CHOWN 0xffffffff8125a9d0
#endif

#ifndef SECURITY_PATH_CHROOT
#define SECURITY_PATH_CHROOT 0xffffffff8125aa10
#endif

#ifndef SECURITY_INODE_LINK
#define SECURITY_INODE_LINK 0xffffffff8125aa30
#endif

#ifndef SECURITY_INODE_UNLINK
#define SECURITY_INODE_UNLINK 0xffffffff8125aa70
#endif

#ifndef SECURITY_INODE_SYMLINK
#define SECURITY_INODE_SYMLINK 0xffffffff8125aab0
#endif

#ifndef SECURITY_INODE_RMDIR
#define SECURITY_INODE_RMDIR 0xffffffff8125aae0
#endif

#ifndef SECURITY_INODE_MKNOD
#define SECURITY_INODE_MKNOD 0xffffffff8125ab20
#endif

#ifndef SECURITY_INODE_RENAME
#define SECURITY_INODE_RENAME 0xffffffff8125ab60
#endif

#ifndef SECURITY_INODE_READLINK
#define SECURITY_INODE_READLINK 0xffffffff8125ac00
#endif

#ifndef SECURITY_INODE_FOLLOW_LINK
#define SECURITY_INODE_FOLLOW_LINK 0xffffffff8125ac40
#endif

#ifndef SECURITY_INODE_PERMISSION
#define SECURITY_INODE_PERMISSION 0xffffffff8125ac80
#endif

#ifndef SECURITY_INODE_GETATTR
#define SECURITY_INODE_GETATTR 0xffffffff8125acb0
#endif

#ifndef SECURITY_INODE_SETXATTR
#define SECURITY_INODE_SETXATTR 0xffffffff8125acf0
#endif

#ifndef SECURITY_INODE_POST_SETXATTR
#define SECURITY_INODE_POST_SETXATTR 0xffffffff8125ad30
#endif

#ifndef SECURITY_INODE_GETXATTR
#define SECURITY_INODE_GETXATTR 0xffffffff8125ad70
#endif

#ifndef SECURITY_INODE_LISTXATTR
#define SECURITY_INODE_LISTXATTR 0xffffffff8125adb0
#endif

#ifndef SECURITY_INODE_REMOVEXATTR
#define SECURITY_INODE_REMOVEXATTR 0xffffffff8125adf0
#endif

#ifndef SECURITY_INODE_NEED_KILLPRIV
#define SECURITY_INODE_NEED_KILLPRIV 0xffffffff8125ae30
#endif

#ifndef SECURITY_INODE_KILLPRIV
#define SECURITY_INODE_KILLPRIV 0xffffffff8125ae50
#endif

#ifndef SECURITY_INODE_GETSECURITY
#define SECURITY_INODE_GETSECURITY 0xffffffff8125ae70
#endif

#ifndef SECURITY_INODE_SETSECURITY
#define SECURITY_INODE_SETSECURITY 0xffffffff8125aeb0
#endif

#ifndef SECURITY_INODE_GETSECID
#define SECURITY_INODE_GETSECID 0xffffffff8125aef0
#endif

#ifndef SECURITY_FILE_PERMISSION
#define SECURITY_FILE_PERMISSION 0xffffffff8125af10
#endif

#ifndef SECURITY_FILE_ALLOC
#define SECURITY_FILE_ALLOC 0xffffffff8125afb0
#endif

#ifndef SECURITY_FILE_FREE
#define SECURITY_FILE_FREE 0xffffffff8125afd0
#endif

#ifndef SECURITY_FILE_IOCTL
#define SECURITY_FILE_IOCTL 0xffffffff8125aff0
#endif

#ifndef SECURITY_MMAP_FILE
#define SECURITY_MMAP_FILE 0xffffffff8125b010
#endif

#ifndef SECURITY_MMAP_ADDR
#define SECURITY_MMAP_ADDR 0xffffffff8125b090
#endif

#ifndef SECURITY_FILE_MPROTECT
#define SECURITY_FILE_MPROTECT 0xffffffff8125b0b0
#endif

#ifndef SECURITY_FILE_LOCK
#define SECURITY_FILE_LOCK 0xffffffff8125b0d0
#endif

#ifndef SECURITY_FILE_FCNTL
#define SECURITY_FILE_FCNTL 0xffffffff8125b0f0
#endif

#ifndef SECURITY_FILE_SET_FOWNER
#define SECURITY_FILE_SET_FOWNER 0xffffffff8125b110
#endif

#ifndef SECURITY_FILE_SEND_SIGIOTASK
#define SECURITY_FILE_SEND_SIGIOTASK 0xffffffff8125b130
#endif

#ifndef SECURITY_FILE_RECEIVE
#define SECURITY_FILE_RECEIVE 0xffffffff8125b150
#endif

#ifndef SECURITY_FILE_OPEN
#define SECURITY_FILE_OPEN 0xffffffff8125b170
#endif

#ifndef SECURITY_TASK_CREATE
#define SECURITY_TASK_CREATE 0xffffffff8125b1e0
#endif

#ifndef SECURITY_TASK_FREE
#define SECURITY_TASK_FREE 0xffffffff8125b200
#endif

#ifndef SECURITY_CRED_ALLOC_BLANK
#define SECURITY_CRED_ALLOC_BLANK 0xffffffff8125b230
#endif

#ifndef SECURITY_CRED_FREE
#define SECURITY_CRED_FREE 0xffffffff8125b250
#endif

#ifndef SECURITY_PREPARE_CREDS
#define SECURITY_PREPARE_CREDS 0xffffffff8125b270
#endif

#ifndef SECURITY_TRANSFER_CREDS
#define SECURITY_TRANSFER_CREDS 0xffffffff8125b290
#endif

#ifndef SECURITY_KERNEL_ACT_AS
#define SECURITY_KERNEL_ACT_AS 0xffffffff8125b2b0
#endif

#ifndef SECURITY_KERNEL_CREATE_FILES_AS
#define SECURITY_KERNEL_CREATE_FILES_AS 0xffffffff8125b2d0
#endif

#ifndef SECURITY_KERNEL_MODULE_REQUEST
#define SECURITY_KERNEL_MODULE_REQUEST 0xffffffff8125b2f0
#endif

#ifndef SECURITY_KERNEL_MODULE_FROM_FILE
#define SECURITY_KERNEL_MODULE_FROM_FILE 0xffffffff8125b310
#endif

#ifndef SECURITY_TASK_FIX_SETUID
#define SECURITY_TASK_FIX_SETUID 0xffffffff8125b330
#endif

#ifndef SECURITY_TASK_SETPGID
#define SECURITY_TASK_SETPGID 0xffffffff8125b350
#endif

#ifndef SECURITY_TASK_GETPGID
#define SECURITY_TASK_GETPGID 0xffffffff8125b370
#endif

#ifndef SECURITY_TASK_GETSID
#define SECURITY_TASK_GETSID 0xffffffff8125b390
#endif

#ifndef SECURITY_TASK_SETNICE
#define SECURITY_TASK_SETNICE 0xffffffff8125b3b0
#endif

#ifndef SECURITY_TASK_SETIOPRIO
#define SECURITY_TASK_SETIOPRIO 0xffffffff8125b3d0
#endif

#ifndef SECURITY_TASK_GETIOPRIO
#define SECURITY_TASK_GETIOPRIO 0xffffffff8125b3f0
#endif

#ifndef SECURITY_TASK_SETRLIMIT
#define SECURITY_TASK_SETRLIMIT 0xffffffff8125b410
#endif

#ifndef SECURITY_TASK_SETSCHEDULER
#define SECURITY_TASK_SETSCHEDULER 0xffffffff8125b430
#endif

#ifndef SECURITY_TASK_GETSCHEDULER
#define SECURITY_TASK_GETSCHEDULER 0xffffffff8125b450
#endif

#ifndef SECURITY_TASK_MOVEMEMORY
#define SECURITY_TASK_MOVEMEMORY 0xffffffff8125b470
#endif

#ifndef SECURITY_TASK_KILL
#define SECURITY_TASK_KILL 0xffffffff8125b490
#endif

#ifndef SECURITY_TASK_WAIT
#define SECURITY_TASK_WAIT 0xffffffff8125b4b0
#endif

#ifndef SECURITY_TASK_PRCTL
#define SECURITY_TASK_PRCTL 0xffffffff8125b4d0
#endif

#ifndef SECURITY_TASK_TO_INODE
#define SECURITY_TASK_TO_INODE 0xffffffff8125b530
#endif

#ifndef SECURITY_IPC_PERMISSION
#define SECURITY_IPC_PERMISSION 0xffffffff8125b550
#endif

#ifndef SECURITY_IPC_GETSECID
#define SECURITY_IPC_GETSECID 0xffffffff8125b570
#endif

#ifndef SECURITY_MSG_MSG_ALLOC
#define SECURITY_MSG_MSG_ALLOC 0xffffffff8125b590
#endif

#ifndef SECURITY_MSG_MSG_FREE
#define SECURITY_MSG_MSG_FREE 0xffffffff8125b5b0
#endif

#ifndef SECURITY_MSG_QUEUE_ALLOC
#define SECURITY_MSG_QUEUE_ALLOC 0xffffffff8125b5d0
#endif

#ifndef SECURITY_MSG_QUEUE_FREE
#define SECURITY_MSG_QUEUE_FREE 0xffffffff8125b5f0
#endif

#ifndef SECURITY_MSG_QUEUE_ASSOCIATE
#define SECURITY_MSG_QUEUE_ASSOCIATE 0xffffffff8125b610
#endif

#ifndef SECURITY_MSG_QUEUE_MSGCTL
#define SECURITY_MSG_QUEUE_MSGCTL 0xffffffff8125b630
#endif

#ifndef SECURITY_MSG_QUEUE_MSGSND
#define SECURITY_MSG_QUEUE_MSGSND 0xffffffff8125b650
#endif

#ifndef SECURITY_MSG_QUEUE_MSGRCV
#define SECURITY_MSG_QUEUE_MSGRCV 0xffffffff8125b670
#endif

#ifndef SECURITY_SHM_ALLOC
#define SECURITY_SHM_ALLOC 0xffffffff8125b690
#endif

#ifndef SECURITY_SHM_FREE
#define SECURITY_SHM_FREE 0xffffffff8125b6b0
#endif

#ifndef SECURITY_SHM_ASSOCIATE
#define SECURITY_SHM_ASSOCIATE 0xffffffff8125b6d0
#endif

#ifndef SECURITY_SHM_SHMCTL
#define SECURITY_SHM_SHMCTL 0xffffffff8125b6f0
#endif

#ifndef SECURITY_SHM_SHMAT
#define SECURITY_SHM_SHMAT 0xffffffff8125b710
#endif

#ifndef SECURITY_SEM_ALLOC
#define SECURITY_SEM_ALLOC 0xffffffff8125b730
#endif

#ifndef SECURITY_SEM_FREE
#define SECURITY_SEM_FREE 0xffffffff8125b750
#endif

#ifndef SECURITY_SEM_ASSOCIATE
#define SECURITY_SEM_ASSOCIATE 0xffffffff8125b770
#endif

#ifndef SECURITY_SEM_SEMCTL
#define SECURITY_SEM_SEMCTL 0xffffffff8125b790
#endif

#ifndef SECURITY_SEM_SEMOP
#define SECURITY_SEM_SEMOP 0xffffffff8125b7b0
#endif

#ifndef SECURITY_GETPROCATTR
#define SECURITY_GETPROCATTR 0xffffffff8125b7d0
#endif

#ifndef SECURITY_SETPROCATTR
#define SECURITY_SETPROCATTR 0xffffffff8125b7f0
#endif

#ifndef SECURITY_NETLINK_SEND
#define SECURITY_NETLINK_SEND 0xffffffff8125b810
#endif

#ifndef SECURITY_SOCKET_CREATE
#define SECURITY_SOCKET_CREATE 0xffffffff8125b830
#endif

#ifndef SECURITY_SOCKET_POST_CREATE
#define SECURITY_SOCKET_POST_CREATE 0xffffffff8125b850
#endif

#ifndef SECURITY_SOCKET_BIND
#define SECURITY_SOCKET_BIND 0xffffffff8125b870
#endif

#ifndef SECURITY_SOCKET_CONNECT
#define SECURITY_SOCKET_CONNECT 0xffffffff8125b890
#endif

#ifndef SECURITY_SOCKET_LISTEN
#define SECURITY_SOCKET_LISTEN 0xffffffff8125b8b0
#endif

#ifndef SECURITY_SOCKET_ACCEPT
#define SECURITY_SOCKET_ACCEPT 0xffffffff8125b8d0
#endif

#ifndef SECURITY_SOCKET_SENDMSG
#define SECURITY_SOCKET_SENDMSG 0xffffffff8125b8f0
#endif

#ifndef SECURITY_SOCKET_RECVMSG
#define SECURITY_SOCKET_RECVMSG 0xffffffff8125b910
#endif

#ifndef SECURITY_SOCKET_GETSOCKNAME
#define SECURITY_SOCKET_GETSOCKNAME 0xffffffff8125b930
#endif

#ifndef SECURITY_SOCKET_GETPEERNAME
#define SECURITY_SOCKET_GETPEERNAME 0xffffffff8125b950
#endif

#ifndef SECURITY_SOCKET_GETSOCKOPT
#define SECURITY_SOCKET_GETSOCKOPT 0xffffffff8125b970
#endif

#ifndef SECURITY_SOCKET_SETSOCKOPT
#define SECURITY_SOCKET_SETSOCKOPT 0xffffffff8125b990
#endif

#ifndef SECURITY_SOCKET_SHUTDOWN
#define SECURITY_SOCKET_SHUTDOWN 0xffffffff8125b9b0
#endif

#ifndef SECURITY_SOCKET_GETPEERSEC_STREAM
#define SECURITY_SOCKET_GETPEERSEC_STREAM 0xffffffff8125b9d0
#endif

#ifndef SECURITY_SK_ALLOC
#define SECURITY_SK_ALLOC 0xffffffff8125b9f0
#endif

#ifndef SECURITY_SK_FREE
#define SECURITY_SK_FREE 0xffffffff8125ba10
#endif

#ifndef SECURITY_INET_CSK_CLONE
#define SECURITY_INET_CSK_CLONE 0xffffffff8125ba30
#endif

#ifndef SECURITY_INET_CONN_ESTABLISHED
#define SECURITY_INET_CONN_ESTABLISHED 0xffffffff8125ba50
#endif

#ifndef SECURITY_XFRM_POLICY_CLONE
#define SECURITY_XFRM_POLICY_CLONE 0xffffffff8125ba70
#endif

#ifndef SECURITY_XFRM_POLICY_DELETE
#define SECURITY_XFRM_POLICY_DELETE 0xffffffff8125ba90
#endif

#ifndef SECURITY_XFRM_STATE_ALLOC_ACQUIRE
#define SECURITY_XFRM_STATE_ALLOC_ACQUIRE 0xffffffff8125bab0
#endif

#ifndef SECURITY_XFRM_STATE_FREE
#define SECURITY_XFRM_STATE_FREE 0xffffffff8125bad0
#endif

#ifndef SECURITY_XFRM_POLICY_LOOKUP
#define SECURITY_XFRM_POLICY_LOOKUP 0xffffffff8125baf0
#endif

#ifndef SECURITY_XFRM_STATE_POL_FLOW_MATCH
#define SECURITY_XFRM_STATE_POL_FLOW_MATCH 0xffffffff8125bb10
#endif

#ifndef SECURITY_XFRM_DECODE_SESSION
#define SECURITY_XFRM_DECODE_SESSION 0xffffffff8125bb30
#endif

#ifndef SECURITY_KEY_ALLOC
#define SECURITY_KEY_ALLOC 0xffffffff8125bb60
#endif

#ifndef SECURITY_KEY_FREE
#define SECURITY_KEY_FREE 0xffffffff8125bb80
#endif

#ifndef SECURITY_KEY_PERMISSION
#define SECURITY_KEY_PERMISSION 0xffffffff8125bba0
#endif

#ifndef SECURITY_KEY_GETSECURITY
#define SECURITY_KEY_GETSECURITY 0xffffffff8125bbc0
#endif

#ifndef SECURITY_AUDIT_RULE_INIT
#define SECURITY_AUDIT_RULE_INIT 0xffffffff8125bbe0
#endif

#ifndef SECURITY_AUDIT_RULE_KNOWN
#define SECURITY_AUDIT_RULE_KNOWN 0xffffffff8125bc00
#endif

#ifndef SECURITY_AUDIT_RULE_FREE
#define SECURITY_AUDIT_RULE_FREE 0xffffffff8125bc20
#endif

#ifndef SECURITY_AUDIT_RULE_MATCH
#define SECURITY_AUDIT_RULE_MATCH 0xffffffff8125bc40
#endif

#ifndef SECURITYFS_CREATE_FILE
#define SECURITYFS_CREATE_FILE 0xffffffff8125c7b0
#endif

#ifndef SECURITYFS_CREATE_DIR
#define SECURITYFS_CREATE_DIR 0xffffffff8125c9e0
#endif

#ifndef SECURITYFS_REMOVE
#define SECURITYFS_REMOVE 0xffffffff8125ca00
#endif

#ifndef AVC_GET_HASH_STATS
#define AVC_GET_HASH_STATS 0xffffffff8125d300
#endif

#ifndef SLOW_AVC_AUDIT
#define SLOW_AVC_AUDIT 0xffffffff8125d390
#endif

#ifndef AVC_SS_RESET
#define AVC_SS_RESET 0xffffffff8125d420
#endif

#ifndef AVC_HAS_PERM_NOAUDIT
#define AVC_HAS_PERM_NOAUDIT 0xffffffff8125d4a0
#endif

#ifndef AVC_HAS_PERM
#define AVC_HAS_PERM 0xffffffff8125d590
#endif

#ifndef AVC_POLICY_SEQNO
#define AVC_POLICY_SEQNO 0xffffffff8125d700
#endif

#ifndef AVC_DISABLE
#define AVC_DISABLE 0xffffffff8125d710
#endif

#ifndef SELINUX_COMPLETE_INIT
#define SELINUX_COMPLETE_INIT 0xffffffff812658b0
#endif

#ifndef SELNL_NOTIFY_SETENFORCE
#define SELNL_NOTIFY_SETENFORCE 0xffffffff812684c0
#endif

#ifndef SELNL_NOTIFY_POLICYLOAD
#define SELNL_NOTIFY_POLICYLOAD 0xffffffff812684f0
#endif

#ifndef SELINUX_NLMSG_LOOKUP
#define SELINUX_NLMSG_LOOKUP 0xffffffff81268520
#endif

#ifndef SEL_NETIF_SID
#define SEL_NETIF_SID 0xffffffff81268770
#endif

#ifndef SEL_NETIF_FLUSH
#define SEL_NETIF_FLUSH 0xffffffff81268990
#endif

#ifndef SEL_NETNODE_SID
#define SEL_NETNODE_SID 0xffffffff81268ac0
#endif

#ifndef SEL_NETNODE_FLUSH
#define SEL_NETNODE_FLUSH 0xffffffff81268ca0
#endif

#ifndef SEL_NETPORT_SID
#define SEL_NETPORT_SID 0xffffffff81268dd0
#endif

#ifndef SEL_NETPORT_FLUSH
#define SEL_NETPORT_FLUSH 0xffffffff81268f50
#endif

#ifndef SELINUX_IS_ENABLED
#define SELINUX_IS_ENABLED 0xffffffff81269000
#endif

#ifndef EBITMAP_CMP
#define EBITMAP_CMP 0xffffffff81269020
#endif

#ifndef EBITMAP_CONTAINS
#define EBITMAP_CONTAINS 0xffffffff812690b0
#endif

#ifndef EBITMAP_GET_BIT
#define EBITMAP_GET_BIT 0xffffffff81269190
#endif

#ifndef EBITMAP_SET_BIT
#define EBITMAP_SET_BIT 0xffffffff81269200
#endif

#ifndef EBITMAP_DESTROY
#define EBITMAP_DESTROY 0xffffffff81269410
#endif

#ifndef EBITMAP_CPY
#define EBITMAP_CPY 0xffffffff81269460
#endif

#ifndef EBITMAP_READ
#define EBITMAP_READ 0xffffffff81269550
#endif

#ifndef EBITMAP_WRITE
#define EBITMAP_WRITE 0xffffffff81269810
#endif

#ifndef HASHTAB_CREATE
#define HASHTAB_CREATE 0xffffffff81269ad0
#endif

#ifndef HASHTAB_INSERT
#define HASHTAB_INSERT 0xffffffff81269b90
#endif

#ifndef HASHTAB_SEARCH
#define HASHTAB_SEARCH 0xffffffff81269ca0
#endif

#ifndef HASHTAB_DESTROY
#define HASHTAB_DESTROY 0xffffffff81269d20
#endif

#ifndef HASHTAB_MAP
#define HASHTAB_MAP 0xffffffff81269db0
#endif

#ifndef HASHTAB_STAT
#define HASHTAB_STAT 0xffffffff81269e30
#endif

#ifndef SYMTAB_INIT
#define SYMTAB_INIT 0xffffffff81269f10
#endif

#ifndef SIDTAB_INIT
#define SIDTAB_INIT 0xffffffff81269ff0
#endif

#ifndef SIDTAB_INSERT
#define SIDTAB_INSERT 0xffffffff8126a060
#endif

#ifndef SIDTAB_SEARCH
#define SIDTAB_SEARCH 0xffffffff8126a220
#endif

#ifndef SIDTAB_SEARCH_FORCE
#define SIDTAB_SEARCH_FORCE 0xffffffff8126a230
#endif

#ifndef SIDTAB_MAP
#define SIDTAB_MAP 0xffffffff8126a240
#endif

#ifndef SIDTAB_CONTEXT_TO_SID
#define SIDTAB_CONTEXT_TO_SID 0xffffffff8126a2b0
#endif

#ifndef SIDTAB_HASH_EVAL
#define SIDTAB_HASH_EVAL 0xffffffff8126a6b0
#endif

#ifndef SIDTAB_DESTROY
#define SIDTAB_DESTROY 0xffffffff8126a720
#endif

#ifndef SIDTAB_SET
#define SIDTAB_SET 0xffffffff8126a830
#endif

#ifndef SIDTAB_SHUTDOWN
#define SIDTAB_SHUTDOWN 0xffffffff8126a890
#endif

#ifndef AVTAB_INSERT_NONUNIQUE
#define AVTAB_INSERT_NONUNIQUE 0xffffffff8126aaf0
#endif

#ifndef AVTAB_SEARCH
#define AVTAB_SEARCH 0xffffffff8126ac40
#endif

#ifndef AVTAB_SEARCH_NODE
#define AVTAB_SEARCH_NODE 0xffffffff8126ad60
#endif

#ifndef AVTAB_SEARCH_NODE_NEXT
#define AVTAB_SEARCH_NODE_NEXT 0xffffffff8126ae70
#endif

#ifndef AVTAB_DESTROY
#define AVTAB_DESTROY 0xffffffff8126af00
#endif

#ifndef AVTAB_INIT
#define AVTAB_INIT 0xffffffff8126af90
#endif

#ifndef AVTAB_ALLOC
#define AVTAB_ALLOC 0xffffffff8126afb0
#endif

#ifndef AVTAB_HASH_EVAL
#define AVTAB_HASH_EVAL 0xffffffff8126b050
#endif

#ifndef AVTAB_READ_ITEM
#define AVTAB_READ_ITEM 0xffffffff8126b0f0
#endif

#ifndef AVTAB_READ
#define AVTAB_READ 0xffffffff8126b540
#endif

#ifndef AVTAB_WRITE_ITEM
#define AVTAB_WRITE_ITEM 0xffffffff8126b640
#endif

#ifndef AVTAB_WRITE
#define AVTAB_WRITE 0xffffffff8126b690
#endif

#ifndef AVTAB_CACHE_INIT
#define AVTAB_CACHE_INIT 0xffffffff8126b740
#endif

#ifndef AVTAB_CACHE_DESTROY
#define AVTAB_CACHE_DESTROY 0xffffffff8126b770
#endif

#ifndef POLICYDB_DESTROY
#define POLICYDB_DESTROY 0xffffffff8126e030
#endif

#ifndef POLICYDB_LOAD_ISIDS
#define POLICYDB_LOAD_ISIDS 0xffffffff8126e2e0
#endif

#ifndef POLICYDB_CLASS_ISVALID
#define POLICYDB_CLASS_ISVALID 0xffffffff8126e380
#endif

#ifndef POLICYDB_ROLE_ISVALID
#define POLICYDB_ROLE_ISVALID 0xffffffff8126e3a0
#endif

#ifndef POLICYDB_TYPE_ISVALID
#define POLICYDB_TYPE_ISVALID 0xffffffff8126e3c0
#endif

#ifndef POLICYDB_CONTEXT_ISVALID
#define POLICYDB_CONTEXT_ISVALID 0xffffffff8126e3e0
#endif

#ifndef STRING_TO_SECURITY_CLASS
#define STRING_TO_SECURITY_CLASS 0xffffffff8126e4a0
#endif

#ifndef STRING_TO_AV_PERM
#define STRING_TO_AV_PERM 0xffffffff8126e4d0
#endif

#ifndef POLICYDB_READ
#define POLICYDB_READ 0xffffffff8126e500
#endif

#ifndef POLICYDB_WRITE
#define POLICYDB_WRITE 0xffffffff8126fb10
#endif

#ifndef SECURITY_MLS_ENABLED
#define SECURITY_MLS_ENABLED 0xffffffff812728b0
#endif

#ifndef SECURITY_VALIDATE_TRANSITION
#define SECURITY_VALIDATE_TRANSITION 0xffffffff812728c0
#endif

#ifndef SECURITY_BOUNDED_TRANSITION
#define SECURITY_BOUNDED_TRANSITION 0xffffffff81272b40
#endif

#ifndef SECURITY_COMPUTE_AV
#define SECURITY_COMPUTE_AV 0xffffffff81272ca0
#endif

#ifndef SECURITY_COMPUTE_AV_USER
#define SECURITY_COMPUTE_AV_USER 0xffffffff81272f70
#endif

#ifndef SECURITY_GET_INITIAL_SID_CONTEXT
#define SECURITY_GET_INITIAL_SID_CONTEXT 0xffffffff812730a0
#endif

#ifndef SECURITY_SID_TO_CONTEXT
#define SECURITY_SID_TO_CONTEXT 0xffffffff812730c0
#endif

#ifndef SECURITY_SID_TO_CONTEXT_FORCE
#define SECURITY_SID_TO_CONTEXT_FORCE 0xffffffff812730e0
#endif

#ifndef SECURITY_CONTEXT_TO_SID
#define SECURITY_CONTEXT_TO_SID 0xffffffff81273100
#endif

#ifndef SECURITY_CONTEXT_TO_SID_DEFAULT
#define SECURITY_CONTEXT_TO_SID_DEFAULT 0xffffffff81273120
#endif

#ifndef SECURITY_CONTEXT_TO_SID_FORCE
#define SECURITY_CONTEXT_TO_SID_FORCE 0xffffffff81273140
#endif

#ifndef SECURITY_TRANSITION_SID
#define SECURITY_TRANSITION_SID 0xffffffff81273160
#endif

#ifndef SECURITY_TRANSITION_SID_USER
#define SECURITY_TRANSITION_SID_USER 0xffffffff812731a0
#endif

#ifndef SECURITY_MEMBER_SID
#define SECURITY_MEMBER_SID 0xffffffff812731d0
#endif

#ifndef SECURITY_CHANGE_SID
#define SECURITY_CHANGE_SID 0xffffffff81273200
#endif

#ifndef SECURITY_POLICYDB_LEN
#define SECURITY_POLICYDB_LEN 0xffffffff81273230
#endif

#ifndef SECURITY_PORT_SID
#define SECURITY_PORT_SID 0xffffffff81273260
#endif

#ifndef SECURITY_NETIF_SID
#define SECURITY_NETIF_SID 0xffffffff81273320
#endif

#ifndef SECURITY_NODE_SID
#define SECURITY_NODE_SID 0xffffffff812733f0
#endif

#ifndef SECURITY_GET_USER_SIDS
#define SECURITY_GET_USER_SIDS 0xffffffff81273510
#endif

#ifndef SECURITY_GENFS_SID
#define SECURITY_GENFS_SID 0xffffffff812739f0
#endif

#ifndef SECURITY_FS_USE
#define SECURITY_FS_USE 0xffffffff81273b50
#endif

#ifndef SECURITY_GET_BOOLS
#define SECURITY_GET_BOOLS 0xffffffff81273d30
#endif

#ifndef SECURITY_LOAD_POLICY
#define SECURITY_LOAD_POLICY 0xffffffff81273f40
#endif

#ifndef SECURITY_SET_BOOLS
#define SECURITY_SET_BOOLS 0xffffffff81274500
#endif

#ifndef SECURITY_GET_BOOL_VALUE
#define SECURITY_GET_BOOL_VALUE 0xffffffff81274730
#endif

#ifndef SECURITY_SID_MLS_COPY
#define SECURITY_SID_MLS_COPY 0xffffffff81274780
#endif

#ifndef SECURITY_NET_PEERSID_RESOLVE
#define SECURITY_NET_PEERSID_RESOLVE 0xffffffff812749c0
#endif

#ifndef SECURITY_GET_CLASSES
#define SECURITY_GET_CLASSES 0xffffffff81274ad0
#endif

#ifndef SECURITY_GET_PERMISSIONS
#define SECURITY_GET_PERMISSIONS 0xffffffff81274ba0
#endif

#ifndef SECURITY_GET_REJECT_UNKNOWN
#define SECURITY_GET_REJECT_UNKNOWN 0xffffffff81274cf0
#endif

#ifndef SECURITY_GET_ALLOW_UNKNOWN
#define SECURITY_GET_ALLOW_UNKNOWN 0xffffffff81274d00
#endif

#ifndef SECURITY_POLICYCAP_SUPPORTED
#define SECURITY_POLICYCAP_SUPPORTED 0xffffffff81274d20
#endif

#ifndef SELINUX_AUDIT_RULE_FREE
#define SELINUX_AUDIT_RULE_FREE 0xffffffff81274d50
#endif

#ifndef SELINUX_AUDIT_RULE_INIT
#define SELINUX_AUDIT_RULE_INIT 0xffffffff81274df0
#endif

#ifndef SELINUX_AUDIT_RULE_KNOWN
#define SELINUX_AUDIT_RULE_KNOWN 0xffffffff81274fd0
#endif

#ifndef SELINUX_AUDIT_RULE_MATCH
#define SELINUX_AUDIT_RULE_MATCH 0xffffffff81275030
#endif

#ifndef SECURITY_READ_POLICY
#define SECURITY_READ_POLICY 0xffffffff81275350
#endif

#ifndef EVALUATE_COND_NODE
#define EVALUATE_COND_NODE 0xffffffff812757b0
#endif

#ifndef COND_POLICYDB_INIT
#define COND_POLICYDB_INIT 0xffffffff812759e0
#endif

#ifndef COND_POLICYDB_DESTROY
#define COND_POLICYDB_DESTROY 0xffffffff81275a10
#endif

#ifndef COND_INIT_BOOL_INDEXES
#define COND_INIT_BOOL_INDEXES 0xffffffff81275a60
#endif

#ifndef COND_DESTROY_BOOL
#define COND_DESTROY_BOOL 0xffffffff81275aa0
#endif

#ifndef COND_INDEX_BOOL
#define COND_INDEX_BOOL 0xffffffff81275ac0
#endif

#ifndef COND_READ_BOOL
#define COND_READ_BOOL 0xffffffff81275b30
#endif

#ifndef COND_READ_LIST
#define COND_READ_LIST 0xffffffff81275c40
#endif

#ifndef COND_WRITE_BOOL
#define COND_WRITE_BOOL 0xffffffff81275ef0
#endif

#ifndef COND_WRITE_LIST
#define COND_WRITE_LIST 0xffffffff81275f50
#endif

#ifndef COND_COMPUTE_AV
#define COND_COMPUTE_AV 0xffffffff81276090
#endif

#ifndef MLS_COMPUTE_CONTEXT_LEN
#define MLS_COMPUTE_CONTEXT_LEN 0xffffffff81276150
#endif

#ifndef MLS_SID_TO_CONTEXT
#define MLS_SID_TO_CONTEXT 0xffffffff81276360
#endif

#ifndef MLS_LEVEL_ISVALID
#define MLS_LEVEL_ISVALID 0xffffffff81276640
#endif

#ifndef MLS_RANGE_ISVALID
#define MLS_RANGE_ISVALID 0xffffffff812766b0
#endif

#ifndef MLS_CONTEXT_ISVALID
#define MLS_CONTEXT_ISVALID 0xffffffff81276710
#endif

#ifndef MLS_CONTEXT_TO_SID
#define MLS_CONTEXT_TO_SID 0xffffffff812767c0
#endif

#ifndef MLS_FROM_STRING
#define MLS_FROM_STRING 0xffffffff81276b50
#endif

#ifndef MLS_RANGE_SET
#define MLS_RANGE_SET 0xffffffff81276bc0
#endif

#ifndef MLS_SETUP_USER_RANGE
#define MLS_SETUP_USER_RANGE 0xffffffff81276c10
#endif

#ifndef MLS_CONVERT_CONTEXT
#define MLS_CONVERT_CONTEXT 0xffffffff81276e50
#endif

#ifndef MLS_COMPUTE_SID
#define MLS_COMPUTE_SID 0xffffffff81276fe0
#endif

#ifndef SELINUX_KERNEL_STATUS_PAGE
#define SELINUX_KERNEL_STATUS_PAGE 0xffffffff81277330
#endif

#ifndef SELINUX_STATUS_UPDATE_SETENFORCE
#define SELINUX_STATUS_UPDATE_SETENFORCE 0xffffffff812773e0
#endif

#ifndef SELINUX_STATUS_UPDATE_POLICYLOAD
#define SELINUX_STATUS_UPDATE_POLICYLOAD 0xffffffff81277440
#endif

#ifndef SELINUX_XFRM_POLICY_LOOKUP
#define SELINUX_XFRM_POLICY_LOOKUP 0xffffffff812776f0
#endif

#ifndef SELINUX_XFRM_STATE_POL_FLOW_MATCH
#define SELINUX_XFRM_STATE_POL_FLOW_MATCH 0xffffffff81277750
#endif

#ifndef SELINUX_XFRM_DECODE_SESSION
#define SELINUX_XFRM_DECODE_SESSION 0xffffffff812777d0
#endif

#ifndef SELINUX_XFRM_SKB_SID
#define SELINUX_XFRM_SKB_SID 0xffffffff81277800
#endif

#ifndef SELINUX_XFRM_POLICY_ALLOC
#define SELINUX_XFRM_POLICY_ALLOC 0xffffffff81277860
#endif

#ifndef SELINUX_XFRM_POLICY_CLONE
#define SELINUX_XFRM_POLICY_CLONE 0xffffffff81277880
#endif

#ifndef SELINUX_XFRM_POLICY_FREE
#define SELINUX_XFRM_POLICY_FREE 0xffffffff812778d0
#endif

#ifndef SELINUX_XFRM_POLICY_DELETE
#define SELINUX_XFRM_POLICY_DELETE 0xffffffff812778f0
#endif

#ifndef SELINUX_XFRM_STATE_ALLOC
#define SELINUX_XFRM_STATE_ALLOC 0xffffffff81277910
#endif

#ifndef SELINUX_XFRM_STATE_ALLOC_ACQUIRE
#define SELINUX_XFRM_STATE_ALLOC_ACQUIRE 0xffffffff81277930
#endif

#ifndef SELINUX_XFRM_STATE_FREE
#define SELINUX_XFRM_STATE_FREE 0xffffffff81277a00
#endif

#ifndef SELINUX_XFRM_STATE_DELETE
#define SELINUX_XFRM_STATE_DELETE 0xffffffff81277a20
#endif

#ifndef SELINUX_XFRM_SOCK_RCV_SKB
#define SELINUX_XFRM_SOCK_RCV_SKB 0xffffffff81277a40
#endif

#ifndef SELINUX_XFRM_POSTROUTE_LAST
#define SELINUX_XFRM_POSTROUTE_LAST 0xffffffff81277ac0
#endif

#ifndef IPV4_SKB_TO_AUDITDATA
#define IPV4_SKB_TO_AUDITDATA 0xffffffff81277b40
#endif

#ifndef IPV6_SKB_TO_AUDITDATA
#define IPV6_SKB_TO_AUDITDATA 0xffffffff81277bf0
#endif

#ifndef COMMON_LSM_AUDIT
#define COMMON_LSM_AUDIT 0xffffffff81277d90
#endif

#ifndef TOMOYO_INIT_LOG
#define TOMOYO_INIT_LOG 0xffffffff812784a0
#endif

#ifndef TOMOYO_WRITE_LOG2
#define TOMOYO_WRITE_LOG2 0xffffffff812790d0
#endif

#ifndef TOMOYO_WRITE_LOG
#define TOMOYO_WRITE_LOG 0xffffffff812792f0
#endif

#ifndef TOMOYO_READ_LOG
#define TOMOYO_READ_LOG 0xffffffff81279390
#endif

#ifndef TOMOYO_POLL_LOG
#define TOMOYO_POLL_LOG 0xffffffff81279460
#endif

#ifndef TOMOYO_YESNO
#define TOMOYO_YESNO 0xffffffff8127c1f0
#endif

#ifndef TOMOYO_INIT_POLICY_NAMESPACE
#define TOMOYO_INIT_POLICY_NAMESPACE 0xffffffff8127c210
#endif

#ifndef TOMOYO_PROFILE
#define TOMOYO_PROFILE 0xffffffff8127c2e0
#endif

#ifndef TOMOYO_SUPERVISOR
#define TOMOYO_SUPERVISOR 0xffffffff8127c300
#endif

#ifndef TOMOYO_UPDATE_STAT
#define TOMOYO_UPDATE_STAT 0xffffffff8127c940
#endif

#ifndef TOMOYO_OPEN_CONTROL
#define TOMOYO_OPEN_CONTROL 0xffffffff8127c960
#endif

#ifndef TOMOYO_POLL_CONTROL
#define TOMOYO_POLL_CONTROL 0xffffffff8127cbe0
#endif

#ifndef TOMOYO_READ_CONTROL
#define TOMOYO_READ_CONTROL 0xffffffff8127cc10
#endif

#ifndef TOMOYO_WRITE_CONTROL
#define TOMOYO_WRITE_CONTROL 0xffffffff8127cdc0
#endif

#ifndef TOMOYO_CLOSE_CONTROL
#define TOMOYO_CLOSE_CONTROL 0xffffffff8127d470
#endif

#ifndef TOMOYO_CHECK_PROFILE
#define TOMOYO_CHECK_PROFILE 0xffffffff8127d4d0
#endif

#ifndef TOMOYO_GET_CONDITION
#define TOMOYO_GET_CONDITION 0xffffffff8127d6a0
#endif

#ifndef TOMOYO_GET_ATTRIBUTES
#define TOMOYO_GET_ATTRIBUTES 0xffffffff8127e010
#endif

#ifndef TOMOYO_CONDITION
#define TOMOYO_CONDITION 0xffffffff8127e0f0
#endif

#ifndef TOMOYO_UPDATE_POLICY
#define TOMOYO_UPDATE_POLICY 0xffffffff8127ef30
#endif

#ifndef TOMOYO_UPDATE_DOMAIN
#define TOMOYO_UPDATE_DOMAIN 0xffffffff8127f020
#endif

#ifndef TOMOYO_CHECK_ACL
#define TOMOYO_CHECK_ACL 0xffffffff8127f190
#endif

#ifndef TOMOYO_WRITE_TRANSITION_CONTROL
#define TOMOYO_WRITE_TRANSITION_CONTROL 0xffffffff8127f290
#endif

#ifndef TOMOYO_WRITE_AGGREGATOR
#define TOMOYO_WRITE_AGGREGATOR 0xffffffff8127f470
#endif

#ifndef TOMOYO_ASSIGN_NAMESPACE
#define TOMOYO_ASSIGN_NAMESPACE 0xffffffff8127f5a0
#endif

#ifndef TOMOYO_ASSIGN_DOMAIN
#define TOMOYO_ASSIGN_DOMAIN 0xffffffff8127f6d0
#endif

#ifndef TOMOYO_DUMP_PAGE
#define TOMOYO_DUMP_PAGE 0xffffffff8127f930
#endif

#ifndef TOMOYO_FIND_NEXT_DOMAIN
#define TOMOYO_FIND_NEXT_DOMAIN 0xffffffff8127fac0
#endif

#ifndef TOMOYO_ENV_PERM
#define TOMOYO_ENV_PERM 0xffffffff81280340
#endif

#ifndef TOMOYO_WRITE_MISC
#define TOMOYO_WRITE_MISC 0xffffffff812803c0
#endif

#ifndef TOMOYO_PUT_NAME_UNION
#define TOMOYO_PUT_NAME_UNION 0xffffffff81280870
#endif

#ifndef TOMOYO_COMPARE_NAME_UNION
#define TOMOYO_COMPARE_NAME_UNION 0xffffffff81280a50
#endif

#ifndef TOMOYO_PUT_NUMBER_UNION
#define TOMOYO_PUT_NUMBER_UNION 0xffffffff81280b30
#endif

#ifndef TOMOYO_COMPARE_NUMBER_UNION
#define TOMOYO_COMPARE_NUMBER_UNION 0xffffffff81280b50
#endif

#ifndef TOMOYO_EXECUTE_PERMISSION
#define TOMOYO_EXECUTE_PERMISSION 0xffffffff81280c70
#endif

#ifndef TOMOYO_PATH_NUMBER_PERM
#define TOMOYO_PATH_NUMBER_PERM 0xffffffff81280d30
#endif

#ifndef TOMOYO_CHECK_OPEN_PERMISSION
#define TOMOYO_CHECK_OPEN_PERMISSION 0xffffffff81280ef0
#endif

#ifndef TOMOYO_PATH_PERM
#define TOMOYO_PATH_PERM 0xffffffff81281020
#endif

#ifndef TOMOYO_MKDEV_PERM
#define TOMOYO_MKDEV_PERM 0xffffffff812811c0
#endif

#ifndef TOMOYO_PATH2_PERM
#define TOMOYO_PATH2_PERM 0xffffffff81281340
#endif

#ifndef TOMOYO_WRITE_FILE
#define TOMOYO_WRITE_FILE 0xffffffff81281550
#endif

#ifndef TOMOYO_DEL_CONDITION
#define TOMOYO_DEL_CONDITION 0xffffffff81281960
#endif

#ifndef TOMOYO_NOTIFY_GC
#define TOMOYO_NOTIFY_GC 0xffffffff81282270
#endif

#ifndef TOMOYO_WRITE_GROUP
#define TOMOYO_WRITE_GROUP 0xffffffff81282430
#endif

#ifndef TOMOYO_PATH_MATCHES_GROUP
#define TOMOYO_PATH_MATCHES_GROUP 0xffffffff812825b0
#endif

#ifndef TOMOYO_NUMBER_MATCHES_GROUP
#define TOMOYO_NUMBER_MATCHES_GROUP 0xffffffff81282630
#endif

#ifndef TOMOYO_ADDRESS_MATCHES_GROUP
#define TOMOYO_ADDRESS_MATCHES_GROUP 0xffffffff812826a0
#endif

#ifndef TOMOYO_LOAD_POLICY
#define TOMOYO_LOAD_POLICY 0xffffffff81282750
#endif

#ifndef TOMOYO_WARN_OOM
#define TOMOYO_WARN_OOM 0xffffffff81282890
#endif

#ifndef TOMOYO_MEMORY_OK
#define TOMOYO_MEMORY_OK 0xffffffff812828e0
#endif

#ifndef TOMOYO_COMMIT_OK
#define TOMOYO_COMMIT_OK 0xffffffff81282930
#endif

#ifndef TOMOYO_GET_NAME
#define TOMOYO_GET_NAME 0xffffffff812829a0
#endif

#ifndef TOMOYO_GET_GROUP
#define TOMOYO_GET_GROUP 0xffffffff81282b10
#endif

#ifndef TOMOYO_MOUNT_PERMISSION
#define TOMOYO_MOUNT_PERMISSION 0xffffffff812830b0
#endif

#ifndef TOMOYO_PARSE_IPADDR_UNION
#define TOMOYO_PARSE_IPADDR_UNION 0xffffffff812838c0
#endif

#ifndef TOMOYO_PRINT_IP
#define TOMOYO_PRINT_IP 0xffffffff81283a00
#endif

#ifndef TOMOYO_WRITE_INET_NETWORK
#define TOMOYO_WRITE_INET_NETWORK 0xffffffff81283a50
#endif

#ifndef TOMOYO_WRITE_UNIX_NETWORK
#define TOMOYO_WRITE_UNIX_NETWORK 0xffffffff81283bd0
#endif

#ifndef TOMOYO_SOCKET_LISTEN_PERMISSION
#define TOMOYO_SOCKET_LISTEN_PERMISSION 0xffffffff81283cf0
#endif

#ifndef TOMOYO_SOCKET_CONNECT_PERMISSION
#define TOMOYO_SOCKET_CONNECT_PERMISSION 0xffffffff81283dd0
#endif

#ifndef TOMOYO_SOCKET_BIND_PERMISSION
#define TOMOYO_SOCKET_BIND_PERMISSION 0xffffffff81283e90
#endif

#ifndef TOMOYO_SOCKET_SENDMSG_PERMISSION
#define TOMOYO_SOCKET_SENDMSG_PERMISSION 0xffffffff81283f30
#endif

#ifndef TOMOYO_ENCODE2
#define TOMOYO_ENCODE2 0xffffffff81284220
#endif

#ifndef TOMOYO_ENCODE
#define TOMOYO_ENCODE 0xffffffff81284340
#endif

#ifndef TOMOYO_REALPATH_FROM_PATH
#define TOMOYO_REALPATH_FROM_PATH 0xffffffff81284370
#endif

#ifndef TOMOYO_REALPATH_NOFOLLOW
#define TOMOYO_REALPATH_NOFOLLOW 0xffffffff812845b0
#endif

#ifndef TOMOYO_CONVERT_TIME
#define TOMOYO_CONVERT_TIME 0xffffffff812856e0
#endif

#ifndef TOMOYO_PERMSTR
#define TOMOYO_PERMSTR 0xffffffff81285840
#endif

#ifndef TOMOYO_READ_TOKEN
#define TOMOYO_READ_TOKEN 0xffffffff81285880
#endif

#ifndef TOMOYO_PARSE_ULONG
#define TOMOYO_PARSE_ULONG 0xffffffff812858e0
#endif

#ifndef TOMOYO_PRINT_ULONG
#define TOMOYO_PRINT_ULONG 0xffffffff812859d0
#endif

#ifndef TOMOYO_PARSE_NUMBER_UNION
#define TOMOYO_PARSE_NUMBER_UNION 0xffffffff81285a60
#endif

#ifndef TOMOYO_STR_STARTS
#define TOMOYO_STR_STARTS 0xffffffff81285b60
#endif

#ifndef TOMOYO_NORMALIZE_LINE
#define TOMOYO_NORMALIZE_LINE 0xffffffff81285bc0
#endif

#ifndef TOMOYO_CORRECT_WORD
#define TOMOYO_CORRECT_WORD 0xffffffff81285c50
#endif

#ifndef TOMOYO_PARSE_NAME_UNION
#define TOMOYO_PARSE_NAME_UNION 0xffffffff81285c70
#endif

#ifndef TOMOYO_CORRECT_PATH
#define TOMOYO_CORRECT_PATH 0xffffffff81285cf0
#endif

#ifndef TOMOYO_CORRECT_DOMAIN
#define TOMOYO_CORRECT_DOMAIN 0xffffffff81285d20
#endif

#ifndef TOMOYO_GET_DOMAINNAME
#define TOMOYO_GET_DOMAINNAME 0xffffffff81285dd0
#endif

#ifndef TOMOYO_DOMAIN_DEF
#define TOMOYO_DOMAIN_DEF 0xffffffff81285e50
#endif

#ifndef TOMOYO_FILL_PATH_INFO
#define TOMOYO_FILL_PATH_INFO 0xffffffff81285e80
#endif

#ifndef TOMOYO_FIND_DOMAIN
#define TOMOYO_FIND_DOMAIN 0xffffffff81285f60
#endif

#ifndef TOMOYO_PATH_MATCHES_PATTERN
#define TOMOYO_PATH_MATCHES_PATTERN 0xffffffff81285ff0
#endif

#ifndef TOMOYO_GET_EXE
#define TOMOYO_GET_EXE 0xffffffff81286090
#endif

#ifndef TOMOYO_GET_MODE
#define TOMOYO_GET_MODE 0xffffffff812860f0
#endif

#ifndef TOMOYO_INIT_REQUEST_INFO
#define TOMOYO_INIT_REQUEST_INFO 0xffffffff81286120
#endif

#ifndef TOMOYO_DOMAIN_QUOTA_IS_OK
#define TOMOYO_DOMAIN_QUOTA_IS_OK 0xffffffff812861b0
#endif

#ifndef __AA_FS_PROFILE_RMDIR
#define __AA_FS_PROFILE_RMDIR 0xffffffff812870b0
#endif

#ifndef __AA_FS_PROFILE_MIGRATE_DENTS
#define __AA_FS_PROFILE_MIGRATE_DENTS 0xffffffff81287150
#endif

#ifndef __AA_FS_PROFILE_MKDIR
#define __AA_FS_PROFILE_MKDIR 0xffffffff81287190
#endif

#ifndef __AA_FS_NAMESPACE_RMDIR
#define __AA_FS_NAMESPACE_RMDIR 0xffffffff81287430
#endif

#ifndef __AA_FS_NAMESPACE_MKDIR
#define __AA_FS_NAMESPACE_MKDIR 0xffffffff81287500
#endif

#ifndef AA_AUDIT_MSG
#define AA_AUDIT_MSG 0xffffffff81287800
#endif

#ifndef AA_AUDIT
#define AA_AUDIT 0xffffffff81287830
#endif

#ifndef AA_CAPABLE
#define AA_CAPABLE 0xffffffff81287a10
#endif

#ifndef AA_ALLOC_TASK_CONTEXT
#define AA_ALLOC_TASK_CONTEXT 0xffffffff81287c70
#endif

#ifndef AA_FREE_TASK_CONTEXT
#define AA_FREE_TASK_CONTEXT 0xffffffff81287cb0
#endif

#ifndef AA_DUP_TASK_CONTEXT
#define AA_DUP_TASK_CONTEXT 0xffffffff81287d50
#endif

#ifndef AA_GET_TASK_PROFILE
#define AA_GET_TASK_PROFILE 0xffffffff81287e50
#endif

#ifndef AA_REPLACE_CURRENT_PROFILE
#define AA_REPLACE_CURRENT_PROFILE 0xffffffff81287ec0
#endif

#ifndef AA_SET_CURRENT_ONEXEC
#define AA_SET_CURRENT_ONEXEC 0xffffffff81288020
#endif

#ifndef AA_SET_CURRENT_HAT
#define AA_SET_CURRENT_HAT 0xffffffff812880d0
#endif

#ifndef AA_RESTORE_PREVIOUS_PROFILE
#define AA_RESTORE_PREVIOUS_PROFILE 0xffffffff81288260
#endif

#ifndef AA_MAY_PTRACE
#define AA_MAY_PTRACE 0xffffffff81288470
#endif

#ifndef AA_PTRACE
#define AA_PTRACE 0xffffffff812884b0
#endif

#ifndef AA_SPLIT_FQNAME
#define AA_SPLIT_FQNAME 0xffffffff812885c0
#endif

#ifndef AA_INFO_MESSAGE
#define AA_INFO_MESSAGE 0xffffffff81288660
#endif

#ifndef __AA_KVMALLOC
#define __AA_KVMALLOC 0xffffffff812886c0
#endif

#ifndef AA_DFA_FREE_KREF
#define AA_DFA_FREE_KREF 0xffffffff81288780
#endif

#ifndef AA_DFA_UNPACK
#define AA_DFA_UNPACK 0xffffffff81288790
#endif

#ifndef AA_DFA_MATCH_LEN
#define AA_DFA_MATCH_LEN 0xffffffff81288c70
#endif

#ifndef AA_DFA_MATCH
#define AA_DFA_MATCH 0xffffffff81288d40
#endif

#ifndef AA_DFA_NEXT
#define AA_DFA_NEXT 0xffffffff81288df0
#endif

#ifndef AA_PATH_NAME
#define AA_PATH_NAME 0xffffffff81288e80
#endif

#ifndef AA_FREE_DOMAIN_ENTRIES
#define AA_FREE_DOMAIN_ENTRIES 0xffffffff812895a0
#endif

#ifndef APPARMOR_BPRM_SET_CREDS
#define APPARMOR_BPRM_SET_CREDS 0xffffffff81289600
#endif

#ifndef APPARMOR_BPRM_SECUREEXEC
#define APPARMOR_BPRM_SECUREEXEC 0xffffffff81289f50
#endif

#ifndef APPARMOR_BPRM_COMMITTING_CREDS
#define APPARMOR_BPRM_COMMITTING_CREDS 0xffffffff81289f70
#endif

#ifndef APPARMOR_BPRM_COMMITTED_CREDS
#define APPARMOR_BPRM_COMMITTED_CREDS 0xffffffff81289ff0
#endif

#ifndef AA_CHANGE_HAT
#define AA_CHANGE_HAT 0xffffffff8128a000
#endif

#ifndef AA_CHANGE_PROFILE
#define AA_CHANGE_PROFILE 0xffffffff8128a580
#endif

#ifndef AA_FREE_PROFILE_KREF
#define AA_FREE_PROFILE_KREF 0xffffffff8128aa70
#endif

#ifndef AA_FREE_REPLACEDBY_KREF
#define AA_FREE_REPLACEDBY_KREF 0xffffffff8128ad10
#endif

#ifndef AA_NS_VISIBLE
#define AA_NS_VISIBLE 0xffffffff8128b4f0
#endif

#ifndef AA_NS_NAME
#define AA_NS_NAME 0xffffffff8128b530
#endif

#ifndef AA_FIND_NAMESPACE
#define AA_FIND_NAMESPACE 0xffffffff8128b5a0
#endif

#ifndef AA_FREE_PROFILE
#define AA_FREE_PROFILE 0xffffffff8128b610
#endif

#ifndef AA_ALLOC_PROFILE
#define AA_ALLOC_PROFILE 0xffffffff8128b830
#endif

#ifndef AA_NEW_NULL_PROFILE
#define AA_NEW_NULL_PROFILE 0xffffffff8128bac0
#endif

#ifndef AA_FIND_CHILD
#define AA_FIND_CHILD 0xffffffff8128bc90
#endif

#ifndef AA_LOOKUP_PROFILE
#define AA_LOOKUP_PROFILE 0xffffffff8128bcf0
#endif

#ifndef AA_MAY_MANAGE_POLICY
#define AA_MAY_MANAGE_POLICY 0xffffffff8128be10
#endif

#ifndef AA_REPLACE_PROFILES
#define AA_REPLACE_PROFILES 0xffffffff8128be90
#endif

#ifndef AA_REMOVE_PROFILES
#define AA_REMOVE_PROFILES 0xffffffff8128cb70
#endif

#ifndef AA_LOAD_ENT_FREE
#define AA_LOAD_ENT_FREE 0xffffffff8128d2e0
#endif

#ifndef AA_LOAD_ENT_ALLOC
#define AA_LOAD_ENT_ALLOC 0xffffffff8128d380
#endif

#ifndef AA_UNPACK
#define AA_UNPACK 0xffffffff8128d3b0
#endif

#ifndef AA_GETPROCATTR
#define AA_GETPROCATTR 0xffffffff8128e020
#endif

#ifndef AA_SETPROCATTR_CHANGEHAT
#define AA_SETPROCATTR_CHANGEHAT 0xffffffff8128e1b0
#endif

#ifndef AA_SETPROCATTR_CHANGEPROFILE
#define AA_SETPROCATTR_CHANGEPROFILE 0xffffffff8128e350
#endif

#ifndef AA_MAP_RESOURCE
#define AA_MAP_RESOURCE 0xffffffff8128f940
#endif

#ifndef AA_TASK_SETRLIMIT
#define AA_TASK_SETRLIMIT 0xffffffff8128f950
#endif

#ifndef __AA_TRANSITION_RLIMITS
#define __AA_TRANSITION_RLIMITS 0xffffffff8128fac0
#endif

#ifndef AA_ALLOC_SID
#define AA_ALLOC_SID 0xffffffff8128fbc0
#endif

#ifndef AA_FREE_SID
#define AA_FREE_SID 0xffffffff8128fc00
#endif

#ifndef AA_AUDIT_FILE
#define AA_AUDIT_FILE 0xffffffff8128fea0
#endif

#ifndef AA_STR_PERMS
#define AA_STR_PERMS 0xffffffff8128fff0
#endif

#ifndef AA_PATH_PERM
#define AA_PATH_PERM 0xffffffff81290200
#endif

#ifndef AA_PATH_LINK
#define AA_PATH_LINK 0xffffffff81290370
#endif

#ifndef AA_FILE_PERM
#define AA_FILE_PERM 0xffffffff81290670
#endif

#ifndef AA_HASH_SIZE
#define AA_HASH_SIZE 0xffffffff812906b0
#endif

#ifndef AA_CALC_PROFILE_HASH
#define AA_CALC_PROFILE_HASH 0xffffffff812906c0
#endif

#ifndef YAMA_TASK_FREE
#define YAMA_TASK_FREE 0xffffffff81290b70
#endif

#ifndef YAMA_TASK_PRCTL
#define YAMA_TASK_PRCTL 0xffffffff81290b90
#endif

#ifndef YAMA_PTRACE_ACCESS_CHECK
#define YAMA_PTRACE_ACCESS_CHECK 0xffffffff81290ca0
#endif

#ifndef YAMA_PTRACE_TRACEME
#define YAMA_PTRACE_TRACEME 0xffffffff81290e50
#endif

#ifndef __DEVCGROUP_INODE_PERMISSION
#define __DEVCGROUP_INODE_PERMISSION 0xffffffff81291cb0
#endif

#ifndef DEVCGROUP_INODE_MKNOD
#define DEVCGROUP_INODE_MKNOD 0xffffffff81291d00
#endif

#ifndef INTEGRITY_IINT_FIND
#define INTEGRITY_IINT_FIND 0xffffffff81291db0
#endif

#ifndef INTEGRITY_INODE_GET
#define INTEGRITY_INODE_GET 0xffffffff81291e20
#endif

#ifndef INTEGRITY_INODE_FREE
#define INTEGRITY_INODE_FREE 0xffffffff81291ee0
#endif

#ifndef INTEGRITY_KERNEL_READ
#define INTEGRITY_KERNEL_READ 0xffffffff81291fa0
#endif

#ifndef INTEGRITY_AUDIT_MSG
#define INTEGRITY_AUDIT_MSG 0xffffffff81292010
#endif

#ifndef CRYPTO_FIND_ALG
#define CRYPTO_FIND_ALG 0xffffffff81292220
#endif

#ifndef CRYPTO_MOD_GET
#define CRYPTO_MOD_GET 0xffffffff81292270
#endif

#ifndef CRYPTO_SHOOT_ALG
#define CRYPTO_SHOOT_ALG 0xffffffff812922a0
#endif

#ifndef CRYPTO_PROBING_NOTIFY
#define CRYPTO_PROBING_NOTIFY 0xffffffff812922d0
#endif

#ifndef __CRYPTO_ALLOC_TFM
#define __CRYPTO_ALLOC_TFM 0xffffffff812923a0
#endif

#ifndef CRYPTO_MOD_PUT
#define CRYPTO_MOD_PUT 0xffffffff81292500
#endif

#ifndef CRYPTO_LARVAL_KILL
#define CRYPTO_LARVAL_KILL 0xffffffff81292690
#endif

#ifndef CRYPTO_DESTROY_TFM
#define CRYPTO_DESTROY_TFM 0xffffffff81292710
#endif

#ifndef CRYPTO_ALG_LOOKUP
#define CRYPTO_ALG_LOOKUP 0xffffffff812928d0
#endif

#ifndef CRYPTO_LARVAL_ALLOC
#define CRYPTO_LARVAL_ALLOC 0xffffffff81292920
#endif

#ifndef CRYPTO_LARVAL_LOOKUP
#define CRYPTO_LARVAL_LOOKUP 0xffffffff812929c0
#endif

#ifndef CRYPTO_ALG_MOD_LOOKUP
#define CRYPTO_ALG_MOD_LOOKUP 0xffffffff81292b30
#endif

#ifndef CRYPTO_HAS_ALG
#define CRYPTO_HAS_ALG 0xffffffff81292bf0
#endif

#ifndef CRYPTO_ALLOC_BASE
#define CRYPTO_ALLOC_BASE 0xffffffff81292c40
#endif

#ifndef CRYPTO_CREATE_TFM
#define CRYPTO_CREATE_TFM 0xffffffff81292d10
#endif

#ifndef CRYPTO_ALLOC_TFM
#define CRYPTO_ALLOC_TFM 0xffffffff81292de0
#endif

#ifndef CRYPTO_INIT_CIPHER_OPS
#define CRYPTO_INIT_CIPHER_OPS 0xffffffff812930f0
#endif

#ifndef CRYPTO_EXIT_CIPHER_OPS
#define CRYPTO_EXIT_CIPHER_OPS 0xffffffff81293140
#endif

#ifndef CRYPTO_INIT_COMPRESS_OPS
#define CRYPTO_INIT_COMPRESS_OPS 0xffffffff81293190
#endif

#ifndef CRYPTO_EXIT_COMPRESS_OPS
#define CRYPTO_EXIT_COMPRESS_OPS 0xffffffff812931b0
#endif

#ifndef __CRYPTO_MEMNEQ
#define __CRYPTO_MEMNEQ 0xffffffff812931c0
#endif

#ifndef CRYPTO_REMOVE_FINAL
#define CRYPTO_REMOVE_FINAL 0xffffffff81293250
#endif

#ifndef CRYPTO_GET_ATTR_TYPE
#define CRYPTO_GET_ATTR_TYPE 0xffffffff812932b0
#endif

#ifndef CRYPTO_ATTR_U32
#define CRYPTO_ATTR_U32 0xffffffff812932f0
#endif

#ifndef CRYPTO_INIT_QUEUE
#define CRYPTO_INIT_QUEUE 0xffffffff81293330
#endif

#ifndef CRYPTO_TFM_IN_QUEUE
#define CRYPTO_TFM_IN_QUEUE 0xffffffff81293350
#endif

#ifndef CRYPTO_XOR
#define CRYPTO_XOR 0xffffffff81293380
#endif

#ifndef CRYPTO_CHECK_ATTR_TYPE
#define CRYPTO_CHECK_ATTR_TYPE 0xffffffff812933f0
#endif

#ifndef CRYPTO_ENQUEUE_REQUEST
#define CRYPTO_ENQUEUE_REQUEST 0xffffffff81293440
#endif

#ifndef __CRYPTO_DEQUEUE_REQUEST
#define __CRYPTO_DEQUEUE_REQUEST 0xffffffff812934a0
#endif

#ifndef CRYPTO_DEQUEUE_REQUEST
#define CRYPTO_DEQUEUE_REQUEST 0xffffffff81293500
#endif

#ifndef CRYPTO_REGISTER_TEMPLATE
#define CRYPTO_REGISTER_TEMPLATE 0xffffffff81293530
#endif

#ifndef CRYPTO_INIT_SPAWN
#define CRYPTO_INIT_SPAWN 0xffffffff812935d0
#endif

#ifndef CRYPTO_INIT_SPAWN2
#define CRYPTO_INIT_SPAWN2 0xffffffff81293640
#endif

#ifndef CRYPTO_DROP_SPAWN
#define CRYPTO_DROP_SPAWN 0xffffffff81293680
#endif

#ifndef CRYPTO_REGISTER_NOTIFIER
#define CRYPTO_REGISTER_NOTIFIER 0xffffffff812939c0
#endif

#ifndef CRYPTO_UNREGISTER_NOTIFIER
#define CRYPTO_UNREGISTER_NOTIFIER 0xffffffff812939e0
#endif

#ifndef CRYPTO_INC
#define CRYPTO_INC 0xffffffff81293a00
#endif

#ifndef CRYPTO_ATTR_ALG_NAME
#define CRYPTO_ATTR_ALG_NAME 0xffffffff81293a90
#endif

#ifndef CRYPTO_ATTR_ALG2
#define CRYPTO_ATTR_ALG2 0xffffffff81293ad0
#endif

#ifndef CRYPTO_REMOVE_SPAWNS
#define CRYPTO_REMOVE_SPAWNS 0xffffffff81293bf0
#endif

#ifndef CRYPTO_UNREGISTER_TEMPLATE
#define CRYPTO_UNREGISTER_TEMPLATE 0xffffffff81293ed0
#endif

#ifndef CRYPTO_ALG_TESTED
#define CRYPTO_ALG_TESTED 0xffffffff81293fe0
#endif

#ifndef CRYPTO_UNREGISTER_INSTANCE
#define CRYPTO_UNREGISTER_INSTANCE 0xffffffff81294240
#endif

#ifndef CRYPTO_REGISTER_INSTANCE
#define CRYPTO_REGISTER_INSTANCE 0xffffffff812942a0
#endif

#ifndef CRYPTO_UNREGISTER_ALG
#define CRYPTO_UNREGISTER_ALG 0xffffffff812943b0
#endif

#ifndef CRYPTO_UNREGISTER_ALGS
#define CRYPTO_UNREGISTER_ALGS 0xffffffff81294440
#endif

#ifndef CRYPTO_REGISTER_ALG
#define CRYPTO_REGISTER_ALG 0xffffffff812944b0
#endif

#ifndef CRYPTO_REGISTER_ALGS
#define CRYPTO_REGISTER_ALGS 0xffffffff81294520
#endif

#ifndef CRYPTO_LOOKUP_TEMPLATE
#define CRYPTO_LOOKUP_TEMPLATE 0xffffffff812945a0
#endif

#ifndef CRYPTO_SPAWN_TFM
#define CRYPTO_SPAWN_TFM 0xffffffff81294660
#endif

#ifndef CRYPTO_SPAWN_TFM2
#define CRYPTO_SPAWN_TFM2 0xffffffff812946d0
#endif

#ifndef CRYPTO_ALLOC_INSTANCE2
#define CRYPTO_ALLOC_INSTANCE2 0xffffffff81294730
#endif

#ifndef CRYPTO_ALLOC_INSTANCE
#define CRYPTO_ALLOC_INSTANCE 0xffffffff81294800
#endif

#ifndef SCATTERWALK_MAP
#define SCATTERWALK_MAP 0xffffffff81294860
#endif

#ifndef SCATTERWALK_BYTES_SGLEN
#define SCATTERWALK_BYTES_SGLEN 0xffffffff812948c0
#endif

#ifndef SCATTERWALK_START
#define SCATTERWALK_START 0xffffffff81294940
#endif

#ifndef SCATTERWALK_COPYCHUNKS
#define SCATTERWALK_COPYCHUNKS 0xffffffff812949d0
#endif

#ifndef SCATTERWALK_DONE
#define SCATTERWALK_DONE 0xffffffff81294b70
#endif

#ifndef SCATTERWALK_MAP_AND_COPY
#define SCATTERWALK_MAP_AND_COPY 0xffffffff81294be0
#endif

#ifndef CRYPTO_AEAD_SETAUTHSIZE
#define CRYPTO_AEAD_SETAUTHSIZE 0xffffffff81294f10
#endif

#ifndef AEAD_GENIV_FREE
#define AEAD_GENIV_FREE 0xffffffff81295540
#endif

#ifndef AEAD_GENIV_INIT
#define AEAD_GENIV_INIT 0xffffffff81295560
#endif

#ifndef AEAD_GENIV_EXIT
#define AEAD_GENIV_EXIT 0xffffffff812955a0
#endif

#ifndef CRYPTO_LOOKUP_AEAD
#define CRYPTO_LOOKUP_AEAD 0xffffffff81295780
#endif

#ifndef CRYPTO_GRAB_AEAD
#define CRYPTO_GRAB_AEAD 0xffffffff81295840
#endif

#ifndef CRYPTO_ALLOC_AEAD
#define CRYPTO_ALLOC_AEAD 0xffffffff812958a0
#endif

#ifndef AEAD_GENIV_ALLOC
#define AEAD_GENIV_ALLOC 0xffffffff81295950
#endif

#ifndef SKCIPHER_NULL_GIVENCRYPT
#define SKCIPHER_NULL_GIVENCRYPT 0xffffffff81295cb0
#endif

#ifndef SKCIPHER_NULL_GIVDECRYPT
#define SKCIPHER_NULL_GIVDECRYPT 0xffffffff81295cd0
#endif

#ifndef __ABLKCIPHER_WALK_COMPLETE
#define __ABLKCIPHER_WALK_COMPLETE 0xffffffff81295e00
#endif

#ifndef CRYPTO_LOOKUP_SKCIPHER
#define CRYPTO_LOOKUP_SKCIPHER 0xffffffff81296450
#endif

#ifndef CRYPTO_GRAB_SKCIPHER
#define CRYPTO_GRAB_SKCIPHER 0xffffffff81296560
#endif

#ifndef CRYPTO_ALLOC_ABLKCIPHER
#define CRYPTO_ALLOC_ABLKCIPHER 0xffffffff812965c0
#endif

#ifndef ABLKCIPHER_WALK_DONE
#define ABLKCIPHER_WALK_DONE 0xffffffff81296a00
#endif

#ifndef ABLKCIPHER_WALK_PHYS
#define ABLKCIPHER_WALK_PHYS 0xffffffff81296c10
#endif

#ifndef CRYPTO_DEFAULT_GENIV
#define CRYPTO_DEFAULT_GENIV 0xffffffff81296da0
#endif

#ifndef SKCIPHER_GENIV_FREE
#define SKCIPHER_GENIV_FREE 0xffffffff81297140
#endif

#ifndef SKCIPHER_GENIV_INIT
#define SKCIPHER_GENIV_INIT 0xffffffff81297160
#endif

#ifndef SKCIPHER_GENIV_EXIT
#define SKCIPHER_GENIV_EXIT 0xffffffff812971a0
#endif

#ifndef SKCIPHER_GENIV_ALLOC
#define SKCIPHER_GENIV_ALLOC 0xffffffff812971c0
#endif

#ifndef BLKCIPHER_WALK_DONE
#define BLKCIPHER_WALK_DONE 0xffffffff81297960
#endif

#ifndef BLKCIPHER_WALK_VIRT
#define BLKCIPHER_WALK_VIRT 0xffffffff81297cb0
#endif

#ifndef BLKCIPHER_WALK_PHYS
#define BLKCIPHER_WALK_PHYS 0xffffffff81297d00
#endif

#ifndef BLKCIPHER_WALK_VIRT_BLOCK
#define BLKCIPHER_WALK_VIRT_BLOCK 0xffffffff81297d50
#endif

#ifndef BLKCIPHER_AEAD_WALK_VIRT_BLOCK
#define BLKCIPHER_AEAD_WALK_VIRT_BLOCK 0xffffffff81297da0
#endif

#ifndef CRYPTO_HASH_WALK_DONE
#define CRYPTO_HASH_WALK_DONE 0xffffffff81298ca0
#endif

#ifndef CRYPTO_ALLOC_AHASH
#define CRYPTO_ALLOC_AHASH 0xffffffff81299010
#endif

#ifndef CRYPTO_REGISTER_AHASH
#define CRYPTO_REGISTER_AHASH 0xffffffff81299030
#endif

#ifndef CRYPTO_UNREGISTER_AHASH
#define CRYPTO_UNREGISTER_AHASH 0xffffffff81299080
#endif

#ifndef AHASH_REGISTER_INSTANCE
#define AHASH_REGISTER_INSTANCE 0xffffffff812990a0
#endif

#ifndef AHASH_FREE_INSTANCE
#define AHASH_FREE_INSTANCE 0xffffffff812990f0
#endif

#ifndef CRYPTO_INIT_AHASH_SPAWN
#define CRYPTO_INIT_AHASH_SPAWN 0xffffffff81299110
#endif

#ifndef AHASH_ATTR_ALG
#define AHASH_ATTR_ALG 0xffffffff81299130
#endif

#ifndef CRYPTO_HASH_WALK_FIRST
#define CRYPTO_HASH_WALK_FIRST 0xffffffff81299160
#endif

#ifndef CRYPTO_AHASH_WALK_FIRST
#define CRYPTO_AHASH_WALK_FIRST 0xffffffff812991c0
#endif

#ifndef CRYPTO_AHASH_SETKEY
#define CRYPTO_AHASH_SETKEY 0xffffffff81299220
#endif

#ifndef CRYPTO_AHASH_FINAL
#define CRYPTO_AHASH_FINAL 0xffffffff812993c0
#endif

#ifndef CRYPTO_AHASH_FINUP
#define CRYPTO_AHASH_FINUP 0xffffffff812993e0
#endif

#ifndef CRYPTO_AHASH_DIGEST
#define CRYPTO_AHASH_DIGEST 0xffffffff81299400
#endif

#ifndef CRYPTO_HASH_WALK_FIRST_COMPAT
#define CRYPTO_HASH_WALK_FIRST_COMPAT 0xffffffff81299570
#endif

#ifndef CRYPTO_SHASH_SETKEY
#define CRYPTO_SHASH_SETKEY 0xffffffff812997f0
#endif

#ifndef CRYPTO_SHASH_UPDATE
#define CRYPTO_SHASH_UPDATE 0xffffffff812998e0
#endif

#ifndef CRYPTO_SHASH_FINAL
#define CRYPTO_SHASH_FINAL 0xffffffff812999e0
#endif

#ifndef CRYPTO_SHASH_FINUP
#define CRYPTO_SHASH_FINUP 0xffffffff81299ad0
#endif

#ifndef CRYPTO_SHASH_DIGEST
#define CRYPTO_SHASH_DIGEST 0xffffffff81299b70
#endif

#ifndef SHASH_AHASH_UPDATE
#define SHASH_AHASH_UPDATE 0xffffffff81299bf0
#endif

#ifndef CRYPTO_ALLOC_SHASH
#define CRYPTO_ALLOC_SHASH 0xffffffff81299df0
#endif

#ifndef CRYPTO_REGISTER_SHASH
#define CRYPTO_REGISTER_SHASH 0xffffffff81299e10
#endif

#ifndef CRYPTO_UNREGISTER_SHASH
#define CRYPTO_UNREGISTER_SHASH 0xffffffff81299e40
#endif

#ifndef CRYPTO_REGISTER_SHASHES
#define CRYPTO_REGISTER_SHASHES 0xffffffff81299e60
#endif

#ifndef CRYPTO_UNREGISTER_SHASHES
#define CRYPTO_UNREGISTER_SHASHES 0xffffffff81299ee0
#endif

#ifndef SHASH_REGISTER_INSTANCE
#define SHASH_REGISTER_INSTANCE 0xffffffff81299f50
#endif

#ifndef SHASH_FREE_INSTANCE
#define SHASH_FREE_INSTANCE 0xffffffff81299f90
#endif

#ifndef CRYPTO_INIT_SHASH_SPAWN
#define CRYPTO_INIT_SHASH_SPAWN 0xffffffff81299fb0
#endif

#ifndef SHASH_ATTR_ALG
#define SHASH_ATTR_ALG 0xffffffff81299fd0
#endif

#ifndef SHASH_AHASH_FINUP
#define SHASH_AHASH_FINUP 0xffffffff8129a000
#endif

#ifndef SHASH_AHASH_DIGEST
#define SHASH_AHASH_DIGEST 0xffffffff8129a0c0
#endif

#ifndef CRYPTO_INIT_SHASH_OPS_ASYNC
#define CRYPTO_INIT_SHASH_OPS_ASYNC 0xffffffff8129a3b0
#endif

#ifndef CRYPTO_ALLOC_PCOMP
#define CRYPTO_ALLOC_PCOMP 0xffffffff8129a4b0
#endif

#ifndef CRYPTO_REGISTER_PCOMP
#define CRYPTO_REGISTER_PCOMP 0xffffffff8129a590
#endif

#ifndef CRYPTO_UNREGISTER_PCOMP
#define CRYPTO_UNREGISTER_PCOMP 0xffffffff8129a5c0
#endif

#ifndef ALG_TEST
#define ALG_TEST 0xffffffff8129b970
#endif

#ifndef CRYPTO_SHA1_FINUP
#define CRYPTO_SHA1_FINUP 0xffffffff8129f770
#endif

#ifndef CRYPTO_SHA1_UPDATE
#define CRYPTO_SHA1_UPDATE 0xffffffff8129fa30
#endif

#ifndef CRYPTO_AES_EXPAND_KEY
#define CRYPTO_AES_EXPAND_KEY 0xffffffff8129fd00
#endif

#ifndef CRYPTO_AES_SET_KEY
#define CRYPTO_AES_SET_KEY 0xffffffff812a00e0
#endif

#ifndef CRC_T10DIF_GENERIC
#define CRC_T10DIF_GENERIC 0xffffffff812a1c80
#endif

#ifndef CRYPTO_GET_DEFAULT_RNG
#define CRYPTO_GET_DEFAULT_RNG 0xffffffff812a1ff0
#endif

#ifndef CRYPTO_PUT_DEFAULT_RNG
#define CRYPTO_PUT_DEFAULT_RNG 0xffffffff812a2090
#endif

#ifndef BIO_GET_NR_VECS
#define BIO_GET_NR_VECS 0xffffffff812a2110
#endif

#ifndef BIO_INIT
#define BIO_INIT 0xffffffff812a2150
#endif

#ifndef BIO_PHYS_SEGMENTS
#define BIO_PHYS_SEGMENTS 0xffffffff812a2310
#endif

#ifndef SUBMIT_BIO_WAIT
#define SUBMIT_BIO_WAIT 0xffffffff812a2350
#endif

#ifndef BIO_ALLOC_PAGES
#define BIO_ALLOC_PAGES 0xffffffff812a23c0
#endif

#ifndef GENERIC_START_IO_ACCT
#define GENERIC_START_IO_ACCT 0xffffffff812a2450
#endif

#ifndef GENERIC_END_IO_ACCT
#define GENERIC_END_IO_ACCT 0xffffffff812a2560
#endif

#ifndef BIO_CHAIN
#define BIO_CHAIN 0xffffffff812a2680
#endif

#ifndef __BIO_CLONE_FAST
#define __BIO_CLONE_FAST 0xffffffff812a26b0
#endif

#ifndef BIO_ADD_PC_PAGE
#define BIO_ADD_PC_PAGE 0xffffffff812a2990
#endif

#ifndef BIO_ADD_PAGE
#define BIO_ADD_PAGE 0xffffffff812a29b0
#endif

#ifndef BIOSET_FREE
#define BIOSET_FREE 0xffffffff812a2a70
#endif

#ifndef BIOSET_CREATE
#define BIOSET_CREATE 0xffffffff812a2e10
#endif

#ifndef BIOSET_CREATE_NOBVEC
#define BIOSET_CREATE_NOBVEC 0xffffffff812a2e30
#endif

#ifndef BIO_ADVANCE
#define BIO_ADVANCE 0xffffffff812a2e50
#endif

#ifndef BIO_TRIM
#define BIO_TRIM 0xffffffff812a2f20
#endif

#ifndef ZERO_FILL_BIO
#define ZERO_FILL_BIO 0xffffffff812a2f60
#endif

#ifndef BIO_COPY_DATA
#define BIO_COPY_DATA 0xffffffff812a3080
#endif

#ifndef BVEC_NR_VECS
#define BVEC_NR_VECS 0xffffffff812a33b0
#endif

#ifndef BVEC_FREE
#define BVEC_FREE 0xffffffff812a33d0
#endif

#ifndef BVEC_ALLOC
#define BVEC_ALLOC 0xffffffff812a3420
#endif

#ifndef BIO_ALLOC_BIOSET
#define BIO_ALLOC_BIOSET 0xffffffff812a3530
#endif

#ifndef BIO_SET_PAGES_DIRTY
#define BIO_SET_PAGES_DIRTY 0xffffffff812a37a0
#endif

#ifndef BIOVEC_CREATE_POOL
#define BIOVEC_CREATE_POOL 0xffffffff812a3800
#endif

#ifndef BIO_ASSOCIATE_CURRENT
#define BIO_ASSOCIATE_CURRENT 0xffffffff812a3830
#endif

#ifndef BIO_DISASSOCIATE_TASK
#define BIO_DISASSOCIATE_TASK 0xffffffff812a39a0
#endif

#ifndef BIO_RESET
#define BIO_RESET 0xffffffff812a3a40
#endif

#ifndef BIO_PUT
#define BIO_PUT 0xffffffff812a3aa0
#endif

#ifndef BIO_CLONE_FAST
#define BIO_CLONE_FAST 0xffffffff812a3b30
#endif

#ifndef BIO_CLONE_BIOSET
#define BIO_CLONE_BIOSET 0xffffffff812a3ba0
#endif

#ifndef BIO_SPLIT
#define BIO_SPLIT 0xffffffff812a3ea0
#endif

#ifndef BIO_UNCOPY_USER
#define BIO_UNCOPY_USER 0xffffffff812a3f40
#endif

#ifndef BIO_COPY_USER_IOV
#define BIO_COPY_USER_IOV 0xffffffff812a4040
#endif

#ifndef BIO_MAP_USER_IOV
#define BIO_MAP_USER_IOV 0xffffffff812a4430
#endif

#ifndef BIO_UNMAP_USER
#define BIO_UNMAP_USER 0xffffffff812a4820
#endif

#ifndef BIO_MAP_KERN
#define BIO_MAP_KERN 0xffffffff812a4890
#endif

#ifndef BIO_COPY_KERN
#define BIO_COPY_KERN 0xffffffff812a49f0
#endif

#ifndef BIO_CHECK_PAGES_DIRTY
#define BIO_CHECK_PAGES_DIRTY 0xffffffff812a4c90
#endif

#ifndef BIO_ENDIO
#define BIO_ENDIO 0xffffffff812a4e20
#endif

#ifndef BIO_ENDIO_NODEC
#define BIO_ENDIO_NODEC 0xffffffff812a4ec0
#endif

#ifndef ELV_RB_FIND
#define ELV_RB_FIND 0xffffffff812a4f00
#endif

#ifndef ELEVATOR_INIT
#define ELEVATOR_INIT 0xffffffff812a5190
#endif

#ifndef ELEVATOR_EXIT
#define ELEVATOR_EXIT 0xffffffff812a52c0
#endif

#ifndef ELV_RB_ADD
#define ELV_RB_ADD 0xffffffff812a5310
#endif

#ifndef ELV_REGISTER_QUEUE
#define ELV_REGISTER_QUEUE 0xffffffff812a5380
#endif

#ifndef ELV_UNREGISTER_QUEUE
#define ELV_UNREGISTER_QUEUE 0xffffffff812a5420
#endif

#ifndef ELV_REGISTER
#define ELV_REGISTER 0xffffffff812a5460
#endif

#ifndef ELV_UNREGISTER
#define ELV_UNREGISTER 0xffffffff812a5600
#endif

#ifndef ELEVATOR_CHANGE
#define ELEVATOR_CHANGE 0xffffffff812a5840
#endif

#ifndef ELV_RB_FORMER_REQUEST
#define ELV_RB_FORMER_REQUEST 0xffffffff812a5880
#endif

#ifndef ELV_RB_LATTER_REQUEST
#define ELV_RB_LATTER_REQUEST 0xffffffff812a58b0
#endif

#ifndef ELV_DISPATCH_SORT
#define ELV_DISPATCH_SORT 0xffffffff812a5930
#endif

#ifndef ELV_DISPATCH_ADD_TAIL
#define ELV_DISPATCH_ADD_TAIL 0xffffffff812a5a40
#endif

#ifndef ELV_RQ_MERGE_OK
#define ELV_RQ_MERGE_OK 0xffffffff812a5ab0
#endif

#ifndef ELV_RB_DEL
#define ELV_RB_DEL 0xffffffff812a5cc0
#endif

#ifndef ELEVATOR_ALLOC
#define ELEVATOR_ALLOC 0xffffffff812a5d10
#endif

#ifndef ELV_MERGE
#define ELV_MERGE 0xffffffff812a5db0
#endif

#ifndef ELV_MERGED_REQUEST
#define ELV_MERGED_REQUEST 0xffffffff812a5e80
#endif

#ifndef ELV_MERGE_REQUESTS
#define ELV_MERGE_REQUESTS 0xffffffff812a5ed0
#endif

#ifndef ELV_BIO_MERGED
#define ELV_BIO_MERGED 0xffffffff812a5f40
#endif

#ifndef ELV_DRAIN_ELEVATOR
#define ELV_DRAIN_ELEVATOR 0xffffffff812a5f70
#endif

#ifndef __ELV_ADD_REQUEST
#define __ELV_ADD_REQUEST 0xffffffff812a5fe0
#endif

#ifndef ELV_REQUEUE_REQUEST
#define ELV_REQUEUE_REQUEST 0xffffffff812a62c0
#endif

#ifndef ELV_ADD_REQUEST
#define ELV_ADD_REQUEST 0xffffffff812a6360
#endif

#ifndef ELV_LATTER_REQUEST
#define ELV_LATTER_REQUEST 0xffffffff812a63b0
#endif

#ifndef ELV_FORMER_REQUEST
#define ELV_FORMER_REQUEST 0xffffffff812a63e0
#endif

#ifndef ELV_SET_REQUEST
#define ELV_SET_REQUEST 0xffffffff812a6410
#endif

#ifndef ELV_PUT_REQUEST
#define ELV_PUT_REQUEST 0xffffffff812a6440
#endif

#ifndef ELV_MAY_QUEUE
#define ELV_MAY_QUEUE 0xffffffff812a6470
#endif

#ifndef ELV_COMPLETED_REQUEST
#define ELV_COMPLETED_REQUEST 0xffffffff812a64a0
#endif

#ifndef ELV_IOSCHED_STORE
#define ELV_IOSCHED_STORE 0xffffffff812a6500
#endif

#ifndef ELV_IOSCHED_SHOW
#define ELV_IOSCHED_SHOW 0xffffffff812a6540
#endif

#ifndef BLK_GET_BACKING_DEV_INFO
#define BLK_GET_BACKING_DEV_INFO 0xffffffff812a6640
#endif

#ifndef BLK_ADD_REQUEST_PAYLOAD
#define BLK_ADD_REQUEST_PAYLOAD 0xffffffff812a6710
#endif

#ifndef BLK_UNPREP_REQUEST
#define BLK_UNPREP_REQUEST 0xffffffff812a6760
#endif

#ifndef BLK_LLD_BUSY
#define BLK_LLD_BUSY 0xffffffff812a67a0
#endif

#ifndef BLK_START_PLUG
#define BLK_START_PLUG 0xffffffff812a67d0
#endif

#ifndef BLK_RQ_SET_BLOCK_PC
#define BLK_RQ_SET_BLOCK_PC 0xffffffff812a6850
#endif

#ifndef BLK_RQ_INIT
#define BLK_RQ_INIT 0xffffffff812a7370
#endif

#ifndef PART_ROUND_STATS
#define PART_ROUND_STATS 0xffffffff812a7440
#endif

#ifndef __BLK_RUN_QUEUE
#define __BLK_RUN_QUEUE 0xffffffff812a74a0
#endif

#ifndef BLK_DELAY_QUEUE
#define BLK_DELAY_QUEUE 0xffffffff812a74e0
#endif

#ifndef KBLOCKD_SCHEDULE_DELAYED_WORK
#define KBLOCKD_SCHEDULE_DELAYED_WORK 0xffffffff812a7530
#endif

#ifndef KBLOCKD_SCHEDULE_DELAYED_WORK_ON
#define KBLOCKD_SCHEDULE_DELAYED_WORK_ON 0xffffffff812a7560
#endif

#ifndef BLK_START_QUEUE
#define BLK_START_QUEUE 0xffffffff812a7590
#endif

#ifndef BLK_STOP_QUEUE
#define BLK_STOP_QUEUE 0xffffffff812a75e0
#endif

#ifndef BLK_SYNC_QUEUE
#define BLK_SYNC_QUEUE 0xffffffff812a7600
#endif

#ifndef BLK_RUN_QUEUE_ASYNC
#define BLK_RUN_QUEUE_ASYNC 0xffffffff812a7680
#endif

#ifndef BLK_RUN_QUEUE
#define BLK_RUN_QUEUE 0xffffffff812a7760
#endif

#ifndef BLK_PUT_QUEUE
#define BLK_PUT_QUEUE 0xffffffff812a77a0
#endif

#ifndef BLK_ALLOC_QUEUE_NODE
#define BLK_ALLOC_QUEUE_NODE 0xffffffff812a7800
#endif

#ifndef BLK_ALLOC_QUEUE
#define BLK_ALLOC_QUEUE 0xffffffff812a7a50
#endif

#ifndef BLK_GET_QUEUE
#define BLK_GET_QUEUE 0xffffffff812a7a70
#endif

#ifndef BLK_RQ_UNPREP_CLONE
#define BLK_RQ_UNPREP_CLONE 0xffffffff812a7b50
#endif

#ifndef BLK_RQ_PREP_CLONE
#define BLK_RQ_PREP_CLONE 0xffffffff812a7b80
#endif

#ifndef KBLOCKD_SCHEDULE_WORK
#define KBLOCKD_SCHEDULE_WORK 0xffffffff812a7ce0
#endif

#ifndef BLK_PM_RUNTIME_INIT
#define BLK_PM_RUNTIME_INIT 0xffffffff812a7d10
#endif

#ifndef BLK_SET_QUEUE_DYING
#define BLK_SET_QUEUE_DYING 0xffffffff812a7d50
#endif

#ifndef BLK_RQ_ERR_BYTES
#define BLK_RQ_ERR_BYTES 0xffffffff812a7f10
#endif

#ifndef BLK_REQUEUE_REQUEST
#define BLK_REQUEUE_REQUEST 0xffffffff812a7f80
#endif

#ifndef BLK_RQ_CHECK_LIMITS
#define BLK_RQ_CHECK_LIMITS 0xffffffff812a8010
#endif

#ifndef BLK_CHECK_PLUGGED
#define BLK_CHECK_PLUGGED 0xffffffff812a80d0
#endif

#ifndef GENERIC_MAKE_REQUEST
#define GENERIC_MAKE_REQUEST 0xffffffff812a8560
#endif

#ifndef SUBMIT_BIO
#define SUBMIT_BIO 0xffffffff812a8680
#endif

#ifndef BLK_DUMP_RQ_FLAGS
#define BLK_DUMP_RQ_FLAGS 0xffffffff812a98c0
#endif

#ifndef BLK_PRE_RUNTIME_RESUME
#define BLK_PRE_RUNTIME_RESUME 0xffffffff812aa320
#endif

#ifndef BLK_PRE_RUNTIME_SUSPEND
#define BLK_PRE_RUNTIME_SUSPEND 0xffffffff812aa360
#endif

#ifndef BLK_POST_RUNTIME_SUSPEND
#define BLK_POST_RUNTIME_SUSPEND 0xffffffff812aa3d0
#endif

#ifndef BLK_QUEUE_BYPASS_END
#define BLK_QUEUE_BYPASS_END 0xffffffff812aa440
#endif

#ifndef BLK_POST_RUNTIME_RESUME
#define BLK_POST_RUNTIME_RESUME 0xffffffff812aa4b0
#endif

#ifndef __BLK_PUT_REQUEST
#define __BLK_PUT_REQUEST 0xffffffff812aa580
#endif

#ifndef BLK_PUT_REQUEST
#define BLK_PUT_REQUEST 0xffffffff812aa730
#endif

#ifndef BLK_QUEUE_BYPASS_START
#define BLK_QUEUE_BYPASS_START 0xffffffff812aa8e0
#endif

#ifndef BLK_CLEANUP_QUEUE
#define BLK_CLEANUP_QUEUE 0xffffffff812aa960
#endif

#ifndef BLK_GET_REQUEST
#define BLK_GET_REQUEST 0xffffffff812ab1e0
#endif

#ifndef BLK_MAKE_REQUEST
#define BLK_MAKE_REQUEST 0xffffffff812ab2e0
#endif

#ifndef BLK_QUEUE_CONGESTION_THRESHOLD
#define BLK_QUEUE_CONGESTION_THRESHOLD 0xffffffff812ab3b0
#endif

#ifndef __BLK_RUN_QUEUE_UNCOND
#define __BLK_RUN_QUEUE_UNCOND 0xffffffff812ab400
#endif

#ifndef BLK_INIT_RL
#define BLK_INIT_RL 0xffffffff812ab430
#endif

#ifndef BLK_INIT_ALLOCATED_QUEUE
#define BLK_INIT_ALLOCATED_QUEUE 0xffffffff812ab4e0
#endif

#ifndef BLK_INIT_QUEUE_NODE
#define BLK_INIT_QUEUE_NODE 0xffffffff812ab5e0
#endif

#ifndef BLK_INIT_QUEUE
#define BLK_INIT_QUEUE 0xffffffff812ab650
#endif

#ifndef BLK_EXIT_RL
#define BLK_EXIT_RL 0xffffffff812ab670
#endif

#ifndef BLK_UPDATE_NR_REQUESTS
#define BLK_UPDATE_NR_REQUESTS 0xffffffff812ab6a0
#endif

#ifndef BLK_ACCOUNT_IO_COMPLETION
#define BLK_ACCOUNT_IO_COMPLETION 0xffffffff812ab860
#endif

#ifndef BLK_UPDATE_REQUEST
#define BLK_UPDATE_REQUEST 0xffffffff812ab8f0
#endif

#ifndef BLK_ACCOUNT_IO_DONE
#define BLK_ACCOUNT_IO_DONE 0xffffffff812abd00
#endif

#ifndef BLK_FINISH_REQUEST
#define BLK_FINISH_REQUEST 0xffffffff812abe80
#endif

#ifndef BLK_END_REQUEST
#define BLK_END_REQUEST 0xffffffff812abfd0
#endif

#ifndef BLK_END_REQUEST_CUR
#define BLK_END_REQUEST_CUR 0xffffffff812abff0
#endif

#ifndef BLK_END_REQUEST_ERR
#define BLK_END_REQUEST_ERR 0xffffffff812ac040
#endif

#ifndef BLK_END_REQUEST_ALL
#define BLK_END_REQUEST_ALL 0xffffffff812ac090
#endif

#ifndef BLK_ACCOUNT_IO_START
#define BLK_ACCOUNT_IO_START 0xffffffff812ac0e0
#endif

#ifndef BIO_ATTEMPT_BACK_MERGE
#define BIO_ATTEMPT_BACK_MERGE 0xffffffff812ac280
#endif

#ifndef BIO_ATTEMPT_FRONT_MERGE
#define BIO_ATTEMPT_FRONT_MERGE 0xffffffff812ac350
#endif

#ifndef BLK_ATTEMPT_PLUG_MERGE
#define BLK_ATTEMPT_PLUG_MERGE 0xffffffff812ac420
#endif

#ifndef BLK_INSERT_CLONED_REQUEST
#define BLK_INSERT_CLONED_REQUEST 0xffffffff812ac500
#endif

#ifndef BLK_DEQUEUE_REQUEST
#define BLK_DEQUEUE_REQUEST 0xffffffff812ac630
#endif

#ifndef BLK_START_REQUEST
#define BLK_START_REQUEST 0xffffffff812ac6b0
#endif

#ifndef __BLK_END_BIDI_REQUEST
#define __BLK_END_BIDI_REQUEST 0xffffffff812ac710
#endif

#ifndef __BLK_END_REQUEST
#define __BLK_END_REQUEST 0xffffffff812ac750
#endif

#ifndef __BLK_END_REQUEST_CUR
#define __BLK_END_REQUEST_CUR 0xffffffff812ac770
#endif

#ifndef __BLK_END_REQUEST_ERR
#define __BLK_END_REQUEST_ERR 0xffffffff812ac7c0
#endif

#ifndef __BLK_END_REQUEST_ALL
#define __BLK_END_REQUEST_ALL 0xffffffff812ac810
#endif

#ifndef BLK_PEEK_REQUEST
#define BLK_PEEK_REQUEST 0xffffffff812ac860
#endif

#ifndef BLK_FETCH_REQUEST
#define BLK_FETCH_REQUEST 0xffffffff812acac0
#endif

#ifndef BLK_RQ_BIO_PREP
#define BLK_RQ_BIO_PREP 0xffffffff812acae0
#endif

#ifndef INIT_REQUEST_FROM_BIO
#define INIT_REQUEST_FROM_BIO 0xffffffff812acb70
#endif

#ifndef BLK_FLUSH_PLUG_LIST
#define BLK_FLUSH_PLUG_LIST 0xffffffff812acbe0
#endif

#ifndef BLK_FINISH_PLUG
#define BLK_FINISH_PLUG 0xffffffff812ad190
#endif

#ifndef BLK_QUEUE_FREE_TAGS
#define BLK_QUEUE_FREE_TAGS 0xffffffff812ad1d0
#endif

#ifndef BLK_QUEUE_FIND_TAG
#define BLK_QUEUE_FIND_TAG 0xffffffff812ad1e0
#endif

#ifndef BLK_QUEUE_END_TAG
#define BLK_QUEUE_END_TAG 0xffffffff812ad210
#endif

#ifndef BLK_QUEUE_START_TAG
#define BLK_QUEUE_START_TAG 0xffffffff812ad2e0
#endif

#ifndef BLK_QUEUE_INVALIDATE_TAGS
#define BLK_QUEUE_INVALIDATE_TAGS 0xffffffff812ad4a0
#endif

#ifndef BLK_FREE_TAGS
#define BLK_FREE_TAGS 0xffffffff812ad4f0
#endif

#ifndef BLK_INIT_TAGS
#define BLK_INIT_TAGS 0xffffffff812ad6b0
#endif

#ifndef BLK_QUEUE_RESIZE_TAGS
#define BLK_QUEUE_RESIZE_TAGS 0xffffffff812ad6d0
#endif

#ifndef BLK_QUEUE_INIT_TAGS
#define BLK_QUEUE_INIT_TAGS 0xffffffff812ad790
#endif

#ifndef __BLK_QUEUE_FREE_TAGS
#define __BLK_QUEUE_FREE_TAGS 0xffffffff812ad830
#endif

#ifndef BLK_REGISTER_QUEUE
#define BLK_REGISTER_QUEUE 0xffffffff812ae320
#endif

#ifndef BLK_UNREGISTER_QUEUE
#define BLK_UNREGISTER_QUEUE 0xffffffff812ae490
#endif

#ifndef BLKDEV_ISSUE_FLUSH
#define BLKDEV_ISSUE_FLUSH 0xffffffff812aeb80
#endif

#ifndef BLK_INSERT_FLUSH
#define BLK_INSERT_FLUSH 0xffffffff812aec10
#endif

#ifndef BLK_ALLOC_FLUSH_QUEUE
#define BLK_ALLOC_FLUSH_QUEUE 0xffffffff812aee20
#endif

#ifndef BLK_FREE_FLUSH_QUEUE
#define BLK_FREE_FLUSH_QUEUE 0xffffffff812aef00
#endif

#ifndef BLK_QUEUE_PREP_RQ
#define BLK_QUEUE_PREP_RQ 0xffffffff812aef30
#endif

#ifndef BLK_QUEUE_UNPREP_RQ
#define BLK_QUEUE_UNPREP_RQ 0xffffffff812aef40
#endif

#ifndef BLK_QUEUE_MERGE_BVEC
#define BLK_QUEUE_MERGE_BVEC 0xffffffff812aef50
#endif

#ifndef BLK_QUEUE_SOFTIRQ_DONE
#define BLK_QUEUE_SOFTIRQ_DONE 0xffffffff812aef60
#endif

#ifndef BLK_QUEUE_RQ_TIMEOUT
#define BLK_QUEUE_RQ_TIMEOUT 0xffffffff812aef70
#endif

#ifndef BLK_QUEUE_RQ_TIMED_OUT
#define BLK_QUEUE_RQ_TIMED_OUT 0xffffffff812aef80
#endif

#ifndef BLK_QUEUE_LLD_BUSY
#define BLK_QUEUE_LLD_BUSY 0xffffffff812aef90
#endif

#ifndef BLK_SET_DEFAULT_LIMITS
#define BLK_SET_DEFAULT_LIMITS 0xffffffff812aefa0
#endif

#ifndef BLK_SET_STACKING_LIMITS
#define BLK_SET_STACKING_LIMITS 0xffffffff812af040
#endif

#ifndef BLK_QUEUE_MAX_DISCARD_SECTORS
#define BLK_QUEUE_MAX_DISCARD_SECTORS 0xffffffff812af0e0
#endif

#ifndef BLK_QUEUE_MAX_WRITE_SAME_SECTORS
#define BLK_QUEUE_MAX_WRITE_SAME_SECTORS 0xffffffff812af0f0
#endif

#ifndef BLK_QUEUE_LOGICAL_BLOCK_SIZE
#define BLK_QUEUE_LOGICAL_BLOCK_SIZE 0xffffffff812af100
#endif

#ifndef BLK_QUEUE_PHYSICAL_BLOCK_SIZE
#define BLK_QUEUE_PHYSICAL_BLOCK_SIZE 0xffffffff812af140
#endif

#ifndef BLK_QUEUE_ALIGNMENT_OFFSET
#define BLK_QUEUE_ALIGNMENT_OFFSET 0xffffffff812af180
#endif

#ifndef BLK_LIMITS_IO_MIN
#define BLK_LIMITS_IO_MIN 0xffffffff812af1a0
#endif

#ifndef BLK_QUEUE_IO_MIN
#define BLK_QUEUE_IO_MIN 0xffffffff812af1d0
#endif

#ifndef BLK_LIMITS_IO_OPT
#define BLK_LIMITS_IO_OPT 0xffffffff812af210
#endif

#ifndef BLK_QUEUE_IO_OPT
#define BLK_QUEUE_IO_OPT 0xffffffff812af220
#endif

#ifndef BLK_QUEUE_DMA_PAD
#define BLK_QUEUE_DMA_PAD 0xffffffff812af230
#endif

#ifndef BLK_QUEUE_UPDATE_DMA_PAD
#define BLK_QUEUE_UPDATE_DMA_PAD 0xffffffff812af240
#endif

#ifndef BLK_QUEUE_DMA_ALIGNMENT
#define BLK_QUEUE_DMA_ALIGNMENT 0xffffffff812af260
#endif

#ifndef BLK_QUEUE_FLUSH_QUEUEABLE
#define BLK_QUEUE_FLUSH_QUEUEABLE 0xffffffff812af270
#endif

#ifndef BLK_QUEUE_BOUNCE_LIMIT
#define BLK_QUEUE_BOUNCE_LIMIT 0xffffffff812af290
#endif

#ifndef BLK_QUEUE_MAKE_REQUEST
#define BLK_QUEUE_MAKE_REQUEST 0xffffffff812af310
#endif

#ifndef BLK_LIMITS_MAX_HW_SECTORS
#define BLK_LIMITS_MAX_HW_SECTORS 0xffffffff812af430
#endif

#ifndef BLK_QUEUE_MAX_HW_SECTORS
#define BLK_QUEUE_MAX_HW_SECTORS 0xffffffff812af470
#endif

#ifndef BLK_QUEUE_MAX_SEGMENTS
#define BLK_QUEUE_MAX_SEGMENTS 0xffffffff812af4c0
#endif

#ifndef BLK_QUEUE_DMA_DRAIN
#define BLK_QUEUE_DMA_DRAIN 0xffffffff812af500
#endif

#ifndef BLK_QUEUE_MAX_SEGMENT_SIZE
#define BLK_QUEUE_MAX_SEGMENT_SIZE 0xffffffff812af540
#endif

#ifndef BLK_QUEUE_SEGMENT_BOUNDARY
#define BLK_QUEUE_SEGMENT_BOUNDARY 0xffffffff812af580
#endif

#ifndef BLK_STACK_LIMITS
#define BLK_STACK_LIMITS 0xffffffff812af5c0
#endif

#ifndef BLK_QUEUE_STACK_LIMITS
#define BLK_QUEUE_STACK_LIMITS 0xffffffff812af9c0
#endif

#ifndef BDEV_STACK_LIMITS
#define BDEV_STACK_LIMITS 0xffffffff812af9f0
#endif

#ifndef BLK_QUEUE_FLUSH
#define BLK_QUEUE_FLUSH 0xffffffff812afa30
#endif

#ifndef BLK_QUEUE_CHUNK_SECTORS
#define BLK_QUEUE_CHUNK_SECTORS 0xffffffff812afad0
#endif

#ifndef BLK_QUEUE_UPDATE_DMA_ALIGNMENT
#define BLK_QUEUE_UPDATE_DMA_ALIGNMENT 0xffffffff812afb00
#endif

#ifndef DISK_STACK_LIMITS
#define DISK_STACK_LIMITS 0xffffffff812afb30
#endif

#ifndef IOC_LOOKUP_ICQ
#define IOC_LOOKUP_ICQ 0xffffffff812afdb0
#endif

#ifndef GET_IO_CONTEXT
#define GET_IO_CONTEXT 0xffffffff812afe10
#endif

#ifndef PUT_IO_CONTEXT
#define PUT_IO_CONTEXT 0xffffffff812afe30
#endif

#ifndef PUT_IO_CONTEXT_ACTIVE
#define PUT_IO_CONTEXT_ACTIVE 0xffffffff812afed0
#endif

#ifndef EXIT_IO_CONTEXT
#define EXIT_IO_CONTEXT 0xffffffff812aff90
#endif

#ifndef IOC_CLEAR_QUEUE
#define IOC_CLEAR_QUEUE 0xffffffff812affd0
#endif

#ifndef CREATE_TASK_IO_CONTEXT
#define CREATE_TASK_IO_CONTEXT 0xffffffff812b0030
#endif

#ifndef GET_TASK_IO_CONTEXT
#define GET_TASK_IO_CONTEXT 0xffffffff812b0120
#endif

#ifndef IOC_CREATE_ICQ
#define IOC_CREATE_ICQ 0xffffffff812b01a0
#endif

#ifndef BLK_RQ_MAP_USER_IOV
#define BLK_RQ_MAP_USER_IOV 0xffffffff812b0350
#endif

#ifndef BLK_RQ_MAP_USER
#define BLK_RQ_MAP_USER 0xffffffff812b0540
#endif

#ifndef BLK_RQ_UNMAP_USER
#define BLK_RQ_UNMAP_USER 0xffffffff812b05a0
#endif

#ifndef BLK_RQ_APPEND_BIO
#define BLK_RQ_APPEND_BIO 0xffffffff812b0600
#endif

#ifndef BLK_RQ_MAP_KERN
#define BLK_RQ_MAP_KERN 0xffffffff812b0660
#endif

#ifndef BLK_EXECUTE_RQ_NOWAIT
#define BLK_EXECUTE_RQ_NOWAIT 0xffffffff812b07d0
#endif

#ifndef BLK_EXECUTE_RQ
#define BLK_EXECUTE_RQ 0xffffffff812b0960
#endif

#ifndef BLK_RQ_MAP_SG
#define BLK_RQ_MAP_SG 0xffffffff812b0ab0
#endif

#ifndef BLK_RECOUNT_SEGMENTS
#define BLK_RECOUNT_SEGMENTS 0xffffffff812b1380
#endif

#ifndef BLK_RECALC_RQ_SEGMENTS
#define BLK_RECALC_RQ_SEGMENTS 0xffffffff812b14f0
#endif

#ifndef LL_BACK_MERGE_FN
#define LL_BACK_MERGE_FN 0xffffffff812b1520
#endif

#ifndef LL_FRONT_MERGE_FN
#define LL_FRONT_MERGE_FN 0xffffffff812b16e0
#endif

#ifndef BLK_RQ_SET_MIXED_MERGE
#define BLK_RQ_SET_MIXED_MERGE 0xffffffff812b18a0
#endif

#ifndef ATTEMPT_BACK_MERGE
#define ATTEMPT_BACK_MERGE 0xffffffff812b2060
#endif

#ifndef ATTEMPT_FRONT_MERGE
#define ATTEMPT_FRONT_MERGE 0xffffffff812b20a0
#endif

#ifndef BLK_ATTEMPT_REQ_MERGE
#define BLK_ATTEMPT_REQ_MERGE 0xffffffff812b20e0
#endif

#ifndef BLK_RQ_MERGE_OK
#define BLK_RQ_MERGE_OK 0xffffffff812b2100
#endif

#ifndef BLK_TRY_MERGE
#define BLK_TRY_MERGE 0xffffffff812b22c0
#endif

#ifndef __BLK_COMPLETE_REQUEST
#define __BLK_COMPLETE_REQUEST 0xffffffff812b2490
#endif

#ifndef BLK_COMPLETE_REQUEST
#define BLK_COMPLETE_REQUEST 0xffffffff812b2590
#endif

#ifndef BLK_DELETE_TIMER
#define BLK_DELETE_TIMER 0xffffffff812b25c0
#endif

#ifndef BLK_RQ_TIMEOUT
#define BLK_RQ_TIMEOUT 0xffffffff812b25f0
#endif

#ifndef BLK_ADD_TIMER
#define BLK_ADD_TIMER 0xffffffff812b2620
#endif

#ifndef BLK_RQ_TIMED_OUT_TIMER
#define BLK_RQ_TIMED_OUT_TIMER 0xffffffff812b27b0
#endif

#ifndef BLK_ABORT_REQUEST
#define BLK_ABORT_REQUEST 0xffffffff812b28e0
#endif

#ifndef BLK_IOPOLL_SCHED
#define BLK_IOPOLL_SCHED 0xffffffff812b2950
#endif

#ifndef BLK_IOPOLL_DISABLE
#define BLK_IOPOLL_DISABLE 0xffffffff812b29a0
#endif

#ifndef BLK_IOPOLL_INIT
#define BLK_IOPOLL_INIT 0xffffffff812b29e0
#endif

#ifndef __BLK_IOPOLL_COMPLETE
#define __BLK_IOPOLL_COMPLETE 0xffffffff812b2bc0
#endif

#ifndef BLK_IOPOLL_ENABLE
#define BLK_IOPOLL_ENABLE 0xffffffff812b2c00
#endif

#ifndef BLK_IOPOLL_COMPLETE
#define BLK_IOPOLL_COMPLETE 0xffffffff812b2c20
#endif

#ifndef BLKDEV_ISSUE_DISCARD
#define BLKDEV_ISSUE_DISCARD 0xffffffff812b2cc0
#endif

#ifndef BLKDEV_ISSUE_WRITE_SAME
#define BLKDEV_ISSUE_WRITE_SAME 0xffffffff812b2f30
#endif

#ifndef BLKDEV_ISSUE_ZEROOUT
#define BLKDEV_ISSUE_ZEROOUT 0xffffffff812b30f0
#endif

#ifndef BLK_MQ_REQUEST_STARTED
#define BLK_MQ_REQUEST_STARTED 0xffffffff812b3370
#endif

#ifndef BLK_MQ_TAG_TO_RQ
#define BLK_MQ_TAG_TO_RQ 0xffffffff812b3380
#endif

#ifndef BLK_MQ_MAP_QUEUE
#define BLK_MQ_MAP_QUEUE 0xffffffff812b3420
#endif

#ifndef BLK_MQ_CAN_QUEUE
#define BLK_MQ_CAN_QUEUE 0xffffffff812b3630
#endif

#ifndef BLK_MQ_START_REQUEST
#define BLK_MQ_START_REQUEST 0xffffffff812b3940
#endif

#ifndef BLK_MQ_CANCEL_REQUEUE_WORK
#define BLK_MQ_CANCEL_REQUEUE_WORK 0xffffffff812b39f0
#endif

#ifndef BLK_MQ_KICK_REQUEUE_LIST
#define BLK_MQ_KICK_REQUEUE_LIST 0xffffffff812b3a10
#endif

#ifndef BLK_MQ_STOP_HW_QUEUE
#define BLK_MQ_STOP_HW_QUEUE 0xffffffff812b3a30
#endif

#ifndef BLK_MQ_STOP_HW_QUEUES
#define BLK_MQ_STOP_HW_QUEUES 0xffffffff812b3a60
#endif

#ifndef BLK_MQ_UNFREEZE_QUEUE
#define BLK_MQ_UNFREEZE_QUEUE 0xffffffff812b3d20
#endif

#ifndef BLK_MQ_ADD_TO_REQUEUE_LIST
#define BLK_MQ_ADD_TO_REQUEUE_LIST 0xffffffff812b3dd0
#endif

#ifndef BLK_MQ_REQUEUE_REQUEST
#define BLK_MQ_REQUEUE_REQUEST 0xffffffff812b3e80
#endif

#ifndef BLK_MQ_FREE_TAG_SET
#define BLK_MQ_FREE_TAG_SET 0xffffffff812b4080
#endif

#ifndef BLK_MQ_ALLOC_TAG_SET
#define BLK_MQ_ALLOC_TAG_SET 0xffffffff812b43a0
#endif

#ifndef BLK_MQ_FREE_HCTX_REQUEST
#define BLK_MQ_FREE_HCTX_REQUEST 0xffffffff812b4860
#endif

#ifndef BLK_MQ_FREE_REQUEST
#define BLK_MQ_FREE_REQUEST 0xffffffff812b48a0
#endif

#ifndef __BLK_MQ_END_REQUEST
#define __BLK_MQ_END_REQUEST 0xffffffff812b48d0
#endif

#ifndef BLK_MQ_END_REQUEST
#define BLK_MQ_END_REQUEST 0xffffffff812b4930
#endif

#ifndef BLK_MQ_ABORT_REQUEUE_LIST
#define BLK_MQ_ABORT_REQUEUE_LIST 0xffffffff812b49a0
#endif

#ifndef BLK_MQ_DELAY_QUEUE
#define BLK_MQ_DELAY_QUEUE 0xffffffff812b4a60
#endif

#ifndef BLK_MQ_WAKE_WAITERS
#define BLK_MQ_WAKE_WAITERS 0xffffffff812b4b00
#endif

#ifndef __BLK_MQ_COMPLETE_REQUEST
#define __BLK_MQ_COMPLETE_REQUEST 0xffffffff812b4b80
#endif

#ifndef BLK_MQ_COMPLETE_REQUEST
#define BLK_MQ_COMPLETE_REQUEST 0xffffffff812b4c70
#endif

#ifndef BLK_MQ_RQ_TIMED_OUT
#define BLK_MQ_RQ_TIMED_OUT 0xffffffff812b4ca0
#endif

#ifndef BLK_MQ_RUN_HW_QUEUE
#define BLK_MQ_RUN_HW_QUEUE 0xffffffff812b4db0
#endif

#ifndef BLK_MQ_ALLOC_REQUEST
#define BLK_MQ_ALLOC_REQUEST 0xffffffff812b51e0
#endif

#ifndef BLK_MQ_RUN_HW_QUEUES
#define BLK_MQ_RUN_HW_QUEUES 0xffffffff812b5550
#endif

#ifndef BLK_MQ_FREEZE_QUEUE_START
#define BLK_MQ_FREEZE_QUEUE_START 0xffffffff812b5600
#endif

#ifndef BLK_MQ_FREEZE_QUEUE
#define BLK_MQ_FREEZE_QUEUE 0xffffffff812b5660
#endif

#ifndef BLK_MQ_INIT_ALLOCATED_QUEUE
#define BLK_MQ_INIT_ALLOCATED_QUEUE 0xffffffff812b5730
#endif

#ifndef BLK_MQ_INIT_QUEUE
#define BLK_MQ_INIT_QUEUE 0xffffffff812b5fa0
#endif

#ifndef BLK_MQ_START_HW_QUEUE
#define BLK_MQ_START_HW_QUEUE 0xffffffff812b61a0
#endif

#ifndef BLK_MQ_START_HW_QUEUES
#define BLK_MQ_START_HW_QUEUES 0xffffffff812b61c0
#endif

#ifndef BLK_MQ_START_STOPPED_HW_QUEUES
#define BLK_MQ_START_STOPPED_HW_QUEUES 0xffffffff812b6210
#endif

#ifndef BLK_MQ_INSERT_REQUEST
#define BLK_MQ_INSERT_REQUEST 0xffffffff812b6b10
#endif

#ifndef BLK_MQ_FLUSH_PLUG_LIST
#define BLK_MQ_FLUSH_PLUG_LIST 0xffffffff812b6d00
#endif

#ifndef BLK_MQ_RELEASE
#define BLK_MQ_RELEASE 0xffffffff812b6e40
#endif

#ifndef BLK_MQ_FREE_QUEUE
#define BLK_MQ_FREE_QUEUE 0xffffffff812b6eb0
#endif

#ifndef BLK_MQ_UPDATE_NR_REQUESTS
#define BLK_MQ_UPDATE_NR_REQUESTS 0xffffffff812b6fd0
#endif

#ifndef BLK_MQ_DISABLE_HOTPLUG
#define BLK_MQ_DISABLE_HOTPLUG 0xffffffff812b7050
#endif

#ifndef BLK_MQ_ENABLE_HOTPLUG
#define BLK_MQ_ENABLE_HOTPLUG 0xffffffff812b7070
#endif

#ifndef BLK_MQ_UNIQUE_TAG
#define BLK_MQ_UNIQUE_TAG 0xffffffff812b7120
#endif

#ifndef BLK_MQ_TAG_BUSY_ITER
#define BLK_MQ_TAG_BUSY_ITER 0xffffffff812b7320
#endif

#ifndef BLK_MQ_HAS_FREE_TAGS
#define BLK_MQ_HAS_FREE_TAGS 0xffffffff812b78b0
#endif

#ifndef __BLK_MQ_TAG_BUSY
#define __BLK_MQ_TAG_BUSY 0xffffffff812b7920
#endif

#ifndef BLK_MQ_TAG_WAKEUP_ALL
#define BLK_MQ_TAG_WAKEUP_ALL 0xffffffff812b7950
#endif

#ifndef __BLK_MQ_TAG_IDLE
#define __BLK_MQ_TAG_IDLE 0xffffffff812b79f0
#endif

#ifndef BLK_MQ_GET_TAG
#define BLK_MQ_GET_TAG 0xffffffff812b7a30
#endif

#ifndef BLK_MQ_PUT_TAG
#define BLK_MQ_PUT_TAG 0xffffffff812b7b00
#endif

#ifndef BLK_MQ_INIT_TAGS
#define BLK_MQ_INIT_TAGS 0xffffffff812b7b60
#endif

#ifndef BLK_MQ_FREE_TAGS
#define BLK_MQ_FREE_TAGS 0xffffffff812b7c30
#endif

#ifndef BLK_MQ_TAG_INIT_LAST_TAG
#define BLK_MQ_TAG_INIT_LAST_TAG 0xffffffff812b7c70
#endif

#ifndef BLK_MQ_TAG_UPDATE_DEPTH
#define BLK_MQ_TAG_UPDATE_DEPTH 0xffffffff812b7ca0
#endif

#ifndef BLK_MQ_TAG_SYSFS_SHOW
#define BLK_MQ_TAG_SYSFS_SHOW 0xffffffff812b7cd0
#endif

#ifndef BLK_MQ_UNREGISTER_DISK
#define BLK_MQ_UNREGISTER_DISK 0xffffffff812b84d0
#endif

#ifndef BLK_MQ_REGISTER_DISK
#define BLK_MQ_REGISTER_DISK 0xffffffff812b85c0
#endif

#ifndef BLK_MQ_FINISH_INIT
#define BLK_MQ_FINISH_INIT 0xffffffff812b8720
#endif

#ifndef BLK_MQ_SYSFS_UNREGISTER
#define BLK_MQ_SYSFS_UNREGISTER 0xffffffff812b8740
#endif

#ifndef BLK_MQ_SYSFS_REGISTER
#define BLK_MQ_SYSFS_REGISTER 0xffffffff812b87a0
#endif

#ifndef BLK_MQ_REGISTER_CPU_NOTIFIER
#define BLK_MQ_REGISTER_CPU_NOTIFIER 0xffffffff812b8870
#endif

#ifndef BLK_MQ_UNREGISTER_CPU_NOTIFIER
#define BLK_MQ_UNREGISTER_CPU_NOTIFIER 0xffffffff812b88c0
#endif

#ifndef BLK_MQ_INIT_CPU_NOTIFIER
#define BLK_MQ_INIT_CPU_NOTIFIER 0xffffffff812b8910
#endif

#ifndef BLK_MQ_UPDATE_QUEUE_MAP
#define BLK_MQ_UPDATE_QUEUE_MAP 0xffffffff812b8920
#endif

#ifndef BLK_MQ_MAKE_QUEUE_MAP
#define BLK_MQ_MAKE_QUEUE_MAP 0xffffffff812b8ae0
#endif

#ifndef BLK_MQ_HW_QUEUE_TO_NODE
#define BLK_MQ_HW_QUEUE_TO_NODE 0xffffffff812b8b50
#endif

#ifndef __BLKDEV_DRIVER_IOCTL
#define __BLKDEV_DRIVER_IOCTL 0xffffffff812b8bc0
#endif

#ifndef BLKDEV_IOCTL
#define BLKDEV_IOCTL 0xffffffff812b9020
#endif

#ifndef DISK_PART_ITER_INIT
#define DISK_PART_ITER_INIT 0xffffffff812b97d0
#endif

#ifndef DISK_MAP_SECTOR_RCU
#define DISK_MAP_SECTOR_RCU 0xffffffff812b9810
#endif

#ifndef SET_DEVICE_RO
#define SET_DEVICE_RO 0xffffffff812b98d0
#endif

#ifndef BDEV_READ_ONLY
#define BDEV_READ_ONLY 0xffffffff812b98f0
#endif

#ifndef DISK_GET_PART
#define DISK_GET_PART 0xffffffff812b9920
#endif

#ifndef DISK_PART_ITER_NEXT
#define DISK_PART_ITER_NEXT 0xffffffff812b9970
#endif

#ifndef DISK_PART_ITER_EXIT
#define DISK_PART_ITER_EXIT 0xffffffff812b9a50
#endif

#ifndef REGISTER_BLKDEV
#define REGISTER_BLKDEV 0xffffffff812b9a80
#endif

#ifndef UNREGISTER_BLKDEV
#define UNREGISTER_BLKDEV 0xffffffff812b9bd0
#endif

#ifndef BLK_REGISTER_REGION
#define BLK_REGISTER_REGION 0xffffffff812b9c90
#endif

#ifndef BLK_UNREGISTER_REGION
#define BLK_UNREGISTER_REGION 0xffffffff812b9cc0
#endif

#ifndef SET_DISK_RO
#define SET_DISK_RO 0xffffffff812b9ce0
#endif

#ifndef PUT_DISK
#define PUT_DISK 0xffffffff812ba070
#endif

#ifndef BDGET_DISK
#define BDGET_DISK 0xffffffff812ba0a0
#endif

#ifndef BLK_LOOKUP_DEVT
#define BLK_LOOKUP_DEVT 0xffffffff812ba1f0
#endif

#ifndef GET_DISK
#define GET_DISK 0xffffffff812ba7c0
#endif

#ifndef INVALIDATE_PARTITION
#define INVALIDATE_PARTITION 0xffffffff812ba850
#endif

#ifndef GET_GENDISK
#define GET_GENDISK 0xffffffff812bac30
#endif

#ifndef BLKDEV_SHOW
#define BLKDEV_SHOW 0xffffffff812baeb0
#endif

#ifndef BLK_ALLOC_DEVT
#define BLK_ALLOC_DEVT 0xffffffff812baf20
#endif

#ifndef ADD_DISK
#define ADD_DISK 0xffffffff812baff0
#endif

#ifndef BLK_FREE_DEVT
#define BLK_FREE_DEVT 0xffffffff812bb4a0
#endif

#ifndef DISK_EXPAND_PART_TBL
#define DISK_EXPAND_PART_TBL 0xffffffff812bb4d0
#endif

#ifndef ALLOC_DISK_NODE
#define ALLOC_DISK_NODE 0xffffffff812bb5c0
#endif

#ifndef ALLOC_DISK
#define ALLOC_DISK 0xffffffff812bb6c0
#endif

#ifndef DISK_BLOCK_EVENTS
#define DISK_BLOCK_EVENTS 0xffffffff812bb6e0
#endif

#ifndef DEL_GENDISK
#define DEL_GENDISK 0xffffffff812bb800
#endif

#ifndef DISK_UNBLOCK_EVENTS
#define DISK_UNBLOCK_EVENTS 0xffffffff812bba20
#endif

#ifndef DISK_FLUSH_EVENTS
#define DISK_FLUSH_EVENTS 0xffffffff812bba50
#endif

#ifndef DISK_CLEAR_EVENTS
#define DISK_CLEAR_EVENTS 0xffffffff812bbb10
#endif

#ifndef BLK_VERIFY_COMMAND
#define BLK_VERIFY_COMMAND 0xffffffff812bbc20
#endif

#ifndef SCSI_VERIFY_BLK_IOCTL
#define SCSI_VERIFY_BLK_IOCTL 0xffffffff812bc060
#endif

#ifndef SG_SCSI_IOCTL
#define SG_SCSI_IOCTL 0xffffffff812bc1c0
#endif

#ifndef SCSI_CMD_IOCTL
#define SCSI_CMD_IOCTL 0xffffffff812bc540
#endif

#ifndef SCSI_CMD_BLK_IOCTL
#define SCSI_CMD_BLK_IOCTL 0xffffffff812bc9e0
#endif

#ifndef __BDEVNAME
#define __BDEVNAME 0xffffffff812bca50
#endif

#ifndef PART_SIZE_SHOW
#define PART_SIZE_SHOW 0xffffffff812bca90
#endif

#ifndef PART_INFLIGHT_SHOW
#define PART_INFLIGHT_SHOW 0xffffffff812bcac0
#endif

#ifndef PART_STAT_SHOW
#define PART_STAT_SHOW 0xffffffff812bcbf0
#endif

#ifndef READ_DEV_SECTOR
#define READ_DEV_SECTOR 0xffffffff812bd020
#endif

#ifndef DISK_NAME
#define DISK_NAME 0xffffffff812bd160
#endif

#ifndef BDEVNAME
#define BDEVNAME 0xffffffff812bd210
#endif

#ifndef __DELETE_PARTITION
#define __DELETE_PARTITION 0xffffffff812bd240
#endif

#ifndef DELETE_PARTITION
#define DELETE_PARTITION 0xffffffff812bd260
#endif

#ifndef ADD_PARTITION
#define ADD_PARTITION 0xffffffff812bd330
#endif

#ifndef RESCAN_PARTITIONS
#define RESCAN_PARTITIONS 0xffffffff812bd7c0
#endif

#ifndef INVALIDATE_PARTITIONS
#define INVALIDATE_PARTITIONS 0xffffffff812bda60
#endif

#ifndef SET_TASK_IOPRIO
#define SET_TASK_IOPRIO 0xffffffff812bdaf0
#endif

#ifndef SYS_IOPRIO_SET
#define SYS_IOPRIO_SET 0xffffffff812bdbc0
#endif

#ifndef SYS_IOPRIO_SET
#define SYS_IOPRIO_SET 0xffffffff812bdbc0
#endif

#ifndef IOPRIO_BEST
#define IOPRIO_BEST 0xffffffff812bde90
#endif

#ifndef SYS_IOPRIO_GET
#define SYS_IOPRIO_GET 0xffffffff812bdf00
#endif

#ifndef SYS_IOPRIO_GET
#define SYS_IOPRIO_GET 0xffffffff812bdf00
#endif

#ifndef FREE_PARTITIONS
#define FREE_PARTITIONS 0xffffffff812be210
#endif

#ifndef CHECK_PARTITION
#define CHECK_PARTITION 0xffffffff812be230
#endif

#ifndef ADFSPART_CHECK_ICS
#define ADFSPART_CHECK_ICS 0xffffffff812be430
#endif

#ifndef AMIGA_PARTITION
#define AMIGA_PARTITION 0xffffffff812be740
#endif

#ifndef ATARI_PARTITION
#define ATARI_PARTITION 0xffffffff812beb90
#endif

#ifndef MAC_PARTITION
#define MAC_PARTITION 0xffffffff812bf310
#endif

#ifndef LDM_PARTITION
#define LDM_PARTITION 0xffffffff812c04f0
#endif

#ifndef MSDOS_PARTITION
#define MSDOS_PARTITION 0xffffffff812c2050
#endif

#ifndef OSF_PARTITION
#define OSF_PARTITION 0xffffffff812c28d0
#endif

#ifndef SGI_PARTITION
#define SGI_PARTITION 0xffffffff812c2a70
#endif

#ifndef SUN_PARTITION
#define SUN_PARTITION 0xffffffff812c2c40
#endif

#ifndef ULTRIX_PARTITION
#define ULTRIX_PARTITION 0xffffffff812c2f50
#endif

#ifndef EFI_PARTITION
#define EFI_PARTITION 0xffffffff812c3e50
#endif

#ifndef KARMA_PARTITION
#define KARMA_PARTITION 0xffffffff812c4290
#endif

#ifndef BLK_QUEUE_BOUNCE
#define BLK_QUEUE_BOUNCE 0xffffffff812c44f0
#endif

#ifndef INIT_EMERGENCY_ISA_POOL
#define INIT_EMERGENCY_ISA_POOL 0xffffffff812c4a40
#endif

#ifndef BSG_REGISTER_QUEUE
#define BSG_REGISTER_QUEUE 0xffffffff812c4ae0
#endif

#ifndef BSG_UNREGISTER_QUEUE
#define BSG_UNREGISTER_QUEUE 0xffffffff812c52f0
#endif

#ifndef BSG_JOB_DONE
#define BSG_JOB_DONE 0xffffffff812c61c0
#endif

#ifndef BSG_SETUP_QUEUE
#define BSG_SETUP_QUEUE 0xffffffff812c62a0
#endif

#ifndef BSG_REQUEST_FN
#define BSG_REQUEST_FN 0xffffffff812c63a0
#endif

#ifndef __BLKG_PRFILL_U64
#define __BLKG_PRFILL_U64 0xffffffff812c6630
#endif

#ifndef BLKG_PRFILL_STAT
#define BLKG_PRFILL_STAT 0xffffffff812c6690
#endif

#ifndef __BLKG_PRFILL_RWSTAT
#define __BLKG_PRFILL_RWSTAT 0xffffffff812c66b0
#endif

#ifndef BLKG_PRFILL_RWSTAT
#define BLKG_PRFILL_RWSTAT 0xffffffff812c6760
#endif

#ifndef BLKCG_POLICY_UNREGISTER
#define BLKCG_POLICY_UNREGISTER 0xffffffff812c6840
#endif

#ifndef BLKCG_POLICY_REGISTER
#define BLKCG_POLICY_REGISTER 0xffffffff812c68b0
#endif

#ifndef BLKG_CONF_FINISH
#define BLKG_CONF_FINISH 0xffffffff812c6a00
#endif

#ifndef BLKCG_PRINT_BLKGS
#define BLKCG_PRINT_BLKGS 0xffffffff812c6a40
#endif

#ifndef __BLKG_RELEASE_RCU
#define __BLKG_RELEASE_RCU 0xffffffff812c6b30
#endif

#ifndef BLKCG_DEACTIVATE_POLICY
#define BLKCG_DEACTIVATE_POLICY 0xffffffff812c7060
#endif

#ifndef __BLKG_LOOKUP
#define __BLKG_LOOKUP 0xffffffff812c7250
#endif

#ifndef BLKG_LOOKUP
#define BLKG_LOOKUP 0xffffffff812c72c0
#endif

#ifndef BLKG_LOOKUP_CREATE
#define BLKG_LOOKUP_CREATE 0xffffffff812c7670
#endif

#ifndef BLKG_CONF_PREP
#define BLKG_CONF_PREP 0xffffffff812c7740
#endif

#ifndef BLKG_STAT_RECURSIVE_SUM
#define BLKG_STAT_RECURSIVE_SUM 0xffffffff812c78b0
#endif

#ifndef BLKG_RWSTAT_RECURSIVE_SUM
#define BLKG_RWSTAT_RECURSIVE_SUM 0xffffffff812c79b0
#endif

#ifndef BLKCG_ACTIVATE_POLICY
#define BLKCG_ACTIVATE_POLICY 0xffffffff812c7b30
#endif

#ifndef __BLK_QUEUE_NEXT_RL
#define __BLK_QUEUE_NEXT_RL 0xffffffff812c7e00
#endif

#ifndef BLKCG_INIT_QUEUE
#define BLKCG_INIT_QUEUE 0xffffffff812c7e70
#endif

#ifndef BLKCG_DRAIN_QUEUE
#define BLKCG_DRAIN_QUEUE 0xffffffff812c7e90
#endif

#ifndef BLKCG_EXIT_QUEUE
#define BLKCG_EXIT_QUEUE 0xffffffff812c7ec0
#endif

#ifndef BLK_THROTL_BIO
#define BLK_THROTL_BIO 0xffffffff812caa60
#endif

#ifndef BLK_THROTL_DRAIN
#define BLK_THROTL_DRAIN 0xffffffff812cafa0
#endif

#ifndef BLK_THROTL_INIT
#define BLK_THROTL_INIT 0xffffffff812cb0a0
#endif

#ifndef BLK_THROTL_EXIT
#define BLK_THROTL_EXIT 0xffffffff812cb1a0
#endif

#ifndef COMPAT_BLKDEV_IOCTL
#define COMPAT_BLKDEV_IOCTL 0xffffffff812d3a80
#endif

#ifndef BIO_INTEGRITY_ENABLED
#define BIO_INTEGRITY_ENABLED 0xffffffff812d4ff0
#endif

#ifndef BIO_INTEGRITY_ALLOC
#define BIO_INTEGRITY_ALLOC 0xffffffff812d5090
#endif

#ifndef BIO_INTEGRITY_FREE
#define BIO_INTEGRITY_FREE 0xffffffff812d51d0
#endif

#ifndef BIOSET_INTEGRITY_FREE
#define BIOSET_INTEGRITY_FREE 0xffffffff812d5290
#endif

#ifndef BIO_INTEGRITY_ADD_PAGE
#define BIO_INTEGRITY_ADD_PAGE 0xffffffff812d52d0
#endif

#ifndef BIO_INTEGRITY_ENDIO
#define BIO_INTEGRITY_ENDIO 0xffffffff812d5560
#endif

#ifndef BIO_INTEGRITY_CLONE
#define BIO_INTEGRITY_CLONE 0xffffffff812d55e0
#endif

#ifndef BIOSET_INTEGRITY_CREATE
#define BIOSET_INTEGRITY_CREATE 0xffffffff812d5660
#endif

#ifndef BIO_INTEGRITY_PREP
#define BIO_INTEGRITY_PREP 0xffffffff812d56d0
#endif

#ifndef BIO_INTEGRITY_ADVANCE
#define BIO_INTEGRITY_ADVANCE 0xffffffff812d5940
#endif

#ifndef BIO_INTEGRITY_TRIM
#define BIO_INTEGRITY_TRIM 0xffffffff812d5a50
#endif

#ifndef BLK_RQ_MAP_INTEGRITY_SG
#define BLK_RQ_MAP_INTEGRITY_SG 0xffffffff812d5b20
#endif

#ifndef BLK_INTEGRITY_COMPARE
#define BLK_INTEGRITY_COMPARE 0xffffffff812d5e10
#endif

#ifndef BLK_INTEGRITY_IS_INITIALIZED
#define BLK_INTEGRITY_IS_INITIALIZED 0xffffffff812d5f60
#endif

#ifndef BLK_INTEGRITY_REGISTER
#define BLK_INTEGRITY_REGISTER 0xffffffff812d5fc0
#endif

#ifndef BLK_INTEGRITY_UNREGISTER
#define BLK_INTEGRITY_UNREGISTER 0xffffffff812d6240
#endif

#ifndef BLK_INTEGRITY_MERGE_RQ
#define BLK_INTEGRITY_MERGE_RQ 0xffffffff812d62b0
#endif

#ifndef BLK_RQ_COUNT_INTEGRITY_SG
#define BLK_RQ_COUNT_INTEGRITY_SG 0xffffffff812d63d0
#endif

#ifndef BLK_INTEGRITY_MERGE_BIO
#define BLK_INTEGRITY_MERGE_BIO 0xffffffff812d6680
#endif

#ifndef ARGV_FREE
#define ARGV_FREE 0xffffffff812d6a20
#endif

#ifndef ARGV_SPLIT
#define ARGV_SPLIT 0xffffffff812d6a40
#endif

#ifndef MODULE_BUG_FINALIZE
#define MODULE_BUG_FINALIZE 0xffffffff812d6b60
#endif

#ifndef MODULE_BUG_CLEANUP
#define MODULE_BUG_CLEANUP 0xffffffff812d6c30
#endif

#ifndef FIND_BUG
#define FIND_BUG 0xffffffff812d6c60
#endif

#ifndef REPORT_BUG
#define REPORT_BUG 0xffffffff812d6d30
#endif

#ifndef GET_OPTION
#define GET_OPTION 0xffffffff812d6e70
#endif

#ifndef GET_OPTIONS
#define GET_OPTIONS 0xffffffff812d6ef0
#endif

#ifndef MEMPARSE
#define MEMPARSE 0xffffffff812d6fb0
#endif

#ifndef PARSE_OPTION_STR
#define PARSE_OPTION_STR 0xffffffff812d7020
#endif

#ifndef CPUMASK_NEXT_AND
#define CPUMASK_NEXT_AND 0xffffffff812d70c0
#endif

#ifndef CPUMASK_LOCAL_SPREAD
#define CPUMASK_LOCAL_SPREAD 0xffffffff812d7110
#endif

#ifndef CPUMASK_ANY_BUT
#define CPUMASK_ANY_BUT 0xffffffff812d7210
#endif

#ifndef _ATOMIC_DEC_AND_LOCK
#define _ATOMIC_DEC_AND_LOCK 0xffffffff812d7250
#endif

#ifndef FIND_CPIO_DATA
#define FIND_CPIO_DATA 0xffffffff812d72c0
#endif

#ifndef FPROP_GLOBAL_INIT
#define FPROP_GLOBAL_INIT 0xffffffff812d76f0
#endif

#ifndef FPROP_GLOBAL_DESTROY
#define FPROP_GLOBAL_DESTROY 0xffffffff812d7720
#endif

#ifndef FPROP_NEW_PERIOD
#define FPROP_NEW_PERIOD 0xffffffff812d7730
#endif

#ifndef FPROP_LOCAL_INIT_SINGLE
#define FPROP_LOCAL_INIT_SINGLE 0xffffffff812d77c0
#endif

#ifndef FPROP_LOCAL_DESTROY_SINGLE
#define FPROP_LOCAL_DESTROY_SINGLE 0xffffffff812d77e0
#endif

#ifndef __FPROP_INC_SINGLE
#define __FPROP_INC_SINGLE 0xffffffff812d77f0
#endif

#ifndef FPROP_FRACTION_SINGLE
#define FPROP_FRACTION_SINGLE 0xffffffff812d7830
#endif

#ifndef FPROP_LOCAL_INIT_PERCPU
#define FPROP_LOCAL_INIT_PERCPU 0xffffffff812d78a0
#endif

#ifndef FPROP_LOCAL_DESTROY_PERCPU
#define FPROP_LOCAL_DESTROY_PERCPU 0xffffffff812d78d0
#endif

#ifndef __FPROP_INC_PERCPU
#define __FPROP_INC_PERCPU 0xffffffff812d78e0
#endif

#ifndef FPROP_FRACTION_PERCPU
#define FPROP_FRACTION_PERCPU 0xffffffff812d7930
#endif

#ifndef __FPROP_INC_PERCPU_MAX
#define __FPROP_INC_PERCPU_MAX 0xffffffff812d79d0
#endif

#ifndef IDR_FOR_EACH
#define IDR_FOR_EACH 0xffffffff812d7a50
#endif

#ifndef IDR_GET_NEXT
#define IDR_GET_NEXT 0xffffffff812d7b50
#endif

#ifndef IDR_IS_EMPTY
#define IDR_IS_EMPTY 0xffffffff812d7c50
#endif

#ifndef IDR_PRELOAD
#define IDR_PRELOAD 0xffffffff812d7c70
#endif

#ifndef IDR_REPLACE
#define IDR_REPLACE 0xffffffff812d7d60
#endif

#ifndef IDR_REMOVE
#define IDR_REMOVE 0xffffffff812d7e10
#endif

#ifndef IDR_DESTROY
#define IDR_DESTROY 0xffffffff812d80a0
#endif

#ifndef IDR_INIT
#define IDR_INIT 0xffffffff812d81f0
#endif

#ifndef IDA_INIT
#define IDA_INIT 0xffffffff812d8220
#endif

#ifndef IDA_REMOVE
#define IDA_REMOVE 0xffffffff812d82d0
#endif

#ifndef IDA_DESTROY
#define IDA_DESTROY 0xffffffff812d8410
#endif

#ifndef IDR_FIND_SLOWPATH
#define IDR_FIND_SLOWPATH 0xffffffff812d84b0
#endif

#ifndef IDA_PRE_GET
#define IDA_PRE_GET 0xffffffff812d8540
#endif

#ifndef IDA_SIMPLE_REMOVE
#define IDA_SIMPLE_REMOVE 0xffffffff812d8620
#endif

#ifndef IDR_ALLOC
#define IDR_ALLOC 0xffffffff812d8a90
#endif

#ifndef IDR_ALLOC_CYCLIC
#define IDR_ALLOC_CYCLIC 0xffffffff812d8b80
#endif

#ifndef IDA_GET_NEW_ABOVE
#define IDA_GET_NEW_ABOVE 0xffffffff812d8be0
#endif

#ifndef IDA_SIMPLE_GET
#define IDA_SIMPLE_GET 0xffffffff812d8e00
#endif

#ifndef INT_SQRT
#define INT_SQRT 0xffffffff812d8ef0
#endif

#ifndef IOREMAP_PAGE_RANGE
#define IOREMAP_PAGE_RANGE 0xffffffff812d8f40
#endif

#ifndef CURRENT_IS_SINGLE_THREADED
#define CURRENT_IS_SINGLE_THREADED 0xffffffff812d9310
#endif

#ifndef KOBJECT_INIT
#define KOBJECT_INIT 0xffffffff812d94d0
#endif

#ifndef KOBJECT_GET
#define KOBJECT_GET 0xffffffff812d9560
#endif

#ifndef KOBJECT_PUT
#define KOBJECT_PUT 0xffffffff812d95e0
#endif

#ifndef KOBJECT_DEL
#define KOBJECT_DEL 0xffffffff812d96a0
#endif

#ifndef KSET_UNREGISTER
#define KSET_UNREGISTER 0xffffffff812d98d0
#endif

#ifndef KOBJECT_GET_PATH
#define KOBJECT_GET_PATH 0xffffffff812d9900
#endif

#ifndef KOBJECT_NAMESPACE
#define KOBJECT_NAMESPACE 0xffffffff812d9a00
#endif

#ifndef KSET_REGISTER
#define KSET_REGISTER 0xffffffff812d9dd0
#endif

#ifndef KOBJECT_RENAME
#define KOBJECT_RENAME 0xffffffff812d9e40
#endif

#ifndef KOBJECT_SET_NAME_VARGS
#define KOBJECT_SET_NAME_VARGS 0xffffffff812d9f70
#endif

#ifndef KOBJECT_SET_NAME
#define KOBJECT_SET_NAME 0xffffffff812d9ff0
#endif

#ifndef KSET_CREATE_AND_ADD
#define KSET_CREATE_AND_ADD 0xffffffff812da040
#endif

#ifndef KOBJECT_INIT_AND_ADD
#define KOBJECT_INIT_AND_ADD 0xffffffff812da0e0
#endif

#ifndef KOBJECT_ADD
#define KOBJECT_ADD 0xffffffff812da160
#endif

#ifndef KOBJECT_MOVE
#define KOBJECT_MOVE 0xffffffff812da210
#endif

#ifndef KOBJECT_CREATE
#define KOBJECT_CREATE 0xffffffff812da390
#endif

#ifndef KOBJECT_CREATE_AND_ADD
#define KOBJECT_CREATE_AND_ADD 0xffffffff812da3d0
#endif

#ifndef KSET_INIT
#define KSET_INIT 0xffffffff812da440
#endif

#ifndef KSET_FIND_OBJ
#define KSET_FIND_OBJ 0xffffffff812da480
#endif

#ifndef KOBJ_NS_TYPE_REGISTER
#define KOBJ_NS_TYPE_REGISTER 0xffffffff812da510
#endif

#ifndef KOBJ_NS_TYPE_REGISTERED
#define KOBJ_NS_TYPE_REGISTERED 0xffffffff812da560
#endif

#ifndef KOBJ_CHILD_NS_OPS
#define KOBJ_CHILD_NS_OPS 0xffffffff812da590
#endif

#ifndef KOBJ_NS_OPS
#define KOBJ_NS_OPS 0xffffffff812da5c0
#endif

#ifndef KOBJ_NS_CURRENT_MAY_MOUNT
#define KOBJ_NS_CURRENT_MAY_MOUNT 0xffffffff812da5f0
#endif

#ifndef KOBJ_NS_GRAB_CURRENT
#define KOBJ_NS_GRAB_CURRENT 0xffffffff812da630
#endif

#ifndef KOBJ_NS_NETLINK
#define KOBJ_NS_NETLINK 0xffffffff812da660
#endif

#ifndef KOBJ_NS_INITIAL
#define KOBJ_NS_INITIAL 0xffffffff812da6a0
#endif

#ifndef KOBJ_NS_DROP
#define KOBJ_NS_DROP 0xffffffff812da6d0
#endif

#ifndef ADD_UEVENT_VAR
#define ADD_UEVENT_VAR 0xffffffff812da7b0
#endif

#ifndef KOBJECT_UEVENT_ENV
#define KOBJECT_UEVENT_ENV 0xffffffff812da970
#endif

#ifndef KOBJECT_UEVENT
#define KOBJECT_UEVENT 0xffffffff812db010
#endif

#ifndef KOBJECT_ACTION_TYPE
#define KOBJECT_ACTION_TYPE 0xffffffff812db0f0
#endif

#ifndef MD5_TRANSFORM
#define MD5_TRANSFORM 0xffffffff812db180
#endif

#ifndef PLIST_ADD
#define PLIST_ADD 0xffffffff812db8e0
#endif

#ifndef PLIST_DEL
#define PLIST_DEL 0xffffffff812db9c0
#endif

#ifndef PLIST_REQUEUE
#define PLIST_REQUEUE 0xffffffff812dba30
#endif

#ifndef RADIX_TREE_TAGGED
#define RADIX_TREE_TAGGED 0xffffffff812dbae0
#endif

#ifndef RADIX_TREE_PRELOAD
#define RADIX_TREE_PRELOAD 0xffffffff812dbb80
#endif

#ifndef RADIX_TREE_MAYBE_PRELOAD
#define RADIX_TREE_MAYBE_PRELOAD 0xffffffff812dbbc0
#endif

#ifndef RADIX_TREE_TAG_SET
#define RADIX_TREE_TAG_SET 0xffffffff812dbc90
#endif

#ifndef RADIX_TREE_TAG_CLEAR
#define RADIX_TREE_TAG_CLEAR 0xffffffff812dbd40
#endif

#ifndef RADIX_TREE_RANGE_TAG_IF_TAGGED
#define RADIX_TREE_RANGE_TAG_IF_TAGGED 0xffffffff812dbe10
#endif

#ifndef RADIX_TREE_TAG_GET
#define RADIX_TREE_TAG_GET 0xffffffff812dc0a0
#endif

#ifndef RADIX_TREE_NEXT_CHUNK
#define RADIX_TREE_NEXT_CHUNK 0xffffffff812dc160
#endif

#ifndef RADIX_TREE_GANG_LOOKUP
#define RADIX_TREE_GANG_LOOKUP 0xffffffff812dc3a0
#endif

#ifndef RADIX_TREE_GANG_LOOKUP_SLOT
#define RADIX_TREE_GANG_LOOKUP_SLOT 0xffffffff812dc440
#endif

#ifndef RADIX_TREE_GANG_LOOKUP_TAG
#define RADIX_TREE_GANG_LOOKUP_TAG 0xffffffff812dc500
#endif

#ifndef RADIX_TREE_GANG_LOOKUP_TAG_SLOT
#define RADIX_TREE_GANG_LOOKUP_TAG_SLOT 0xffffffff812dc5e0
#endif

#ifndef __RADIX_TREE_CREATE
#define __RADIX_TREE_CREATE 0xffffffff812dc6c0
#endif

#ifndef RADIX_TREE_INSERT
#define RADIX_TREE_INSERT 0xffffffff812dc8d0
#endif

#ifndef __RADIX_TREE_LOOKUP
#define __RADIX_TREE_LOOKUP 0xffffffff812dc9c0
#endif

#ifndef RADIX_TREE_LOOKUP_SLOT
#define RADIX_TREE_LOOKUP_SLOT 0xffffffff812dca70
#endif

#ifndef RADIX_TREE_LOOKUP
#define RADIX_TREE_LOOKUP 0xffffffff812dcaa0
#endif

#ifndef RADIX_TREE_LOCATE_ITEM
#define RADIX_TREE_LOCATE_ITEM 0xffffffff812dcab0
#endif

#ifndef __RADIX_TREE_DELETE_NODE
#define __RADIX_TREE_DELETE_NODE 0xffffffff812dcc20
#endif

#ifndef RADIX_TREE_DELETE_ITEM
#define RADIX_TREE_DELETE_ITEM 0xffffffff812dcd70
#endif

#ifndef RADIX_TREE_DELETE
#define RADIX_TREE_DELETE 0xffffffff812dce50
#endif

#ifndef ___RATELIMIT
#define ___RATELIMIT 0xffffffff812dce60
#endif

#ifndef RB_FIRST
#define RB_FIRST 0xffffffff812dcf50
#endif

#ifndef RB_LAST
#define RB_LAST 0xffffffff812dcf80
#endif

#ifndef RB_REPLACE_NODE
#define RB_REPLACE_NODE 0xffffffff812dcfb0
#endif

#ifndef RB_NEXT_POSTORDER
#define RB_NEXT_POSTORDER 0xffffffff812dd020
#endif

#ifndef RB_FIRST_POSTORDER
#define RB_FIRST_POSTORDER 0xffffffff812dd070
#endif

#ifndef RB_NEXT
#define RB_NEXT 0xffffffff812dd0a0
#endif

#ifndef RB_PREV
#define RB_PREV 0xffffffff812dd0f0
#endif

#ifndef RB_INSERT_COLOR
#define RB_INSERT_COLOR 0xffffffff812dd140
#endif

#ifndef __RB_INSERT_AUGMENTED
#define __RB_INSERT_AUGMENTED 0xffffffff812dd2b0
#endif

#ifndef RB_ERASE
#define RB_ERASE 0xffffffff812dd500
#endif

#ifndef __RB_ERASE_COLOR
#define __RB_ERASE_COLOR 0xffffffff812dd8c0
#endif

#ifndef SEQ_BUF_PRINT_SEQ
#define SEQ_BUF_PRINT_SEQ 0xffffffff812ddb60
#endif

#ifndef SEQ_BUF_VPRINTF
#define SEQ_BUF_VPRINTF 0xffffffff812ddb80
#endif

#ifndef SEQ_BUF_PRINTF
#define SEQ_BUF_PRINTF 0xffffffff812ddc10
#endif

#ifndef SEQ_BUF_BPRINTF
#define SEQ_BUF_BPRINTF 0xffffffff812ddc60
#endif

#ifndef SEQ_BUF_PUTS
#define SEQ_BUF_PUTS 0xffffffff812ddd10
#endif

#ifndef SEQ_BUF_PUTC
#define SEQ_BUF_PUTC 0xffffffff812ddda0
#endif

#ifndef SEQ_BUF_PUTMEM
#define SEQ_BUF_PUTMEM 0xffffffff812dde00
#endif

#ifndef SEQ_BUF_PUTMEM_HEX
#define SEQ_BUF_PUTMEM_HEX 0xffffffff812dde80
#endif

#ifndef SEQ_BUF_PATH
#define SEQ_BUF_PATH 0xffffffff812ddfb0
#endif

#ifndef SEQ_BUF_TO_USER
#define SEQ_BUF_TO_USER 0xffffffff812de0e0
#endif

#ifndef SHA_INIT
#define SHA_INIT 0xffffffff812de150
#endif

#ifndef SHA_TRANSFORM
#define SHA_TRANSFORM 0xffffffff812de180
#endif

#ifndef SHOW_MEM
#define SHOW_MEM 0xffffffff812df280
#endif

#ifndef STRCASECMP
#define STRCASECMP 0xffffffff812df370
#endif

#ifndef STRCPY
#define STRCPY 0xffffffff812df3b0
#endif

#ifndef STRNCPY
#define STRNCPY 0xffffffff812df3e0
#endif

#ifndef STRCAT
#define STRCAT 0xffffffff812df410
#endif

#ifndef STRCMP
#define STRCMP 0xffffffff812df450
#endif

#ifndef STRNCMP
#define STRNCMP 0xffffffff812df480
#endif

#ifndef STRCHR
#define STRCHR 0xffffffff812df4d0
#endif

#ifndef STRCHRNUL
#define STRCHRNUL 0xffffffff812df500
#endif

#ifndef STRRCHR
#define STRRCHR 0xffffffff812df530
#endif

#ifndef STRNCHR
#define STRNCHR 0xffffffff812df550
#endif

#ifndef SKIP_SPACES
#define SKIP_SPACES 0xffffffff812df5a0
#endif

#ifndef STRLEN
#define STRLEN 0xffffffff812df5d0
#endif

#ifndef STRNLEN
#define STRNLEN 0xffffffff812df5f0
#endif

#ifndef STRSPN
#define STRSPN 0xffffffff812df630
#endif

#ifndef STRCSPN
#define STRCSPN 0xffffffff812df680
#endif

#ifndef STRPBRK
#define STRPBRK 0xffffffff812df6d0
#endif

#ifndef STRSEP
#define STRSEP 0xffffffff812df720
#endif

#ifndef SYSFS_STREQ
#define SYSFS_STREQ 0xffffffff812df790
#endif

#ifndef STRTOBOOL
#define STRTOBOOL 0xffffffff812df7f0
#endif

#ifndef MEMCMP
#define MEMCMP 0xffffffff812df830
#endif

#ifndef MEMSCAN
#define MEMSCAN 0xffffffff812df880
#endif

#ifndef STRSTR
#define STRSTR 0xffffffff812df8c0
#endif

#ifndef STRNSTR
#define STRNSTR 0xffffffff812df960
#endif

#ifndef MEMCHR
#define MEMCHR 0xffffffff812df9e0
#endif

#ifndef MEMCHR_INV
#define MEMCHR_INV 0xffffffff812dfa10
#endif

#ifndef STRLCPY
#define STRLCPY 0xffffffff812dfb70
#endif

#ifndef MEMZERO_EXPLICIT
#define MEMZERO_EXPLICIT 0xffffffff812dfbc0
#endif

#ifndef STRNCASECMP
#define STRNCASECMP 0xffffffff812dfbd0
#endif

#ifndef STRNCAT
#define STRNCAT 0xffffffff812dfc70
#endif

#ifndef STRIM
#define STRIM 0xffffffff812dfcc0
#endif

#ifndef STRLCAT
#define STRLCAT 0xffffffff812dfd30
#endif

#ifndef TIMERQUEUE_ADD
#define TIMERQUEUE_ADD 0xffffffff812dfdb0
#endif

#ifndef TIMERQUEUE_ITERATE_NEXT
#define TIMERQUEUE_ITERATE_NEXT 0xffffffff812dfe60
#endif

#ifndef TIMERQUEUE_DEL
#define TIMERQUEUE_DEL 0xffffffff812dfe80
#endif

#ifndef SIMPLE_STRTOULL
#define SIMPLE_STRTOULL 0xffffffff812e0260
#endif

#ifndef SIMPLE_STRTOUL
#define SIMPLE_STRTOUL 0xffffffff812e02b0
#endif

#ifndef VBIN_PRINTF
#define VBIN_PRINTF 0xffffffff812e0950
#endif

#ifndef BPRINTF
#define BPRINTF 0xffffffff812e0c90
#endif

#ifndef SIMPLE_STRTOL
#define SIMPLE_STRTOL 0xffffffff812e0cd0
#endif

#ifndef SIMPLE_STRTOLL
#define SIMPLE_STRTOLL 0xffffffff812e0d00
#endif

#ifndef VSSCANF
#define VSSCANF 0xffffffff812e0d30
#endif

#ifndef SSCANF
#define SSCANF 0xffffffff812e14a0
#endif

#ifndef VSNPRINTF
#define VSNPRINTF 0xffffffff812e3040
#endif

#ifndef VSCNPRINTF
#define VSCNPRINTF 0xffffffff812e3610
#endif

#ifndef VSPRINTF
#define VSPRINTF 0xffffffff812e3640
#endif

#ifndef SNPRINTF
#define SNPRINTF 0xffffffff812e3650
#endif

#ifndef SCNPRINTF
#define SCNPRINTF 0xffffffff812e3690
#endif

#ifndef SPRINTF
#define SPRINTF 0xffffffff812e3700
#endif

#ifndef BSTR_PRINTF
#define BSTR_PRINTF 0xffffffff812e3750
#endif

#ifndef NUM_TO_STR
#define NUM_TO_STR 0xffffffff812e3b40
#endif

#ifndef CLEAR_PAGE
#define CLEAR_PAGE 0xffffffff812e3bf0
#endif

#ifndef CLEAR_PAGE_ORIG
#define CLEAR_PAGE_ORIG 0xffffffff812e3c00
#endif

#ifndef CLEAR_PAGE_C_E
#define CLEAR_PAGE_C_E 0xffffffff812e3c40
#endif

#ifndef CMDLINE_FIND_OPTION_BOOL
#define CMDLINE_FIND_OPTION_BOOL 0xffffffff812e3c50
#endif

#ifndef COPY_PAGE
#define COPY_PAGE 0xffffffff812e3d70
#endif

#ifndef COPY_PAGE_REGS
#define COPY_PAGE_REGS 0xffffffff812e3d80
#endif

#ifndef _COPY_TO_USER
#define _COPY_TO_USER 0xffffffff812e3e60
#endif

#ifndef _COPY_FROM_USER
#define _COPY_FROM_USER 0xffffffff812e3e90
#endif

#ifndef COPY_USER_GENERIC_UNROLLED
#define COPY_USER_GENERIC_UNROLLED 0xffffffff812e3ec0
#endif

#ifndef COPY_USER_GENERIC_STRING
#define COPY_USER_GENERIC_STRING 0xffffffff812e3f80
#endif

#ifndef COPY_USER_ENHANCED_FAST_STRING
#define COPY_USER_ENHANCED_FAST_STRING 0xffffffff812e3fc0
#endif

#ifndef __COPY_USER_NOCACHE
#define __COPY_USER_NOCACHE 0xffffffff812e3fd0
#endif

#ifndef IP_COMPUTE_CSUM
#define IP_COMPUTE_CSUM 0xffffffff812e4230
#endif

#ifndef CSUM_PARTIAL
#define CSUM_PARTIAL 0xffffffff812e4260
#endif

#ifndef __DELAY
#define __DELAY 0xffffffff812e42b0
#endif

#ifndef __CONST_UDELAY
#define __CONST_UDELAY 0xffffffff812e42d0
#endif

#ifndef __UDELAY
#define __UDELAY 0xffffffff812e4300
#endif

#ifndef __NDELAY
#define __NDELAY 0xffffffff812e4340
#endif

#ifndef USE_TSC_DELAY
#define USE_TSC_DELAY 0xffffffff812e43f0
#endif

#ifndef READ_CURRENT_TIMER
#define READ_CURRENT_TIMER 0xffffffff812e4410
#endif

#ifndef __GET_USER_1
#define __GET_USER_1 0xffffffff812e4440
#endif

#ifndef __GET_USER_2
#define __GET_USER_2 0xffffffff812e4470
#endif

#ifndef __GET_USER_4
#define __GET_USER_4 0xffffffff812e44a0
#endif

#ifndef __GET_USER_8
#define __GET_USER_8 0xffffffff812e44d0
#endif

#ifndef INAT_GET_OPCODE_ATTRIBUTE
#define INAT_GET_OPCODE_ATTRIBUTE 0xffffffff812e4510
#endif

#ifndef INAT_GET_LAST_PREFIX_ID
#define INAT_GET_LAST_PREFIX_ID 0xffffffff812e4530
#endif

#ifndef INAT_GET_ESCAPE_ATTRIBUTE
#define INAT_GET_ESCAPE_ATTRIBUTE 0xffffffff812e4550
#endif

#ifndef INAT_GET_GROUP_ATTRIBUTE
#define INAT_GET_GROUP_ATTRIBUTE 0xffffffff812e45b0
#endif

#ifndef INAT_GET_AVX_ATTRIBUTE
#define INAT_GET_AVX_ATTRIBUTE 0xffffffff812e4620
#endif

#ifndef INSN_INIT
#define INSN_INIT 0xffffffff812e4fb0
#endif

#ifndef INSN_GET_PREFIXES
#define INSN_GET_PREFIXES 0xffffffff812e5020
#endif

#ifndef INSN_GET_OPCODE
#define INSN_GET_OPCODE 0xffffffff812e5050
#endif

#ifndef INSN_GET_MODRM
#define INSN_GET_MODRM 0xffffffff812e5080
#endif

#ifndef INSN_RIP_RELATIVE
#define INSN_RIP_RELATIVE 0xffffffff812e50b0
#endif

#ifndef INSN_GET_SIB
#define INSN_GET_SIB 0xffffffff812e50f0
#endif

#ifndef INSN_GET_DISPLACEMENT
#define INSN_GET_DISPLACEMENT 0xffffffff812e5120
#endif

#ifndef INSN_GET_IMMEDIATE
#define INSN_GET_IMMEDIATE 0xffffffff812e5150
#endif

#ifndef INSN_GET_LENGTH
#define INSN_GET_LENGTH 0xffffffff812e5180
#endif

#ifndef __MEMCPY
#define __MEMCPY 0xffffffff812e51b0
#endif

#ifndef MEMCPY_ERMS
#define MEMCPY_ERMS 0xffffffff812e51d0
#endif

#ifndef MEMCPY_ORIG
#define MEMCPY_ORIG 0xffffffff812e51e0
#endif

#ifndef __MEMMOVE
#define __MEMMOVE 0xffffffff812e52f0
#endif

#ifndef __MEMSET
#define __MEMSET 0xffffffff812e5490
#endif

#ifndef MEMSET_ERMS
#define MEMSET_ERMS 0xffffffff812e54c0
#endif

#ifndef MEMSET_ORIG
#define MEMSET_ORIG 0xffffffff812e54d0
#endif

#ifndef NUM_DIGITS
#define NUM_DIGITS 0xffffffff812e5580
#endif

#ifndef __PUT_USER_1
#define __PUT_USER_1 0xffffffff812e55c0
#endif

#ifndef __PUT_USER_2
#define __PUT_USER_2 0xffffffff812e55f0
#endif

#ifndef __PUT_USER_4
#define __PUT_USER_4 0xffffffff812e5620
#endif

#ifndef __PUT_USER_8
#define __PUT_USER_8 0xffffffff812e5650
#endif

#ifndef CALL_RWSEM_DOWN_READ_FAILED
#define CALL_RWSEM_DOWN_READ_FAILED 0xffffffff812e5690
#endif

#ifndef CALL_RWSEM_DOWN_WRITE_FAILED
#define CALL_RWSEM_DOWN_WRITE_FAILED 0xffffffff812e56c0
#endif

#ifndef CALL_RWSEM_WAKE
#define CALL_RWSEM_WAKE 0xffffffff812e56e0
#endif

#ifndef CALL_RWSEM_DOWNGRADE_WAKE
#define CALL_RWSEM_DOWNGRADE_WAKE 0xffffffff812e5710
#endif

#ifndef COPY_FROM_USER_NMI
#define COPY_FROM_USER_NMI 0xffffffff812e5740
#endif

#ifndef __CLEAR_USER
#define __CLEAR_USER 0xffffffff812e57b0
#endif

#ifndef CLEAR_USER
#define CLEAR_USER 0xffffffff812e5800
#endif

#ifndef COPY_IN_USER
#define COPY_IN_USER 0xffffffff812e5840
#endif

#ifndef COPY_USER_HANDLE_TAIL
#define COPY_USER_HANDLE_TAIL 0xffffffff812e58a0
#endif

#ifndef COPY_FROM_USER_OVERFLOW
#define COPY_FROM_USER_OVERFLOW 0xffffffff812e5910
#endif

#ifndef LOCKREF_PUT_OR_LOCK
#define LOCKREF_PUT_OR_LOCK 0xffffffff812e5930
#endif

#ifndef LOCKREF_MARK_DEAD
#define LOCKREF_MARK_DEAD 0xffffffff812e59b0
#endif

#ifndef LOCKREF_GET_NOT_DEAD
#define LOCKREF_GET_NOT_DEAD 0xffffffff812e59d0
#endif

#ifndef LOCKREF_GET
#define LOCKREF_GET 0xffffffff812e5a50
#endif

#ifndef LOCKREF_GET_NOT_ZERO
#define LOCKREF_GET_NOT_ZERO 0xffffffff812e5ac0
#endif

#ifndef LOCKREF_GET_OR_LOCK
#define LOCKREF_GET_OR_LOCK 0xffffffff812e5b40
#endif

#ifndef LOCKREF_PUT_RETURN
#define LOCKREF_PUT_RETURN 0xffffffff812e5bc0
#endif

#ifndef _BCD2BIN
#define _BCD2BIN 0xffffffff812e5c30
#endif

#ifndef _BIN2BCD
#define _BIN2BCD 0xffffffff812e5c50
#endif

#ifndef ITER_DIV_U64_REM
#define ITER_DIV_U64_REM 0xffffffff812e5c70
#endif

#ifndef SORT
#define SORT 0xffffffff812e5cc0
#endif

#ifndef MATCH_WILDCARD
#define MATCH_WILDCARD 0xffffffff812e5f20
#endif

#ifndef MATCH_TOKEN
#define MATCH_TOKEN 0xffffffff812e5fc0
#endif

#ifndef MATCH_STRLCPY
#define MATCH_STRLCPY 0xffffffff812e61e0
#endif

#ifndef MATCH_INT
#define MATCH_INT 0xffffffff812e62d0
#endif

#ifndef MATCH_OCTAL
#define MATCH_OCTAL 0xffffffff812e62e0
#endif

#ifndef MATCH_HEX
#define MATCH_HEX 0xffffffff812e62f0
#endif

#ifndef MATCH_STRDUP
#define MATCH_STRDUP 0xffffffff812e6300
#endif

#ifndef HALF_MD4_TRANSFORM
#define HALF_MD4_TRANSFORM 0xffffffff812e6340
#endif

#ifndef DEBUG_LOCKS_OFF
#define DEBUG_LOCKS_OFF 0xffffffff812e65d0
#endif

#ifndef PRANDOM_U32_STATE
#define PRANDOM_U32_STATE 0xffffffff812e6600
#endif

#ifndef PRANDOM_U32
#define PRANDOM_U32 0xffffffff812e6690
#endif

#ifndef PRANDOM_BYTES_STATE
#define PRANDOM_BYTES_STATE 0xffffffff812e66b0
#endif

#ifndef PRANDOM_BYTES
#define PRANDOM_BYTES 0xffffffff812e6740
#endif

#ifndef PRANDOM_SEED
#define PRANDOM_SEED 0xffffffff812e67c0
#endif

#ifndef PRANDOM_RESEED_LATE
#define PRANDOM_RESEED_LATE 0xffffffff812e69e0
#endif

#ifndef KVASPRINTF
#define KVASPRINTF 0xffffffff812e6a30
#endif

#ifndef KASPRINTF
#define KASPRINTF 0xffffffff812e6ab0
#endif

#ifndef __BITMAP_EQUAL
#define __BITMAP_EQUAL 0xffffffff812e6b00
#endif

#ifndef __BITMAP_COMPLEMENT
#define __BITMAP_COMPLEMENT 0xffffffff812e6b70
#endif

#ifndef __BITMAP_AND
#define __BITMAP_AND 0xffffffff812e6bb0
#endif

#ifndef __BITMAP_OR
#define __BITMAP_OR 0xffffffff812e6c20
#endif

#ifndef __BITMAP_XOR
#define __BITMAP_XOR 0xffffffff812e6c50
#endif

#ifndef __BITMAP_ANDNOT
#define __BITMAP_ANDNOT 0xffffffff812e6c80
#endif

#ifndef __BITMAP_INTERSECTS
#define __BITMAP_INTERSECTS 0xffffffff812e6cf0
#endif

#ifndef __BITMAP_SUBSET
#define __BITMAP_SUBSET 0xffffffff812e6d70
#endif

#ifndef BITMAP_SET
#define BITMAP_SET 0xffffffff812e6df0
#endif

#ifndef BITMAP_CLEAR
#define BITMAP_CLEAR 0xffffffff812e6e70
#endif

#ifndef BITMAP_FIND_FREE_REGION
#define BITMAP_FIND_FREE_REGION 0xffffffff812e6fe0
#endif

#ifndef BITMAP_RELEASE_REGION
#define BITMAP_RELEASE_REGION 0xffffffff812e7060
#endif

#ifndef BITMAP_ALLOCATE_REGION
#define BITMAP_ALLOCATE_REGION 0xffffffff812e7070
#endif

#ifndef __BITMAP_SHIFT_RIGHT
#define __BITMAP_SHIFT_RIGHT 0xffffffff812e70b0
#endif

#ifndef __BITMAP_SHIFT_LEFT
#define __BITMAP_SHIFT_LEFT 0xffffffff812e7190
#endif

#ifndef BITMAP_FIND_NEXT_ZERO_AREA_OFF
#define BITMAP_FIND_NEXT_ZERO_AREA_OFF 0xffffffff812e73e0
#endif

#ifndef BITMAP_PARSELIST_USER
#define BITMAP_PARSELIST_USER 0xffffffff812e7480
#endif

#ifndef BITMAP_PRINT_TO_PAGEBUF
#define BITMAP_PRINT_TO_PAGEBUF 0xffffffff812e74c0
#endif

#ifndef BITMAP_PARSELIST
#define BITMAP_PARSELIST 0xffffffff812e7540
#endif

#ifndef BITMAP_ONTO
#define BITMAP_ONTO 0xffffffff812e7580
#endif

#ifndef BITMAP_FOLD
#define BITMAP_FOLD 0xffffffff812e7610
#endif

#ifndef __BITMAP_PARSE
#define __BITMAP_PARSE 0xffffffff812e7690
#endif

#ifndef BITMAP_PARSE_USER
#define BITMAP_PARSE_USER 0xffffffff812e7890
#endif

#ifndef __BITMAP_WEIGHT
#define __BITMAP_WEIGHT 0xffffffff812e78d0
#endif

#ifndef BITMAP_ORD_TO_POS
#define BITMAP_ORD_TO_POS 0xffffffff812e7970
#endif

#ifndef BITMAP_REMAP
#define BITMAP_REMAP 0xffffffff812e79d0
#endif

#ifndef BITMAP_BITREMAP
#define BITMAP_BITREMAP 0xffffffff812e7ab0
#endif

#ifndef __SG_PAGE_ITER_START
#define __SG_PAGE_ITER_START 0xffffffff812e7b20
#endif

#ifndef SG_NEXT
#define SG_NEXT 0xffffffff812e7b40
#endif

#ifndef SG_NENTS
#define SG_NENTS 0xffffffff812e7b70
#endif

#ifndef SG_LAST
#define SG_LAST 0xffffffff812e7bb0
#endif

#ifndef __SG_FREE_TABLE
#define __SG_FREE_TABLE 0xffffffff812e7bf0
#endif

#ifndef SG_FREE_TABLE
#define SG_FREE_TABLE 0xffffffff812e7c80
#endif

#ifndef SG_INIT_TABLE
#define SG_INIT_TABLE 0xffffffff812e7ca0
#endif

#ifndef SG_INIT_ONE
#define SG_INIT_ONE 0xffffffff812e7ce0
#endif

#ifndef __SG_ALLOC_TABLE
#define __SG_ALLOC_TABLE 0xffffffff812e7d50
#endif

#ifndef SG_MITER_START
#define SG_MITER_START 0xffffffff812e7f20
#endif

#ifndef SG_MITER_STOP
#define SG_MITER_STOP 0xffffffff812e7fa0
#endif

#ifndef __SG_PAGE_ITER_NEXT
#define __SG_PAGE_ITER_NEXT 0xffffffff812e80b0
#endif

#ifndef SG_MITER_SKIP
#define SG_MITER_SKIP 0xffffffff812e8140
#endif

#ifndef SG_ALLOC_TABLE
#define SG_ALLOC_TABLE 0xffffffff812e81a0
#endif

#ifndef SG_ALLOC_TABLE_FROM_PAGES
#define SG_ALLOC_TABLE_FROM_PAGES 0xffffffff812e8200
#endif

#ifndef SG_MITER_NEXT
#define SG_MITER_NEXT 0xffffffff812e83b0
#endif

#ifndef SG_COPY_FROM_BUFFER
#define SG_COPY_FROM_BUFFER 0xffffffff812e8540
#endif

#ifndef SG_COPY_TO_BUFFER
#define SG_COPY_TO_BUFFER 0xffffffff812e8550
#endif

#ifndef SG_PCOPY_FROM_BUFFER
#define SG_PCOPY_FROM_BUFFER 0xffffffff812e8560
#endif

#ifndef SG_PCOPY_TO_BUFFER
#define SG_PCOPY_TO_BUFFER 0xffffffff812e8570
#endif

#ifndef GCD
#define GCD 0xffffffff812e8580
#endif

#ifndef LCM_NOT_ZERO
#define LCM_NOT_ZERO 0xffffffff812e85c0
#endif

#ifndef LCM
#define LCM 0xffffffff812e8620
#endif

#ifndef LIST_SORT
#define LIST_SORT 0xffffffff812e86f0
#endif

#ifndef UUID_LE_GEN
#define UUID_LE_GEN 0xffffffff812e8900
#endif

#ifndef UUID_BE_GEN
#define UUID_BE_GEN 0xffffffff812e8930
#endif

#ifndef FLEX_ARRAY_GET
#define FLEX_ARRAY_GET 0xffffffff812e8960
#endif

#ifndef FLEX_ARRAY_GET_PTR
#define FLEX_ARRAY_GET_PTR 0xffffffff812e89e0
#endif

#ifndef FLEX_ARRAY_CLEAR
#define FLEX_ARRAY_CLEAR 0xffffffff812e8a00
#endif

#ifndef FLEX_ARRAY_PUT
#define FLEX_ARRAY_PUT 0xffffffff812e8b40
#endif

#ifndef FLEX_ARRAY_PREALLOC
#define FLEX_ARRAY_PREALLOC 0xffffffff812e8c00
#endif

#ifndef FLEX_ARRAY_FREE_PARTS
#define FLEX_ARRAY_FREE_PARTS 0xffffffff812e8d00
#endif

#ifndef FLEX_ARRAY_FREE
#define FLEX_ARRAY_FREE 0xffffffff812e8d40
#endif

#ifndef FLEX_ARRAY_SHRINK
#define FLEX_ARRAY_SHRINK 0xffffffff812e8d60
#endif

#ifndef FLEX_ARRAY_ALLOC
#define FLEX_ARRAY_ALLOC 0xffffffff812e8e00
#endif

#ifndef IOV_ITER_INIT
#define IOV_ITER_INIT 0xffffffff812e8f30
#endif

#ifndef IOV_ITER_ADVANCE
#define IOV_ITER_ADVANCE 0xffffffff812e8f70
#endif

#ifndef IOV_ITER_ALIGNMENT
#define IOV_ITER_ALIGNMENT 0xffffffff812e9130
#endif

#ifndef IOV_ITER_NPAGES
#define IOV_ITER_NPAGES 0xffffffff812e9240
#endif

#ifndef COPY_FROM_ITER
#define COPY_FROM_ITER 0xffffffff812e9420
#endif

#ifndef IOV_ITER_COPY_FROM_USER_ATOMIC
#define IOV_ITER_COPY_FROM_USER_ATOMIC 0xffffffff812e96a0
#endif

#ifndef COPY_FROM_ITER_NOCACHE
#define COPY_FROM_ITER_NOCACHE 0xffffffff812e98a0
#endif

#ifndef CSUM_AND_COPY_FROM_ITER
#define CSUM_AND_COPY_FROM_ITER 0xffffffff812e9b70
#endif

#ifndef CSUM_AND_COPY_TO_ITER
#define CSUM_AND_COPY_TO_ITER 0xffffffff812e9f80
#endif

#ifndef IMPORT_IOVEC
#define IMPORT_IOVEC 0xffffffff812ea390
#endif

#ifndef IOV_ITER_SINGLE_SEG_COUNT
#define IOV_ITER_SINGLE_SEG_COUNT 0xffffffff812ea450
#endif

#ifndef COPY_PAGE_FROM_ITER
#define COPY_PAGE_FROM_ITER 0xffffffff812ea4a0
#endif

#ifndef IOV_ITER_KVEC
#define IOV_ITER_KVEC 0xffffffff812ea7c0
#endif

#ifndef IOV_ITER_BVEC
#define IOV_ITER_BVEC 0xffffffff812ea7f0
#endif

#ifndef DUP_ITER
#define DUP_ITER 0xffffffff812ea820
#endif

#ifndef COPY_TO_ITER
#define COPY_TO_ITER 0xffffffff812ea860
#endif

#ifndef COPY_PAGE_TO_ITER
#define COPY_PAGE_TO_ITER 0xffffffff812eab20
#endif

#ifndef IOV_ITER_GET_PAGES
#define IOV_ITER_GET_PAGES 0xffffffff812eae30
#endif

#ifndef IOV_ITER_GET_PAGES_ALLOC
#define IOV_ITER_GET_PAGES_ALLOC 0xffffffff812eb050
#endif

#ifndef IOV_ITER_FAULT_IN_READABLE
#define IOV_ITER_FAULT_IN_READABLE 0xffffffff812eb300
#endif

#ifndef IOV_ITER_FAULT_IN_MULTIPAGES_READABLE
#define IOV_ITER_FAULT_IN_MULTIPAGES_READABLE 0xffffffff812eb380
#endif

#ifndef IOV_ITER_ZERO
#define IOV_ITER_ZERO 0xffffffff812eb4b0
#endif

#ifndef COMPAT_IMPORT_IOVEC
#define COMPAT_IMPORT_IOVEC 0xffffffff812eb740
#endif

#ifndef IMPORT_SINGLE_RANGE
#define IMPORT_SINGLE_RANGE 0xffffffff812eb800
#endif

#ifndef BSEARCH
#define BSEARCH 0xffffffff812eb8d0
#endif

#ifndef FIND_FIRST_BIT
#define FIND_FIRST_BIT 0xffffffff812eb970
#endif

#ifndef FIND_FIRST_ZERO_BIT
#define FIND_FIRST_ZERO_BIT 0xffffffff812eb9d0
#endif

#ifndef FIND_NEXT_BIT
#define FIND_NEXT_BIT 0xffffffff812ebaa0
#endif

#ifndef FIND_NEXT_ZERO_BIT
#define FIND_NEXT_ZERO_BIT 0xffffffff812ebac0
#endif

#ifndef FIND_LAST_BIT
#define FIND_LAST_BIT 0xffffffff812ebaf0
#endif

#ifndef LLIST_ADD_BATCH
#define LLIST_ADD_BATCH 0xffffffff812ebb40
#endif

#ifndef LLIST_DEL_FIRST
#define LLIST_DEL_FIRST 0xffffffff812ebb60
#endif

#ifndef LLIST_REVERSE_ORDER
#define LLIST_REVERSE_ORDER 0xffffffff812ebbb0
#endif

#ifndef MEMWEIGHT
#define MEMWEIGHT 0xffffffff812ebbe0
#endif

#ifndef __KFIFO_MAX_R
#define __KFIFO_MAX_R 0xffffffff812ebc90
#endif

#ifndef __KFIFO_LEN_R
#define __KFIFO_LEN_R 0xffffffff812ebcb0
#endif

#ifndef __KFIFO_SKIP_R
#define __KFIFO_SKIP_R 0xffffffff812ebce0
#endif

#ifndef __KFIFO_DMA_IN_FINISH_R
#define __KFIFO_DMA_IN_FINISH_R 0xffffffff812ebd20
#endif

#ifndef __KFIFO_DMA_OUT_FINISH_R
#define __KFIFO_DMA_OUT_FINISH_R 0xffffffff812ebd70
#endif

#ifndef __KFIFO_INIT
#define __KFIFO_INIT 0xffffffff812ebdb0
#endif

#ifndef __KFIFO_ALLOC
#define __KFIFO_ALLOC 0xffffffff812ebe10
#endif

#ifndef __KFIFO_FREE
#define __KFIFO_FREE 0xffffffff812ebea0
#endif

#ifndef __KFIFO_IN
#define __KFIFO_IN 0xffffffff812ebf50
#endif

#ifndef __KFIFO_IN_R
#define __KFIFO_IN_R 0xffffffff812ebf90
#endif

#ifndef __KFIFO_OUT_PEEK
#define __KFIFO_OUT_PEEK 0xffffffff812ec080
#endif

#ifndef __KFIFO_OUT
#define __KFIFO_OUT 0xffffffff812ec0b0
#endif

#ifndef __KFIFO_OUT_PEEK_R
#define __KFIFO_OUT_PEEK_R 0xffffffff812ec130
#endif

#ifndef __KFIFO_OUT_R
#define __KFIFO_OUT_R 0xffffffff812ec150
#endif

#ifndef __KFIFO_FROM_USER
#define __KFIFO_FROM_USER 0xffffffff812ec250
#endif

#ifndef __KFIFO_FROM_USER_R
#define __KFIFO_FROM_USER_R 0xffffffff812ec2e0
#endif

#ifndef __KFIFO_TO_USER
#define __KFIFO_TO_USER 0xffffffff812ec470
#endif

#ifndef __KFIFO_TO_USER_R
#define __KFIFO_TO_USER_R 0xffffffff812ec4f0
#endif

#ifndef __KFIFO_DMA_IN_PREPARE
#define __KFIFO_DMA_IN_PREPARE 0xffffffff812ec7f0
#endif

#ifndef __KFIFO_DMA_OUT_PREPARE
#define __KFIFO_DMA_OUT_PREPARE 0xffffffff812ec840
#endif

#ifndef __KFIFO_DMA_IN_PREPARE_R
#define __KFIFO_DMA_IN_PREPARE_R 0xffffffff812ec880
#endif

#ifndef __KFIFO_DMA_OUT_PREPARE_R
#define __KFIFO_DMA_OUT_PREPARE_R 0xffffffff812ec900
#endif

#ifndef PERCPU_REF_INIT
#define PERCPU_REF_INIT 0xffffffff812ec990
#endif

#ifndef PERCPU_REF_EXIT
#define PERCPU_REF_EXIT 0xffffffff812eca20
#endif

#ifndef PERCPU_REF_REINIT
#define PERCPU_REF_REINIT 0xffffffff812eccb0
#endif

#ifndef PERCPU_REF_KILL_AND_CONFIRM
#define PERCPU_REF_KILL_AND_CONFIRM 0xffffffff812ece70
#endif

#ifndef PERCPU_REF_SWITCH_TO_ATOMIC
#define PERCPU_REF_SWITCH_TO_ATOMIC 0xffffffff812ecf10
#endif

#ifndef PERCPU_REF_SWITCH_TO_PERCPU
#define PERCPU_REF_SWITCH_TO_PERCPU 0xffffffff812ecf20
#endif

#ifndef PERCPU_IDA_FREE_TAGS
#define PERCPU_IDA_FREE_TAGS 0xffffffff812ecf40
#endif

#ifndef PERCPU_IDA_FOR_EACH_FREE
#define PERCPU_IDA_FOR_EACH_FREE 0xffffffff812ecf70
#endif

#ifndef PERCPU_IDA_DESTROY
#define PERCPU_IDA_DESTROY 0xffffffff812ed090
#endif

#ifndef __PERCPU_IDA_INIT
#define __PERCPU_IDA_INIT 0xffffffff812ed0d0
#endif

#ifndef PERCPU_IDA_FREE
#define PERCPU_IDA_FREE 0xffffffff812ed250
#endif

#ifndef PERCPU_IDA_ALLOC
#define PERCPU_IDA_ALLOC 0xffffffff812ed370
#endif

#ifndef RHASHTABLE_WALK_NEXT
#define RHASHTABLE_WALK_NEXT 0xffffffff812ed820
#endif

#ifndef RHASHTABLE_WALK_STOP
#define RHASHTABLE_WALK_STOP 0xffffffff812ed920
#endif

#ifndef RHASHTABLE_WALK_INIT
#define RHASHTABLE_WALK_INIT 0xffffffff812ed990
#endif

#ifndef RHASHTABLE_WALK_START
#define RHASHTABLE_WALK_START 0xffffffff812eda30
#endif

#ifndef RHASHTABLE_WALK_EXIT
#define RHASHTABLE_WALK_EXIT 0xffffffff812edab0
#endif

#ifndef RHASHTABLE_FREE_AND_DESTROY
#define RHASHTABLE_FREE_AND_DESTROY 0xffffffff812edb10
#endif

#ifndef RHASHTABLE_DESTROY
#define RHASHTABLE_DESTROY 0xffffffff812edbd0
#endif

#ifndef RHASHTABLE_INSERT_REHASH
#define RHASHTABLE_INSERT_REHASH 0xffffffff812edde0
#endif

#ifndef RHASHTABLE_INIT
#define RHASHTABLE_INIT 0xffffffff812edea0
#endif

#ifndef RHASHTABLE_INSERT_SLOW
#define RHASHTABLE_INSERT_SLOW 0xffffffff812ee380
#endif

#ifndef RECIPROCAL_VALUE
#define RECIPROCAL_VALUE 0xffffffff812ee910
#endif

#ifndef STRING_GET_SIZE
#define STRING_GET_SIZE 0xffffffff812ee960
#endif

#ifndef STRING_UNESCAPE
#define STRING_UNESCAPE 0xffffffff812eeb20
#endif

#ifndef STRING_ESCAPE_MEM
#define STRING_ESCAPE_MEM 0xffffffff812eed40
#endif

#ifndef HEX_TO_BIN
#define HEX_TO_BIN 0xffffffff812ef040
#endif

#ifndef HEX2BIN
#define HEX2BIN 0xffffffff812ef090
#endif

#ifndef BIN2HEX
#define BIN2HEX 0xffffffff812ef160
#endif

#ifndef HEX_DUMP_TO_BUFFER
#define HEX_DUMP_TO_BUFFER 0xffffffff812ef1b0
#endif

#ifndef PRINT_HEX_DUMP
#define PRINT_HEX_DUMP 0xffffffff812ef680
#endif

#ifndef _PARSE_INTEGER_FIXUP_RADIX
#define _PARSE_INTEGER_FIXUP_RADIX 0xffffffff812ef7f0
#endif

#ifndef _PARSE_INTEGER
#define _PARSE_INTEGER 0xffffffff812ef860
#endif

#ifndef KSTRTOULL
#define KSTRTOULL 0xffffffff812ef990
#endif

#ifndef _KSTRTOUL
#define _KSTRTOUL 0xffffffff812ef9a0
#endif

#ifndef KSTRTOUINT
#define KSTRTOUINT 0xffffffff812ef9e0
#endif

#ifndef KSTRTOUINT_FROM_USER
#define KSTRTOUINT_FROM_USER 0xffffffff812efa20
#endif

#ifndef KSTRTOU16
#define KSTRTOU16 0xffffffff812efaa0
#endif

#ifndef KSTRTOU16_FROM_USER
#define KSTRTOU16_FROM_USER 0xffffffff812efae0
#endif

#ifndef KSTRTOU8
#define KSTRTOU8 0xffffffff812efb60
#endif

#ifndef KSTRTOU8_FROM_USER
#define KSTRTOU8_FROM_USER 0xffffffff812efba0
#endif

#ifndef KSTRTOULL_FROM_USER
#define KSTRTOULL_FROM_USER 0xffffffff812efc20
#endif

#ifndef KSTRTOUL_FROM_USER
#define KSTRTOUL_FROM_USER 0xffffffff812efcb0
#endif

#ifndef KSTRTOLL
#define KSTRTOLL 0xffffffff812efd40
#endif

#ifndef _KSTRTOL
#define _KSTRTOL 0xffffffff812efdc0
#endif

#ifndef KSTRTOINT
#define KSTRTOINT 0xffffffff812efdf0
#endif

#ifndef KSTRTOINT_FROM_USER
#define KSTRTOINT_FROM_USER 0xffffffff812efe30
#endif

#ifndef KSTRTOS16
#define KSTRTOS16 0xffffffff812efeb0
#endif

#ifndef KSTRTOS16_FROM_USER
#define KSTRTOS16_FROM_USER 0xffffffff812efef0
#endif

#ifndef KSTRTOS8
#define KSTRTOS8 0xffffffff812eff70
#endif

#ifndef KSTRTOS8_FROM_USER
#define KSTRTOS8_FROM_USER 0xffffffff812effb0
#endif

#ifndef KSTRTOLL_FROM_USER
#define KSTRTOLL_FROM_USER 0xffffffff812f0030
#endif

#ifndef KSTRTOL_FROM_USER
#define KSTRTOL_FROM_USER 0xffffffff812f00b0
#endif

#ifndef IOPORT_MAP
#define IOPORT_MAP 0xffffffff812f0130
#endif

#ifndef IOPORT_UNMAP
#define IOPORT_UNMAP 0xffffffff812f0150
#endif

#ifndef IOREAD8
#define IOREAD8 0xffffffff812f01a0
#endif

#ifndef IOREAD16
#define IOREAD16 0xffffffff812f01f0
#endif

#ifndef IOREAD32
#define IOREAD32 0xffffffff812f0240
#endif

#ifndef IOWRITE8
#define IOWRITE8 0xffffffff812f0290
#endif

#ifndef IOWRITE16
#define IOWRITE16 0xffffffff812f02d0
#endif

#ifndef IOWRITE32
#define IOWRITE32 0xffffffff812f0310
#endif

#ifndef IOREAD16BE
#define IOREAD16BE 0xffffffff812f0350
#endif

#ifndef IOREAD32BE
#define IOREAD32BE 0xffffffff812f03a0
#endif

#ifndef PCI_IOUNMAP
#define PCI_IOUNMAP 0xffffffff812f03f0
#endif

#ifndef IOREAD8_REP
#define IOREAD8_REP 0xffffffff812f0430
#endif

#ifndef IOREAD16_REP
#define IOREAD16_REP 0xffffffff812f0490
#endif

#ifndef IOREAD32_REP
#define IOREAD32_REP 0xffffffff812f04f0
#endif

#ifndef IOWRITE8_REP
#define IOWRITE8_REP 0xffffffff812f0550
#endif

#ifndef IOWRITE16_REP
#define IOWRITE16_REP 0xffffffff812f05b0
#endif

#ifndef IOWRITE32_REP
#define IOWRITE32_REP 0xffffffff812f0610
#endif

#ifndef IOWRITE16BE
#define IOWRITE16BE 0xffffffff812f0670
#endif

#ifndef IOWRITE32BE
#define IOWRITE32BE 0xffffffff812f06b0
#endif

#ifndef PCI_IOMAP_RANGE
#define PCI_IOMAP_RANGE 0xffffffff812f06f0
#endif

#ifndef PCI_IOMAP
#define PCI_IOMAP 0xffffffff812f0780
#endif

#ifndef DEVM_IOREMAP_RELEASE
#define DEVM_IOREMAP_RELEASE 0xffffffff812f0810
#endif

#ifndef DEVM_IOREMAP
#define DEVM_IOREMAP 0xffffffff812f0820
#endif

#ifndef DEVM_IOREMAP_NOCACHE
#define DEVM_IOREMAP_NOCACHE 0xffffffff812f08b0
#endif

#ifndef DEVM_IOREMAP_WC
#define DEVM_IOREMAP_WC 0xffffffff812f0940
#endif

#ifndef DEVM_IOUNMAP
#define DEVM_IOUNMAP 0xffffffff812f09d0
#endif

#ifndef DEVM_IOPORT_MAP
#define DEVM_IOPORT_MAP 0xffffffff812f0a20
#endif

#ifndef PCIM_IOMAP_TABLE
#define PCIM_IOMAP_TABLE 0xffffffff812f0ac0
#endif

#ifndef DEVM_IOREMAP_RESOURCE
#define DEVM_IOREMAP_RESOURCE 0xffffffff812f0b60
#endif

#ifndef DEVM_IOPORT_UNMAP
#define DEVM_IOPORT_UNMAP 0xffffffff812f0c80
#endif

#ifndef PCIM_IOUNMAP
#define PCIM_IOUNMAP 0xffffffff812f0ce0
#endif

#ifndef PCIM_IOUNMAP_REGIONS
#define PCIM_IOUNMAP_REGIONS 0xffffffff812f0d50
#endif

#ifndef PCIM_IOMAP
#define PCIM_IOMAP 0xffffffff812f0db0
#endif

#ifndef PCIM_IOMAP_REGIONS
#define PCIM_IOMAP_REGIONS 0xffffffff812f0e10
#endif

#ifndef PCIM_IOMAP_REGIONS_REQUEST_ALL
#define PCIM_IOMAP_REGIONS_REQUEST_ALL 0xffffffff812f0f10
#endif

#ifndef CHECK_SIGNATURE
#define CHECK_SIGNATURE 0xffffffff812f0f90
#endif

#ifndef __SW_HWEIGHT32
#define __SW_HWEIGHT32 0xffffffff812f0fd0
#endif

#ifndef __SW_HWEIGHT16
#define __SW_HWEIGHT16 0xffffffff812f1010
#endif

#ifndef __SW_HWEIGHT8
#define __SW_HWEIGHT8 0xffffffff812f1050
#endif

#ifndef __SW_HWEIGHT64
#define __SW_HWEIGHT64 0xffffffff812f1080
#endif

#ifndef BTREE_INIT_MEMPOOL
#define BTREE_INIT_MEMPOOL 0xffffffff812f10e0
#endif

#ifndef BTREE_LAST
#define BTREE_LAST 0xffffffff812f1100
#endif

#ifndef BTREE_LOOKUP
#define BTREE_LOOKUP 0xffffffff812f1170
#endif

#ifndef BTREE_UPDATE
#define BTREE_UPDATE 0xffffffff812f12a0
#endif

#ifndef VISITORL
#define VISITORL 0xffffffff812f1460
#endif

#ifndef VISITOR32
#define VISITOR32 0xffffffff812f1470
#endif

#ifndef VISITOR64
#define VISITOR64 0xffffffff812f1480
#endif

#ifndef VISITOR128
#define VISITOR128 0xffffffff812f1490
#endif

#ifndef BTREE_ALLOC
#define BTREE_ALLOC 0xffffffff812f14a0
#endif

#ifndef BTREE_FREE
#define BTREE_FREE 0xffffffff812f14b0
#endif

#ifndef BTREE_INIT
#define BTREE_INIT 0xffffffff812f14c0
#endif

#ifndef BTREE_VISITOR
#define BTREE_VISITOR 0xffffffff812f1630
#endif

#ifndef BTREE_GRIM_VISITOR
#define BTREE_GRIM_VISITOR 0xffffffff812f1680
#endif

#ifndef BTREE_DESTROY
#define BTREE_DESTROY 0xffffffff812f16e0
#endif

#ifndef BTREE_GET_PREV
#define BTREE_GET_PREV 0xffffffff812f1710
#endif

#ifndef BTREE_REMOVE
#define BTREE_REMOVE 0xffffffff812f1f50
#endif

#ifndef BTREE_INSERT
#define BTREE_INSERT 0xffffffff812f2560
#endif

#ifndef BTREE_MERGE
#define BTREE_MERGE 0xffffffff812f2580
#endif

#ifndef INTERVAL_TREE_ITER_FIRST
#define INTERVAL_TREE_ITER_FIRST 0xffffffff812f2710
#endif

#ifndef INTERVAL_TREE_ITER_NEXT
#define INTERVAL_TREE_ITER_NEXT 0xffffffff812f2730
#endif

#ifndef INTERVAL_TREE_INSERT
#define INTERVAL_TREE_INSERT 0xffffffff812f2780
#endif

#ifndef INTERVAL_TREE_REMOVE
#define INTERVAL_TREE_REMOVE 0xffffffff812f27e0
#endif

#ifndef ASSOC_ARRAY_ITERATE
#define ASSOC_ARRAY_ITERATE 0xffffffff812f2ed0
#endif

#ifndef ASSOC_ARRAY_FIND
#define ASSOC_ARRAY_FIND 0xffffffff812f2ef0
#endif

#ifndef ASSOC_ARRAY_DESTROY
#define ASSOC_ARRAY_DESTROY 0xffffffff812f2f70
#endif

#ifndef ASSOC_ARRAY_INSERT_SET_OBJECT
#define ASSOC_ARRAY_INSERT_SET_OBJECT 0xffffffff812f2f90
#endif

#ifndef ASSOC_ARRAY_CLEAR
#define ASSOC_ARRAY_CLEAR 0xffffffff812f2fb0
#endif

#ifndef ASSOC_ARRAY_APPLY_EDIT
#define ASSOC_ARRAY_APPLY_EDIT 0xffffffff812f3030
#endif

#ifndef ASSOC_ARRAY_CANCEL_EDIT
#define ASSOC_ARRAY_CANCEL_EDIT 0xffffffff812f3130
#endif

#ifndef ASSOC_ARRAY_INSERT
#define ASSOC_ARRAY_INSERT 0xffffffff812f3170
#endif

#ifndef ASSOC_ARRAY_DELETE
#define ASSOC_ARRAY_DELETE 0xffffffff812f3c50
#endif

#ifndef ASSOC_ARRAY_GC
#define ASSOC_ARRAY_GC 0xffffffff812f3f60
#endif

#ifndef RATIONAL_BEST_APPROXIMATION
#define RATIONAL_BEST_APPROXIMATION 0xffffffff812f4470
#endif

#ifndef CRC_T10DIF
#define CRC_T10DIF 0xffffffff812f4510
#endif

#ifndef CRC32_LE_SHIFT
#define CRC32_LE_SHIFT 0xffffffff812f4650
#endif

#ifndef __CRC32C_LE_SHIFT
#define __CRC32C_LE_SHIFT 0xffffffff812f4660
#endif

#ifndef CRC32_BE
#define CRC32_BE 0xffffffff812f4670
#endif

#ifndef CRC32_LE
#define CRC32_LE 0xffffffff812f4790
#endif

#ifndef __CRC32C_LE
#define __CRC32C_LE 0xffffffff812f48a0
#endif

#ifndef GEN_POOL_VIRT_TO_PHYS
#define GEN_POOL_VIRT_TO_PHYS 0xffffffff812f4b10
#endif

#ifndef GEN_POOL_FOR_EACH_CHUNK
#define GEN_POOL_FOR_EACH_CHUNK 0xffffffff812f4b70
#endif

#ifndef GEN_POOL_AVAIL
#define GEN_POOL_AVAIL 0xffffffff812f4bd0
#endif

#ifndef GEN_POOL_SIZE
#define GEN_POOL_SIZE 0xffffffff812f4c10
#endif

#ifndef GEN_POOL_SET_ALGO
#define GEN_POOL_SET_ALGO 0xffffffff812f4c60
#endif

#ifndef GEN_POOL_CREATE
#define GEN_POOL_CREATE 0xffffffff812f4c80
#endif

#ifndef GEN_POOL_ALLOC
#define GEN_POOL_ALLOC 0xffffffff812f4cd0
#endif

#ifndef GEN_POOL_DMA_ALLOC
#define GEN_POOL_DMA_ALLOC 0xffffffff812f4ee0
#endif

#ifndef GEN_POOL_FREE
#define GEN_POOL_FREE 0xffffffff812f4f30
#endif

#ifndef GEN_POOL_FIRST_FIT
#define GEN_POOL_FIRST_FIT 0xffffffff812f4fd0
#endif

#ifndef GEN_POOL_BEST_FIT
#define GEN_POOL_BEST_FIT 0xffffffff812f4fe0
#endif

#ifndef GEN_POOL_FIRST_FIT_ORDER_ALIGN
#define GEN_POOL_FIRST_FIT_ORDER_ALIGN 0xffffffff812f5090
#endif

#ifndef DEVM_GEN_POOL_CREATE
#define DEVM_GEN_POOL_CREATE 0xffffffff812f50d0
#endif

#ifndef DEV_GET_GEN_POOL
#define DEV_GET_GEN_POOL 0xffffffff812f5150
#endif

#ifndef GEN_POOL_DESTROY
#define GEN_POOL_DESTROY 0xffffffff812f5180
#endif

#ifndef GEN_POOL_ADD_VIRT
#define GEN_POOL_ADD_VIRT 0xffffffff812f5240
#endif

#ifndef ADDR_IN_GEN_POOL
#define ADDR_IN_GEN_POOL 0xffffffff812f52e0
#endif

#ifndef INFLATE_FAST
#define INFLATE_FAST 0xffffffff812f5340
#endif

#ifndef ZLIB_INFLATE_WORKSPACESIZE
#define ZLIB_INFLATE_WORKSPACESIZE 0xffffffff812f5a60
#endif

#ifndef ZLIB_INFLATERESET
#define ZLIB_INFLATERESET 0xffffffff812f5a70
#endif

#ifndef ZLIB_INFLATEINIT2
#define ZLIB_INFLATEINIT2 0xffffffff812f5b20
#endif

#ifndef ZLIB_INFLATE
#define ZLIB_INFLATE 0xffffffff812f5b80
#endif

#ifndef ZLIB_INFLATEEND
#define ZLIB_INFLATEEND 0xffffffff812f78a0
#endif

#ifndef ZLIB_INFLATEINCOMP
#define ZLIB_INFLATEINCOMP 0xffffffff812f78c0
#endif

#ifndef ZLIB_INFLATE_BLOB
#define ZLIB_INFLATE_BLOB 0xffffffff812f7bc0
#endif

#ifndef ZLIB_INFLATE_TABLE
#define ZLIB_INFLATE_TABLE 0xffffffff812f7cb0
#endif

#ifndef ZLIB_DEFLATERESET
#define ZLIB_DEFLATERESET 0xffffffff812f92d0
#endif

#ifndef ZLIB_DEFLATEINIT2
#define ZLIB_DEFLATEINIT2 0xffffffff812f9420
#endif

#ifndef ZLIB_DEFLATE
#define ZLIB_DEFLATE 0xffffffff812f95c0
#endif

#ifndef ZLIB_DEFLATEEND
#define ZLIB_DEFLATEEND 0xffffffff812f99b0
#endif

#ifndef ZLIB_DEFLATE_WORKSPACESIZE
#define ZLIB_DEFLATE_WORKSPACESIZE 0xffffffff812f9a10
#endif

#ifndef ZLIB_TR_INIT
#define ZLIB_TR_INIT 0xffffffff812fac90
#endif

#ifndef ZLIB_TR_STORED_BLOCK
#define ZLIB_TR_STORED_BLOCK 0xffffffff812faff0
#endif

#ifndef ZLIB_TR_STORED_TYPE_ONLY
#define ZLIB_TR_STORED_TYPE_ONLY 0xffffffff812fb1a0
#endif

#ifndef ZLIB_TR_ALIGN
#define ZLIB_TR_ALIGN 0xffffffff812fb290
#endif

#ifndef ZLIB_TR_FLUSH_BLOCK
#define ZLIB_TR_FLUSH_BLOCK 0xffffffff812fb6b0
#endif

#ifndef ZLIB_TR_TALLY
#define ZLIB_TR_TALLY 0xffffffff812fbe00
#endif

#ifndef LZO1X_1_COMPRESS
#define LZO1X_1_COMPRESS 0xffffffff812fc310
#endif

#ifndef LZO1X_DECOMPRESS_SAFE
#define LZO1X_DECOMPRESS_SAFE 0xffffffff812fc550
#endif

#ifndef LZ4_DECOMPRESS
#define LZ4_DECOMPRESS 0xffffffff812fcb20
#endif

#ifndef LZ4_DECOMPRESS_UNKNOWNOUTPUTSIZE
#define LZ4_DECOMPRESS_UNKNOWNOUTPUTSIZE 0xffffffff812fcdd0
#endif

#ifndef XZ_DEC_RESET
#define XZ_DEC_RESET 0xffffffff812fd1c0
#endif

#ifndef XZ_DEC_RUN
#define XZ_DEC_RUN 0xffffffff812fd250
#endif

#ifndef XZ_DEC_INIT
#define XZ_DEC_INIT 0xffffffff812fdc30
#endif

#ifndef XZ_DEC_END
#define XZ_DEC_END 0xffffffff812fdcc0
#endif

#ifndef XZ_DEC_LZMA2_RUN
#define XZ_DEC_LZMA2_RUN 0xffffffff812fea20
#endif

#ifndef XZ_DEC_LZMA2_CREATE
#define XZ_DEC_LZMA2_CREATE 0xffffffff812ff460
#endif

#ifndef XZ_DEC_LZMA2_RESET
#define XZ_DEC_LZMA2_RESET 0xffffffff812ff4f0
#endif

#ifndef XZ_DEC_LZMA2_END
#define XZ_DEC_LZMA2_END 0xffffffff812ff590
#endif

#ifndef XZ_DEC_BCJ_RUN
#define XZ_DEC_BCJ_RUN 0xffffffff812ff850
#endif

#ifndef XZ_DEC_BCJ_CREATE
#define XZ_DEC_BCJ_CREATE 0xffffffff812ffa30
#endif

#ifndef XZ_DEC_BCJ_RESET
#define XZ_DEC_BCJ_RESET 0xffffffff812ffa60
#endif

#ifndef TEXTSEARCH_FIND_CONTINUOUS
#define TEXTSEARCH_FIND_CONTINUOUS 0xffffffff812ffaa0
#endif

#ifndef TEXTSEARCH_UNREGISTER
#define TEXTSEARCH_UNREGISTER 0xffffffff812ffaf0
#endif

#ifndef TEXTSEARCH_REGISTER
#define TEXTSEARCH_REGISTER 0xffffffff812ffb70
#endif

#ifndef TEXTSEARCH_DESTROY
#define TEXTSEARCH_DESTROY 0xffffffff812ffc60
#endif

#ifndef TEXTSEARCH_PREPARE
#define TEXTSEARCH_PREPARE 0xffffffff812ffc90
#endif

#ifndef PERCPU_COUNTER_SET
#define PERCPU_COUNTER_SET 0xffffffff812ffde0
#endif

#ifndef __PERCPU_COUNTER_SUM
#define __PERCPU_COUNTER_SUM 0xffffffff812ffe60
#endif

#ifndef __PERCPU_COUNTER_ADD
#define __PERCPU_COUNTER_ADD 0xffffffff812ffee0
#endif

#ifndef __PERCPU_COUNTER_INIT
#define __PERCPU_COUNTER_INIT 0xffffffff812fff40
#endif

#ifndef PERCPU_COUNTER_DESTROY
#define PERCPU_COUNTER_DESTROY 0xffffffff812fffd0
#endif

#ifndef __PERCPU_COUNTER_COMPARE
#define __PERCPU_COUNTER_COMPARE 0xffffffff81300120
#endif

#ifndef SWIOTLB_NR_TBL
#define SWIOTLB_NR_TBL 0xffffffff813001b0
#endif

#ifndef SWIOTLB_DMA_MAPPING_ERROR
#define SWIOTLB_DMA_MAPPING_ERROR 0xffffffff813001c0
#endif

#ifndef SWIOTLB_DMA_SUPPORTED
#define SWIOTLB_DMA_SUPPORTED 0xffffffff813001d0
#endif

#ifndef SWIOTLB_TBL_MAP_SINGLE
#define SWIOTLB_TBL_MAP_SINGLE 0xffffffff81300290
#endif

#ifndef SWIOTLB_TBL_SYNC_SINGLE
#define SWIOTLB_TBL_SYNC_SINGLE 0xffffffff81300670
#endif

#ifndef SWIOTLB_SYNC_SINGLE_FOR_CPU
#define SWIOTLB_SYNC_SINGLE_FOR_CPU 0xffffffff81300750
#endif

#ifndef SWIOTLB_SYNC_SINGLE_FOR_DEVICE
#define SWIOTLB_SYNC_SINGLE_FOR_DEVICE 0xffffffff81300760
#endif

#ifndef SWIOTLB_SYNC_SG_FOR_DEVICE
#define SWIOTLB_SYNC_SG_FOR_DEVICE 0xffffffff81300770
#endif

#ifndef SWIOTLB_TBL_UNMAP_SINGLE
#define SWIOTLB_TBL_UNMAP_SINGLE 0xffffffff81300990
#endif

#ifndef SWIOTLB_ALLOC_COHERENT
#define SWIOTLB_ALLOC_COHERENT 0xffffffff81300ab0
#endif

#ifndef SWIOTLB_FREE_COHERENT
#define SWIOTLB_FREE_COHERENT 0xffffffff81300bf0
#endif

#ifndef SWIOTLB_UNMAP_PAGE
#define SWIOTLB_UNMAP_PAGE 0xffffffff81300cc0
#endif

#ifndef SWIOTLB_UNMAP_SG_ATTRS
#define SWIOTLB_UNMAP_SG_ATTRS 0xffffffff81300cd0
#endif

#ifndef SWIOTLB_UNMAP_SG
#define SWIOTLB_UNMAP_SG 0xffffffff81300d30
#endif

#ifndef SWIOTLB_SYNC_SG_FOR_CPU
#define SWIOTLB_SYNC_SG_FOR_CPU 0xffffffff81300d40
#endif

#ifndef SWIOTLB_MAP_SG_ATTRS
#define SWIOTLB_MAP_SG_ATTRS 0xffffffff81300da0
#endif

#ifndef SWIOTLB_MAP_SG
#define SWIOTLB_MAP_SG 0xffffffff81300ee0
#endif

#ifndef SWIOTLB_MAP_PAGE
#define SWIOTLB_MAP_PAGE 0xffffffff81300ef0
#endif

#ifndef SWIOTLB_SIZE_OR_DEFAULT
#define SWIOTLB_SIZE_OR_DEFAULT 0xffffffff813010a0
#endif

#ifndef SWIOTLB_PRINT_INFO
#define SWIOTLB_PRINT_INFO 0xffffffff813010c0
#endif

#ifndef SWIOTLB_LATE_INIT_WITH_TBL
#define SWIOTLB_LATE_INIT_WITH_TBL 0xffffffff81301120
#endif

#ifndef SWIOTLB_LATE_INIT_WITH_DEFAULT_SIZE
#define SWIOTLB_LATE_INIT_WITH_DEFAULT_SIZE 0xffffffff81301300
#endif

#ifndef IS_SWIOTLB_BUFFER
#define IS_SWIOTLB_BUFFER 0xffffffff81301450
#endif

#ifndef IOMMU_IS_SPAN_BOUNDARY
#define IOMMU_IS_SPAN_BOUNDARY 0xffffffff81301470
#endif

#ifndef IOMMU_AREA_ALLOC
#define IOMMU_AREA_ALLOC 0xffffffff813014a0
#endif

#ifndef IOMMU_TBL_POOL_INIT
#define IOMMU_TBL_POOL_INIT 0xffffffff81301530
#endif

#ifndef IOMMU_TBL_RANGE_ALLOC
#define IOMMU_TBL_RANGE_ALLOC 0xffffffff813016b0
#endif

#ifndef IOMMU_TBL_RANGE_FREE
#define IOMMU_TBL_RANGE_FREE 0xffffffff81301a30
#endif

#ifndef TASK_CURRENT_SYSCALL
#define TASK_CURRENT_SYSCALL 0xffffffff81301be0
#endif

#ifndef DDEBUG_REMOVE_MODULE
#define DDEBUG_REMOVE_MODULE 0xffffffff81301fc0
#endif

#ifndef __DYNAMIC_PR_DEBUG
#define __DYNAMIC_PR_DEBUG 0xffffffff813022b0
#endif

#ifndef __DYNAMIC_DEV_DBG
#define __DYNAMIC_DEV_DBG 0xffffffff81302370
#endif

#ifndef DDEBUG_ADD_MODULE
#define DDEBUG_ADD_MODULE 0xffffffff813024a0
#endif

#ifndef __DYNAMIC_NETDEV_DBG
#define __DYNAMIC_NETDEV_DBG 0xffffffff813026d0
#endif

#ifndef DDEBUG_DYNDBG_MODULE_PARAM_CB
#define DDEBUG_DYNDBG_MODULE_PARAM_CB 0xffffffff813037d0
#endif

#ifndef NLA_POLICY_LEN
#define NLA_POLICY_LEN 0xffffffff81303820
#endif

#ifndef NLA_FIND
#define NLA_FIND 0xffffffff81303870
#endif

#ifndef NLA_VALIDATE
#define NLA_VALIDATE 0xffffffff81303ac0
#endif

#ifndef NLA_PARSE
#define NLA_PARSE 0xffffffff81303b40
#endif

#ifndef NLA_STRLCPY
#define NLA_STRLCPY 0xffffffff81303c50
#endif

#ifndef NLA_MEMCPY
#define NLA_MEMCPY 0xffffffff81303cb0
#endif

#ifndef NLA_STRCMP
#define NLA_STRCMP 0xffffffff81303cf0
#endif

#ifndef __NLA_RESERVE
#define __NLA_RESERVE 0xffffffff81303d50
#endif

#ifndef NLA_RESERVE
#define NLA_RESERVE 0xffffffff81303da0
#endif

#ifndef __NLA_PUT
#define __NLA_PUT 0xffffffff81303de0
#endif

#ifndef NLA_PUT
#define NLA_PUT 0xffffffff81303e10
#endif

#ifndef __NLA_RESERVE_NOHDR
#define __NLA_RESERVE_NOHDR 0xffffffff81303e50
#endif

#ifndef NLA_RESERVE_NOHDR
#define NLA_RESERVE_NOHDR 0xffffffff81303e80
#endif

#ifndef __NLA_PUT_NOHDR
#define __NLA_PUT_NOHDR 0xffffffff81303ec0
#endif

#ifndef NLA_PUT_NOHDR
#define NLA_PUT_NOHDR 0xffffffff81303ef0
#endif

#ifndef NLA_APPEND
#define NLA_APPEND 0xffffffff81303f30
#endif

#ifndef NLA_MEMCMP
#define NLA_MEMCMP 0xffffffff81303f90
#endif

#ifndef EWMA_ADD
#define EWMA_ADD 0xffffffff81303fb0
#endif

#ifndef EWMA_INIT
#define EWMA_INIT 0xffffffff81304000
#endif

#ifndef ALLOC_CPU_RMAP
#define ALLOC_CPU_RMAP 0xffffffff81304070
#endif

#ifndef CPU_RMAP_ADD
#define CPU_RMAP_ADD 0xffffffff813041d0
#endif

#ifndef CPU_RMAP_UPDATE
#define CPU_RMAP_UPDATE 0xffffffff81304200
#endif

#ifndef FREE_IRQ_CPU_RMAP
#define FREE_IRQ_CPU_RMAP 0xffffffff813043f0
#endif

#ifndef CPU_RMAP_PUT
#define CPU_RMAP_PUT 0xffffffff81304450
#endif

#ifndef IRQ_CPU_RMAP_ADD
#define IRQ_CPU_RMAP_ADD 0xffffffff813044b0
#endif

#ifndef DQL_RESET
#define DQL_RESET 0xffffffff813045b0
#endif

#ifndef DQL_INIT
#define DQL_INIT 0xffffffff81304600
#endif

#ifndef DQL_COMPLETED
#define DQL_COMPLETED 0xffffffff81304660
#endif

#ifndef GLOB_MATCH
#define GLOB_MATCH 0xffffffff813047b0
#endif

#ifndef STRNCPY_FROM_USER
#define STRNCPY_FROM_USER 0xffffffff813049a0
#endif

#ifndef STRNLEN_USER
#define STRNLEN_USER 0xffffffff81304ab0
#endif

#ifndef STRLEN_USER
#define STRLEN_USER 0xffffffff81304bc0
#endif

#ifndef MAC_PTON
#define MAC_PTON 0xffffffff81304c90
#endif

#ifndef GET_DEFAULT_FONT
#define GET_DEFAULT_FONT 0xffffffff81304d40
#endif

#ifndef FIND_FONT
#define FIND_FONT 0xffffffff81304dd0
#endif

#ifndef UCS2_STRNLEN
#define UCS2_STRNLEN 0xffffffff81304e20
#endif

#ifndef UCS2_STRLEN
#define UCS2_STRLEN 0xffffffff81304e50
#endif

#ifndef UCS2_STRSIZE
#define UCS2_STRSIZE 0xffffffff81304e80
#endif

#ifndef UCS2_STRNCMP
#define UCS2_STRNCMP 0xffffffff81304eb0
#endif

#ifndef RDMSR_ON_CPU
#define RDMSR_ON_CPU 0xffffffff81305010
#endif

#ifndef RDMSRL_ON_CPU
#define RDMSRL_ON_CPU 0xffffffff81305070
#endif

#ifndef WRMSR_ON_CPU
#define WRMSR_ON_CPU 0xffffffff813050d0
#endif

#ifndef WRMSRL_ON_CPU
#define WRMSRL_ON_CPU 0xffffffff81305120
#endif

#ifndef RDMSR_SAFE_ON_CPU
#define RDMSR_SAFE_ON_CPU 0xffffffff81305170
#endif

#ifndef WRMSR_SAFE_ON_CPU
#define WRMSR_SAFE_ON_CPU 0xffffffff813051e0
#endif

#ifndef WRMSRL_SAFE_ON_CPU
#define WRMSRL_SAFE_ON_CPU 0xffffffff81305230
#endif

#ifndef RDMSRL_SAFE_ON_CPU
#define RDMSRL_SAFE_ON_CPU 0xffffffff81305280
#endif

#ifndef RDMSR_SAFE_REGS_ON_CPU
#define RDMSR_SAFE_REGS_ON_CPU 0xffffffff813052e0
#endif

#ifndef WRMSR_SAFE_REGS_ON_CPU
#define WRMSR_SAFE_REGS_ON_CPU 0xffffffff81305320
#endif

#ifndef RDMSR_ON_CPUS
#define RDMSR_ON_CPUS 0xffffffff813053d0
#endif

#ifndef WRMSR_ON_CPUS
#define WRMSR_ON_CPUS 0xffffffff813053f0
#endif

#ifndef WBINVD_ON_CPU
#define WBINVD_ON_CPU 0xffffffff81305460
#endif

#ifndef WBINVD_ON_ALL_CPUS
#define WBINVD_ON_ALL_CPUS 0xffffffff81305480
#endif

#ifndef MSRS_FREE
#define MSRS_FREE 0xffffffff813054a0
#endif

#ifndef MSRS_ALLOC
#define MSRS_ALLOC 0xffffffff813054c0
#endif

#ifndef MSR_READ
#define MSR_READ 0xffffffff81305500
#endif

#ifndef MSR_WRITE
#define MSR_WRITE 0xffffffff81305540
#endif

#ifndef MSR_SET_BIT
#define MSR_SET_BIT 0xffffffff81305560
#endif

#ifndef MSR_CLEAR_BIT
#define MSR_CLEAR_BIT 0xffffffff813055c0
#endif

#ifndef RDMSR_SAFE_REGS
#define RDMSR_SAFE_REGS 0xffffffff81305630
#endif

#ifndef WRMSR_SAFE_REGS
#define WRMSR_SAFE_REGS 0xffffffff81305680
#endif

#ifndef __IOWRITE32_COPY
#define __IOWRITE32_COPY 0xffffffff813056d0
#endif

#ifndef OF_PHY_GET
#define OF_PHY_GET 0xffffffff813056f0
#endif

#ifndef PHY_PM_RUNTIME_GET
#define PHY_PM_RUNTIME_GET 0xffffffff81305700
#endif

#ifndef OF_PHY_PROVIDER_UNREGISTER
#define OF_PHY_PROVIDER_UNREGISTER 0xffffffff81305790
#endif

#ifndef PHY_PM_RUNTIME_GET_SYNC
#define PHY_PM_RUNTIME_GET_SYNC 0xffffffff81305820
#endif

#ifndef PHY_PM_RUNTIME_PUT_SYNC
#define PHY_PM_RUNTIME_PUT_SYNC 0xffffffff81305870
#endif

#ifndef PHY_PM_RUNTIME_PUT
#define PHY_PM_RUNTIME_PUT 0xffffffff813058a0
#endif

#ifndef PHY_PM_RUNTIME_ALLOW
#define PHY_PM_RUNTIME_ALLOW 0xffffffff813058d0
#endif

#ifndef PHY_PM_RUNTIME_FORBID
#define PHY_PM_RUNTIME_FORBID 0xffffffff81305900
#endif

#ifndef PHY_POWER_OFF
#define PHY_POWER_OFF 0xffffffff81305930
#endif

#ifndef PHY_PUT
#define PHY_PUT 0xffffffff813059d0
#endif

#ifndef OF_PHY_SIMPLE_XLATE
#define OF_PHY_SIMPLE_XLATE 0xffffffff81305a30
#endif

#ifndef DEVM_OF_PHY_GET
#define DEVM_OF_PHY_GET 0xffffffff81305ab0
#endif

#ifndef PHY_DESTROY
#define PHY_DESTROY 0xffffffff81305b20
#endif

#ifndef PHY_REMOVE_LOOKUP
#define PHY_REMOVE_LOOKUP 0xffffffff81305b60
#endif

#ifndef PHY_INIT
#define PHY_INIT 0xffffffff81305c40
#endif

#ifndef PHY_EXIT
#define PHY_EXIT 0xffffffff81305cf0
#endif

#ifndef PHY_POWER_ON
#define PHY_POWER_ON 0xffffffff81305da0
#endif

#ifndef DEVM_PHY_PUT
#define DEVM_PHY_PUT 0xffffffff81305e60
#endif

#ifndef PHY_GET
#define PHY_GET 0xffffffff81305ef0
#endif

#ifndef PHY_OPTIONAL_GET
#define PHY_OPTIONAL_GET 0xffffffff81306050
#endif

#ifndef DEVM_PHY_GET
#define DEVM_PHY_GET 0xffffffff81306090
#endif

#ifndef DEVM_PHY_OPTIONAL_GET
#define DEVM_PHY_OPTIONAL_GET 0xffffffff81306110
#endif

#ifndef DEVM_PHY_DESTROY
#define DEVM_PHY_DESTROY 0xffffffff81306150
#endif

#ifndef DEVM_OF_PHY_PROVIDER_UNREGISTER
#define DEVM_OF_PHY_PROVIDER_UNREGISTER 0xffffffff813061d0
#endif

#ifndef PHY_CREATE
#define PHY_CREATE 0xffffffff81306250
#endif

#ifndef DEVM_PHY_CREATE
#define DEVM_PHY_CREATE 0xffffffff81306410
#endif

#ifndef __OF_PHY_PROVIDER_REGISTER
#define __OF_PHY_PROVIDER_REGISTER 0xffffffff81306490
#endif

#ifndef __DEVM_OF_PHY_PROVIDER_REGISTER
#define __DEVM_OF_PHY_PROVIDER_REGISTER 0xffffffff81306520
#endif

#ifndef PHY_CREATE_LOOKUP
#define PHY_CREATE_LOOKUP 0xffffffff813065a0
#endif

#ifndef PINCTRL_DEV_GET_NAME
#define PINCTRL_DEV_GET_NAME 0xffffffff81306660
#endif

#ifndef PINCTRL_DEV_GET_DEVNAME
#define PINCTRL_DEV_GET_DEVNAME 0xffffffff81306670
#endif

#ifndef PINCTRL_DEV_GET_DRVDATA
#define PINCTRL_DEV_GET_DRVDATA 0xffffffff81306690
#endif

#ifndef PINCTRL_ADD_GPIO_RANGE
#define PINCTRL_ADD_GPIO_RANGE 0xffffffff813066b0
#endif

#ifndef PINCTRL_ADD_GPIO_RANGES
#define PINCTRL_ADD_GPIO_RANGES 0xffffffff813066f0
#endif

#ifndef PINCTRL_FIND_GPIO_RANGE_FROM_PIN
#define PINCTRL_FIND_GPIO_RANGE_FROM_PIN 0xffffffff81306740
#endif

#ifndef PINCTRL_REMOVE_GPIO_RANGE
#define PINCTRL_REMOVE_GPIO_RANGE 0xffffffff813067f0
#endif

#ifndef PINCTRL_FREE_GPIO
#define PINCTRL_FREE_GPIO 0xffffffff81306940
#endif

#ifndef PINCTRL_GPIO_DIRECTION_INPUT
#define PINCTRL_GPIO_DIRECTION_INPUT 0xffffffff813069d0
#endif

#ifndef PINCTRL_GPIO_DIRECTION_OUTPUT
#define PINCTRL_GPIO_DIRECTION_OUTPUT 0xffffffff813069f0
#endif

#ifndef PINCTRL_SELECT_STATE
#define PINCTRL_SELECT_STATE 0xffffffff81306a10
#endif

#ifndef PINCTRL_FORCE_SLEEP
#define PINCTRL_FORCE_SLEEP 0xffffffff81306af0
#endif

#ifndef PINCTRL_FORCE_DEFAULT
#define PINCTRL_FORCE_DEFAULT 0xffffffff81306b30
#endif

#ifndef PINCTRL_PM_SELECT_DEFAULT_STATE
#define PINCTRL_PM_SELECT_DEFAULT_STATE 0xffffffff81306be0
#endif

#ifndef PINCTRL_PM_SELECT_SLEEP_STATE
#define PINCTRL_PM_SELECT_SLEEP_STATE 0xffffffff81306c10
#endif

#ifndef PINCTRL_PM_SELECT_IDLE_STATE
#define PINCTRL_PM_SELECT_IDLE_STATE 0xffffffff81306c40
#endif

#ifndef PINCTRL_REQUEST_GPIO
#define PINCTRL_REQUEST_GPIO 0xffffffff81306c70
#endif

#ifndef PIN_IS_VALID
#define PIN_IS_VALID 0xffffffff813075e0
#endif

#ifndef DEVM_PINCTRL_PUT
#define DEVM_PINCTRL_PUT 0xffffffff81307630
#endif

#ifndef PINCTRL_UNREGISTER
#define PINCTRL_UNREGISTER 0xffffffff81307680
#endif

#ifndef PINCTRL_LOOKUP_STATE
#define PINCTRL_LOOKUP_STATE 0xffffffff81307830
#endif

#ifndef PINCTRL_PUT
#define PINCTRL_PUT 0xffffffff813078e0
#endif

#ifndef PINCTRL_PROVIDE_DUMMIES
#define PINCTRL_PROVIDE_DUMMIES 0xffffffff81307940
#endif

#ifndef GET_PINCTRL_DEV_FROM_DEVNAME
#define GET_PINCTRL_DEV_FROM_DEVNAME 0xffffffff81307950
#endif

#ifndef PINCTRL_FIND_AND_ADD_GPIO_RANGE
#define PINCTRL_FIND_AND_ADD_GPIO_RANGE 0xffffffff81307a00
#endif

#ifndef PINCTRL_GET
#define PINCTRL_GET 0xffffffff81307a40
#endif

#ifndef DEVM_PINCTRL_GET
#define DEVM_PINCTRL_GET 0xffffffff81307ed0
#endif

#ifndef PINCTRL_REGISTER
#define PINCTRL_REGISTER 0xffffffff81307f40
#endif

#ifndef GET_PINCTRL_DEV_FROM_OF_NODE
#define GET_PINCTRL_DEV_FROM_OF_NODE 0xffffffff81308420
#endif

#ifndef PIN_GET_FROM_NAME
#define PIN_GET_FROM_NAME 0xffffffff813084a0
#endif

#ifndef PIN_GET_NAME
#define PIN_GET_NAME 0xffffffff81308530
#endif

#ifndef PINCTRL_GET_GROUP_SELECTOR
#define PINCTRL_GET_GROUP_SELECTOR 0xffffffff81308700
#endif

#ifndef PINCTRL_GET_GROUP_PINS
#define PINCTRL_GET_GROUP_PINS 0xffffffff813087b0
#endif

#ifndef PINCTRL_REGISTER_MAP
#define PINCTRL_REGISTER_MAP 0xffffffff81308820
#endif

#ifndef PINCTRL_REGISTER_MAPPINGS
#define PINCTRL_REGISTER_MAPPINGS 0xffffffff81308a20
#endif

#ifndef PINCTRL_UNREGISTER_MAP
#define PINCTRL_UNREGISTER_MAP 0xffffffff81308a40
#endif

#ifndef PINCTRL_UTILS_ADD_MAP_MUX
#define PINCTRL_UTILS_ADD_MAP_MUX 0xffffffff81308ad0
#endif

#ifndef PINCTRL_UTILS_ADD_MAP_CONFIGS
#define PINCTRL_UTILS_ADD_MAP_CONFIGS 0xffffffff81308b50
#endif

#ifndef PINCTRL_UTILS_DT_FREE_MAP
#define PINCTRL_UTILS_DT_FREE_MAP 0xffffffff81308c50
#endif

#ifndef PINCTRL_UTILS_ADD_CONFIG
#define PINCTRL_UTILS_ADD_CONFIG 0xffffffff81308cc0
#endif

#ifndef PINCTRL_UTILS_RESERVE_MAP
#define PINCTRL_UTILS_RESERVE_MAP 0xffffffff81308d40
#endif

#ifndef __DEVM_GPIOD_GET_INDEX
#define __DEVM_GPIOD_GET_INDEX 0xffffffff81308e80
#endif

#ifndef __DEVM_GPIOD_GET
#define __DEVM_GPIOD_GET 0xffffffff81308f20
#endif

#ifndef __DEVM_GPIOD_GET_INDEX_OPTIONAL
#define __DEVM_GPIOD_GET_INDEX_OPTIONAL 0xffffffff81308f40
#endif

#ifndef __DEVM_GPIOD_GET_OPTIONAL
#define __DEVM_GPIOD_GET_OPTIONAL 0xffffffff81308f80
#endif

#ifndef DEVM_GET_GPIOD_FROM_CHILD
#define DEVM_GET_GPIOD_FROM_CHILD 0xffffffff81308fc0
#endif

#ifndef DEVM_GPIOD_GET_ARRAY
#define DEVM_GPIOD_GET_ARRAY 0xffffffff813090e0
#endif

#ifndef DEVM_GPIOD_GET_ARRAY_OPTIONAL
#define DEVM_GPIOD_GET_ARRAY_OPTIONAL 0xffffffff81309160
#endif

#ifndef DEVM_GPIO_REQUEST
#define DEVM_GPIO_REQUEST 0xffffffff813091c0
#endif

#ifndef DEVM_GPIO_REQUEST_ONE
#define DEVM_GPIO_REQUEST_ONE 0xffffffff81309270
#endif

#ifndef DEVM_GPIOD_PUT
#define DEVM_GPIOD_PUT 0xffffffff81309300
#endif

#ifndef DEVM_GPIOD_PUT_ARRAY
#define DEVM_GPIOD_PUT_ARRAY 0xffffffff81309350
#endif

#ifndef DEVM_GPIO_FREE
#define DEVM_GPIO_FREE 0xffffffff813093a0
#endif

#ifndef DESC_TO_GPIO
#define DESC_TO_GPIO 0xffffffff813093f0
#endif

#ifndef GPIOD_TO_CHIP
#define GPIOD_TO_CHIP 0xffffffff81309410
#endif

#ifndef GPIOD_GET_DIRECTION
#define GPIOD_GET_DIRECTION 0xffffffff81309430
#endif

#ifndef GPIOCHIP_IS_REQUESTED
#define GPIOCHIP_IS_REQUESTED 0xffffffff813094b0
#endif

#ifndef GPIOD_IS_ACTIVE_LOW
#define GPIOD_IS_ACTIVE_LOW 0xffffffff813094f0
#endif

#ifndef GPIOD_CANSLEEP
#define GPIOD_CANSLEEP 0xffffffff81309510
#endif

#ifndef GPIOD_TO_IRQ
#define GPIOD_TO_IRQ 0xffffffff81309530
#endif

#ifndef GPIOCHIP_FIND
#define GPIOCHIP_FIND 0xffffffff81309830
#endif

#ifndef GPIOD_SET_DEBOUNCE
#define GPIOD_SET_DEBOUNCE 0xffffffff81309ad0
#endif

#ifndef GPIOCHIP_REQUEST_OWN_DESC
#define GPIOCHIP_REQUEST_OWN_DESC 0xffffffff81309bb0
#endif

#ifndef GPIOCHIP_REMOVE_PIN_RANGES
#define GPIOCHIP_REMOVE_PIN_RANGES 0xffffffff81309c20
#endif

#ifndef GPIOCHIP_FREE_OWN_DESC
#define GPIOCHIP_FREE_OWN_DESC 0xffffffff81309d70
#endif

#ifndef GPIOD_COUNT
#define GPIOD_COUNT 0xffffffff81309e50
#endif

#ifndef GPIOCHIP_UNLOCK_AS_IRQ
#define GPIOCHIP_UNLOCK_AS_IRQ 0xffffffff8130a180
#endif

#ifndef GPIO_TO_DESC
#define GPIO_TO_DESC 0xffffffff8130a1b0
#endif

#ifndef GPIOCHIP_LOCK_AS_IRQ
#define GPIOCHIP_LOCK_AS_IRQ 0xffffffff8130a290
#endif

#ifndef GPIOCHIP_REMOVE
#define GPIOCHIP_REMOVE 0xffffffff8130a2f0
#endif

#ifndef GPIOCHIP_ADD
#define GPIOCHIP_ADD 0xffffffff8130a440
#endif

#ifndef GPIOD_GET_RAW_VALUE_CANSLEEP
#define GPIOD_GET_RAW_VALUE_CANSLEEP 0xffffffff8130a970
#endif

#ifndef GPIOD_GET_VALUE_CANSLEEP
#define GPIOD_GET_VALUE_CANSLEEP 0xffffffff8130a990
#endif

#ifndef GPIOD_GET_RAW_VALUE
#define GPIOD_GET_RAW_VALUE 0xffffffff8130a9c0
#endif

#ifndef GPIOD_GET_VALUE
#define GPIOD_GET_VALUE 0xffffffff8130aa10
#endif

#ifndef GPIOD_SET_RAW_VALUE_CANSLEEP
#define GPIOD_SET_RAW_VALUE_CANSLEEP 0xffffffff8130ae00
#endif

#ifndef GPIOD_SET_VALUE_CANSLEEP
#define GPIOD_SET_VALUE_CANSLEEP 0xffffffff8130ae30
#endif

#ifndef GPIOD_SET_RAW_VALUE
#define GPIOD_SET_RAW_VALUE 0xffffffff8130ae70
#endif

#ifndef GPIOD_SET_VALUE
#define GPIOD_SET_VALUE 0xffffffff8130aed0
#endif

#ifndef GPIOD_DIRECTION_INPUT
#define GPIOD_DIRECTION_INPUT 0xffffffff8130af50
#endif

#ifndef GPIOD_SET_RAW_ARRAY
#define GPIOD_SET_RAW_ARRAY 0xffffffff8130b3a0
#endif

#ifndef GPIOD_SET_ARRAY
#define GPIOD_SET_ARRAY 0xffffffff8130b3e0
#endif

#ifndef GPIOD_SET_RAW_ARRAY_CANSLEEP
#define GPIOD_SET_RAW_ARRAY_CANSLEEP 0xffffffff8130b410
#endif

#ifndef GPIOD_SET_ARRAY_CANSLEEP
#define GPIOD_SET_ARRAY_CANSLEEP 0xffffffff8130b450
#endif

#ifndef GPIOCHIP_ADD_PIN_RANGE
#define GPIOCHIP_ADD_PIN_RANGE 0xffffffff8130b490
#endif

#ifndef GPIOCHIP_ADD_PINGROUP_RANGE
#define GPIOCHIP_ADD_PINGROUP_RANGE 0xffffffff8130b5e0
#endif

#ifndef GPIOD_DIRECTION_OUTPUT_RAW
#define GPIOD_DIRECTION_OUTPUT_RAW 0xffffffff8130b910
#endif

#ifndef GPIOD_DIRECTION_OUTPUT
#define GPIOD_DIRECTION_OUTPUT 0xffffffff8130b950
#endif

#ifndef GPIOCHIP_GET_DESC
#define GPIOCHIP_GET_DESC 0xffffffff8130ba20
#endif

#ifndef GPIOD_REQUEST
#define GPIOD_REQUEST 0xffffffff8130ba50
#endif

#ifndef FWNODE_GET_NAMED_GPIOD
#define FWNODE_GET_NAMED_GPIOD 0xffffffff8130bb50
#endif

#ifndef GPIOD_FREE
#define GPIOD_FREE 0xffffffff8130bbd0
#endif

#ifndef GPIOD_PUT
#define GPIOD_PUT 0xffffffff8130bc00
#endif

#ifndef __GPIOD_GET_INDEX
#define __GPIOD_GET_INDEX 0xffffffff8130bc20
#endif

#ifndef __GPIOD_GET
#define __GPIOD_GET 0xffffffff8130bfe0
#endif

#ifndef __GPIOD_GET_INDEX_OPTIONAL
#define __GPIOD_GET_INDEX_OPTIONAL 0xffffffff8130c000
#endif

#ifndef __GPIOD_GET_OPTIONAL
#define __GPIOD_GET_OPTIONAL 0xffffffff8130c040
#endif

#ifndef GPIOD_PUT_ARRAY
#define GPIOD_PUT_ARRAY 0xffffffff8130c080
#endif

#ifndef GPIOD_GET_ARRAY
#define GPIOD_GET_ARRAY 0xffffffff8130c0d0
#endif

#ifndef GPIOD_GET_ARRAY_OPTIONAL
#define GPIOD_GET_ARRAY_OPTIONAL 0xffffffff8130c190
#endif

#ifndef GPIOD_ADD_LOOKUP_TABLE
#define GPIOD_ADD_LOOKUP_TABLE 0xffffffff8130c1d0
#endif

#ifndef GPIOD_HOG
#define GPIOD_HOG 0xffffffff8130c210
#endif

#ifndef GPIO_FREE
#define GPIO_FREE 0xffffffff8130c380
#endif

#ifndef GPIO_FREE_ARRAY
#define GPIO_FREE_ARRAY 0xffffffff8130c3a0
#endif

#ifndef GPIO_REQUEST
#define GPIO_REQUEST 0xffffffff8130c3f0
#endif

#ifndef GPIO_REQUEST_ONE
#define GPIO_REQUEST_ONE 0xffffffff8130c440
#endif

#ifndef GPIO_REQUEST_ARRAY
#define GPIO_REQUEST_ARRAY 0xffffffff8130c4f0
#endif

#ifndef ACPI_DEV_ADD_DRIVER_GPIOS
#define ACPI_DEV_ADD_DRIVER_GPIOS 0xffffffff8130c6a0
#endif

#ifndef ACPI_GPIOCHIP_REQUEST_INTERRUPTS
#define ACPI_GPIOCHIP_REQUEST_INTERRUPTS 0xffffffff8130cd80
#endif

#ifndef ACPI_GPIOCHIP_FREE_INTERRUPTS
#define ACPI_GPIOCHIP_FREE_INTERRUPTS 0xffffffff8130ce20
#endif

#ifndef ACPI_GET_GPIOD_BY_INDEX
#define ACPI_GET_GPIOD_BY_INDEX 0xffffffff8130cf30
#endif

#ifndef ACPI_GPIOCHIP_ADD
#define ACPI_GPIOCHIP_ADD 0xffffffff8130d200
#endif

#ifndef ACPI_GPIOCHIP_REMOVE
#define ACPI_GPIOCHIP_REMOVE 0xffffffff8130d350
#endif

#ifndef ACPI_GPIO_COUNT
#define ACPI_GPIO_COUNT 0xffffffff8130d4c0
#endif

#ifndef PCI_GENERIC_CONFIG_READ
#define PCI_GENERIC_CONFIG_READ 0xffffffff8130d6c0
#endif

#ifndef PCI_GENERIC_CONFIG_WRITE
#define PCI_GENERIC_CONFIG_WRITE 0xffffffff8130d740
#endif

#ifndef PCI_GENERIC_CONFIG_READ32
#define PCI_GENERIC_CONFIG_READ32 0xffffffff8130d7a0
#endif

#ifndef PCI_GENERIC_CONFIG_WRITE32
#define PCI_GENERIC_CONFIG_WRITE32 0xffffffff8130d810
#endif

#ifndef PCI_READ_VPD
#define PCI_READ_VPD 0xffffffff8130d880
#endif

#ifndef PCI_WRITE_VPD
#define PCI_WRITE_VPD 0xffffffff8130d8c0
#endif

#ifndef PCI_BUS_READ_CONFIG_BYTE
#define PCI_BUS_READ_CONFIG_BYTE 0xffffffff8130d900
#endif

#ifndef PCI_BUS_READ_CONFIG_WORD
#define PCI_BUS_READ_CONFIG_WORD 0xffffffff8130d980
#endif

#ifndef PCI_BUS_READ_CONFIG_DWORD
#define PCI_BUS_READ_CONFIG_DWORD 0xffffffff8130da10
#endif

#ifndef PCI_BUS_WRITE_CONFIG_BYTE
#define PCI_BUS_WRITE_CONFIG_BYTE 0xffffffff8130daa0
#endif

#ifndef PCI_BUS_SET_OPS
#define PCI_BUS_SET_OPS 0xffffffff8130db00
#endif

#ifndef PCI_CFG_ACCESS_TRYLOCK
#define PCI_CFG_ACCESS_TRYLOCK 0xffffffff8130db40
#endif

#ifndef PCI_CFG_ACCESS_UNLOCK
#define PCI_CFG_ACCESS_UNLOCK 0xffffffff8130dcb0
#endif

#ifndef PCI_BUS_WRITE_CONFIG_WORD
#define PCI_BUS_WRITE_CONFIG_WORD 0xffffffff8130dd90
#endif

#ifndef PCI_BUS_WRITE_CONFIG_DWORD
#define PCI_BUS_WRITE_CONFIG_DWORD 0xffffffff8130de20
#endif

#ifndef PCIE_CAPABILITY_WRITE_WORD
#define PCIE_CAPABILITY_WRITE_WORD 0xffffffff8130df00
#endif

#ifndef PCIE_CAPABILITY_WRITE_DWORD
#define PCIE_CAPABILITY_WRITE_DWORD 0xffffffff8130df80
#endif

#ifndef PCIE_CAPABILITY_READ_WORD
#define PCIE_CAPABILITY_READ_WORD 0xffffffff8130e000
#endif

#ifndef PCIE_CAPABILITY_CLEAR_AND_SET_WORD
#define PCIE_CAPABILITY_CLEAR_AND_SET_WORD 0xffffffff8130e0a0
#endif

#ifndef PCIE_CAPABILITY_READ_DWORD
#define PCIE_CAPABILITY_READ_DWORD 0xffffffff8130e0f0
#endif

#ifndef PCIE_CAPABILITY_CLEAR_AND_SET_DWORD
#define PCIE_CAPABILITY_CLEAR_AND_SET_DWORD 0xffffffff8130e190
#endif

#ifndef PCI_USER_READ_CONFIG_DWORD
#define PCI_USER_READ_CONFIG_DWORD 0xffffffff8130e2a0
#endif

#ifndef PCI_CFG_ACCESS_LOCK
#define PCI_CFG_ACCESS_LOCK 0xffffffff8130e360
#endif

#ifndef PCI_USER_WRITE_CONFIG_BYTE
#define PCI_USER_WRITE_CONFIG_BYTE 0xffffffff8130e3b0
#endif

#ifndef PCI_USER_WRITE_CONFIG_WORD
#define PCI_USER_WRITE_CONFIG_WORD 0xffffffff8130e450
#endif

#ifndef PCI_USER_WRITE_CONFIG_DWORD
#define PCI_USER_WRITE_CONFIG_DWORD 0xffffffff8130e4f0
#endif

#ifndef PCI_USER_READ_CONFIG_BYTE
#define PCI_USER_READ_CONFIG_BYTE 0xffffffff8130e590
#endif

#ifndef PCI_USER_READ_CONFIG_WORD
#define PCI_USER_READ_CONFIG_WORD 0xffffffff8130e650
#endif

#ifndef PCI_VPD_PCI22_INIT
#define PCI_VPD_PCI22_INIT 0xffffffff8130eaf0
#endif

#ifndef PCIE_CAP_HAS_LNKCTL
#define PCIE_CAP_HAS_LNKCTL 0xffffffff8130ebf0
#endif

#ifndef PCI_ADD_RESOURCE_OFFSET
#define PCI_ADD_RESOURCE_OFFSET 0xffffffff8130ec20
#endif

#ifndef PCI_ADD_RESOURCE
#define PCI_ADD_RESOURCE 0xffffffff8130ec70
#endif

#ifndef PCI_FREE_RESOURCE_LIST
#define PCI_FREE_RESOURCE_LIST 0xffffffff8130ec90
#endif

#ifndef PCI_BUS_ADD_DEVICE
#define PCI_BUS_ADD_DEVICE 0xffffffff8130ecb0
#endif

#ifndef PCI_WALK_BUS
#define PCI_WALK_BUS 0xffffffff8130ed20
#endif

#ifndef PCI_BUS_GET
#define PCI_BUS_GET 0xffffffff8130edc0
#endif

#ifndef PCI_BUS_PUT
#define PCI_BUS_PUT 0xffffffff8130ede0
#endif

#ifndef PCI_BUS_RESOURCE_N
#define PCI_BUS_RESOURCE_N 0xffffffff8130ee60
#endif

#ifndef PCI_BUS_ALLOC_RESOURCE
#define PCI_BUS_ALLOC_RESOURCE 0xffffffff8130f030
#endif

#ifndef PCI_BUS_ADD_DEVICES
#define PCI_BUS_ADD_DEVICES 0xffffffff8130f0f0
#endif

#ifndef PCI_BUS_ADD_RESOURCE
#define PCI_BUS_ADD_RESOURCE 0xffffffff8130f170
#endif

#ifndef PCI_BUS_REMOVE_RESOURCES
#define PCI_BUS_REMOVE_RESOURCES 0xffffffff8130f1e0
#endif

#ifndef PCI_BUS_CLIP_RESOURCE
#define PCI_BUS_CLIP_RESOURCE 0xffffffff8130f260
#endif

#ifndef PCIE_UPDATE_LINK_SPEED
#define PCIE_UPDATE_LINK_SPEED 0xffffffff8130f3e0
#endif

#ifndef NO_PCI_DEVICES
#define NO_PCI_DEVICES 0xffffffff8130f400
#endif

#ifndef PCI_BUS_READ_DEV_VENDOR_ID
#define PCI_BUS_READ_DEV_VENDOR_ID 0xffffffff8130f4d0
#endif

#ifndef PCI_LOCK_RESCAN_REMOVE
#define PCI_LOCK_RESCAN_REMOVE 0xffffffff8130f960
#endif

#ifndef PCI_UNLOCK_RESCAN_REMOVE
#define PCI_UNLOCK_RESCAN_REMOVE 0xffffffff8130f980
#endif

#ifndef PCI_ALLOC_DEV
#define PCI_ALLOC_DEV 0xffffffff8130fd90
#endif

#ifndef PCIE_BUS_CONFIGURE_SETTINGS
#define PCIE_BUS_CONFIGURE_SETTINGS 0xffffffff8130fdf0
#endif

#ifndef __PCI_READ_BASE
#define __PCI_READ_BASE 0xffffffff8130fe90
#endif

#ifndef PCI_READ_BRIDGE_BASES
#define PCI_READ_BRIDGE_BASES 0xffffffff81310350
#endif

#ifndef SET_PCIE_PORT_TYPE
#define SET_PCIE_PORT_TYPE 0xffffffff81310770
#endif

#ifndef SET_PCIE_HOTPLUG_BRIDGE
#define SET_PCIE_HOTPLUG_BRIDGE 0xffffffff813107f0
#endif

#ifndef PCI_CFG_SPACE_SIZE
#define PCI_CFG_SPACE_SIZE 0xffffffff81310820
#endif

#ifndef PCI_SETUP_DEVICE
#define PCI_SETUP_DEVICE 0xffffffff81310890
#endif

#ifndef PCI_DEVICE_ADD
#define PCI_DEVICE_ADD 0xffffffff81310d40
#endif

#ifndef PCI_SCAN_SINGLE_DEVICE
#define PCI_SCAN_SINGLE_DEVICE 0xffffffff81310ea0
#endif

#ifndef PCI_SCAN_SLOT
#define PCI_SCAN_SLOT 0xffffffff81310f60
#endif

#ifndef PCI_ADD_NEW_BUS
#define PCI_ADD_NEW_BUS 0xffffffff81311090
#endif

#ifndef PCI_BUS_INSERT_BUSN_RES
#define PCI_BUS_INSERT_BUSN_RES 0xffffffff81311490
#endif

#ifndef PCI_CREATE_ROOT_BUS
#define PCI_CREATE_ROOT_BUS 0xffffffff81311610
#endif

#ifndef PCI_BUS_UPDATE_BUSN_RES_END
#define PCI_BUS_UPDATE_BUSN_RES_END 0xffffffff81311a70
#endif

#ifndef PCI_SCAN_BRIDGE
#define PCI_SCAN_BRIDGE 0xffffffff81311ba0
#endif

#ifndef PCI_SCAN_CHILD_BUS
#define PCI_SCAN_CHILD_BUS 0xffffffff81312220
#endif

#ifndef PCI_SCAN_BUS_PARENTED
#define PCI_SCAN_BUS_PARENTED 0xffffffff81312380
#endif

#ifndef PCI_SCAN_BUS
#define PCI_SCAN_BUS 0xffffffff81312420
#endif

#ifndef PCI_RESCAN_BUS
#define PCI_RESCAN_BUS 0xffffffff813124c0
#endif

#ifndef PCI_SCAN_ROOT_BUS
#define PCI_SCAN_ROOT_BUS 0xffffffff813124f0
#endif

#ifndef PCI_BUS_RELEASE_BUSN_RES
#define PCI_BUS_RELEASE_BUSN_RES 0xffffffff813125b0
#endif

#ifndef PCI_RESCAN_BUS_BRIDGE_RESIZE
#define PCI_RESCAN_BUS_BRIDGE_RESIZE 0xffffffff81312630
#endif

#ifndef PCIBIOS_RESOURCE_TO_BUS
#define PCIBIOS_RESOURCE_TO_BUS 0xffffffff81312670
#endif

#ifndef PCIBIOS_BUS_TO_RESOURCE
#define PCIBIOS_BUS_TO_RESOURCE 0xffffffff81312720
#endif

#ifndef PCI_FIND_HOST_BRIDGE
#define PCI_FIND_HOST_BRIDGE 0xffffffff813127e0
#endif

#ifndef PCI_GET_HOST_BRIDGE_DEVICE
#define PCI_GET_HOST_BRIDGE_DEVICE 0xffffffff81312810
#endif

#ifndef PCI_PUT_HOST_BRIDGE_DEVICE
#define PCI_PUT_HOST_BRIDGE_DEVICE 0xffffffff81312850
#endif

#ifndef PCI_SET_HOST_BRIDGE_RELEASE
#define PCI_SET_HOST_BRIDGE_RELEASE 0xffffffff81312870
#endif

#ifndef PCI_REMOVE_BUS
#define PCI_REMOVE_BUS 0xffffffff81312890
#endif

#ifndef PCI_STOP_AND_REMOVE_BUS_DEVICE
#define PCI_STOP_AND_REMOVE_BUS_DEVICE 0xffffffff81312ac0
#endif

#ifndef PCI_STOP_AND_REMOVE_BUS_DEVICE_LOCKED
#define PCI_STOP_AND_REMOVE_BUS_DEVICE_LOCKED 0xffffffff81312ae0
#endif

#ifndef PCI_STOP_ROOT_BUS
#define PCI_STOP_ROOT_BUS 0xffffffff81312b10
#endif

#ifndef PCI_REMOVE_ROOT_BUS
#define PCI_REMOVE_ROOT_BUS 0xffffffff81312b60
#endif

#ifndef PCI_BUS_MAX_BUSNR
#define PCI_BUS_MAX_BUSNR 0xffffffff81312bd0
#endif

#ifndef PCI_PME_CAPABLE
#define PCI_PME_CAPABLE 0xffffffff81312c20
#endif

#ifndef PCI_DEV_RUN_WAKE
#define PCI_DEV_RUN_WAKE 0xffffffff81312cf0
#endif

#ifndef PCI_SET_DMA_MAX_SEG_SIZE
#define PCI_SET_DMA_MAX_SEG_SIZE 0xffffffff81312d60
#endif

#ifndef PCI_SET_DMA_SEG_BOUNDARY
#define PCI_SET_DMA_SEG_BOUNDARY 0xffffffff81312d80
#endif

#ifndef PCI_SELECT_BARS
#define PCI_SELECT_BARS 0xffffffff81312e00
#endif

#ifndef PCI_IGNORE_HOTPLUG
#define PCI_IGNORE_HOTPLUG 0xffffffff81312e40
#endif

#ifndef PCI_IOREMAP_BAR
#define PCI_IOREMAP_BAR 0xffffffff81312e70
#endif

#ifndef PCI_FIND_NEXT_CAPABILITY
#define PCI_FIND_NEXT_CAPABILITY 0xffffffff81312fa0
#endif

#ifndef PCI_FIND_NEXT_HT_CAPABILITY
#define PCI_FIND_NEXT_HT_CAPABILITY 0xffffffff81313090
#endif

#ifndef PCI_FIND_PARENT_RESOURCE
#define PCI_FIND_PARENT_RESOURCE 0xffffffff813130b0
#endif

#ifndef PCI_CLEAR_MWI
#define PCI_CLEAR_MWI 0xffffffff81313150
#endif

#ifndef PCI_CHOOSE_STATE
#define PCI_CHOOSE_STATE 0xffffffff813133f0
#endif

#ifndef PCIE_GET_READRQ
#define PCIE_GET_READRQ 0xffffffff81313480
#endif

#ifndef PCIE_GET_MPS
#define PCIE_GET_MPS 0xffffffff813134c0
#endif

#ifndef PCIE_GET_MINIMUM_LINK
#define PCIE_GET_MINIMUM_LINK 0xffffffff81313500
#endif

#ifndef PCI_CLEAR_MASTER
#define PCI_CLEAR_MASTER 0xffffffff81313670
#endif

#ifndef PCI_LOAD_SAVED_STATE
#define PCI_LOAD_SAVED_STATE 0xffffffff81313750
#endif

#ifndef PCI_LOAD_AND_FREE_SAVED_STATE
#define PCI_LOAD_AND_FREE_SAVED_STATE 0xffffffff81313850
#endif

#ifndef PCI_INTX
#define PCI_INTX 0xffffffff813138c0
#endif

#ifndef PCIM_PIN_DEVICE
#define PCIM_PIN_DEVICE 0xffffffff81313950
#endif

#ifndef PCI_PME_ACTIVE
#define PCI_PME_ACTIVE 0xffffffff813139a0
#endif

#ifndef __PCI_ENABLE_WAKE
#define __PCI_ENABLE_WAKE 0xffffffff81313bc0
#endif

#ifndef PCIE_SET_READRQ
#define PCIE_SET_READRQ 0xffffffff81313d00
#endif

#ifndef PCIE_SET_MPS
#define PCIE_SET_MPS 0xffffffff81313da0
#endif

#ifndef PCI_RELEASE_REGION
#define PCI_RELEASE_REGION 0xffffffff81313e10
#endif

#ifndef PCI_RELEASE_SELECTED_REGIONS
#define PCI_RELEASE_SELECTED_REGIONS 0xffffffff81313ee0
#endif

#ifndef PCI_RELEASE_REGIONS
#define PCI_RELEASE_REGIONS 0xffffffff81313f20
#endif

#ifndef PCI_REQUEST_REGION
#define PCI_REQUEST_REGION 0xffffffff81314060
#endif

#ifndef PCI_REQUEST_REGION_EXCLUSIVE
#define PCI_REQUEST_REGION_EXCLUSIVE 0xffffffff81314080
#endif

#ifndef PCI_REQUEST_SELECTED_REGIONS
#define PCI_REQUEST_SELECTED_REGIONS 0xffffffff81314120
#endif

#ifndef PCI_REQUEST_REGIONS
#define PCI_REQUEST_REGIONS 0xffffffff81314140
#endif

#ifndef PCI_REQUEST_SELECTED_REGIONS_EXCLUSIVE
#define PCI_REQUEST_SELECTED_REGIONS_EXCLUSIVE 0xffffffff81314160
#endif

#ifndef PCI_REQUEST_REGIONS_EXCLUSIVE
#define PCI_REQUEST_REGIONS_EXCLUSIVE 0xffffffff81314180
#endif

#ifndef PCI_SET_CACHELINE_SIZE
#define PCI_SET_CACHELINE_SIZE 0xffffffff813141a0
#endif

#ifndef PCI_CHECK_AND_MASK_INTX
#define PCI_CHECK_AND_MASK_INTX 0xffffffff81314470
#endif

#ifndef PCI_CHECK_AND_UNMASK_INTX
#define PCI_CHECK_AND_UNMASK_INTX 0xffffffff81314490
#endif

#ifndef PCI_PROBE_RESET_SLOT
#define PCI_PROBE_RESET_SLOT 0xffffffff81314640
#endif

#ifndef PCI_DEVICE_IS_PRESENT
#define PCI_DEVICE_IS_PRESENT 0xffffffff81314660
#endif

#ifndef PCI_FIND_CAPABILITY
#define PCI_FIND_CAPABILITY 0xffffffff81314750
#endif

#ifndef PCIX_GET_MMRBC
#define PCIX_GET_MMRBC 0xffffffff813147a0
#endif

#ifndef PCIX_GET_MAX_MMRBC
#define PCIX_GET_MAX_MMRBC 0xffffffff81314800
#endif

#ifndef PCI_MSI_OFF
#define PCI_MSI_OFF 0xffffffff81314860
#endif

#ifndef PCIX_SET_MMRBC
#define PCIX_SET_MMRBC 0xffffffff81314910
#endif

#ifndef PCI_BUS_FIND_CAPABILITY
#define PCI_BUS_FIND_CAPABILITY 0xffffffff81314a50
#endif

#ifndef PCI_FIND_HT_CAPABILITY
#define PCI_FIND_HT_CAPABILITY 0xffffffff81314ac0
#endif

#ifndef PCI_FIND_NEXT_EXT_CAPABILITY
#define PCI_FIND_NEXT_EXT_CAPABILITY 0xffffffff81314bc0
#endif

#ifndef PCI_WAKE_FROM_D3
#define PCI_WAKE_FROM_D3 0xffffffff81314bf0
#endif

#ifndef PCI_SET_MWI
#define PCI_SET_MWI 0xffffffff81314c30
#endif

#ifndef PCI_TRY_SET_MWI
#define PCI_TRY_SET_MWI 0xffffffff81314cd0
#endif

#ifndef PCI_INTX_MASK_SUPPORTED
#define PCI_INTX_MASK_SUPPORTED 0xffffffff81314cf0
#endif

#ifndef PCI_SAVE_STATE
#define PCI_SAVE_STATE 0xffffffff81314ef0
#endif

#ifndef PCI_RESTORE_STATE
#define PCI_RESTORE_STATE 0xffffffff81315270
#endif

#ifndef PCI_STORE_SAVED_STATE
#define PCI_STORE_SAVED_STATE 0xffffffff813153f0
#endif

#ifndef PCI_FIND_EXT_CAPABILITY
#define PCI_FIND_EXT_CAPABILITY 0xffffffff813154f0
#endif

#ifndef PCI_WAIT_FOR_PENDING
#define PCI_WAIT_FOR_PENDING 0xffffffff81315670
#endif

#ifndef PCI_WAIT_FOR_PENDING_TRANSACTION
#define PCI_WAIT_FOR_PENDING_TRANSACTION 0xffffffff81315720
#endif

#ifndef PCI_SET_PLATFORM_PM
#define PCI_SET_PLATFORM_PM 0xffffffff81315760
#endif

#ifndef PCI_UPDATE_CURRENT_STATE
#define PCI_UPDATE_CURRENT_STATE 0xffffffff813157a0
#endif

#ifndef __PCI_COMPLETE_POWER_TRANSITION
#define __PCI_COMPLETE_POWER_TRANSITION 0xffffffff81315880
#endif

#ifndef PCI_SET_POWER_STATE
#define PCI_SET_POWER_STATE 0xffffffff813158e0
#endif

#ifndef PCI_PREPARE_TO_SLEEP
#define PCI_PREPARE_TO_SLEEP 0xffffffff813159f0
#endif

#ifndef PCI_BACK_FROM_SLEEP
#define PCI_BACK_FROM_SLEEP 0xffffffff81315a80
#endif

#ifndef PCI_RESET_SLOT
#define PCI_RESET_SLOT 0xffffffff81315bc0
#endif

#ifndef PCI_TRY_RESET_SLOT
#define PCI_TRY_RESET_SLOT 0xffffffff81315c10
#endif

#ifndef PCI_POWER_UP
#define PCI_POWER_UP 0xffffffff81315d50
#endif

#ifndef PCI_FIND_SAVED_CAP
#define PCI_FIND_SAVED_CAP 0xffffffff81315da0
#endif

#ifndef PCI_FIND_SAVED_EXT_CAP
#define PCI_FIND_SAVED_EXT_CAP 0xffffffff81315df0
#endif

#ifndef PCI_REENABLE_DEVICE
#define PCI_REENABLE_DEVICE 0xffffffff81315f40
#endif

#ifndef PCI_DISABLE_DEVICE
#define PCI_DISABLE_DEVICE 0xffffffff81316000
#endif

#ifndef PCI_DISABLE_ENABLED_DEVICE
#define PCI_DISABLE_ENABLED_DEVICE 0xffffffff813161a0
#endif

#ifndef PCI_SET_PCIE_RESET_STATE
#define PCI_SET_PCIE_RESET_STATE 0xffffffff813161e0
#endif

#ifndef PCI_CHECK_PME_STATUS
#define PCI_CHECK_PME_STATUS 0xffffffff81316200
#endif

#ifndef PCI_PME_WAKEUP_BUS
#define PCI_PME_WAKEUP_BUS 0xffffffff813163e0
#endif

#ifndef PCI_FINISH_RUNTIME_SUSPEND
#define PCI_FINISH_RUNTIME_SUSPEND 0xffffffff81316410
#endif

#ifndef PCI_DEV_KEEP_SUSPENDED
#define PCI_DEV_KEEP_SUSPENDED 0xffffffff813164a0
#endif

#ifndef PCI_CONFIG_PM_RUNTIME_GET
#define PCI_CONFIG_PM_RUNTIME_GET 0xffffffff81316500
#endif

#ifndef PCI_CONFIG_PM_RUNTIME_PUT
#define PCI_CONFIG_PM_RUNTIME_PUT 0xffffffff81316560
#endif

#ifndef PCI_PM_INIT
#define PCI_PM_INIT 0xffffffff813165a0
#endif

#ifndef PCI_ADD_CAP_SAVE_BUFFER
#define PCI_ADD_CAP_SAVE_BUFFER 0xffffffff813167d0
#endif

#ifndef PCI_ADD_EXT_CAP_SAVE_BUFFER
#define PCI_ADD_EXT_CAP_SAVE_BUFFER 0xffffffff813167f0
#endif

#ifndef PCI_ALLOCATE_CAP_SAVE_BUFFERS
#define PCI_ALLOCATE_CAP_SAVE_BUFFERS 0xffffffff81316810
#endif

#ifndef PCI_FREE_CAP_SAVE_BUFFERS
#define PCI_FREE_CAP_SAVE_BUFFERS 0xffffffff81316880
#endif

#ifndef PCI_CONFIGURE_ARI
#define PCI_CONFIGURE_ARI 0xffffffff813168b0
#endif

#ifndef PCI_REQUEST_ACS
#define PCI_REQUEST_ACS 0xffffffff81316960
#endif

#ifndef PCI_ENABLE_ACS
#define PCI_ENABLE_ACS 0xffffffff81316970
#endif

#ifndef PCI_ACS_ENABLED
#define PCI_ACS_ENABLED 0xffffffff81316a10
#endif

#ifndef PCI_ACS_PATH_ENABLED
#define PCI_ACS_PATH_ENABLED 0xffffffff81316ad0
#endif

#ifndef PCI_SWIZZLE_INTERRUPT_PIN
#define PCI_SWIZZLE_INTERRUPT_PIN 0xffffffff81316b30
#endif

#ifndef PCI_COMMON_SWIZZLE
#define PCI_COMMON_SWIZZLE 0xffffffff81316b80
#endif

#ifndef PCI_GET_INTERRUPT_PIN
#define PCI_GET_INTERRUPT_PIN 0xffffffff81316bd0
#endif

#ifndef PCI_SET_MASTER
#define PCI_SET_MASTER 0xffffffff81316cf0
#endif

#ifndef PCI_ENABLE_DEVICE_IO
#define PCI_ENABLE_DEVICE_IO 0xffffffff81316ec0
#endif

#ifndef PCI_ENABLE_DEVICE_MEM
#define PCI_ENABLE_DEVICE_MEM 0xffffffff81316ee0
#endif

#ifndef PCI_ENABLE_DEVICE
#define PCI_ENABLE_DEVICE 0xffffffff81316f00
#endif

#ifndef PCIM_ENABLE_DEVICE
#define PCIM_ENABLE_DEVICE 0xffffffff81316f20
#endif

#ifndef PCI_RESET_SECONDARY_BUS
#define PCI_RESET_SECONDARY_BUS 0xffffffff81316fc0
#endif

#ifndef PCI_RESET_BRIDGE_SECONDARY_BUS
#define PCI_RESET_BRIDGE_SECONDARY_BUS 0xffffffff81317060
#endif

#ifndef __PCI_RESET_FUNCTION_LOCKED
#define __PCI_RESET_FUNCTION_LOCKED 0xffffffff81317390
#endif

#ifndef PCI_TRY_RESET_FUNCTION
#define PCI_TRY_RESET_FUNCTION 0xffffffff813173b0
#endif

#ifndef __PCI_RESET_FUNCTION
#define __PCI_RESET_FUNCTION 0xffffffff81317430
#endif

#ifndef PCI_RESET_FUNCTION
#define PCI_RESET_FUNCTION 0xffffffff81317480
#endif

#ifndef PCI_PROBE_RESET_BUS
#define PCI_PROBE_RESET_BUS 0xffffffff81317550
#endif

#ifndef PCI_RESET_BUS
#define PCI_RESET_BUS 0xffffffff81317570
#endif

#ifndef PCI_TRY_RESET_BUS
#define PCI_TRY_RESET_BUS 0xffffffff813175c0
#endif

#ifndef PCI_PROBE_RESET_FUNCTION
#define PCI_PROBE_RESET_FUNCTION 0xffffffff81317640
#endif

#ifndef PCI_RESOURCE_BAR
#define PCI_RESOURCE_BAR 0xffffffff81317660
#endif

#ifndef PCI_SET_VGA_STATE
#define PCI_SET_VGA_STATE 0xffffffff813176d0
#endif

#ifndef PCI_REASSIGNDEV_RESOURCE_ALIGNMENT
#define PCI_REASSIGNDEV_RESOURCE_ALIGNMENT 0xffffffff81317840
#endif

#ifndef PCI_GET_NEW_DOMAIN_NR
#define PCI_GET_NEW_DOMAIN_NR 0xffffffff81317b60
#endif

#ifndef __PCI_REGISTER_DRIVER
#define __PCI_REGISTER_DRIVER 0xffffffff81317bf0
#endif

#ifndef PCI_UNREGISTER_DRIVER
#define PCI_UNREGISTER_DRIVER 0xffffffff81317c40
#endif

#ifndef PCI_DEV_GET
#define PCI_DEV_GET 0xffffffff81317cd0
#endif

#ifndef PCI_DEV_PUT
#define PCI_DEV_PUT 0xffffffff81317cf0
#endif

#ifndef PCI_DEV_DRIVER
#define PCI_DEV_DRIVER 0xffffffff81318640
#endif

#ifndef PCI_ADD_DYNID
#define PCI_ADD_DYNID 0xffffffff813191e0
#endif

#ifndef PCI_MATCH_ID
#define PCI_MATCH_ID 0xffffffff81319380
#endif

#ifndef PCI_FIND_NEXT_BUS
#define PCI_FIND_NEXT_BUS 0xffffffff813198e0
#endif

#ifndef PCI_FIND_BUS
#define PCI_FIND_BUS 0xffffffff81319960
#endif

#ifndef PCI_GET_SLOT
#define PCI_GET_SLOT 0xffffffff813199c0
#endif

#ifndef PCI_GET_SUBSYS
#define PCI_GET_SUBSYS 0xffffffff81319ae0
#endif

#ifndef PCI_GET_DEVICE
#define PCI_GET_DEVICE 0xffffffff81319b20
#endif

#ifndef PCI_GET_DOMAIN_BUS_AND_SLOT
#define PCI_GET_DOMAIN_BUS_AND_SLOT 0xffffffff81319b70
#endif

#ifndef PCI_GET_CLASS
#define PCI_GET_CLASS 0xffffffff81319bd0
#endif

#ifndef PCI_DEV_PRESENT
#define PCI_DEV_PRESENT 0xffffffff81319c20
#endif

#ifndef PCI_FOR_EACH_DMA_ALIAS
#define PCI_FOR_EACH_DMA_ALIAS 0xffffffff81319ca0
#endif

#ifndef PCI_MMAP_FITS
#define PCI_MMAP_FITS 0xffffffff8131b430
#endif

#ifndef PCI_CREATE_SYSFS_DEV_FILES
#define PCI_CREATE_SYSFS_DEV_FILES 0xffffffff8131b6c0
#endif

#ifndef PCI_REMOVE_SYSFS_DEV_FILES
#define PCI_REMOVE_SYSFS_DEV_FILES 0xffffffff8131ba20
#endif

#ifndef PCI_PLATFORM_ROM
#define PCI_PLATFORM_ROM 0xffffffff8131bb50
#endif

#ifndef PCI_ENABLE_ROM
#define PCI_ENABLE_ROM 0xffffffff8131bb90
#endif

#ifndef PCI_DISABLE_ROM
#define PCI_DISABLE_ROM 0xffffffff8131bc10
#endif

#ifndef PCI_UNMAP_ROM
#define PCI_UNMAP_ROM 0xffffffff8131bc60
#endif

#ifndef PCI_GET_ROM_SIZE
#define PCI_GET_ROM_SIZE 0xffffffff8131bca0
#endif

#ifndef PCI_MAP_ROM
#define PCI_MAP_ROM 0xffffffff8131bd50
#endif

#ifndef PCI_CLEANUP_ROM
#define PCI_CLEANUP_ROM 0xffffffff8131bec0
#endif

#ifndef PCI_CLAIM_RESOURCE
#define PCI_CLAIM_RESOURCE 0xffffffff8131bf10
#endif

#ifndef PCI_UPDATE_RESOURCE
#define PCI_UPDATE_RESOURCE 0xffffffff8131c150
#endif

#ifndef PCI_DISABLE_BRIDGE_WINDOW
#define PCI_DISABLE_BRIDGE_WINDOW 0xffffffff8131c380
#endif

#ifndef PCI_ASSIGN_RESOURCE
#define PCI_ASSIGN_RESOURCE 0xffffffff8131c410
#endif

#ifndef PCI_REASSIGN_RESOURCE
#define PCI_REASSIGN_RESOURCE 0xffffffff8131c6f0
#endif

#ifndef PCI_ENABLE_RESOURCES
#define PCI_ENABLE_RESOURCES 0xffffffff8131c840
#endif

#ifndef PCI_LOST_INTERRUPT
#define PCI_LOST_INTERRUPT 0xffffffff8131ca50
#endif

#ifndef PCI_VPD_FIND_TAG
#define PCI_VPD_FIND_TAG 0xffffffff8131caf0
#endif

#ifndef PCI_VPD_FIND_INFO_KEYWORD
#define PCI_VPD_FIND_INFO_KEYWORD 0xffffffff8131cb70
#endif

#ifndef PCI_SETUP_CARDBUS
#define PCI_SETUP_CARDBUS 0xffffffff8131cc80
#endif

#ifndef PCI_SETUP_BRIDGE
#define PCI_SETUP_BRIDGE 0xffffffff8131df70
#endif

#ifndef PCI_CLAIM_BRIDGE_RESOURCE
#define PCI_CLAIM_BRIDGE_RESOURCE 0xffffffff8131df90
#endif

#ifndef PCI_CARDBUS_RESOURCE_ALIGNMENT
#define PCI_CARDBUS_RESOURCE_ALIGNMENT 0xffffffff8131e690
#endif

#ifndef __PCI_BUS_SIZE_BRIDGES
#define __PCI_BUS_SIZE_BRIDGES 0xffffffff8131e6c0
#endif

#ifndef PCI_BUS_SIZE_BRIDGES
#define PCI_BUS_SIZE_BRIDGES 0xffffffff8131f0c0
#endif

#ifndef __PCI_BUS_ASSIGN_RESOURCES
#define __PCI_BUS_ASSIGN_RESOURCES 0xffffffff8131f0e0
#endif

#ifndef PCI_BUS_ASSIGN_RESOURCES
#define PCI_BUS_ASSIGN_RESOURCES 0xffffffff8131f1e0
#endif

#ifndef PCI_ASSIGN_UNASSIGNED_BRIDGE_RESOURCES
#define PCI_ASSIGN_UNASSIGNED_BRIDGE_RESOURCES 0xffffffff8131f200
#endif

#ifndef PCI_ASSIGN_UNASSIGNED_BUS_RESOURCES
#define PCI_ASSIGN_UNASSIGNED_BUS_RESOURCES 0xffffffff8131f410
#endif

#ifndef PCI_ASSIGN_UNASSIGNED_ROOT_BUS_RESOURCES
#define PCI_ASSIGN_UNASSIGNED_ROOT_BUS_RESOURCES 0xffffffff8131f4b0
#endif

#ifndef PCI_SAVE_VC_STATE
#define PCI_SAVE_VC_STATE 0xffffffff8131ff10
#endif

#ifndef PCI_RESTORE_VC_STATE
#define PCI_RESTORE_VC_STATE 0xffffffff8131fff0
#endif

#ifndef PCI_ALLOCATE_VC_SAVE_BUFFERS
#define PCI_ALLOCATE_VC_SAVE_BUFFERS 0xffffffff81320060
#endif

#ifndef PCI_PROC_ATTACH_DEVICE
#define PCI_PROC_ATTACH_DEVICE 0xffffffff813209b0
#endif

#ifndef PCI_PROC_DETACH_DEVICE
#define PCI_PROC_DETACH_DEVICE 0xffffffff81320b00
#endif

#ifndef PCI_PROC_DETACH_BUS
#define PCI_PROC_DETACH_BUS 0xffffffff81320b20
#endif

#ifndef PCI_DESTROY_SLOT
#define PCI_DESTROY_SLOT 0xffffffff81320c90
#endif

#ifndef PCI_HP_CREATE_MODULE_LINK
#define PCI_HP_CREATE_MODULE_LINK 0xffffffff81320e80
#endif

#ifndef PCI_HP_REMOVE_MODULE_LINK
#define PCI_HP_REMOVE_MODULE_LINK 0xffffffff81320f20
#endif

#ifndef PCI_CREATE_SLOT
#define PCI_CREATE_SLOT 0xffffffff81320ff0
#endif

#ifndef PCI_FIXUP_DEVICE
#define PCI_FIXUP_DEVICE 0xffffffff813236a0
#endif

#ifndef PCI_DEV_SPECIFIC_RESET
#define PCI_DEV_SPECIFIC_RESET 0xffffffff81325410
#endif

#ifndef PCI_DEV_SPECIFIC_ACS_ENABLED
#define PCI_DEV_SPECIFIC_ACS_ENABLED 0xffffffff81325480
#endif

#ifndef PCI_DEV_SPECIFIC_ENABLE_ACS
#define PCI_DEV_SPECIFIC_ENABLE_ACS 0xffffffff813254f0
#endif

#ifndef PCIE_ASPM_SUPPORT_ENABLED
#define PCIE_ASPM_SUPPORT_ENABLED 0xffffffff81325550
#endif

#ifndef PCI_DISABLE_LINK_STATE
#define PCI_DISABLE_LINK_STATE 0xffffffff81325cc0
#endif

#ifndef PCI_DISABLE_LINK_STATE_LOCKED
#define PCI_DISABLE_LINK_STATE_LOCKED 0xffffffff81325ce0
#endif

#ifndef PCIE_ASPM_INIT_LINK_STATE
#define PCIE_ASPM_INIT_LINK_STATE 0xffffffff81325d00
#endif

#ifndef PCIE_ASPM_EXIT_LINK_STATE
#define PCIE_ASPM_EXIT_LINK_STATE 0xffffffff81326520
#endif

#ifndef PCIE_ASPM_PM_STATE_CHANGE
#define PCIE_ASPM_PM_STATE_CHANGE 0xffffffff81326640
#endif

#ifndef PCIE_ASPM_POWERSAVE_CONFIG_LINK
#define PCIE_ASPM_POWERSAVE_CONFIG_LINK 0xffffffff813266c0
#endif

#ifndef PCIE_NO_ASPM
#define PCIE_NO_ASPM 0xffffffff81326770
#endif

#ifndef PCIE_PORT_SERVICE_REGISTER
#define PCIE_PORT_SERVICE_REGISTER 0xffffffff81326840
#endif

#ifndef PCIE_PORT_SERVICE_UNREGISTER
#define PCIE_PORT_SERVICE_UNREGISTER 0xffffffff81326980
#endif

#ifndef PCIE_PORT_DEVICE_REGISTER
#define PCIE_PORT_DEVICE_REGISTER 0xffffffff81326a20
#endif

#ifndef PCIE_PORT_DEVICE_SUSPEND
#define PCIE_PORT_DEVICE_SUSPEND 0xffffffff81326f70
#endif

#ifndef PCIE_PORT_DEVICE_RESUME
#define PCIE_PORT_DEVICE_RESUME 0xffffffff81326f90
#endif

#ifndef PCIE_PORT_DEVICE_REMOVE
#define PCIE_PORT_DEVICE_REMOVE 0xffffffff81326fb0
#endif

#ifndef PCIE_CLEAR_ROOT_PME_STATUS
#define PCIE_CLEAR_ROOT_PME_STATUS 0xffffffff813273e0
#endif

#ifndef PCIE_PORT_BUS_REGISTER
#define PCIE_PORT_BUS_REGISTER 0xffffffff81327450
#endif

#ifndef PCIE_PORT_BUS_UNREGISTER
#define PCIE_PORT_BUS_UNREGISTER 0xffffffff81327470
#endif

#ifndef PCIE_PORT_ACPI_SETUP
#define PCIE_PORT_ACPI_SETUP 0xffffffff81327490
#endif

#ifndef CPER_SEVERITY_TO_AER
#define CPER_SEVERITY_TO_AER 0xffffffff81327560
#endif

#ifndef AER_PRINT_ERROR
#define AER_PRINT_ERROR 0xffffffff81327580
#endif

#ifndef AER_PRINT_PORT_INFO
#define AER_PRINT_PORT_INFO 0xffffffff81327880
#endif

#ifndef CPER_PRINT_AER
#define CPER_PRINT_AER 0xffffffff813278d0
#endif

#ifndef PCI_ENABLE_PCIE_ERROR_REPORTING
#define PCI_ENABLE_PCIE_ERROR_REPORTING 0xffffffff81327ba0
#endif

#ifndef PCI_DISABLE_PCIE_ERROR_REPORTING
#define PCI_DISABLE_PCIE_ERROR_REPORTING 0xffffffff81327bf0
#endif

#ifndef PCI_CLEANUP_AER_UNCORRECT_ERROR_STATUS
#define PCI_CLEANUP_AER_UNCORRECT_ERROR_STATUS 0xffffffff81327da0
#endif

#ifndef AER_RECOVER_QUEUE
#define AER_RECOVER_QUEUE 0xffffffff81328270
#endif

#ifndef AER_ISR
#define AER_ISR 0xffffffff81328780
#endif

#ifndef AER_INIT
#define AER_INIT 0xffffffff81328be0
#endif

#ifndef AER_IRQ
#define AER_IRQ 0xffffffff81328c40
#endif

#ifndef PCI_NO_AER
#define PCI_NO_AER 0xffffffff81329380
#endif

#ifndef PCI_AER_AVAILABLE
#define PCI_AER_AVAILABLE 0xffffffff81329390
#endif

#ifndef PCIE_AER_GET_FIRMWARE_FIRST
#define PCIE_AER_GET_FIRMWARE_FIRST 0xffffffff81329490
#endif

#ifndef AER_ACPI_FIRMWARE_FIRST
#define AER_ACPI_FIRMWARE_FIRST 0xffffffff81329540
#endif

#ifndef PCIE_PME_INTERRUPT_ENABLE
#define PCIE_PME_INTERRUPT_ENABLE 0xffffffff81329760
#endif

#ifndef __PCI_HP_REGISTER
#define __PCI_HP_REGISTER 0xffffffff8132a390
#endif

#ifndef PCI_HP_DEREGISTER
#define PCI_HP_DEREGISTER 0xffffffff8132a7a0
#endif

#ifndef PCI_HP_CHANGE_SLOT_INFO
#define PCI_HP_CHANGE_SLOT_INFO 0xffffffff8132aa00
#endif

#ifndef CPCI_HP_UNREGISTER_BUS
#define CPCI_HP_UNREGISTER_BUS 0xffffffff8132ad80
#endif

#ifndef CPCI_HP_REGISTER_CONTROLLER
#define CPCI_HP_REGISTER_CONTROLLER 0xffffffff8132aea0
#endif

#ifndef CPCI_HP_UNREGISTER_CONTROLLER
#define CPCI_HP_UNREGISTER_CONTROLLER 0xffffffff8132af90
#endif

#ifndef CPCI_HP_STOP
#define CPCI_HP_STOP 0xffffffff8132b0a0
#endif

#ifndef CPCI_HP_START
#define CPCI_HP_START 0xffffffff8132b980
#endif

#ifndef CPCI_HP_REGISTER_BUS
#define CPCI_HP_REGISTER_BUS 0xffffffff8132bdb0
#endif

#ifndef CPCI_GET_ATTENTION_STATUS
#define CPCI_GET_ATTENTION_STATUS 0xffffffff8132c070
#endif

#ifndef CPCI_SET_ATTENTION_STATUS
#define CPCI_SET_ATTENTION_STATUS 0xffffffff8132c0d0
#endif

#ifndef CPCI_GET_HS_CSR
#define CPCI_GET_HS_CSR 0xffffffff8132c170
#endif

#ifndef CPCI_CHECK_AND_CLEAR_INS
#define CPCI_CHECK_AND_CLEAR_INS 0xffffffff8132c1c0
#endif

#ifndef CPCI_CHECK_EXT
#define CPCI_CHECK_EXT 0xffffffff8132c230
#endif

#ifndef CPCI_CLEAR_EXT
#define CPCI_CLEAR_EXT 0xffffffff8132c290
#endif

#ifndef CPCI_LED_ON
#define CPCI_LED_ON 0xffffffff8132c310
#endif

#ifndef CPCI_LED_OFF
#define CPCI_LED_OFF 0xffffffff8132c3d0
#endif

#ifndef CPCI_CONFIGURE_SLOT
#define CPCI_CONFIGURE_SLOT 0xffffffff8132c490
#endif

#ifndef CPCI_UNCONFIGURE_SLOT
#define CPCI_UNCONFIGURE_SLOT 0xffffffff8132c670
#endif

#ifndef ACPI_PCI_DETECT_EJECTABLE
#define ACPI_PCI_DETECT_EJECTABLE 0xffffffff8132c790
#endif

#ifndef ACPI_GET_HP_HW_CONTROL_FROM_FIRMWARE
#define ACPI_GET_HP_HW_CONTROL_FROM_FIRMWARE 0xffffffff8132c7e0
#endif

#ifndef ACPI_PCI_CHECK_EJECTABLE
#define ACPI_PCI_CHECK_EJECTABLE 0xffffffff8132ccb0
#endif

#ifndef PCIEHP_HANDLE_ATTENTION_BUTTON
#define PCIEHP_HANDLE_ATTENTION_BUTTON 0xffffffff8132db20
#endif

#ifndef PCIEHP_HANDLE_SWITCH_CHANGE
#define PCIEHP_HANDLE_SWITCH_CHANGE 0xffffffff8132db90
#endif

#ifndef PCIEHP_HANDLE_PRESENCE_CHANGE
#define PCIEHP_HANDLE_PRESENCE_CHANGE 0xffffffff8132dc40
#endif

#ifndef PCIEHP_HANDLE_POWER_FAULT
#define PCIEHP_HANDLE_POWER_FAULT 0xffffffff8132dcf0
#endif

#ifndef PCIEHP_HANDLE_LINKSTATE_CHANGE
#define PCIEHP_HANDLE_LINKSTATE_CHANGE 0xffffffff8132dd80
#endif

#ifndef PCIEHP_QUEUE_PUSHBUTTON_WORK
#define PCIEHP_QUEUE_PUSHBUTTON_WORK 0xffffffff8132de30
#endif

#ifndef PCIEHP_ENABLE_SLOT
#define PCIEHP_ENABLE_SLOT 0xffffffff8132df20
#endif

#ifndef PCIEHP_DISABLE_SLOT
#define PCIEHP_DISABLE_SLOT 0xffffffff8132e1b0
#endif

#ifndef PCIEHP_SYSFS_ENABLE_SLOT
#define PCIEHP_SYSFS_ENABLE_SLOT 0xffffffff8132e3b0
#endif

#ifndef PCIEHP_SYSFS_DISABLE_SLOT
#define PCIEHP_SYSFS_DISABLE_SLOT 0xffffffff8132e4e0
#endif

#ifndef PCIEHP_CONFIGURE_DEVICE
#define PCIEHP_CONFIGURE_DEVICE 0xffffffff8132e620
#endif

#ifndef PCIEHP_UNCONFIGURE_DEVICE
#define PCIEHP_UNCONFIGURE_DEVICE 0xffffffff8132e750
#endif

#ifndef PCIEHP_CHECK_LINK_ACTIVE
#define PCIEHP_CHECK_LINK_ACTIVE 0xffffffff8132ee90
#endif

#ifndef PCIEHP_CHECK_LINK_STATUS
#define PCIEHP_CHECK_LINK_STATUS 0xffffffff8132ef10
#endif

#ifndef PCIEHP_GET_ATTENTION_STATUS
#define PCIEHP_GET_ATTENTION_STATUS 0xffffffff8132f120
#endif

#ifndef PCIEHP_GET_POWER_STATUS
#define PCIEHP_GET_POWER_STATUS 0xffffffff8132f1e0
#endif

#ifndef PCIEHP_GET_LATCH_STATUS
#define PCIEHP_GET_LATCH_STATUS 0xffffffff8132f280
#endif

#ifndef PCIEHP_GET_ADAPTER_STATUS
#define PCIEHP_GET_ADAPTER_STATUS 0xffffffff8132f2c0
#endif

#ifndef PCIEHP_QUERY_POWER_FAULT
#define PCIEHP_QUERY_POWER_FAULT 0xffffffff8132f300
#endif

#ifndef PCIEHP_SET_ATTENTION_STATUS
#define PCIEHP_SET_ATTENTION_STATUS 0xffffffff8132f340
#endif

#ifndef PCIEHP_GREEN_LED_ON
#define PCIEHP_GREEN_LED_ON 0xffffffff8132f3f0
#endif

#ifndef PCIEHP_GREEN_LED_OFF
#define PCIEHP_GREEN_LED_OFF 0xffffffff8132f460
#endif

#ifndef PCIEHP_GREEN_LED_BLINK
#define PCIEHP_GREEN_LED_BLINK 0xffffffff8132f4d0
#endif

#ifndef PCIEHP_POWER_ON_SLOT
#define PCIEHP_POWER_ON_SLOT 0xffffffff8132f540
#endif

#ifndef PCIEHP_POWER_OFF_SLOT
#define PCIEHP_POWER_OFF_SLOT 0xffffffff8132f670
#endif

#ifndef PCIE_ENABLE_NOTIFICATION
#define PCIE_ENABLE_NOTIFICATION 0xffffffff8132f6e0
#endif

#ifndef PCIEHP_RESET_SLOT
#define PCIEHP_RESET_SLOT 0xffffffff8132f790
#endif

#ifndef PCIE_INIT_NOTIFICATION
#define PCIE_INIT_NOTIFICATION 0xffffffff8132f900
#endif

#ifndef PCIE_INIT
#define PCIE_INIT 0xffffffff8132f9d0
#endif

#ifndef PCIEHP_RELEASE_CTRL
#define PCIEHP_RELEASE_CTRL 0xffffffff8132ffa0
#endif

#ifndef PCIEHP_ACPI_SLOT_DETECTION_CHECK
#define PCIEHP_ACPI_SLOT_DETECTION_CHECK 0xffffffff81330070
#endif

#ifndef ACPIPHP_REGISTER_ATTENTION
#define ACPIPHP_REGISTER_ATTENTION 0xffffffff813300d0
#endif

#ifndef ACPIPHP_UNREGISTER_ATTENTION
#define ACPIPHP_UNREGISTER_ATTENTION 0xffffffff81330120
#endif

#ifndef ACPIPHP_REGISTER_HOTPLUG_SLOT
#define ACPIPHP_REGISTER_HOTPLUG_SLOT 0xffffffff81330500
#endif

#ifndef ACPIPHP_UNREGISTER_HOTPLUG_SLOT
#define ACPIPHP_UNREGISTER_HOTPLUG_SLOT 0xffffffff813306a0
#endif

#ifndef ACPIPHP_CHECK_HOST_BRIDGE
#define ACPIPHP_CHECK_HOST_BRIDGE 0xffffffff81331960
#endif

#ifndef ACPIPHP_ENUMERATE_SLOTS
#define ACPIPHP_ENUMERATE_SLOTS 0xffffffff81331a30
#endif

#ifndef ACPIPHP_REMOVE_SLOTS
#define ACPIPHP_REMOVE_SLOTS 0xffffffff81331ca0
#endif

#ifndef ACPIPHP_ENABLE_SLOT
#define ACPIPHP_ENABLE_SLOT 0xffffffff81331da0
#endif

#ifndef ACPIPHP_DISABLE_SLOT
#define ACPIPHP_DISABLE_SLOT 0xffffffff81331de0
#endif

#ifndef ACPIPHP_GET_POWER_STATUS
#define ACPIPHP_GET_POWER_STATUS 0xffffffff81331e10
#endif

#ifndef ACPIPHP_GET_LATCH_STATUS
#define ACPIPHP_GET_LATCH_STATUS 0xffffffff81331e20
#endif

#ifndef ACPIPHP_GET_ADAPTER_STATUS
#define ACPIPHP_GET_ADAPTER_STATUS 0xffffffff81331e40
#endif

#ifndef PCI_HP_ADD_BRIDGE
#define PCI_HP_ADD_BRIDGE 0xffffffff81331e60
#endif

#ifndef PCI_MSI_ENABLED
#define PCI_MSI_ENABLED 0xffffffff81331f30
#endif

#ifndef PCI_MSI_VEC_COUNT
#define PCI_MSI_VEC_COUNT 0xffffffff81331f40
#endif

#ifndef PCI_MSIX_VEC_COUNT
#define PCI_MSIX_VEC_COUNT 0xffffffff81331f90
#endif

#ifndef DEFAULT_TEARDOWN_MSI_IRQS
#define DEFAULT_TEARDOWN_MSI_IRQS 0xffffffff81332530
#endif

#ifndef PCI_ENABLE_MSIX
#define PCI_ENABLE_MSIX 0xffffffff81332740
#endif

#ifndef PCI_ENABLE_MSIX_RANGE
#define PCI_ENABLE_MSIX_RANGE 0xffffffff81332b10
#endif

#ifndef __PCI_MSI_DESC_MASK_IRQ
#define __PCI_MSI_DESC_MASK_IRQ 0xffffffff81332b80
#endif

#ifndef PCI_ENABLE_MSI_RANGE
#define PCI_ENABLE_MSI_RANGE 0xffffffff81332bc0
#endif

#ifndef __PCI_MSIX_DESC_MASK_IRQ
#define __PCI_MSIX_DESC_MASK_IRQ 0xffffffff81332f70
#endif

#ifndef PCI_MSI_MASK_IRQ
#define PCI_MSI_MASK_IRQ 0xffffffff81332fb0
#endif

#ifndef PCI_MSI_UNMASK_IRQ
#define PCI_MSI_UNMASK_IRQ 0xffffffff81332fd0
#endif

#ifndef __PCI_READ_MSI_MSG
#define __PCI_READ_MSI_MSG 0xffffffff81332ff0
#endif

#ifndef __PCI_WRITE_MSI_MSG
#define __PCI_WRITE_MSI_MSG 0xffffffff813330e0
#endif

#ifndef DEFAULT_RESTORE_MSI_IRQS
#define DEFAULT_RESTORE_MSI_IRQS 0xffffffff81333210
#endif

#ifndef PCI_RESTORE_MSI_STATE
#define PCI_RESTORE_MSI_STATE 0xffffffff813332d0
#endif

#ifndef PCI_WRITE_MSI_MSG
#define PCI_WRITE_MSI_MSG 0xffffffff813334a0
#endif

#ifndef PCI_MSI_SHUTDOWN
#define PCI_MSI_SHUTDOWN 0xffffffff813334d0
#endif

#ifndef PCI_DISABLE_MSI
#define PCI_DISABLE_MSI 0xffffffff81333590
#endif

#ifndef PCI_MSIX_SHUTDOWN
#define PCI_MSIX_SHUTDOWN 0xffffffff813335d0
#endif

#ifndef PCI_DISABLE_MSIX
#define PCI_DISABLE_MSIX 0xffffffff81333680
#endif

#ifndef PCI_NO_MSI
#define PCI_NO_MSI 0xffffffff813336c0
#endif

#ifndef PCI_MSI_INIT_PCI_DEV
#define PCI_MSI_INIT_PCI_DEV 0xffffffff813336d0
#endif

#ifndef HT_DESTROY_IRQ
#define HT_DESTROY_IRQ 0xffffffff81333740
#endif

#ifndef __HT_CREATE_IRQ
#define __HT_CREATE_IRQ 0xffffffff813337a0
#endif

#ifndef HT_CREATE_IRQ
#define HT_CREATE_IRQ 0xffffffff81333900
#endif

#ifndef WRITE_HT_IRQ_MSG
#define WRITE_HT_IRQ_MSG 0xffffffff81333920
#endif

#ifndef FETCH_HT_IRQ_MSG
#define FETCH_HT_IRQ_MSG 0xffffffff81333a10
#endif

#ifndef MASK_HT_IRQ
#define MASK_HT_IRQ 0xffffffff81333a40
#endif

#ifndef UNMASK_HT_IRQ
#define UNMASK_HT_IRQ 0xffffffff81333a70
#endif

#ifndef PCI_PASID_FEATURES
#define PCI_PASID_FEATURES 0xffffffff81333aa0
#endif

#ifndef PCI_MAX_PASIDS
#define PCI_MAX_PASIDS 0xffffffff81333af0
#endif

#ifndef PCI_DISABLE_PRI
#define PCI_DISABLE_PRI 0xffffffff81333b50
#endif

#ifndef PCI_RESET_PRI
#define PCI_RESET_PRI 0xffffffff81333bc0
#endif

#ifndef PCI_ENABLE_PASID
#define PCI_ENABLE_PASID 0xffffffff81333c30
#endif

#ifndef PCI_DISABLE_PASID
#define PCI_DISABLE_PASID 0xffffffff81333ce0
#endif

#ifndef PCI_DISABLE_ATS
#define PCI_DISABLE_ATS 0xffffffff81333d20
#endif

#ifndef PCI_ENABLE_PRI
#define PCI_ENABLE_PRI 0xffffffff81333e40
#endif

#ifndef PCI_ATS_QUEUE_DEPTH
#define PCI_ATS_QUEUE_DEPTH 0xffffffff81333f10
#endif

#ifndef PCI_RESTORE_ATS_STATE
#define PCI_RESTORE_ATS_STATE 0xffffffff81333f90
#endif

#ifndef PCI_ENABLE_ATS
#define PCI_ENABLE_ATS 0xffffffff813340b0
#endif

#ifndef PCI_NUM_VF
#define PCI_NUM_VF 0xffffffff81334200
#endif

#ifndef PCI_SRIOV_SET_TOTALVFS
#define PCI_SRIOV_SET_TOTALVFS 0xffffffff81334220
#endif

#ifndef PCI_SRIOV_GET_TOTALVFS
#define PCI_SRIOV_GET_TOTALVFS 0xffffffff81334280
#endif

#ifndef PCI_VFS_ASSIGNED
#define PCI_VFS_ASSIGNED 0xffffffff813342b0
#endif

#ifndef PCI_IOV_VIRTFN_BUS
#define PCI_IOV_VIRTFN_BUS 0xffffffff813344b0
#endif

#ifndef PCI_IOV_VIRTFN_DEVFN
#define PCI_IOV_VIRTFN_DEVFN 0xffffffff81334500
#endif

#ifndef PCI_IOV_RESOURCE_SIZE
#define PCI_IOV_RESOURCE_SIZE 0xffffffff81334540
#endif

#ifndef PCI_ENABLE_SRIOV
#define PCI_ENABLE_SRIOV 0xffffffff81334580
#endif

#ifndef PCI_DISABLE_SRIOV
#define PCI_DISABLE_SRIOV 0xffffffff81334e30
#endif

#ifndef PCI_IOV_INIT
#define PCI_IOV_INIT 0xffffffff81334f30
#endif

#ifndef PCI_IOV_RELEASE
#define PCI_IOV_RELEASE 0xffffffff81335490
#endif

#ifndef PCI_IOV_RESOURCE_BAR
#define PCI_IOV_RESOURCE_BAR 0xffffffff813354f0
#endif

#ifndef PCI_SRIOV_RESOURCE_ALIGNMENT
#define PCI_SRIOV_RESOURCE_ALIGNMENT 0xffffffff81335560
#endif

#ifndef PCI_RESTORE_IOV_STATE
#define PCI_RESTORE_IOV_STATE 0xffffffff81335580
#endif

#ifndef PCI_IOV_BUS_RANGE
#define PCI_IOV_BUS_RANGE 0xffffffff81335680
#endif

#ifndef PCI_GET_HP_PARAMS
#define PCI_GET_HP_PARAMS 0xffffffff81335c00
#endif

#ifndef ACPI_PCI_ROOT_GET_MCFG_ADDR
#define ACPI_PCI_ROOT_GET_MCFG_ADDR 0xffffffff81336210
#endif

#ifndef PCI_ACPI_ADD_BUS_PM_NOTIFIER
#define PCI_ACPI_ADD_BUS_PM_NOTIFIER 0xffffffff81336250
#endif

#ifndef PCI_ACPI_ADD_PM_NOTIFIER
#define PCI_ACPI_ADD_PM_NOTIFIER 0xffffffff81336270
#endif

#ifndef ACPI_PCI_ADD_BUS
#define ACPI_PCI_ADD_BUS 0xffffffff81336290
#endif

#ifndef ACPI_PCI_REMOVE_BUS
#define ACPI_PCI_REMOVE_BUS 0xffffffff81336350
#endif

#ifndef PCI_CREATE_FIRMWARE_LABEL_FILES
#define PCI_CREATE_FIRMWARE_LABEL_FILES 0xffffffff813366e0
#endif

#ifndef PCI_REMOVE_FIRMWARE_LABEL_FILES
#define PCI_REMOVE_FIRMWARE_LABEL_FILES 0xffffffff81336720
#endif

#ifndef HDMI_AVI_INFOFRAME_INIT
#define HDMI_AVI_INFOFRAME_INIT 0xffffffff81336760
#endif

#ifndef HDMI_AVI_INFOFRAME_PACK
#define HDMI_AVI_INFOFRAME_PACK 0xffffffff813367a0
#endif

#ifndef HDMI_AUDIO_INFOFRAME_INIT
#define HDMI_AUDIO_INFOFRAME_INIT 0xffffffff81336930
#endif

#ifndef HDMI_AUDIO_INFOFRAME_PACK
#define HDMI_AUDIO_INFOFRAME_PACK 0xffffffff81336970
#endif

#ifndef HDMI_VENDOR_INFOFRAME_INIT
#define HDMI_VENDOR_INFOFRAME_INIT 0xffffffff81336a50
#endif

#ifndef HDMI_VENDOR_INFOFRAME_PACK
#define HDMI_VENDOR_INFOFRAME_PACK 0xffffffff81336a90
#endif

#ifndef HDMI_SPD_INFOFRAME_INIT
#define HDMI_SPD_INFOFRAME_INIT 0xffffffff81336bb0
#endif

#ifndef HDMI_INFOFRAME_UNPACK
#define HDMI_INFOFRAME_UNPACK 0xffffffff81336c20
#endif

#ifndef HDMI_SPD_INFOFRAME_PACK
#define HDMI_SPD_INFOFRAME_PACK 0xffffffff81336ff0
#endif

#ifndef HDMI_INFOFRAME_PACK
#define HDMI_INFOFRAME_PACK 0xffffffff81337080
#endif

#ifndef HDMI_INFOFRAME_LOG
#define HDMI_INFOFRAME_LOG 0xffffffff81337180
#endif

#ifndef VGACON_TEXT_FORCE
#define VGACON_TEXT_FORCE 0xffffffff81337850
#endif

#ifndef FBCON_SET_BITOPS
#define FBCON_SET_BITOPS 0xffffffff813409b0
#endif

#ifndef SOFT_CURSOR
#define SOFT_CURSOR 0xffffffff813416b0
#endif

#ifndef FBCON_SET_TILEOPS
#define FBCON_SET_TILEOPS 0xffffffff81341a30
#endif

#ifndef FBCON_SET_ROTATE
#define FBCON_SET_ROTATE 0xffffffff81341d40
#endif

#ifndef FBCON_ROTATE_CW
#define FBCON_ROTATE_CW 0xffffffff81342320
#endif

#ifndef FBCON_ROTATE_UD
#define FBCON_ROTATE_UD 0xffffffff813432f0
#endif

#ifndef FBCON_ROTATE_CCW
#define FBCON_ROTATE_CCW 0xffffffff81344340
#endif

#ifndef BACKLIGHT_DEVICE_REGISTERED
#define BACKLIGHT_DEVICE_REGISTERED 0xffffffff81345240
#endif

#ifndef BACKLIGHT_FORCE_UPDATE
#define BACKLIGHT_FORCE_UPDATE 0xffffffff81345330
#endif

#ifndef BACKLIGHT_DEVICE_UNREGISTER
#define BACKLIGHT_DEVICE_UNREGISTER 0xffffffff813453a0
#endif

#ifndef BACKLIGHT_REGISTER_NOTIFIER
#define BACKLIGHT_REGISTER_NOTIFIER 0xffffffff81345480
#endif

#ifndef BACKLIGHT_UNREGISTER_NOTIFIER
#define BACKLIGHT_UNREGISTER_NOTIFIER 0xffffffff813454a0
#endif

#ifndef DEVM_BACKLIGHT_DEVICE_UNREGISTER
#define DEVM_BACKLIGHT_DEVICE_UNREGISTER 0xffffffff81345610
#endif

#ifndef BACKLIGHT_DEVICE_REGISTER
#define BACKLIGHT_DEVICE_REGISTER 0xffffffff81345660
#endif

#ifndef DEVM_BACKLIGHT_DEVICE_REGISTER
#define DEVM_BACKLIGHT_DEVICE_REGISTER 0xffffffff813458c0
#endif

#ifndef FB_REGISTER_CLIENT
#define FB_REGISTER_CLIENT 0xffffffff81345db0
#endif

#ifndef FB_UNREGISTER_CLIENT
#define FB_UNREGISTER_CLIENT 0xffffffff81345dd0
#endif

#ifndef FB_NOTIFIER_CALL_CHAIN
#define FB_NOTIFIER_CALL_CHAIN 0xffffffff81345df0
#endif

#ifndef FB_GET_OPTIONS
#define FB_GET_OPTIONS 0xffffffff81345e10
#endif

#ifndef FB_GET_COLOR_DEPTH
#define FB_GET_COLOR_DEPTH 0xffffffff81345f70
#endif

#ifndef FB_PAD_ALIGNED_BUFFER
#define FB_PAD_ALIGNED_BUFFER 0xffffffff81345fb0
#endif

#ifndef FB_PAD_UNALIGNED_BUFFER
#define FB_PAD_UNALIGNED_BUFFER 0xffffffff81346010
#endif

#ifndef FB_GET_BUFFER_OFFSET
#define FB_GET_BUFFER_OFFSET 0xffffffff81346100
#endif

#ifndef FB_PREPARE_LOGO
#define FB_PREPARE_LOGO 0xffffffff813461c0
#endif

#ifndef FB_SHOW_LOGO
#define FB_SHOW_LOGO 0xffffffff813461d0
#endif

#ifndef FB_PAN_DISPLAY
#define FB_PAN_DISPLAY 0xffffffff81346200
#endif

#ifndef LOCK_FB_INFO
#define LOCK_FB_INFO 0xffffffff81346390
#endif

#ifndef FB_BLANK
#define FB_BLANK 0xffffffff81346400
#endif

#ifndef FB_SET_SUSPEND
#define FB_SET_SUSPEND 0xffffffff813464c0
#endif

#ifndef FB_SET_VAR
#define FB_SET_VAR 0xffffffff81346520
#endif

#ifndef UNLINK_FRAMEBUFFER
#define UNLINK_FRAMEBUFFER 0xffffffff813468c0
#endif

#ifndef REMOVE_CONFLICTING_FRAMEBUFFERS
#define REMOVE_CONFLICTING_FRAMEBUFFERS 0xffffffff81347ca0
#endif

#ifndef REGISTER_FRAMEBUFFER
#define REGISTER_FRAMEBUFFER 0xffffffff81347ce0
#endif

#ifndef UNREGISTER_FRAMEBUFFER
#define UNREGISTER_FRAMEBUFFER 0xffffffff81348010
#endif

#ifndef FB_NEW_MODELIST
#define FB_NEW_MODELIST 0xffffffff81348250
#endif

#ifndef FB_VALIDATE_MODE
#define FB_VALIDATE_MODE 0xffffffff81348730
#endif

#ifndef FB_FIRMWARE_EDID
#define FB_FIRMWARE_EDID 0xffffffff81348860
#endif

#ifndef FB_DESTROY_MODEDB
#define FB_DESTROY_MODEDB 0xffffffff813488a0
#endif

#ifndef FB_EDID_ADD_MONSPECS
#define FB_EDID_ADD_MONSPECS 0xffffffff81348cd0
#endif

#ifndef FB_PARSE_EDID
#define FB_PARSE_EDID 0xffffffff81349160
#endif

#ifndef FB_GET_MODE
#define FB_GET_MODE 0xffffffff81349360
#endif

#ifndef FB_EDID_TO_MONSPECS
#define FB_EDID_TO_MONSPECS 0xffffffff8134a250
#endif

#ifndef FB_INVERT_CMAPS
#define FB_INVERT_CMAPS 0xffffffff8134a9e0
#endif

#ifndef FB_DEALLOC_CMAP
#define FB_DEALLOC_CMAP 0xffffffff8134aa90
#endif

#ifndef FB_COPY_CMAP
#define FB_COPY_CMAP 0xffffffff8134aaf0
#endif

#ifndef FB_SET_CMAP
#define FB_SET_CMAP 0xffffffff8134abe0
#endif

#ifndef FB_DEFAULT_CMAP
#define FB_DEFAULT_CMAP 0xffffffff8134ad30
#endif

#ifndef FB_ALLOC_CMAP_GFP
#define FB_ALLOC_CMAP_GFP 0xffffffff8134ad70
#endif

#ifndef FB_ALLOC_CMAP
#define FB_ALLOC_CMAP 0xffffffff8134aea0
#endif

#ifndef FB_CMAP_TO_USER
#define FB_CMAP_TO_USER 0xffffffff8134aec0
#endif

#ifndef FB_SET_USER_CMAP
#define FB_SET_USER_CMAP 0xffffffff8134afd0
#endif

#ifndef FRAMEBUFFER_RELEASE
#define FRAMEBUFFER_RELEASE 0xffffffff8134b170
#endif

#ifndef FB_BL_DEFAULT_CURVE
#define FB_BL_DEFAULT_CURVE 0xffffffff8134b2d0
#endif

#ifndef FRAMEBUFFER_ALLOC
#define FRAMEBUFFER_ALLOC 0xffffffff8134bd20
#endif

#ifndef FB_INIT_DEVICE
#define FB_INIT_DEVICE 0xffffffff8134bdb0
#endif

#ifndef FB_CLEANUP_DEVICE
#define FB_CLEANUP_DEVICE 0xffffffff8134be50
#endif

#ifndef FB_VAR_TO_VIDEOMODE
#define FB_VAR_TO_VIDEOMODE 0xffffffff8134bf40
#endif

#ifndef FB_VIDEOMODE_TO_VAR
#define FB_VIDEOMODE_TO_VAR 0xffffffff8134c000
#endif

#ifndef FB_MODE_IS_EQUAL
#define FB_MODE_IS_EQUAL 0xffffffff8134c070
#endif

#ifndef FB_FIND_BEST_MODE
#define FB_FIND_BEST_MODE 0xffffffff8134c0c0
#endif

#ifndef FB_FIND_NEAREST_MODE
#define FB_FIND_NEAREST_MODE 0xffffffff8134c140
#endif

#ifndef FB_MATCH_MODE
#define FB_MATCH_MODE 0xffffffff8134c200
#endif

#ifndef FB_FIND_BEST_DISPLAY
#define FB_FIND_BEST_DISPLAY 0xffffffff8134c270
#endif

#ifndef FB_FIND_MODE
#define FB_FIND_MODE 0xffffffff8134c360
#endif

#ifndef FB_DESTROY_MODELIST
#define FB_DESTROY_MODELIST 0xffffffff8134ca60
#endif

#ifndef FB_ADD_VIDEOMODE
#define FB_ADD_VIDEOMODE 0xffffffff8134cac0
#endif

#ifndef FB_VIDEOMODE_TO_MODELIST
#define FB_VIDEOMODE_TO_MODELIST 0xffffffff8134cb80
#endif

#ifndef FB_DELETE_VIDEOMODE
#define FB_DELETE_VIDEOMODE 0xffffffff8134cbd0
#endif

#ifndef FB_FIND_MODE_CVT
#define FB_FIND_MODE_CVT 0xffffffff8134cc60
#endif

#ifndef CFB_FILLRECT
#define CFB_FILLRECT 0xffffffff8134d390
#endif

#ifndef CFB_COPYAREA
#define CFB_COPYAREA 0xffffffff8134dd30
#endif

#ifndef CFB_IMAGEBLIT
#define CFB_IMAGEBLIT 0xffffffff8134e750
#endif

#ifndef SYS_FILLRECT
#define SYS_FILLRECT 0xffffffff8134eca0
#endif

#ifndef SYS_COPYAREA
#define SYS_COPYAREA 0xffffffff8134f580
#endif

#ifndef SYS_IMAGEBLIT
#define SYS_IMAGEBLIT 0xffffffff8134ff10
#endif

#ifndef FB_SYS_READ
#define FB_SYS_READ 0xffffffff81350460
#endif

#ifndef FB_SYS_WRITE
#define FB_SYS_WRITE 0xffffffff81350530
#endif

#ifndef FB_DEFERRED_IO_OPEN
#define FB_DEFERRED_IO_OPEN 0xffffffff81350670
#endif

#ifndef FB_DEFERRED_IO_FSYNC
#define FB_DEFERRED_IO_FSYNC 0xffffffff81350690
#endif

#ifndef FB_DEFERRED_IO_INIT
#define FB_DEFERRED_IO_INIT 0xffffffff81350730
#endif

#ifndef FB_DEFERRED_IO_CLEANUP
#define FB_DEFERRED_IO_CLEANUP 0xffffffff81350a20
#endif

#ifndef INTEL_IDLE_STATE_TABLE_UPDATE
#define INTEL_IDLE_STATE_TABLE_UPDATE 0xffffffff81353b40
#endif

#ifndef ACPI_TABLE_PRINT_MADT_ENTRY
#define ACPI_TABLE_PRINT_MADT_ENTRY 0xffffffff81353b70
#endif

#ifndef ACPI_RESOURCES_ARE_ENFORCED
#define ACPI_RESOURCES_ARE_ENFORCED 0xffffffff81353ec8
#endif

#ifndef ACPI_OS_GET_IOMEM
#define ACPI_OS_GET_IOMEM 0xffffffff81353eda
#endif

#ifndef ACPI_OS_READ_PORT
#define ACPI_OS_READ_PORT 0xffffffff8135400b
#endif

#ifndef ACPI_OS_WRITE_PORT
#define ACPI_OS_WRITE_PORT 0xffffffff81354055
#endif

#ifndef ACPI_OS_MAP_GENERIC_ADDRESS
#define ACPI_OS_MAP_GENERIC_ADDRESS 0xffffffff81354080
#endif

#ifndef ACPI_CHECK_RESOURCE_CONFLICT
#define ACPI_CHECK_RESOURCE_CONFLICT 0xffffffff81354102
#endif

#ifndef ACPI_CHECK_REGION
#define ACPI_CHECK_REGION 0xffffffff81354186
#endif

#ifndef ACPI_OS_EXECUTE
#define ACPI_OS_EXECUTE 0xffffffff813541cc
#endif

#ifndef ACPI_OS_UNMAP_GENERIC_ADDRESS
#define ACPI_OS_UNMAP_GENERIC_ADDRESS 0xffffffff81354282
#endif

#ifndef ACPI_OS_VPRINTF
#define ACPI_OS_VPRINTF 0xffffffff81354339
#endif

#ifndef ACPI_OS_PRINTF
#define ACPI_OS_PRINTF 0xffffffff81354367
#endif

#ifndef ACPI_OS_PREDEFINED_OVERRIDE
#define ACPI_OS_PREDEFINED_OVERRIDE 0xffffffff813543b4
#endif

#ifndef ACPI_OS_TABLE_OVERRIDE
#define ACPI_OS_TABLE_OVERRIDE 0xffffffff8135441a
#endif

#ifndef ACPI_OS_PHYSICAL_TABLE_OVERRIDE
#define ACPI_OS_PHYSICAL_TABLE_OVERRIDE 0xffffffff81354439
#endif

#ifndef ACPI_OS_INSTALL_INTERRUPT_HANDLER
#define ACPI_OS_INSTALL_INTERRUPT_HANDLER 0xffffffff81354589
#endif

#ifndef ACPI_OS_REMOVE_INTERRUPT_HANDLER
#define ACPI_OS_REMOVE_INTERRUPT_HANDLER 0xffffffff8135464b
#endif

#ifndef ACPI_OS_SLEEP
#define ACPI_OS_SLEEP 0xffffffff8135467c
#endif

#ifndef ACPI_OS_STALL
#define ACPI_OS_STALL 0xffffffff81354688
#endif

#ifndef ACPI_OS_GET_TIMER
#define ACPI_OS_GET_TIMER 0xffffffff813546be
#endif

#ifndef ACPI_OS_READ_MEMORY
#define ACPI_OS_READ_MEMORY 0xffffffff813546d5
#endif

#ifndef ACPI_OS_WRITE_MEMORY
#define ACPI_OS_WRITE_MEMORY 0xffffffff81354786
#endif

#ifndef ACPI_OS_READ_PCI_CONFIGURATION
#define ACPI_OS_READ_PCI_CONFIGURATION 0xffffffff8135481c
#endif

#ifndef ACPI_OS_WRITE_PCI_CONFIGURATION
#define ACPI_OS_WRITE_PCI_CONFIGURATION 0xffffffff8135489c
#endif

#ifndef ACPI_OS_WAIT_EVENTS_COMPLETE
#define ACPI_OS_WAIT_EVENTS_COMPLETE 0xffffffff81354905
#endif

#ifndef ACPI_HOTPLUG_SCHEDULE
#define ACPI_HOTPLUG_SCHEDULE 0xffffffff8135495d
#endif

#ifndef ACPI_QUEUE_HOTPLUG_WORK
#define ACPI_QUEUE_HOTPLUG_WORK 0xffffffff813549e4
#endif

#ifndef ACPI_OS_CREATE_SEMAPHORE
#define ACPI_OS_CREATE_SEMAPHORE 0xffffffff813549ff
#endif

#ifndef ACPI_OS_DELETE_SEMAPHORE
#define ACPI_OS_DELETE_SEMAPHORE 0xffffffff81354a66
#endif

#ifndef ACPI_OS_WAIT_SEMAPHORE
#define ACPI_OS_WAIT_SEMAPHORE 0xffffffff81354a8c
#endif

#ifndef ACPI_OS_SIGNAL_SEMAPHORE
#define ACPI_OS_SIGNAL_SEMAPHORE 0xffffffff81354ade
#endif

#ifndef ACPI_OS_SIGNAL
#define ACPI_OS_SIGNAL 0xffffffff81354b08
#endif

#ifndef ACPI_OS_DELETE_LOCK
#define ACPI_OS_DELETE_LOCK 0xffffffff81354b27
#endif

#ifndef ACPI_OS_ACQUIRE_LOCK
#define ACPI_OS_ACQUIRE_LOCK 0xffffffff81354b33
#endif

#ifndef ACPI_OS_RELEASE_LOCK
#define ACPI_OS_RELEASE_LOCK 0xffffffff81354b3f
#endif

#ifndef ACPI_OS_CREATE_CACHE
#define ACPI_OS_CREATE_CACHE 0xffffffff81354b4b
#endif

#ifndef ACPI_OS_PURGE_CACHE
#define ACPI_OS_PURGE_CACHE 0xffffffff81354b71
#endif

#ifndef ACPI_OS_DELETE_CACHE
#define ACPI_OS_DELETE_CACHE 0xffffffff81354b80
#endif

#ifndef ACPI_OS_RELEASE_OBJECT
#define ACPI_OS_RELEASE_OBJECT 0xffffffff81354b8f
#endif

#ifndef ACPI_OS_TERMINATE
#define ACPI_OS_TERMINATE 0xffffffff81354b9e
#endif

#ifndef ACPI_OS_PREPARE_SLEEP
#define ACPI_OS_PREPARE_SLEEP 0xffffffff81354c29
#endif

#ifndef ACPI_OS_SET_PREPARE_SLEEP
#define ACPI_OS_SET_PREPARE_SLEEP 0xffffffff81354c60
#endif

#ifndef ACPI_OS_PREPARE_EXTENDED_SLEEP
#define ACPI_OS_PREPARE_EXTENDED_SLEEP 0xffffffff81354c6d
#endif

#ifndef ACPI_OS_SET_PREPARE_EXTENDED_SLEEP
#define ACPI_OS_SET_PREPARE_EXTENDED_SLEEP 0xffffffff81354ca4
#endif

#ifndef ACPI_EXTRACT_PACKAGE
#define ACPI_EXTRACT_PACKAGE 0xffffffff81354cb1
#endif

#ifndef ACPI_EVALUATE_INTEGER
#define ACPI_EVALUATE_INTEGER 0xffffffff81354f59
#endif

#ifndef ACPI_EVALUATE_OST
#define ACPI_EVALUATE_OST 0xffffffff81354fac
#endif

#ifndef ACPI_EXECUTE_SIMPLE_METHOD
#define ACPI_EXECUTE_SIMPLE_METHOD 0xffffffff81355031
#endif

#ifndef ACPI_EVALUATE_REFERENCE
#define ACPI_EVALUATE_REFERENCE 0xffffffff8135507c
#endif

#ifndef ACPI_GET_PHYSICAL_DEVICE_LOCATION
#define ACPI_GET_PHYSICAL_DEVICE_LOCATION 0xffffffff81355121
#endif

#ifndef ACPI_HANDLE_PRINTK
#define ACPI_HANDLE_PRINTK 0xffffffff813551e7
#endif

#ifndef ACPI_EVALUATE_DSM
#define ACPI_EVALUATE_DSM 0xffffffff81355270
#endif

#ifndef __ACPI_HANDLE_DEBUG
#define __ACPI_HANDLE_DEBUG 0xffffffff81355358
#endif

#ifndef ACPI_HAS_METHOD
#define ACPI_HAS_METHOD 0xffffffff813553e1
#endif

#ifndef ACPI_CHECK_DSM
#define ACPI_CHECK_DSM 0xffffffff813553fe
#endif

#ifndef ACPI_EVALUATE_EJ0
#define ACPI_EVALUATE_EJ0 0xffffffff8135547d
#endif

#ifndef ACPI_EVALUATE_LCK
#define ACPI_EVALUATE_LCK 0xffffffff813554de
#endif

#ifndef ACPI_REBOOT
#define ACPI_REBOOT 0xffffffff81355538
#endif

#ifndef ACPI_NVS_REGISTER
#define ACPI_NVS_REGISTER 0xffffffff813555ee
#endif

#ifndef ACPI_NVS_FOR_EACH_REGION
#define ACPI_NVS_FOR_EACH_REGION 0xffffffff81355737
#endif

#ifndef SUSPEND_NVS_FREE
#define SUSPEND_NVS_FREE 0xffffffff8135577e
#endif

#ifndef SUSPEND_NVS_ALLOC
#define SUSPEND_NVS_ALLOC 0xffffffff813557e9
#endif

#ifndef SUSPEND_NVS_SAVE
#define SUSPEND_NVS_SAVE 0xffffffff81355835
#endif

#ifndef SUSPEND_NVS_RESTORE
#define SUSPEND_NVS_RESTORE 0xffffffff813558c7
#endif

#ifndef ACPI_ENABLE_WAKEUP_DEVICES
#define ACPI_ENABLE_WAKEUP_DEVICES 0xffffffff8135590d
#endif

#ifndef ACPI_DISABLE_WAKEUP_DEVICES
#define ACPI_DISABLE_WAKEUP_DEVICES 0xffffffff8135598a
#endif

#ifndef ACPI_TARGET_SYSTEM_STATE
#define ACPI_TARGET_SYSTEM_STATE 0xffffffff81355a25
#endif

#ifndef ACPI_BUS_POWER_MANAGEABLE
#define ACPI_BUS_POWER_MANAGEABLE 0xffffffff81355f7b
#endif

#ifndef ACPI_BUS_CAN_WAKEUP
#define ACPI_BUS_CAN_WAKEUP 0xffffffff81355fa9
#endif

#ifndef ACPI_PM_DEVICE_SLEEP_STATE
#define ACPI_PM_DEVICE_SLEEP_STATE 0xffffffff81356175
#endif

#ifndef ACPI_SUBSYS_COMPLETE
#define ACPI_SUBSYS_COMPLETE 0xffffffff81356286
#endif

#ifndef ACPI_PM_DEVICE_RUN_WAKE
#define ACPI_PM_DEVICE_RUN_WAKE 0xffffffff81356410
#endif

#ifndef ACPI_SUBSYS_PREPARE
#define ACPI_SUBSYS_PREPARE 0xffffffff81356480
#endif

#ifndef ACPI_SUBSYS_FREEZE
#define ACPI_SUBSYS_FREEZE 0xffffffff81356538
#endif

#ifndef ACPI_SUBSYS_SUSPEND
#define ACPI_SUBSYS_SUSPEND 0xffffffff81356551
#endif

#ifndef ACPI_DEVICE_SET_POWER
#define ACPI_DEVICE_SET_POWER 0xffffffff8135656a
#endif

#ifndef ACPI_BUS_SET_POWER
#define ACPI_BUS_SET_POWER 0xffffffff8135672c
#endif

#ifndef ACPI_DEV_RUNTIME_SUSPEND
#define ACPI_DEV_RUNTIME_SUSPEND 0xffffffff81356787
#endif

#ifndef ACPI_SUBSYS_RUNTIME_SUSPEND
#define ACPI_SUBSYS_RUNTIME_SUSPEND 0xffffffff8135680c
#endif

#ifndef ACPI_DEV_RUNTIME_RESUME
#define ACPI_DEV_RUNTIME_RESUME 0xffffffff81356841
#endif

#ifndef ACPI_SUBSYS_RUNTIME_RESUME
#define ACPI_SUBSYS_RUNTIME_RESUME 0xffffffff8135687b
#endif

#ifndef ACPI_DEV_RESUME_EARLY
#define ACPI_DEV_RESUME_EARLY 0xffffffff81356898
#endif

#ifndef ACPI_SUBSYS_RESUME_EARLY
#define ACPI_SUBSYS_RESUME_EARLY 0xffffffff813568d5
#endif

#ifndef ACPI_DEV_SUSPEND_LATE
#define ACPI_DEV_SUSPEND_LATE 0xffffffff813568f2
#endif

#ifndef ACPI_SUBSYS_SUSPEND_LATE
#define ACPI_SUBSYS_SUSPEND_LATE 0xffffffff81356995
#endif

#ifndef ACPI_POWER_STATE_STRING
#define ACPI_POWER_STATE_STRING 0xffffffff813569b2
#endif

#ifndef ACPI_DEVICE_GET_POWER
#define ACPI_DEVICE_GET_POWER 0xffffffff813569ce
#endif

#ifndef ACPI_BUS_INIT_POWER
#define ACPI_BUS_INIT_POWER 0xffffffff81356ad3
#endif

#ifndef ACPI_DEVICE_UPDATE_POWER
#define ACPI_DEVICE_UPDATE_POWER 0xffffffff81356b7e
#endif

#ifndef ACPI_BUS_UPDATE_POWER
#define ACPI_BUS_UPDATE_POWER 0xffffffff81356c21
#endif

#ifndef ACPI_DEVICE_FIX_UP_POWER
#define ACPI_DEVICE_FIX_UP_POWER 0xffffffff81356c4f
#endif

#ifndef ACPI_ADD_PM_NOTIFIER
#define ACPI_ADD_PM_NOTIFIER 0xffffffff81356c7d
#endif

#ifndef ACPI_DEV_PM_ATTACH
#define ACPI_DEV_PM_ATTACH 0xffffffff81356d51
#endif

#ifndef ACPI_REMOVE_PM_NOTIFIER
#define ACPI_REMOVE_PM_NOTIFIER 0xffffffff81356dd4
#endif

#ifndef ACPI_PM_DEVICE_SLEEP_WAKE
#define ACPI_PM_DEVICE_SLEEP_WAKE 0xffffffff81356ee5
#endif

#ifndef ACPI_BUS_PRIVATE_DATA_HANDLER
#define ACPI_BUS_PRIVATE_DATA_HANDLER 0xffffffff81357336
#endif

#ifndef ACPI_BUS_DETACH_PRIVATE_DATA
#define ACPI_BUS_DETACH_PRIVATE_DATA 0xffffffff8135733c
#endif

#ifndef ACPI_BUS_ATTACH_PRIVATE_DATA
#define ACPI_BUS_ATTACH_PRIVATE_DATA 0xffffffff813575c7
#endif

#ifndef ACPI_BUS_GET_PRIVATE_DATA
#define ACPI_BUS_GET_PRIVATE_DATA 0xffffffff81357613
#endif

#ifndef ACPI_STR_TO_UUID
#define ACPI_STR_TO_UUID 0xffffffff8135766a
#endif

#ifndef ACPI_RUN_OSC
#define ACPI_RUN_OSC 0xffffffff8135770f
#endif

#ifndef ACPI_BUS_GET_STATUS_HANDLE
#define ACPI_BUS_GET_STATUS_HANDLE 0xffffffff8135792f
#endif

#ifndef ACPI_BUS_GET_STATUS
#define ACPI_BUS_GET_STATUS 0xffffffff81357963
#endif

#ifndef ACPI_FIND_CHILD_DEVICE
#define ACPI_FIND_CHILD_DEVICE 0xffffffff81357a12
#endif

#ifndef REGISTER_ACPI_BUS_TYPE
#define REGISTER_ACPI_BUS_TYPE 0xffffffff81357b1c
#endif

#ifndef UNREGISTER_ACPI_BUS_TYPE
#define UNREGISTER_ACPI_BUS_TYPE 0xffffffff81357b93
#endif

#ifndef ACPI_BIND_ONE
#define ACPI_BIND_ONE 0xffffffff81357c44
#endif

#ifndef ACPI_UNBIND_ONE
#define ACPI_UNBIND_ONE 0xffffffff81357eb2
#endif

#ifndef ACPI_DEVICE_HID
#define ACPI_DEVICE_HID 0xffffffff81358148
#endif

#ifndef ACPI_SCAN_LOCK_ACQUIRE
#define ACPI_SCAN_LOCK_ACQUIRE 0xffffffff81358188
#endif

#ifndef ACPI_SCAN_LOCK_RELEASE
#define ACPI_SCAN_LOCK_RELEASE 0xffffffff8135819b
#endif

#ifndef ACPI_DEVICE_UEVENT_MODALIAS
#define ACPI_DEVICE_UEVENT_MODALIAS 0xffffffff81358575
#endif

#ifndef ACPI_DEVICE_MODALIAS
#define ACPI_DEVICE_MODALIAS 0xffffffff81358641
#endif

#ifndef ACPI_MATCH_DEVICE
#define ACPI_MATCH_DEVICE 0xffffffff813587ae
#endif

#ifndef ACPI_MATCH_DEVICE_IDS
#define ACPI_MATCH_DEVICE_IDS 0xffffffff813587cd
#endif

#ifndef ACPI_BUS_GET_DEVICE
#define ACPI_BUS_GET_DEVICE 0xffffffff813589d5
#endif

#ifndef ACPI_BUS_REGISTER_DRIVER
#define ACPI_BUS_REGISTER_DRIVER 0xffffffff813590f5
#endif

#ifndef ACPI_BUS_UNREGISTER_DRIVER
#define ACPI_BUS_UNREGISTER_DRIVER 0xffffffff81359132
#endif

#ifndef ACPI_BUS_GET_EJD
#define ACPI_BUS_GET_EJD 0xffffffff81359145
#endif

#ifndef ACPI_BUS_TRIM
#define ACPI_BUS_TRIM 0xffffffff8135939a
#endif

#ifndef ACPI_DRIVER_MATCH_DEVICE
#define ACPI_DRIVER_MATCH_DEVICE 0xffffffff8135945b
#endif

#ifndef ACPI_LOCK_HP_CONTEXT
#define ACPI_LOCK_HP_CONTEXT 0xffffffff81359618
#endif

#ifndef ACPI_UNLOCK_HP_CONTEXT
#define ACPI_UNLOCK_HP_CONTEXT 0xffffffff8135962b
#endif

#ifndef ACPI_INITIALIZE_HP_CONTEXT
#define ACPI_INITIALIZE_HP_CONTEXT 0xffffffff8135963e
#endif

#ifndef ACPI_SCAN_ADD_HANDLER
#define ACPI_SCAN_ADD_HANDLER 0xffffffff81359679
#endif

#ifndef ACPI_SCAN_ADD_HANDLER_WITH_HOTPLUG
#define ACPI_SCAN_ADD_HANDLER_WITH_HOTPLUG 0xffffffff813596ac
#endif

#ifndef ACPI_SCAN_IS_OFFLINE
#define ACPI_SCAN_IS_OFFLINE 0xffffffff813596e3
#endif

#ifndef ACPI_BUS_GET_ACPI_DEVICE
#define ACPI_BUS_GET_ACPI_DEVICE 0xffffffff81359771
#endif

#ifndef ACPI_BUS_PUT_ACPI_DEVICE
#define ACPI_BUS_PUT_ACPI_DEVICE 0xffffffff813597a5
#endif

#ifndef ACPI_DEVICE_ADD
#define ACPI_DEVICE_ADD 0xffffffff813597b8
#endif

#ifndef ACPI_GET_NEXT_CHILD
#define ACPI_GET_NEXT_CHILD 0xffffffff81359c30
#endif

#ifndef ACPI_ATA_MATCH
#define ACPI_ATA_MATCH 0xffffffff81359c78
#endif

#ifndef ACPI_BAY_MATCH
#define ACPI_BAY_MATCH 0xffffffff81359cd5
#endif

#ifndef ACPI_DEVICE_IS_BATTERY
#define ACPI_DEVICE_IS_BATTERY 0xffffffff81359d29
#endif

#ifndef ACPI_DOCK_MATCH
#define ACPI_DOCK_MATCH 0xffffffff81359d68
#endif

#ifndef ACPI_FREE_PNP_IDS
#define ACPI_FREE_PNP_IDS 0xffffffff81359d7b
#endif

#ifndef ACPI_INIT_DEVICE_OBJECT
#define ACPI_INIT_DEVICE_OBJECT 0xffffffff81359e42
#endif

#ifndef ACPI_DEVICE_ADD_FINALIZE
#define ACPI_DEVICE_ADD_FINALIZE 0xffffffff8135a25c
#endif

#ifndef ACPI_DEVICE_IS_PRESENT
#define ACPI_DEVICE_IS_PRESENT 0xffffffff8135a8be
#endif

#ifndef ACPI_WALK_DEP_DEVICE_LIST
#define ACPI_WALK_DEP_DEVICE_LIST 0xffffffff8135aa3c
#endif

#ifndef ACPI_BUS_SCAN
#define ACPI_BUS_SCAN 0xffffffff8135aacf
#endif

#ifndef ACPI_DEVICE_HOTPLUG
#define ACPI_DEVICE_HOTPLUG 0xffffffff8135abcf
#endif

#ifndef ACPI_SCAN_HOTPLUG_ENABLED
#define ACPI_SCAN_HOTPLUG_ENABLED 0xffffffff8135afb6
#endif

#ifndef ACPI_DEV_IRQ_FLAGS
#define ACPI_DEV_IRQ_FLAGS 0xffffffff8135affc
#endif

#ifndef ACPI_DEV_FILTER_RESOURCE_TYPE
#define ACPI_DEV_FILTER_RESOURCE_TYPE 0xffffffff8135b02c
#endif

#ifndef ACPI_DEV_FREE_RESOURCE_LIST
#define ACPI_DEV_FREE_RESOURCE_LIST 0xffffffff8135b095
#endif

#ifndef ACPI_DEV_RESOURCE_ADDRESS_SPACE
#define ACPI_DEV_RESOURCE_ADDRESS_SPACE 0xffffffff8135b33a
#endif

#ifndef ACPI_DEV_RESOURCE_EXT_ADDRESS_SPACE
#define ACPI_DEV_RESOURCE_EXT_ADDRESS_SPACE 0xffffffff8135b37c
#endif

#ifndef ACPI_DEV_GET_RESOURCES
#define ACPI_DEV_GET_RESOURCES 0xffffffff8135b49d
#endif

#ifndef ACPI_DEV_RESOURCE_IO
#define ACPI_DEV_RESOURCE_IO 0xffffffff8135b55d
#endif

#ifndef ACPI_DEV_RESOURCE_MEMORY
#define ACPI_DEV_RESOURCE_MEMORY 0xffffffff8135b5c7
#endif

#ifndef ACPI_DEV_RESOURCE_INTERRUPT
#define ACPI_DEV_RESOURCE_INTERRUPT 0xffffffff8135b63e
#endif

#ifndef ACPI_GET_PHYS_ID
#define ACPI_GET_PHYS_ID 0xffffffff8135bdd0
#endif

#ifndef ACPI_MAP_CPUID
#define ACPI_MAP_CPUID 0xffffffff8135bf90
#endif

#ifndef ACPI_GET_CPUID
#define ACPI_GET_CPUID 0xffffffff8135bffe
#endif

#ifndef ACPI_GET_IOAPIC_ID
#define ACPI_GET_IOAPIC_ID 0xffffffff8135c015
#endif

#ifndef ACPI_PROCESSOR_SET_PDC
#define ACPI_PROCESSOR_SET_PDC 0xffffffff8135c0da
#endif

#ifndef EC_GET_HANDLE
#define EC_GET_HANDLE 0xffffffff8135c26c
#endif

#ifndef ACPI_EC_REMOVE_QUERY_HANDLER
#define ACPI_EC_REMOVE_QUERY_HANDLER 0xffffffff8135c6a0
#endif

#ifndef ACPI_EC_ADD_QUERY_HANDLER
#define ACPI_EC_ADD_QUERY_HANDLER 0xffffffff8135c73a
#endif

#ifndef EC_READ
#define EC_READ 0xffffffff8135d241
#endif

#ifndef EC_WRITE
#define EC_WRITE 0xffffffff8135d27e
#endif

#ifndef EC_TRANSACTION
#define EC_TRANSACTION 0xffffffff8135d2d6
#endif

#ifndef ACPI_EC_BLOCK_TRANSACTIONS
#define ACPI_EC_BLOCK_TRANSACTIONS 0xffffffff8135da89
#endif

#ifndef ACPI_EC_UNBLOCK_TRANSACTIONS
#define ACPI_EC_UNBLOCK_TRANSACTIONS 0xffffffff8135dac5
#endif

#ifndef ACPI_EC_UNBLOCK_TRANSACTIONS_EARLY
#define ACPI_EC_UNBLOCK_TRANSACTIONS_EARLY 0xffffffff8135daf8
#endif

#ifndef IS_DOCK_DEVICE
#define IS_DOCK_DEVICE 0xffffffff8135e01f
#endif

#ifndef REGISTER_DOCK_DEPENDENT_DEVICE
#define REGISTER_DOCK_DEPENDENT_DEVICE 0xffffffff8135e092
#endif

#ifndef DOCK_NOTIFY
#define DOCK_NOTIFY 0xffffffff8135e0ec
#endif

#ifndef ACPI_DOCK_ADD
#define ACPI_DOCK_ADD 0xffffffff8135e2fd
#endif

#ifndef ACPI_IS_ROOT_BRIDGE
#define ACPI_IS_ROOT_BRIDGE 0xffffffff8135e4b7
#endif

#ifndef ACPI_PCI_FIND_ROOT
#define ACPI_PCI_FIND_ROOT 0xffffffff8135e4ef
#endif

#ifndef ACPI_PCI_OSC_CONTROL_SET
#define ACPI_PCI_OSC_CONTROL_SET 0xffffffff8135e744
#endif

#ifndef ACPI_GET_PCI_DEV
#define ACPI_GET_PCI_DEV 0xffffffff8135e8ad
#endif

#ifndef ACPI_PCI_LINK_ALLOCATE_IRQ
#define ACPI_PCI_LINK_ALLOCATE_IRQ 0xffffffff8135f560
#endif

#ifndef ACPI_PCI_LINK_FREE_IRQ
#define ACPI_PCI_LINK_FREE_IRQ 0xffffffff8135f75e
#endif

#ifndef ACPI_PENALIZE_ISA_IRQ
#define ACPI_PENALIZE_ISA_IRQ 0xffffffff8135f7fc
#endif

#ifndef ACPI_PENALIZE_SCI_IRQ
#define ACPI_PENALIZE_SCI_IRQ 0xffffffff8135f828
#endif

#ifndef ACPI_PCI_IRQ_ENABLE
#define ACPI_PCI_IRQ_ENABLE 0xffffffff8135fc20
#endif

#ifndef ACPI_PCI_IRQ_DISABLE
#define ACPI_PCI_IRQ_DISABLE 0xffffffff8135fe10
#endif

#ifndef ACPI_CREATE_PLATFORM_DEVICE
#define ACPI_CREATE_PLATFORM_DEVICE 0xffffffff81360959
#endif

#ifndef ACPI_IS_PNP_DEVICE
#define ACPI_IS_PNP_DEVICE 0xffffffff81360b51
#endif

#ifndef ACPI_POWER_RESOURCES_LIST_FREE
#define ACPI_POWER_RESOURCES_LIST_FREE 0xffffffff81360fd0
#endif

#ifndef ACPI_POWER_ADD_REMOVE_DEVICE
#define ACPI_POWER_ADD_REMOVE_DEVICE 0xffffffff81361020
#endif

#ifndef ACPI_POWER_WAKEUP_LIST_INIT
#define ACPI_POWER_WAKEUP_LIST_INIT 0xffffffff813610aa
#endif

#ifndef ACPI_DEVICE_SLEEP_WAKE
#define ACPI_DEVICE_SLEEP_WAKE 0xffffffff81361154
#endif

#ifndef ACPI_ENABLE_WAKEUP_DEVICE_POWER
#define ACPI_ENABLE_WAKEUP_DEVICE_POWER 0xffffffff8136120c
#endif

#ifndef ACPI_DISABLE_WAKEUP_DEVICE_POWER
#define ACPI_DISABLE_WAKEUP_DEVICE_POWER 0xffffffff81361342
#endif

#ifndef ACPI_POWER_GET_INFERRED_STATE
#define ACPI_POWER_GET_INFERRED_STATE 0xffffffff81361449
#endif

#ifndef ACPI_POWER_ON_RESOURCES
#define ACPI_POWER_ON_RESOURCES 0xffffffff81361507
#endif

#ifndef ACPI_POWER_TRANSITION
#define ACPI_POWER_TRANSITION 0xffffffff81361534
#endif

#ifndef ACPI_ADD_POWER_RESOURCE
#define ACPI_ADD_POWER_RESOURCE 0xffffffff81361636
#endif

#ifndef ACPI_EXTRACT_POWER_RESOURCES
#define ACPI_EXTRACT_POWER_RESOURCES 0xffffffff8136185c
#endif

#ifndef ACPI_RESUME_POWER_RESOURCES
#define ACPI_RESUME_POWER_RESOURCES 0xffffffff8136197c
#endif

#ifndef ACPI_NOTIFIER_CALL_CHAIN
#define ACPI_NOTIFIER_CALL_CHAIN 0xffffffff81361a6e
#endif

#ifndef REGISTER_ACPI_NOTIFIER
#define REGISTER_ACPI_NOTIFIER 0xffffffff81361afc
#endif

#ifndef UNREGISTER_ACPI_NOTIFIER
#define UNREGISTER_ACPI_NOTIFIER 0xffffffff81361b12
#endif

#ifndef ACPI_BUS_GENERATE_NETLINK_EVENT
#define ACPI_BUS_GENERATE_NETLINK_EVENT 0xffffffff81361b28
#endif

#ifndef ACPI_IRQ_STATS_INIT
#define ACPI_IRQ_STATS_INIT 0xffffffff8136241f
#endif

#ifndef ACPI_SYSFS_ADD_HOTPLUG_PROFILE
#define ACPI_SYSFS_ADD_HOTPLUG_PROFILE 0xffffffff81362622
#endif

#ifndef ACPI_DEV_GET_PROPERTY
#define ACPI_DEV_GET_PROPERTY 0xffffffff8136267a
#endif

#ifndef ACPI_DEV_GET_PROPERTY_ARRAY
#define ACPI_DEV_GET_PROPERTY_ARRAY 0xffffffff81362735
#endif

#ifndef ACPI_DEV_GET_PROPERTY_REFERENCE
#define ACPI_DEV_GET_PROPERTY_REFERENCE 0xffffffff8136279c
#endif

#ifndef ACPI_INIT_PROPERTIES
#define ACPI_INIT_PROPERTIES 0xffffffff813628c4
#endif

#ifndef ACPI_FREE_PROPERTIES
#define ACPI_FREE_PROPERTIES 0xffffffff81362ad8
#endif

#ifndef ACPI_DEV_PROP_GET
#define ACPI_DEV_PROP_GET 0xffffffff81362b10
#endif

#ifndef ACPI_DEV_PROP_READ_SINGLE
#define ACPI_DEV_PROP_READ_SINGLE 0xffffffff81362b22
#endif

#ifndef ACPI_DEV_PROP_READ
#define ACPI_DEV_PROP_READ 0xffffffff81362bd7
#endif

#ifndef PXM_TO_NODE
#define PXM_TO_NODE 0xffffffff81362e76
#endif

#ifndef NODE_TO_PXM
#define NODE_TO_PXM 0xffffffff81362e8d
#endif

#ifndef ACPI_MAP_PXM_TO_NODE
#define ACPI_MAP_PXM_TO_NODE 0xffffffff81362ea4
#endif

#ifndef ACPI_GET_NODE
#define ACPI_GET_NODE 0xffffffff81362f2a
#endif

#ifndef ACPI_OSI_IS_WIN8
#define ACPI_OSI_IS_WIN8 0xffffffff81362f96
#endif

#ifndef ACPI_IS_VIDEO_DEVICE
#define ACPI_IS_VIDEO_DEVICE 0xffffffff81362fa6
#endif

#ifndef ACPI_VIDEO_GET_CAPABILITIES
#define ACPI_VIDEO_GET_CAPABILITIES 0xffffffff81363077
#endif

#ifndef ACPI_VIDEO_DMI_PROMOTE_VENDOR
#define ACPI_VIDEO_DMI_PROMOTE_VENDOR 0xffffffff81363169
#endif

#ifndef ACPI_VIDEO_DMI_DEMOTE_VENDOR
#define ACPI_VIDEO_DMI_DEMOTE_VENDOR 0xffffffff81363181
#endif

#ifndef ACPI_VIDEO_BACKLIGHT_SUPPORT
#define ACPI_VIDEO_BACKLIGHT_SUPPORT 0xffffffff81363199
#endif

#ifndef ACPI_LPAT_RAW_TO_TEMP
#define ACPI_LPAT_RAW_TO_TEMP 0xffffffff813632c1
#endif

#ifndef ACPI_LPAT_TEMP_TO_RAW
#define ACPI_LPAT_TEMP_TO_RAW 0xffffffff81363331
#endif

#ifndef ACPI_LPAT_FREE_CONVERSION_TABLE
#define ACPI_LPAT_FREE_CONVERSION_TABLE 0xffffffff81363393
#endif

#ifndef ACPI_LPAT_GET_CONVERSION_TABLE
#define ACPI_LPAT_GET_CONVERSION_TABLE 0xffffffff813633b3
#endif

#ifndef ACPI_DS_GET_BUFFER_FIELD_ARGUMENTS
#define ACPI_DS_GET_BUFFER_FIELD_ARGUMENTS 0xffffffff813635e3
#endif

#ifndef ACPI_DS_GET_BANK_FIELD_ARGUMENTS
#define ACPI_DS_GET_BANK_FIELD_ARGUMENTS 0xffffffff8136360f
#endif

#ifndef ACPI_DS_GET_BUFFER_ARGUMENTS
#define ACPI_DS_GET_BUFFER_ARGUMENTS 0xffffffff8136365e
#endif

#ifndef ACPI_DS_GET_PACKAGE_ARGUMENTS
#define ACPI_DS_GET_PACKAGE_ARGUMENTS 0xffffffff813636aa
#endif

#ifndef ACPI_DS_GET_REGION_ARGUMENTS
#define ACPI_DS_GET_REGION_ARGUMENTS 0xffffffff813636f6
#endif

#ifndef ACPI_DS_EXEC_BEGIN_CONTROL_OP
#define ACPI_DS_EXEC_BEGIN_CONTROL_OP 0xffffffff8136374f
#endif

#ifndef ACPI_DS_EXEC_END_CONTROL_OP
#define ACPI_DS_EXEC_END_CONTROL_OP 0xffffffff813637eb
#endif

#ifndef ACPI_DS_CREATE_BUFFER_FIELD
#define ACPI_DS_CREATE_BUFFER_FIELD 0xffffffff81363c2a
#endif

#ifndef ACPI_DS_CREATE_FIELD
#define ACPI_DS_CREATE_FIELD 0xffffffff81363d6c
#endif

#ifndef ACPI_DS_INIT_FIELD_OBJECTS
#define ACPI_DS_INIT_FIELD_OBJECTS 0xffffffff81363e1d
#endif

#ifndef ACPI_DS_CREATE_BANK_FIELD
#define ACPI_DS_CREATE_BANK_FIELD 0xffffffff81363f51
#endif

#ifndef ACPI_DS_CREATE_INDEX_FIELD
#define ACPI_DS_CREATE_INDEX_FIELD 0xffffffff81364045
#endif

#ifndef ACPI_DS_INITIALIZE_OBJECTS
#define ACPI_DS_INITIALIZE_OBJECTS 0xffffffff813641e8
#endif

#ifndef ACPI_DS_AUTO_SERIALIZE_METHOD
#define ACPI_DS_AUTO_SERIALIZE_METHOD 0xffffffff813642cd
#endif

#ifndef ACPI_DS_METHOD_ERROR
#define ACPI_DS_METHOD_ERROR 0xffffffff81364384
#endif

#ifndef ACPI_DS_BEGIN_METHOD_EXECUTION
#define ACPI_DS_BEGIN_METHOD_EXECUTION 0xffffffff813643f0
#endif

#ifndef ACPI_DS_RESTART_CONTROL_METHOD
#define ACPI_DS_RESTART_CONTROL_METHOD 0xffffffff813645c3
#endif

#ifndef ACPI_DS_TERMINATE_CONTROL_METHOD
#define ACPI_DS_TERMINATE_CONTROL_METHOD 0xffffffff81364634
#endif

#ifndef ACPI_DS_CALL_CONTROL_METHOD
#define ACPI_DS_CALL_CONTROL_METHOD 0xffffffff8136474a
#endif

#ifndef ACPI_DS_METHOD_DATA_INIT
#define ACPI_DS_METHOD_DATA_INIT 0xffffffff813648bc
#endif

#ifndef ACPI_DS_METHOD_DATA_DELETE_ALL
#define ACPI_DS_METHOD_DATA_DELETE_ALL 0xffffffff81364920
#endif

#ifndef ACPI_DS_METHOD_DATA_GET_NODE
#define ACPI_DS_METHOD_DATA_GET_NODE 0xffffffff8136497e
#endif

#ifndef ACPI_DS_METHOD_DATA_INIT_ARGS
#define ACPI_DS_METHOD_DATA_INIT_ARGS 0xffffffff81364a25
#endif

#ifndef ACPI_DS_METHOD_DATA_GET_VALUE
#define ACPI_DS_METHOD_DATA_GET_VALUE 0xffffffff81364a98
#endif

#ifndef ACPI_DS_STORE_OBJECT_TO_LOCAL
#define ACPI_DS_STORE_OBJECT_TO_LOCAL 0xffffffff81364b8e
#endif

#ifndef ACPI_DS_BUILD_INTERNAL_BUFFER_OBJ
#define ACPI_DS_BUILD_INTERNAL_BUFFER_OBJ 0xffffffff81364d1d
#endif

#ifndef ACPI_DS_INIT_OBJECT_FROM_OP
#define ACPI_DS_INIT_OBJECT_FROM_OP 0xffffffff81364e25
#endif

#ifndef ACPI_DS_BUILD_INTERNAL_PACKAGE_OBJ
#define ACPI_DS_BUILD_INTERNAL_PACKAGE_OBJ 0xffffffff8136522c
#endif

#ifndef ACPI_DS_CREATE_NODE
#define ACPI_DS_CREATE_NODE 0xffffffff813653ef
#endif

#ifndef ACPI_DS_INITIALIZE_REGION
#define ACPI_DS_INITIALIZE_REGION 0xffffffff813656c8
#endif

#ifndef ACPI_DS_EVAL_BUFFER_FIELD_OPERANDS
#define ACPI_DS_EVAL_BUFFER_FIELD_OPERANDS 0xffffffff813656de
#endif

#ifndef ACPI_DS_EVAL_REGION_OPERANDS
#define ACPI_DS_EVAL_REGION_OPERANDS 0xffffffff813657c1
#endif

#ifndef ACPI_DS_EVAL_TABLE_REGION_OPERANDS
#define ACPI_DS_EVAL_TABLE_REGION_OPERANDS 0xffffffff81365867
#endif

#ifndef ACPI_DS_EVAL_DATA_OBJECT_OPERANDS
#define ACPI_DS_EVAL_DATA_OBJECT_OPERANDS 0xffffffff8136595b
#endif

#ifndef ACPI_DS_EVAL_BANK_FIELD_OPERANDS
#define ACPI_DS_EVAL_BANK_FIELD_OPERANDS 0xffffffff81365a61
#endif

#ifndef ACPI_DS_CLEAR_IMPLICIT_RETURN
#define ACPI_DS_CLEAR_IMPLICIT_RETURN 0xffffffff81365af2
#endif

#ifndef ACPI_DS_DO_IMPLICIT_RETURN
#define ACPI_DS_DO_IMPLICIT_RETURN 0xffffffff81365b25
#endif

#ifndef ACPI_DS_IS_RESULT_USED
#define ACPI_DS_IS_RESULT_USED 0xffffffff81365b7d
#endif

#ifndef ACPI_DS_DELETE_RESULT_IF_NOT_USED
#define ACPI_DS_DELETE_RESULT_IF_NOT_USED 0xffffffff81365c86
#endif

#ifndef ACPI_DS_RESOLVE_OPERANDS
#define ACPI_DS_RESOLVE_OPERANDS 0xffffffff81365ce9
#endif

#ifndef ACPI_DS_CLEAR_OPERANDS
#define ACPI_DS_CLEAR_OPERANDS 0xffffffff81365d21
#endif

#ifndef ACPI_DS_CREATE_OPERAND
#define ACPI_DS_CREATE_OPERAND 0xffffffff81365d5e
#endif

#ifndef ACPI_DS_CREATE_OPERANDS
#define ACPI_DS_CREATE_OPERANDS 0xffffffff81365f98
#endif

#ifndef ACPI_DS_EVALUATE_NAME_PATH
#define ACPI_DS_EVALUATE_NAME_PATH 0xffffffff8136604c
#endif

#ifndef ACPI_DS_GET_PREDICATE_VALUE
#define ACPI_DS_GET_PREDICATE_VALUE 0xffffffff81366142
#endif

#ifndef ACPI_DS_EXEC_BEGIN_OP
#define ACPI_DS_EXEC_BEGIN_OP 0xffffffff813662ba
#endif

#ifndef ACPI_DS_EXEC_END_OP
#define ACPI_DS_EXEC_END_OP 0xffffffff813663d2
#endif

#ifndef ACPI_DS_LOAD1_BEGIN_OP
#define ACPI_DS_LOAD1_BEGIN_OP 0xffffffff813667aa
#endif

#ifndef ACPI_DS_LOAD1_END_OP
#define ACPI_DS_LOAD1_END_OP 0xffffffff81366a2c
#endif

#ifndef ACPI_DS_INIT_CALLBACKS
#define ACPI_DS_INIT_CALLBACKS 0xffffffff81366b97
#endif

#ifndef ACPI_DS_LOAD2_BEGIN_OP
#define ACPI_DS_LOAD2_BEGIN_OP 0xffffffff81366c2d
#endif

#ifndef ACPI_DS_LOAD2_END_OP
#define ACPI_DS_LOAD2_END_OP 0xffffffff81366f6a
#endif

#ifndef ACPI_DS_SCOPE_STACK_CLEAR
#define ACPI_DS_SCOPE_STACK_CLEAR 0xffffffff8136729b
#endif

#ifndef ACPI_DS_SCOPE_STACK_PUSH
#define ACPI_DS_SCOPE_STACK_PUSH 0xffffffff813672c3
#endif

#ifndef ACPI_DS_SCOPE_STACK_POP
#define ACPI_DS_SCOPE_STACK_POP 0xffffffff81367353
#endif

#ifndef ACPI_DS_RESULT_POP
#define ACPI_DS_RESULT_POP 0xffffffff81367383
#endif

#ifndef ACPI_DS_RESULT_PUSH
#define ACPI_DS_RESULT_PUSH 0xffffffff81367490
#endif

#ifndef ACPI_DS_OBJ_STACK_PUSH
#define ACPI_DS_OBJ_STACK_PUSH 0xffffffff813675bb
#endif

#ifndef ACPI_DS_OBJ_STACK_POP
#define ACPI_DS_OBJ_STACK_POP 0xffffffff81367611
#endif

#ifndef ACPI_DS_OBJ_STACK_POP_AND_DELETE
#define ACPI_DS_OBJ_STACK_POP_AND_DELETE 0xffffffff81367666
#endif

#ifndef ACPI_DS_GET_CURRENT_WALK_STATE
#define ACPI_DS_GET_CURRENT_WALK_STATE 0xffffffff813676b8
#endif

#ifndef ACPI_DS_PUSH_WALK_STATE
#define ACPI_DS_PUSH_WALK_STATE 0xffffffff813676c9
#endif

#ifndef ACPI_DS_POP_WALK_STATE
#define ACPI_DS_POP_WALK_STATE 0xffffffff813676da
#endif

#ifndef ACPI_DS_CREATE_WALK_STATE
#define ACPI_DS_CREATE_WALK_STATE 0xffffffff813676f0
#endif

#ifndef ACPI_DS_INIT_AML_WALK
#define ACPI_DS_INIT_AML_WALK 0xffffffff8136778a
#endif

#ifndef ACPI_DS_DELETE_WALK_STATE
#define ACPI_DS_DELETE_WALK_STATE 0xffffffff8136788e
#endif

#ifndef ACPI_EV_INITIALIZE_EVENTS
#define ACPI_EV_INITIALIZE_EVENTS 0xffffffff81367951
#endif

#ifndef ACPI_EV_INSTALL_XRUPT_HANDLERS
#define ACPI_EV_INSTALL_XRUPT_HANDLERS 0xffffffff813679ed
#endif

#ifndef ACPI_EV_FIXED_EVENT_DETECT
#define ACPI_EV_FIXED_EVENT_DETECT 0xffffffff81367a53
#endif

#ifndef ACPI_EV_UPDATE_GPE_ENABLE_MASK
#define ACPI_EV_UPDATE_GPE_ENABLE_MASK 0xffffffff81367b52
#endif

#ifndef ACPI_EV_ENABLE_GPE
#define ACPI_EV_ENABLE_GPE 0xffffffff81367b93
#endif

#ifndef ACPI_EV_ADD_GPE_REFERENCE
#define ACPI_EV_ADD_GPE_REFERENCE 0xffffffff81367bb2
#endif

#ifndef ACPI_EV_REMOVE_GPE_REFERENCE
#define ACPI_EV_REMOVE_GPE_REFERENCE 0xffffffff81367bf3
#endif

#ifndef ACPI_EV_LOW_GET_GPE_INFO
#define ACPI_EV_LOW_GET_GPE_INFO 0xffffffff81367c38
#endif

#ifndef ACPI_EV_GET_GPE_EVENT_INFO
#define ACPI_EV_GET_GPE_EVENT_INFO 0xffffffff81367c62
#endif

#ifndef ACPI_EV_FINISH_GPE
#define ACPI_EV_FINISH_GPE 0xffffffff81367cb6
#endif

#ifndef ACPI_EV_GPE_DISPATCH
#define ACPI_EV_GPE_DISPATCH 0xffffffff81367e14
#endif

#ifndef ACPI_EV_GPE_DETECT
#define ACPI_EV_GPE_DETECT 0xffffffff81367f43
#endif

#ifndef ACPI_EV_DELETE_GPE_BLOCK
#define ACPI_EV_DELETE_GPE_BLOCK 0xffffffff81368103
#endif

#ifndef ACPI_EV_CREATE_GPE_BLOCK
#define ACPI_EV_CREATE_GPE_BLOCK 0xffffffff813681bb
#endif

#ifndef ACPI_EV_INITIALIZE_GPE_BLOCK
#define ACPI_EV_INITIALIZE_GPE_BLOCK 0xffffffff81368478
#endif

#ifndef ACPI_EV_MATCH_GPE_METHOD
#define ACPI_EV_MATCH_GPE_METHOD 0xffffffff8136855b
#endif

#ifndef ACPI_EV_GPE_INITIALIZE
#define ACPI_EV_GPE_INITIALIZE 0xffffffff81368647
#endif

#ifndef ACPI_EV_UPDATE_GPES
#define ACPI_EV_UPDATE_GPES 0xffffffff81368787
#endif

#ifndef ACPI_EV_WALK_GPE_LIST
#define ACPI_EV_WALK_GPE_LIST 0xffffffff81368861
#endif

#ifndef ACPI_EV_GET_GPE_DEVICE
#define ACPI_EV_GET_GPE_DEVICE 0xffffffff813688e2
#endif

#ifndef ACPI_EV_GET_GPE_XRUPT_BLOCK
#define ACPI_EV_GET_GPE_XRUPT_BLOCK 0xffffffff81368911
#endif

#ifndef ACPI_EV_DELETE_GPE_XRUPT
#define ACPI_EV_DELETE_GPE_XRUPT 0xffffffff81368a23
#endif

#ifndef ACPI_EV_DELETE_GPE_HANDLERS
#define ACPI_EV_DELETE_GPE_HANDLERS 0xffffffff81368aa3
#endif

#ifndef ACPI_EV_INIT_GLOBAL_LOCK_HANDLER
#define ACPI_EV_INIT_GLOBAL_LOCK_HANDLER 0xffffffff81368b9b
#endif

#ifndef ACPI_EV_REMOVE_GLOBAL_LOCK_HANDLER
#define ACPI_EV_REMOVE_GLOBAL_LOCK_HANDLER 0xffffffff81368c43
#endif

#ifndef ACPI_EV_ACQUIRE_GLOBAL_LOCK
#define ACPI_EV_ACQUIRE_GLOBAL_LOCK 0xffffffff81368c7d
#endif

#ifndef ACPI_EV_RELEASE_GLOBAL_LOCK
#define ACPI_EV_RELEASE_GLOBAL_LOCK 0xffffffff81368d5c
#endif

#ifndef ACPI_EV_HAS_DEFAULT_HANDLER
#define ACPI_EV_HAS_DEFAULT_HANDLER 0xffffffff81368e76
#endif

#ifndef ACPI_EV_INSTALL_SPACE_HANDLER
#define ACPI_EV_INSTALL_SPACE_HANDLER 0xffffffff81368eaf
#endif

#ifndef ACPI_EV_INSTALL_REGION_HANDLERS
#define ACPI_EV_INSTALL_REGION_HANDLERS 0xffffffff813690ed
#endif

#ifndef ACPI_EV_IS_NOTIFY_OBJECT
#define ACPI_EV_IS_NOTIFY_OBJECT 0xffffffff813691af
#endif

#ifndef ACPI_EV_QUEUE_NOTIFY_REQUEST
#define ACPI_EV_QUEUE_NOTIFY_REQUEST 0xffffffff813691cf
#endif

#ifndef ACPI_EV_TERMINATE
#define ACPI_EV_TERMINATE 0xffffffff813692a0
#endif

#ifndef ACPI_EV_ADDRESS_SPACE_DISPATCH
#define ACPI_EV_ADDRESS_SPACE_DISPATCH 0xffffffff81369379
#endif

#ifndef ACPI_EV_ATTACH_REGION
#define ACPI_EV_ATTACH_REGION 0xffffffff813695a6
#endif

#ifndef ACPI_EV_EXECUTE_REG_METHOD
#define ACPI_EV_EXECUTE_REG_METHOD 0xffffffff813695d1
#endif

#ifndef ACPI_EV_DETACH_REGION
#define ACPI_EV_DETACH_REGION 0xffffffff813696cd
#endif

#ifndef ACPI_EV_EXECUTE_REG_METHODS
#define ACPI_EV_EXECUTE_REG_METHODS 0xffffffff81369892
#endif

#ifndef ACPI_EV_INITIALIZE_OP_REGIONS
#define ACPI_EV_INITIALIZE_OP_REGIONS 0xffffffff81369985
#endif

#ifndef ACPI_EV_SYSTEM_MEMORY_REGION_SETUP
#define ACPI_EV_SYSTEM_MEMORY_REGION_SETUP 0xffffffff813699eb
#endif

#ifndef ACPI_EV_IO_SPACE_REGION_SETUP
#define ACPI_EV_IO_SPACE_REGION_SETUP 0xffffffff81369a82
#endif

#ifndef ACPI_EV_PCI_CONFIG_REGION_SETUP
#define ACPI_EV_PCI_CONFIG_REGION_SETUP 0xffffffff81369a96
#endif

#ifndef ACPI_EV_PCI_BAR_REGION_SETUP
#define ACPI_EV_PCI_BAR_REGION_SETUP 0xffffffff81369ceb
#endif

#ifndef ACPI_EV_CMOS_REGION_SETUP
#define ACPI_EV_CMOS_REGION_SETUP 0xffffffff81369cf3
#endif

#ifndef ACPI_EV_DEFAULT_REGION_SETUP
#define ACPI_EV_DEFAULT_REGION_SETUP 0xffffffff81369cfb
#endif

#ifndef ACPI_EV_INITIALIZE_REGION
#define ACPI_EV_INITIALIZE_REGION 0xffffffff81369d0f
#endif

#ifndef ACPI_EV_SCI_DISPATCH
#define ACPI_EV_SCI_DISPATCH 0xffffffff81369e49
#endif

#ifndef ACPI_EV_GPE_XRUPT_HANDLER
#define ACPI_EV_GPE_XRUPT_HANDLER 0xffffffff81369ed2
#endif

#ifndef ACPI_EV_INSTALL_SCI_HANDLER
#define ACPI_EV_INSTALL_SCI_HANDLER 0xffffffff81369ede
#endif

#ifndef ACPI_EV_REMOVE_ALL_SCI_HANDLERS
#define ACPI_EV_REMOVE_ALL_SCI_HANDLERS 0xffffffff81369eff
#endif

#ifndef ACPI_INSTALL_NOTIFY_HANDLER
#define ACPI_INSTALL_NOTIFY_HANDLER 0xffffffff81369f6f
#endif

#ifndef ACPI_INSTALL_GLOBAL_EVENT_HANDLER
#define ACPI_INSTALL_GLOBAL_EVENT_HANDLER 0xffffffff8136a174
#endif

#ifndef ACPI_REMOVE_NOTIFY_HANDLER
#define ACPI_REMOVE_NOTIFY_HANDLER 0xffffffff8136a1cd
#endif

#ifndef ACPI_REMOVE_SCI_HANDLER
#define ACPI_REMOVE_SCI_HANDLER 0xffffffff8136a35a
#endif

#ifndef ACPI_INSTALL_FIXED_EVENT_HANDLER
#define ACPI_INSTALL_FIXED_EVENT_HANDLER 0xffffffff8136a3fb
#endif

#ifndef ACPI_REMOVE_FIXED_EVENT_HANDLER
#define ACPI_REMOVE_FIXED_EVENT_HANDLER 0xffffffff8136a4c6
#endif

#ifndef ACPI_REMOVE_GPE_HANDLER
#define ACPI_REMOVE_GPE_HANDLER 0xffffffff8136a54a
#endif

#ifndef ACPI_ACQUIRE_GLOBAL_LOCK
#define ACPI_ACQUIRE_GLOBAL_LOCK 0xffffffff8136a64a
#endif

#ifndef ACPI_RELEASE_GLOBAL_LOCK
#define ACPI_RELEASE_GLOBAL_LOCK 0xffffffff8136a699
#endif

#ifndef ACPI_INSTALL_SCI_HANDLER
#define ACPI_INSTALL_SCI_HANDLER 0xffffffff8136a6c2
#endif

#ifndef ACPI_INSTALL_GPE_HANDLER
#define ACPI_INSTALL_GPE_HANDLER 0xffffffff8136a921
#endif

#ifndef ACPI_INSTALL_GPE_RAW_HANDLER
#define ACPI_INSTALL_GPE_RAW_HANDLER 0xffffffff8136a94b
#endif

#ifndef ACPI_DISABLE
#define ACPI_DISABLE 0xffffffff8136a978
#endif

#ifndef ACPI_ENABLE
#define ACPI_ENABLE 0xffffffff8136a9c6
#endif

#ifndef ACPI_CLEAR_EVENT
#define ACPI_CLEAR_EVENT 0xffffffff8136aa88
#endif

#ifndef ACPI_GET_EVENT_STATUS
#define ACPI_GET_EVENT_STATUS 0xffffffff8136aab2
#endif

#ifndef ACPI_ENABLE_EVENT
#define ACPI_ENABLE_EVENT 0xffffffff8136ab5f
#endif

#ifndef ACPI_DISABLE_EVENT
#define ACPI_DISABLE_EVENT 0xffffffff8136abe2
#endif

#ifndef ACPI_UPDATE_ALL_GPES
#define ACPI_UPDATE_ALL_GPES 0xffffffff8136ac63
#endif

#ifndef ACPI_ENABLE_GPE
#define ACPI_ENABLE_GPE 0xffffffff8136acab
#endif

#ifndef ACPI_MARK_GPE_FOR_WAKE
#define ACPI_MARK_GPE_FOR_WAKE 0xffffffff8136ad12
#endif

#ifndef ACPI_DISABLE_GPE
#define ACPI_DISABLE_GPE 0xffffffff8136ad68
#endif

#ifndef ACPI_SET_GPE
#define ACPI_SET_GPE 0xffffffff8136adc5
#endif

#ifndef ACPI_SET_GPE_WAKE_MASK
#define ACPI_SET_GPE_WAKE_MASK 0xffffffff8136ae42
#endif

#ifndef ACPI_CLEAR_GPE
#define ACPI_CLEAR_GPE 0xffffffff8136aefa
#endif

#ifndef ACPI_GET_GPE_STATUS
#define ACPI_GET_GPE_STATUS 0xffffffff8136af57
#endif

#ifndef ACPI_FINISH_GPE
#define ACPI_FINISH_GPE 0xffffffff8136afbe
#endif

#ifndef ACPI_GET_GPE_DEVICE
#define ACPI_GET_GPE_DEVICE 0xffffffff8136b01b
#endif

#ifndef ACPI_DISABLE_ALL_GPES
#define ACPI_DISABLE_ALL_GPES 0xffffffff8136b082
#endif

#ifndef ACPI_ENABLE_ALL_RUNTIME_GPES
#define ACPI_ENABLE_ALL_RUNTIME_GPES 0xffffffff8136b0ab
#endif

#ifndef ACPI_ENABLE_ALL_WAKEUP_GPES
#define ACPI_ENABLE_ALL_WAKEUP_GPES 0xffffffff8136b0d4
#endif

#ifndef ACPI_INSTALL_GPE_BLOCK
#define ACPI_INSTALL_GPE_BLOCK 0xffffffff8136b0fd
#endif

#ifndef ACPI_REMOVE_GPE_BLOCK
#define ACPI_REMOVE_GPE_BLOCK 0xffffffff8136b22f
#endif

#ifndef ACPI_SETUP_GPE_FOR_WAKE
#define ACPI_SETUP_GPE_FOR_WAKE 0xffffffff8136b2b2
#endif

#ifndef ACPI_INSTALL_ADDRESS_SPACE_HANDLER
#define ACPI_INSTALL_ADDRESS_SPACE_HANDLER 0xffffffff8136b3c4
#endif

#ifndef ACPI_REMOVE_ADDRESS_SPACE_HANDLER
#define ACPI_REMOVE_ADDRESS_SPACE_HANDLER 0xffffffff8136b471
#endif

#ifndef ACPI_EX_UNLOAD_TABLE
#define ACPI_EX_UNLOAD_TABLE 0xffffffff8136b66f
#endif

#ifndef ACPI_EX_LOAD_TABLE_OP
#define ACPI_EX_LOAD_TABLE_OP 0xffffffff8136b726
#endif

#ifndef ACPI_EX_LOAD_OP
#define ACPI_EX_LOAD_OP 0xffffffff8136b8f9
#endif

#ifndef ACPI_EX_CONVERT_TO_INTEGER
#define ACPI_EX_CONVERT_TO_INTEGER 0xffffffff8136bbee
#endif

#ifndef ACPI_EX_CONVERT_TO_BUFFER
#define ACPI_EX_CONVERT_TO_BUFFER 0xffffffff8136bcac
#endif

#ifndef ACPI_EX_CONVERT_TO_STRING
#define ACPI_EX_CONVERT_TO_STRING 0xffffffff8136bd39
#endif

#ifndef ACPI_EX_CONVERT_TO_TARGET_TYPE
#define ACPI_EX_CONVERT_TO_TARGET_TYPE 0xffffffff8136bebc
#endif

#ifndef ACPI_EX_CREATE_ALIAS
#define ACPI_EX_CREATE_ALIAS 0xffffffff8136bfb6
#endif

#ifndef ACPI_EX_CREATE_EVENT
#define ACPI_EX_CREATE_EVENT 0xffffffff8136c025
#endif

#ifndef ACPI_EX_CREATE_MUTEX
#define ACPI_EX_CREATE_MUTEX 0xffffffff8136c09b
#endif

#ifndef ACPI_EX_CREATE_REGION
#define ACPI_EX_CREATE_REGION 0xffffffff8136c125
#endif

#ifndef ACPI_EX_CREATE_PROCESSOR
#define ACPI_EX_CREATE_PROCESSOR 0xffffffff8136c221
#endif

#ifndef ACPI_EX_CREATE_POWER_RESOURCE
#define ACPI_EX_CREATE_POWER_RESOURCE 0xffffffff8136c2a3
#endif

#ifndef ACPI_EX_CREATE_METHOD
#define ACPI_EX_CREATE_METHOD 0xffffffff8136c316
#endif

#ifndef ACPI_EX_DO_DEBUG_OBJECT
#define ACPI_EX_DO_DEBUG_OBJECT 0xffffffff8136c3b5
#endif

#ifndef ACPI_EX_READ_DATA_FROM_FIELD
#define ACPI_EX_READ_DATA_FROM_FIELD 0xffffffff8136c6f2
#endif

#ifndef ACPI_EX_WRITE_DATA_TO_FIELD
#define ACPI_EX_WRITE_DATA_TO_FIELD 0xffffffff8136c865
#endif

#ifndef ACPI_EX_ACCESS_REGION
#define ACPI_EX_ACCESS_REGION 0xffffffff8136caaa
#endif

#ifndef ACPI_EX_INSERT_INTO_FIELD
#define ACPI_EX_INSERT_INTO_FIELD 0xffffffff8136cd19
#endif

#ifndef ACPI_EX_WRITE_WITH_UPDATE_RULE
#define ACPI_EX_WRITE_WITH_UPDATE_RULE 0xffffffff8136d095
#endif

#ifndef ACPI_EX_EXTRACT_FROM_FIELD
#define ACPI_EX_EXTRACT_FROM_FIELD 0xffffffff8136d167
#endif

#ifndef ACPI_EX_UNLINK_MUTEX
#define ACPI_EX_UNLINK_MUTEX 0xffffffff8136d36c
#endif

#ifndef ACPI_EX_ACQUIRE_MUTEX_OBJECT
#define ACPI_EX_ACQUIRE_MUTEX_OBJECT 0xffffffff8136d3ac
#endif

#ifndef ACPI_EX_ACQUIRE_MUTEX
#define ACPI_EX_ACQUIRE_MUTEX 0xffffffff8136d40f
#endif

#ifndef ACPI_EX_RELEASE_MUTEX_OBJECT
#define ACPI_EX_RELEASE_MUTEX_OBJECT 0xffffffff8136d512
#endif

#ifndef ACPI_EX_RELEASE_MUTEX
#define ACPI_EX_RELEASE_MUTEX 0xffffffff8136d574
#endif

#ifndef ACPI_EX_RELEASE_ALL_MUTEXES
#define ACPI_EX_RELEASE_ALL_MUTEXES 0xffffffff8136d6cf
#endif

#ifndef ACPI_EX_GET_NAME_STRING
#define ACPI_EX_GET_NAME_STRING 0xffffffff8136d8c4
#endif

#ifndef ACPI_EX_OPCODE_0A_0T_1R
#define ACPI_EX_OPCODE_0A_0T_1R 0xffffffff8136daad
#endif

#ifndef ACPI_EX_OPCODE_1A_0T_0R
#define ACPI_EX_OPCODE_1A_0T_0R 0xffffffff8136db31
#endif

#ifndef ACPI_EX_OPCODE_1A_1T_0R
#define ACPI_EX_OPCODE_1A_1T_0R 0xffffffff8136dbcf
#endif

#ifndef ACPI_EX_OPCODE_1A_1T_1R
#define ACPI_EX_OPCODE_1A_1T_1R 0xffffffff8136dc17
#endif

#ifndef ACPI_EX_OPCODE_1A_0T_1R
#define ACPI_EX_OPCODE_1A_0T_1R 0xffffffff8136e13d
#endif

#ifndef ACPI_EX_OPCODE_2A_0T_0R
#define ACPI_EX_OPCODE_2A_0T_0R 0xffffffff8136e60b
#endif

#ifndef ACPI_EX_OPCODE_2A_2T_1R
#define ACPI_EX_OPCODE_2A_2T_1R 0xffffffff8136e699
#endif

#ifndef ACPI_EX_OPCODE_2A_1T_1R
#define ACPI_EX_OPCODE_2A_1T_1R 0xffffffff8136e7bd
#endif

#ifndef ACPI_EX_OPCODE_2A_0T_1R
#define ACPI_EX_OPCODE_2A_0T_1R 0xffffffff8136eaf8
#endif

#ifndef ACPI_EX_OPCODE_3A_0T_0R
#define ACPI_EX_OPCODE_3A_0T_0R 0xffffffff8136ec49
#endif

#ifndef ACPI_EX_OPCODE_3A_1T_1R
#define ACPI_EX_OPCODE_3A_1T_1R 0xffffffff8136ed0c
#endif

#ifndef ACPI_EX_OPCODE_6A_0T_1R
#define ACPI_EX_OPCODE_6A_0T_1R 0xffffffff8136ef33
#endif

#ifndef ACPI_EX_PREP_COMMON_FIELD_OBJECT
#define ACPI_EX_PREP_COMMON_FIELD_OBJECT 0xffffffff8136f0e8
#endif

#ifndef ACPI_EX_PREP_FIELD_VALUE
#define ACPI_EX_PREP_FIELD_VALUE 0xffffffff8136f189
#endif

#ifndef ACPI_EX_GET_OBJECT_REFERENCE
#define ACPI_EX_GET_OBJECT_REFERENCE 0xffffffff8136f409
#endif

#ifndef ACPI_EX_CONCAT_TEMPLATE
#define ACPI_EX_CONCAT_TEMPLATE 0xffffffff8136f4cd
#endif

#ifndef ACPI_EX_DO_CONCATENATE
#define ACPI_EX_DO_CONCATENATE 0xffffffff8136f570
#endif

#ifndef ACPI_EX_DO_MATH_OP
#define ACPI_EX_DO_MATH_OP 0xffffffff8136f72e
#endif

#ifndef ACPI_EX_DO_LOGICAL_NUMERIC_OP
#define ACPI_EX_DO_LOGICAL_NUMERIC_OP 0xffffffff8136f7b0
#endif

#ifndef ACPI_EX_DO_LOGICAL_OP
#define ACPI_EX_DO_LOGICAL_OP 0xffffffff8136f7eb
#endif

#ifndef ACPI_EX_SYSTEM_MEMORY_SPACE_HANDLER
#define ACPI_EX_SYSTEM_MEMORY_SPACE_HANDLER 0xffffffff8136f95b
#endif

#ifndef ACPI_EX_SYSTEM_IO_SPACE_HANDLER
#define ACPI_EX_SYSTEM_IO_SPACE_HANDLER 0xffffffff8136fb03
#endif

#ifndef ACPI_EX_PCI_CONFIG_SPACE_HANDLER
#define ACPI_EX_PCI_CONFIG_SPACE_HANDLER 0xffffffff8136fb45
#endif

#ifndef ACPI_EX_CMOS_SPACE_HANDLER
#define ACPI_EX_CMOS_SPACE_HANDLER 0xffffffff8136fb88
#endif

#ifndef ACPI_EX_PCI_BAR_SPACE_HANDLER
#define ACPI_EX_PCI_BAR_SPACE_HANDLER 0xffffffff8136fb90
#endif

#ifndef ACPI_EX_DATA_TABLE_SPACE_HANDLER
#define ACPI_EX_DATA_TABLE_SPACE_HANDLER 0xffffffff8136fb98
#endif

#ifndef ACPI_EX_RESOLVE_NODE_TO_VALUE
#define ACPI_EX_RESOLVE_NODE_TO_VALUE 0xffffffff8136fbc8
#endif

#ifndef ACPI_EX_RESOLVE_TO_VALUE
#define ACPI_EX_RESOLVE_TO_VALUE 0xffffffff8136fde3
#endif

#ifndef ACPI_EX_RESOLVE_MULTIPLE
#define ACPI_EX_RESOLVE_MULTIPLE 0xffffffff8136fff4
#endif

#ifndef ACPI_EX_RESOLVE_OPERANDS
#define ACPI_EX_RESOLVE_OPERANDS 0xffffffff8137025f
#endif

#ifndef ACPI_EX_STORE_OBJECT_TO_NODE
#define ACPI_EX_STORE_OBJECT_TO_NODE 0xffffffff813707a3
#endif

#ifndef ACPI_EX_STORE
#define ACPI_EX_STORE 0xffffffff81370870
#endif

#ifndef ACPI_EX_RESOLVE_OBJECT
#define ACPI_EX_RESOLVE_OBJECT 0xffffffff81370ab1
#endif

#ifndef ACPI_EX_STORE_OBJECT_TO_OBJECT
#define ACPI_EX_STORE_OBJECT_TO_OBJECT 0xffffffff81370b9d
#endif

#ifndef ACPI_EX_STORE_BUFFER_TO_BUFFER
#define ACPI_EX_STORE_BUFFER_TO_BUFFER 0xffffffff81370cbb
#endif

#ifndef ACPI_EX_STORE_STRING_TO_STRING
#define ACPI_EX_STORE_STRING_TO_STRING 0xffffffff81370d5e
#endif

#ifndef ACPI_EX_SYSTEM_WAIT_SEMAPHORE
#define ACPI_EX_SYSTEM_WAIT_SEMAPHORE 0xffffffff81370e11
#endif

#ifndef ACPI_EX_SYSTEM_WAIT_MUTEX
#define ACPI_EX_SYSTEM_WAIT_MUTEX 0xffffffff81370e5f
#endif

#ifndef ACPI_EX_SYSTEM_DO_STALL
#define ACPI_EX_SYSTEM_DO_STALL 0xffffffff81370ead
#endif

#ifndef ACPI_EX_SYSTEM_DO_SLEEP
#define ACPI_EX_SYSTEM_DO_SLEEP 0xffffffff81370ee7
#endif

#ifndef ACPI_EX_SYSTEM_SIGNAL_EVENT
#define ACPI_EX_SYSTEM_SIGNAL_EVENT 0xffffffff81370f13
#endif

#ifndef ACPI_EX_SYSTEM_WAIT_EVENT
#define ACPI_EX_SYSTEM_WAIT_EVENT 0xffffffff81370f31
#endif

#ifndef ACPI_EX_SYSTEM_RESET_EVENT
#define ACPI_EX_SYSTEM_RESET_EVENT 0xffffffff81370f52
#endif

#ifndef ACPI_EX_ENTER_INTERPRETER
#define ACPI_EX_ENTER_INTERPRETER 0xffffffff81370f90
#endif

#ifndef ACPI_EX_EXIT_INTERPRETER
#define ACPI_EX_EXIT_INTERPRETER 0xffffffff81370fbe
#endif

#ifndef ACPI_EX_TRUNCATE_FOR32BIT_TABLE
#define ACPI_EX_TRUNCATE_FOR32BIT_TABLE 0xffffffff81370fec
#endif

#ifndef ACPI_EX_ACQUIRE_GLOBAL_LOCK
#define ACPI_EX_ACQUIRE_GLOBAL_LOCK 0xffffffff81371021
#endif

#ifndef ACPI_EX_RELEASE_GLOBAL_LOCK
#define ACPI_EX_RELEASE_GLOBAL_LOCK 0xffffffff8137106c
#endif

#ifndef ACPI_EX_EISA_ID_TO_STRING
#define ACPI_EX_EISA_ID_TO_STRING 0xffffffff813710a9
#endif

#ifndef ACPI_EX_INTEGER_TO_STRING
#define ACPI_EX_INTEGER_TO_STRING 0xffffffff8137115d
#endif

#ifndef ACPI_IS_VALID_SPACE_ID
#define ACPI_IS_VALID_SPACE_ID 0xffffffff813711de
#endif

#ifndef ACPI_HW_SET_MODE
#define ACPI_HW_SET_MODE 0xffffffff813711ee
#endif

#ifndef ACPI_HW_GET_MODE
#define ACPI_HW_GET_MODE 0xffffffff813712ae
#endif

#ifndef ACPI_HW_EXECUTE_SLEEP_METHOD
#define ACPI_HW_EXECUTE_SLEEP_METHOD 0xffffffff813712fc
#endif

#ifndef ACPI_HW_EXTENDED_SLEEP
#define ACPI_HW_EXTENDED_SLEEP 0xffffffff8137136b
#endif

#ifndef ACPI_HW_EXTENDED_WAKE_PREP
#define ACPI_HW_EXTENDED_WAKE_PREP 0xffffffff81371425
#endif

#ifndef ACPI_HW_EXTENDED_WAKE
#define ACPI_HW_EXTENDED_WAKE 0xffffffff81371465
#endif

#ifndef ACPI_HW_ENABLE_RUNTIME_GPE_BLOCK
#define ACPI_HW_ENABLE_RUNTIME_GPE_BLOCK 0xffffffff813714c1
#endif

#ifndef ACPI_HW_CLEAR_GPE_BLOCK
#define ACPI_HW_CLEAR_GPE_BLOCK 0xffffffff81371501
#endif

#ifndef ACPI_HW_DISABLE_GPE_BLOCK
#define ACPI_HW_DISABLE_GPE_BLOCK 0xffffffff81371538
#endif

#ifndef ACPI_HW_GET_GPE_REGISTER_BIT
#define ACPI_HW_GET_GPE_REGISTER_BIT 0xffffffff813715ac
#endif

#ifndef ACPI_HW_LOW_SET_GPE
#define ACPI_HW_LOW_SET_GPE 0xffffffff813715c4
#endif

#ifndef ACPI_HW_CLEAR_GPE
#define ACPI_HW_CLEAR_GPE 0xffffffff81371667
#endif

#ifndef ACPI_HW_GET_GPE_STATUS
#define ACPI_HW_GET_GPE_STATUS 0xffffffff8137168d
#endif

#ifndef ACPI_HW_DISABLE_ALL_GPES
#define ACPI_HW_DISABLE_ALL_GPES 0xffffffff8137173e
#endif

#ifndef ACPI_HW_ENABLE_ALL_RUNTIME_GPES
#define ACPI_HW_ENABLE_ALL_RUNTIME_GPES 0xffffffff81371761
#endif

#ifndef ACPI_HW_ENABLE_ALL_WAKEUP_GPES
#define ACPI_HW_ENABLE_ALL_WAKEUP_GPES 0xffffffff81371776
#endif

#ifndef ACPI_HW_DERIVE_PCI_ID
#define ACPI_HW_DERIVE_PCI_ID 0xffffffff813717a6
#endif

#ifndef ACPI_HW_VALIDATE_REGISTER
#define ACPI_HW_VALIDATE_REGISTER 0xffffffff81371973
#endif

#ifndef ACPI_HW_READ
#define ACPI_HW_READ 0xffffffff81371a25
#endif

#ifndef ACPI_HW_WRITE
#define ACPI_HW_WRITE 0xffffffff81371add
#endif

#ifndef ACPI_HW_GET_BIT_REGISTER_INFO
#define ACPI_HW_GET_BIT_REGISTER_INFO 0xffffffff81371b58
#endif

#ifndef ACPI_HW_WRITE_PM1_CONTROL
#define ACPI_HW_WRITE_PM1_CONTROL 0xffffffff81371b8e
#endif

#ifndef ACPI_HW_REGISTER_READ
#define ACPI_HW_REGISTER_READ 0xffffffff81371bc1
#endif

#ifndef ACPI_HW_REGISTER_WRITE
#define ACPI_HW_REGISTER_WRITE 0xffffffff81371c9b
#endif

#ifndef ACPI_HW_CLEAR_ACPI_STATUS
#define ACPI_HW_CLEAR_ACPI_STATUS 0xffffffff81371d9e
#endif

#ifndef ACPI_HW_LEGACY_SLEEP
#define ACPI_HW_LEGACY_SLEEP 0xffffffff81371dfa
#endif

#ifndef ACPI_HW_LEGACY_WAKE_PREP
#define ACPI_HW_LEGACY_WAKE_PREP 0xffffffff81371f5c
#endif

#ifndef ACPI_HW_LEGACY_WAKE
#define ACPI_HW_LEGACY_WAKE 0xffffffff81371ffc
#endif

#ifndef ACPI_HW_READ_PORT
#define ACPI_HW_READ_PORT 0xffffffff81372164
#endif

#ifndef ACPI_HW_WRITE_PORT
#define ACPI_HW_WRITE_PORT 0xffffffff81372207
#endif

#ifndef ACPI_WRITE
#define ACPI_WRITE 0xffffffff8137229c
#endif

#ifndef ACPI_READ_BIT_REGISTER
#define ACPI_READ_BIT_REGISTER 0xffffffff81372319
#endif

#ifndef ACPI_WRITE_BIT_REGISTER
#define ACPI_WRITE_BIT_REGISTER 0xffffffff81372362
#endif

#ifndef ACPI_RESET
#define ACPI_RESET 0xffffffff8137241b
#endif

#ifndef ACPI_READ
#define ACPI_READ 0xffffffff8137246b
#endif

#ifndef ACPI_GET_SLEEP_TYPE_DATA
#define ACPI_GET_SLEEP_TYPE_DATA 0xffffffff8137251d
#endif

#ifndef ACPI_SET_FIRMWARE_WAKING_VECTOR
#define ACPI_SET_FIRMWARE_WAKING_VECTOR 0xffffffff813726a9
#endif

#ifndef ACPI_SET_FIRMWARE_WAKING_VECTOR64
#define ACPI_SET_FIRMWARE_WAKING_VECTOR64 0xffffffff813726cf
#endif

#ifndef ACPI_LEAVE_SLEEP_STATE_PREP
#define ACPI_LEAVE_SLEEP_STATE_PREP 0xffffffff8137272a
#endif

#ifndef ACPI_LEAVE_SLEEP_STATE
#define ACPI_LEAVE_SLEEP_STATE 0xffffffff8137273c
#endif

#ifndef ACPI_ENTER_SLEEP_STATE_S4BIOS
#define ACPI_ENTER_SLEEP_STATE_S4BIOS 0xffffffff8137274e
#endif

#ifndef ACPI_ENTER_SLEEP_STATE_PREP
#define ACPI_ENTER_SLEEP_STATE_PREP 0xffffffff813727d3
#endif

#ifndef ACPI_ENTER_SLEEP_STATE
#define ACPI_ENTER_SLEEP_STATE 0xffffffff81372860
#endif

#ifndef ACPI_NS_LOOKUP
#define ACPI_NS_LOOKUP 0xffffffff813728b0
#endif

#ifndef ACPI_NS_ROOT_INITIALIZE
#define ACPI_NS_ROOT_INITIALIZE 0xffffffff81372c22
#endif

#ifndef ACPI_NS_CREATE_NODE
#define ACPI_NS_CREATE_NODE 0xffffffff81372ebf
#endif

#ifndef ACPI_NS_DELETE_NODE
#define ACPI_NS_DELETE_NODE 0xffffffff81372f03
#endif

#ifndef ACPI_NS_REMOVE_NODE
#define ACPI_NS_REMOVE_NODE 0xffffffff81372f66
#endif

#ifndef ACPI_NS_INSTALL_NODE
#define ACPI_NS_INSTALL_NODE 0xffffffff81372f9d
#endif

#ifndef ACPI_NS_DELETE_CHILDREN
#define ACPI_NS_DELETE_CHILDREN 0xffffffff81372ffc
#endif

#ifndef ACPI_NS_DELETE_NAMESPACE_SUBTREE
#define ACPI_NS_DELETE_NAMESPACE_SUBTREE 0xffffffff8137305b
#endif

#ifndef ACPI_NS_DELETE_NAMESPACE_BY_OWNER
#define ACPI_NS_DELETE_NAMESPACE_BY_OWNER 0xffffffff813730d8
#endif

#ifndef ACPI_NS_CHECK_ARGUMENT_TYPES
#define ACPI_NS_CHECK_ARGUMENT_TYPES 0xffffffff813731af
#endif

#ifndef ACPI_NS_CHECK_ACPI_COMPLIANCE
#define ACPI_NS_CHECK_ACPI_COMPLIANCE 0xffffffff81373262
#endif

#ifndef ACPI_NS_CHECK_ARGUMENT_COUNT
#define ACPI_NS_CHECK_ARGUMENT_COUNT 0xffffffff81373358
#endif

#ifndef ACPI_NS_CONVERT_TO_INTEGER
#define ACPI_NS_CONVERT_TO_INTEGER 0xffffffff81373440
#endif

#ifndef ACPI_NS_CONVERT_TO_STRING
#define ACPI_NS_CONVERT_TO_STRING 0xffffffff813734cf
#endif

#ifndef ACPI_NS_CONVERT_TO_BUFFER
#define ACPI_NS_CONVERT_TO_BUFFER 0xffffffff81373577
#endif

#ifndef ACPI_NS_CONVERT_TO_UNICODE
#define ACPI_NS_CONVERT_TO_UNICODE 0xffffffff81373653
#endif

#ifndef ACPI_NS_CONVERT_TO_RESOURCE
#define ACPI_NS_CONVERT_TO_RESOURCE 0xffffffff813736c8
#endif

#ifndef ACPI_NS_EVALUATE
#define ACPI_NS_EVALUATE 0xffffffff8137372f
#endif

#ifndef ACPI_NS_EXEC_MODULE_CODE_LIST
#define ACPI_NS_EXEC_MODULE_CODE_LIST 0xffffffff8137396c
#endif

#ifndef ACPI_NS_INITIALIZE_OBJECTS
#define ACPI_NS_INITIALIZE_OBJECTS 0xffffffff81373ce8
#endif

#ifndef ACPI_NS_INITIALIZE_DEVICES
#define ACPI_NS_INITIALIZE_DEVICES 0xffffffff81373d44
#endif

#ifndef ACPI_NS_LOAD_TABLE
#define ACPI_NS_LOAD_TABLE 0xffffffff81373e72
#endif

#ifndef ACPI_NS_BUILD_EXTERNAL_PATH
#define ACPI_NS_BUILD_EXTERNAL_PATH 0xffffffff81373ef3
#endif

#ifndef ACPI_NS_GET_PATHNAME_LENGTH
#define ACPI_NS_GET_PATHNAME_LENGTH 0xffffffff81373f69
#endif

#ifndef ACPI_NS_GET_EXTERNAL_PATHNAME
#define ACPI_NS_GET_EXTERNAL_PATHNAME 0xffffffff81373fc3
#endif

#ifndef ACPI_NS_HANDLE_TO_PATHNAME
#define ACPI_NS_HANDLE_TO_PATHNAME 0xffffffff81374053
#endif

#ifndef ACPI_NS_DETACH_OBJECT
#define ACPI_NS_DETACH_OBJECT 0xffffffff813740ab
#endif

#ifndef ACPI_NS_ATTACH_OBJECT
#define ACPI_NS_ATTACH_OBJECT 0xffffffff81374127
#endif

#ifndef ACPI_NS_GET_ATTACHED_OBJECT
#define ACPI_NS_GET_ATTACHED_OBJECT 0xffffffff81374239
#endif

#ifndef ACPI_NS_GET_SECONDARY_OBJECT
#define ACPI_NS_GET_SECONDARY_OBJECT 0xffffffff81374288
#endif

#ifndef ACPI_NS_ATTACH_DATA
#define ACPI_NS_ATTACH_DATA 0xffffffff813742b0
#endif

#ifndef ACPI_NS_DETACH_DATA
#define ACPI_NS_DETACH_DATA 0xffffffff81374335
#endif

#ifndef ACPI_NS_GET_ATTACHED_DATA
#define ACPI_NS_GET_ATTACHED_DATA 0xffffffff81374378
#endif

#ifndef ACPI_NS_ONE_COMPLETE_PARSE
#define ACPI_NS_ONE_COMPLETE_PARSE 0xffffffff813743a3
#endif

#ifndef ACPI_NS_PARSE_TABLE
#define ACPI_NS_PARSE_TABLE 0xffffffff813744b0
#endif

#ifndef ACPI_NS_CHECK_OBJECT_TYPE
#define ACPI_NS_CHECK_OBJECT_TYPE 0xffffffff813744e7
#endif

#ifndef ACPI_NS_CHECK_RETURN_VALUE
#define ACPI_NS_CHECK_RETURN_VALUE 0xffffffff81374698
#endif

#ifndef ACPI_NS_CHECK_PACKAGE
#define ACPI_NS_CHECK_PACKAGE 0xffffffff81374a15
#endif

#ifndef ACPI_NS_REPAIR_NULL_ELEMENT
#define ACPI_NS_REPAIR_NULL_ELEMENT 0xffffffff81374cd3
#endif

#ifndef ACPI_NS_REMOVE_NULL_ELEMENTS
#define ACPI_NS_REMOVE_NULL_ELEMENTS 0xffffffff81374d43
#endif

#ifndef ACPI_NS_WRAP_WITH_PACKAGE
#define ACPI_NS_WRAP_WITH_PACKAGE 0xffffffff81374d99
#endif

#ifndef ACPI_NS_SIMPLE_REPAIR
#define ACPI_NS_SIMPLE_REPAIR 0xffffffff81374dd8
#endif

#ifndef ACPI_NS_COMPLEX_REPAIRS
#define ACPI_NS_COMPLEX_REPAIRS 0xffffffff81375609
#endif

#ifndef ACPI_NS_SEARCH_ONE_SCOPE
#define ACPI_NS_SEARCH_ONE_SCOPE 0xffffffff8137563e
#endif

#ifndef ACPI_NS_SEARCH_AND_ENTER
#define ACPI_NS_SEARCH_AND_ENTER 0xffffffff8137567f
#endif

#ifndef ACPI_NS_PRINT_NODE_PATHNAME
#define ACPI_NS_PRINT_NODE_PATHNAME 0xffffffff813757dd
#endif

#ifndef ACPI_NS_GET_TYPE
#define ACPI_NS_GET_TYPE 0xffffffff81375852
#endif

#ifndef ACPI_NS_LOCAL
#define ACPI_NS_LOCAL 0xffffffff81375880
#endif

#ifndef ACPI_NS_GET_INTERNAL_NAME_LENGTH
#define ACPI_NS_GET_INTERNAL_NAME_LENGTH 0xffffffff813758bf
#endif

#ifndef ACPI_NS_BUILD_INTERNAL_NAME
#define ACPI_NS_BUILD_INTERNAL_NAME 0xffffffff81375931
#endif

#ifndef ACPI_NS_INTERNALIZE_NAME
#define ACPI_NS_INTERNALIZE_NAME 0xffffffff81375a11
#endif

#ifndef ACPI_NS_EXTERNALIZE_NAME
#define ACPI_NS_EXTERNALIZE_NAME 0xffffffff81375ab3
#endif

#ifndef ACPI_NS_VALIDATE_HANDLE
#define ACPI_NS_VALIDATE_HANDLE 0xffffffff81375c5e
#endif

#ifndef ACPI_NS_TERMINATE
#define ACPI_NS_TERMINATE 0xffffffff81375c83
#endif

#ifndef ACPI_NS_OPENS_SCOPE
#define ACPI_NS_OPENS_SCOPE 0xffffffff81375cbc
#endif

#ifndef ACPI_NS_GET_NODE
#define ACPI_NS_GET_NODE 0xffffffff81375cf3
#endif

#ifndef ACPI_NS_GET_NEXT_NODE
#define ACPI_NS_GET_NEXT_NODE 0xffffffff81375db6
#endif

#ifndef ACPI_NS_GET_NEXT_NODE_TYPED
#define ACPI_NS_GET_NEXT_NODE_TYPED 0xffffffff81375dca
#endif

#ifndef ACPI_NS_WALK_NAMESPACE
#define ACPI_NS_WALK_NAMESPACE 0xffffffff81375dfe
#endif

#ifndef ACPI_EVALUATE_OBJECT
#define ACPI_EVALUATE_OBJECT 0xffffffff81375fc3
#endif

#ifndef ACPI_EVALUATE_OBJECT_TYPED
#define ACPI_EVALUATE_OBJECT_TYPED 0xffffffff813761ec
#endif

#ifndef ACPI_GET_DEVICES
#define ACPI_GET_DEVICES 0xffffffff813762b6
#endif

#ifndef ACPI_WALK_NAMESPACE
#define ACPI_WALK_NAMESPACE 0xffffffff81376327
#endif

#ifndef ACPI_ATTACH_DATA
#define ACPI_ATTACH_DATA 0xffffffff81376545
#endif

#ifndef ACPI_DETACH_DATA
#define ACPI_DETACH_DATA 0xffffffff813765b5
#endif

#ifndef ACPI_GET_DATA_FULL
#define ACPI_GET_DATA_FULL 0xffffffff81376612
#endif

#ifndef ACPI_GET_DATA
#define ACPI_GET_DATA 0xffffffff8137669e
#endif

#ifndef ACPI_GET_HANDLE
#define ACPI_GET_HANDLE 0xffffffff813766b5
#endif

#ifndef ACPI_GET_NAME
#define ACPI_GET_NAME 0xffffffff8137674d
#endif

#ifndef ACPI_INSTALL_METHOD
#define ACPI_INSTALL_METHOD 0xffffffff813767ec
#endif

#ifndef ACPI_GET_OBJECT_INFO
#define ACPI_GET_OBJECT_INFO 0xffffffff813769d9
#endif

#ifndef ACPI_GET_TYPE
#define ACPI_GET_TYPE 0xffffffff81376d98
#endif

#ifndef ACPI_GET_PARENT
#define ACPI_GET_PARENT 0xffffffff81376e04
#endif

#ifndef ACPI_GET_NEXT_OBJECT
#define ACPI_GET_NEXT_OBJECT 0xffffffff81376e6f
#endif

#ifndef ACPI_PS_GET_NEXT_PACKAGE_END
#define ACPI_PS_GET_NEXT_PACKAGE_END 0xffffffff81376f4d
#endif

#ifndef ACPI_PS_GET_NEXT_NAMESTRING
#define ACPI_PS_GET_NEXT_NAMESTRING 0xffffffff81376f67
#endif

#ifndef ACPI_PS_GET_NEXT_NAMEPATH
#define ACPI_PS_GET_NEXT_NAMEPATH 0xffffffff81376fc5
#endif

#ifndef ACPI_PS_GET_NEXT_SIMPLE_ARG
#define ACPI_PS_GET_NEXT_SIMPLE_ARG 0xffffffff81377189
#endif

#ifndef ACPI_PS_GET_NEXT_ARG
#define ACPI_PS_GET_NEXT_ARG 0xffffffff81377265
#endif

#ifndef ACPI_PS_PARSE_LOOP
#define ACPI_PS_PARSE_LOOP 0xffffffff8137762b
#endif

#ifndef ACPI_PS_BUILD_NAMED_OP
#define ACPI_PS_BUILD_NAMED_OP 0xffffffff81377b8e
#endif

#ifndef ACPI_PS_CREATE_OP
#define ACPI_PS_CREATE_OP 0xffffffff81377cd8
#endif

#ifndef ACPI_PS_COMPLETE_OP
#define ACPI_PS_COMPLETE_OP 0xffffffff81377edb
#endif

#ifndef ACPI_PS_COMPLETE_FINAL_OP
#define ACPI_PS_COMPLETE_FINAL_OP 0xffffffff813780f1
#endif

#ifndef ACPI_PS_GET_OPCODE_INFO
#define ACPI_PS_GET_OPCODE_INFO 0xffffffff81378216
#endif

#ifndef ACPI_PS_GET_OPCODE_NAME
#define ACPI_PS_GET_OPCODE_NAME 0xffffffff8137825a
#endif

#ifndef ACPI_PS_GET_ARGUMENT_COUNT
#define ACPI_PS_GET_ARGUMENT_COUNT 0xffffffff81378267
#endif

#ifndef ACPI_PS_GET_OPCODE_SIZE
#define ACPI_PS_GET_OPCODE_SIZE 0xffffffff8137827c
#endif

#ifndef ACPI_PS_PEEK_OPCODE
#define ACPI_PS_PEEK_OPCODE 0xffffffff8137828d
#endif

#ifndef ACPI_PS_COMPLETE_THIS_OP
#define ACPI_PS_COMPLETE_THIS_OP 0xffffffff813782a7
#endif

#ifndef ACPI_PS_NEXT_PARSE_STATE
#define ACPI_PS_NEXT_PARSE_STATE 0xffffffff81378438
#endif

#ifndef ACPI_PS_PARSE_AML
#define ACPI_PS_PARSE_AML 0xffffffff81378506
#endif

#ifndef ACPI_PS_GET_PARENT_SCOPE
#define ACPI_PS_GET_PARENT_SCOPE 0xffffffff81378779
#endif

#ifndef ACPI_PS_HAS_COMPLETED_SCOPE
#define ACPI_PS_HAS_COMPLETED_SCOPE 0xffffffff81378787
#endif

#ifndef ACPI_PS_INIT_SCOPE
#define ACPI_PS_INIT_SCOPE 0xffffffff813787a9
#endif

#ifndef ACPI_PS_PUSH_SCOPE
#define ACPI_PS_PUSH_SCOPE 0xffffffff813787f6
#endif

#ifndef ACPI_PS_POP_SCOPE
#define ACPI_PS_POP_SCOPE 0xffffffff81378867
#endif

#ifndef ACPI_PS_CLEANUP_SCOPE
#define ACPI_PS_CLEANUP_SCOPE 0xffffffff813788d2
#endif

#ifndef ACPI_PS_GET_ARG
#define ACPI_PS_GET_ARG 0xffffffff81378903
#endif

#ifndef ACPI_PS_APPEND_ARG
#define ACPI_PS_APPEND_ARG 0xffffffff81378943
#endif

#ifndef ACPI_PS_INIT_OP
#define ACPI_PS_INIT_OP 0xffffffff813789ec
#endif

#ifndef ACPI_PS_ALLOC_OP
#define ACPI_PS_ALLOC_OP 0xffffffff813789fa
#endif

#ifndef ACPI_PS_CREATE_SCOPE_OP
#define ACPI_PS_CREATE_SCOPE_OP 0xffffffff81378a59
#endif

#ifndef ACPI_PS_FREE_OP
#define ACPI_PS_FREE_OP 0xffffffff81378a77
#endif

#ifndef ACPI_PS_IS_LEADING_CHAR
#define ACPI_PS_IS_LEADING_CHAR 0xffffffff81378a9a
#endif

#ifndef ACPI_PS_SET_NAME
#define ACPI_PS_SET_NAME 0xffffffff81378ab1
#endif

#ifndef ACPI_PS_DELETE_PARSE_TREE
#define ACPI_PS_DELETE_PARSE_TREE 0xffffffff81378ac0
#endif

#ifndef ACPI_DEBUG_TRACE
#define ACPI_DEBUG_TRACE 0xffffffff81378b53
#endif

#ifndef ACPI_PS_EXECUTE_METHOD
#define ACPI_PS_EXECUTE_METHOD 0xffffffff81378bb1
#endif

#ifndef ACPI_RS_GET_ADDRESS_COMMON
#define ACPI_RS_GET_ADDRESS_COMMON 0xffffffff81378e03
#endif

#ifndef ACPI_RS_SET_ADDRESS_COMMON
#define ACPI_RS_SET_ADDRESS_COMMON 0xffffffff81378e73
#endif

#ifndef ACPI_RS_GET_AML_LENGTH
#define ACPI_RS_GET_AML_LENGTH 0xffffffff81378ec5
#endif

#ifndef ACPI_RS_GET_LIST_LENGTH
#define ACPI_RS_GET_LIST_LENGTH 0xffffffff81378fe6
#endif

#ifndef ACPI_RS_GET_PCI_ROUTING_TABLE_LENGTH
#define ACPI_RS_GET_PCI_ROUTING_TABLE_LENGTH 0xffffffff813791b3
#endif

#ifndef ACPI_BUFFER_TO_RESOURCE
#define ACPI_BUFFER_TO_RESOURCE 0xffffffff81379296
#endif

#ifndef ACPI_RS_CREATE_RESOURCE_LIST
#define ACPI_RS_CREATE_RESOURCE_LIST 0xffffffff8137933f
#endif

#ifndef ACPI_RS_CREATE_PCI_ROUTING_TABLE
#define ACPI_RS_CREATE_PCI_ROUTING_TABLE 0xffffffff813793aa
#endif

#ifndef ACPI_RS_CREATE_AML_RESOURCES
#define ACPI_RS_CREATE_AML_RESOURCES 0xffffffff813795f7
#endif

#ifndef ACPI_RS_CONVERT_AML_TO_RESOURCES
#define ACPI_RS_CONVERT_AML_TO_RESOURCES 0xffffffff81379650
#endif

#ifndef ACPI_RS_CONVERT_RESOURCES_TO_AML
#define ACPI_RS_CONVERT_RESOURCES_TO_AML 0xffffffff81379728
#endif

#ifndef ACPI_RS_CONVERT_AML_TO_RESOURCE
#define ACPI_RS_CONVERT_AML_TO_RESOURCE 0xffffffff81379858
#endif

#ifndef ACPI_RS_CONVERT_RESOURCE_TO_AML
#define ACPI_RS_CONVERT_RESOURCE_TO_AML 0xffffffff81379beb
#endif

#ifndef ACPI_RS_DECODE_BITMASK
#define ACPI_RS_DECODE_BITMASK 0xffffffff81379e78
#endif

#ifndef ACPI_RS_ENCODE_BITMASK
#define ACPI_RS_ENCODE_BITMASK 0xffffffff81379e9c
#endif

#ifndef ACPI_RS_MOVE_DATA
#define ACPI_RS_MOVE_DATA 0xffffffff81379ec6
#endif

#ifndef ACPI_RS_SET_RESOURCE_LENGTH
#define ACPI_RS_SET_RESOURCE_LENGTH 0xffffffff81379f18
#endif

#ifndef ACPI_RS_SET_RESOURCE_HEADER
#define ACPI_RS_SET_RESOURCE_HEADER 0xffffffff81379f4f
#endif

#ifndef ACPI_RS_GET_RESOURCE_SOURCE
#define ACPI_RS_GET_RESOURCE_SOURCE 0xffffffff81379f65
#endif

#ifndef ACPI_RS_SET_RESOURCE_SOURCE
#define ACPI_RS_SET_RESOURCE_SOURCE 0xffffffff81379ff4
#endif

#ifndef ACPI_RS_GET_PRT_METHOD_DATA
#define ACPI_RS_GET_PRT_METHOD_DATA 0xffffffff8137a02e
#endif

#ifndef ACPI_RS_GET_CRS_METHOD_DATA
#define ACPI_RS_GET_CRS_METHOD_DATA 0xffffffff8137a076
#endif

#ifndef ACPI_RS_GET_AEI_METHOD_DATA
#define ACPI_RS_GET_AEI_METHOD_DATA 0xffffffff8137a0be
#endif

#ifndef ACPI_RS_GET_METHOD_DATA
#define ACPI_RS_GET_METHOD_DATA 0xffffffff8137a106
#endif

#ifndef ACPI_RS_SET_SRS_METHOD_DATA
#define ACPI_RS_SET_SRS_METHOD_DATA 0xffffffff8137a147
#endif

#ifndef ACPI_WALK_RESOURCE_BUFFER
#define ACPI_WALK_RESOURCE_BUFFER 0xffffffff8137a23f
#endif

#ifndef ACPI_RESOURCE_TO_ADDRESS64
#define ACPI_RESOURCE_TO_ADDRESS64 0xffffffff8137a2ff
#endif

#ifndef ACPI_WALK_RESOURCES
#define ACPI_WALK_RESOURCES 0xffffffff8137a479
#endif

#ifndef ACPI_GET_VENDOR_RESOURCE
#define ACPI_GET_VENDOR_RESOURCE 0xffffffff8137a505
#endif

#ifndef ACPI_SET_CURRENT_RESOURCES
#define ACPI_SET_CURRENT_RESOURCES 0xffffffff8137a550
#endif

#ifndef ACPI_GET_IRQ_ROUTING_TABLE
#define ACPI_GET_IRQ_ROUTING_TABLE 0xffffffff8137a59a
#endif

#ifndef ACPI_GET_EVENT_RESOURCES
#define ACPI_GET_EVENT_RESOURCES 0xffffffff8137a5d2
#endif

#ifndef ACPI_GET_CURRENT_RESOURCES
#define ACPI_GET_CURRENT_RESOURCES 0xffffffff8137a60a
#endif

#ifndef ACPI_TB_INIT_TABLE_DESCRIPTOR
#define ACPI_TB_INIT_TABLE_DESCRIPTOR 0xffffffff8137a642
#endif

#ifndef ACPI_TB_ACQUIRE_TABLE
#define ACPI_TB_ACQUIRE_TABLE 0xffffffff8137a66d
#endif

#ifndef ACPI_TB_RELEASE_TABLE
#define ACPI_TB_RELEASE_TABLE 0xffffffff8137a6d5
#endif

#ifndef ACPI_TB_ACQUIRE_TEMP_TABLE
#define ACPI_TB_ACQUIRE_TEMP_TABLE 0xffffffff8137a6ec
#endif

#ifndef ACPI_TB_VALIDATE_TABLE
#define ACPI_TB_VALIDATE_TABLE 0xffffffff8137a76d
#endif

#ifndef ACPI_TB_INVALIDATE_TABLE
#define ACPI_TB_INVALIDATE_TABLE 0xffffffff8137a79f
#endif

#ifndef ACPI_TB_RELEASE_TEMP_TABLE
#define ACPI_TB_RELEASE_TEMP_TABLE 0xffffffff8137a7c7
#endif

#ifndef ACPI_TB_VALIDATE_TEMP_TABLE
#define ACPI_TB_VALIDATE_TEMP_TABLE 0xffffffff8137a7d3
#endif

#ifndef ACPI_TB_VERIFY_TEMP_TABLE
#define ACPI_TB_VERIFY_TEMP_TABLE 0xffffffff8137a7f6
#endif

#ifndef ACPI_TB_RESIZE_ROOT_TABLE_LIST
#define ACPI_TB_RESIZE_ROOT_TABLE_LIST 0xffffffff8137a8d3
#endif

#ifndef ACPI_TB_GET_NEXT_TABLE_DESCRIPTOR
#define ACPI_TB_GET_NEXT_TABLE_DESCRIPTOR 0xffffffff8137a9c1
#endif

#ifndef ACPI_TB_TERMINATE
#define ACPI_TB_TERMINATE 0xffffffff8137aa1a
#endif

#ifndef ACPI_TB_DELETE_NAMESPACE_BY_OWNER
#define ACPI_TB_DELETE_NAMESPACE_BY_OWNER 0xffffffff8137aa86
#endif

#ifndef ACPI_TB_ALLOCATE_OWNER_ID
#define ACPI_TB_ALLOCATE_OWNER_ID 0xffffffff8137ab0c
#endif

#ifndef ACPI_TB_RELEASE_OWNER_ID
#define ACPI_TB_RELEASE_OWNER_ID 0xffffffff8137ab55
#endif

#ifndef ACPI_TB_GET_OWNER_ID
#define ACPI_TB_GET_OWNER_ID 0xffffffff8137ab9f
#endif

#ifndef ACPI_TB_IS_TABLE_LOADED
#define ACPI_TB_IS_TABLE_LOADED 0xffffffff8137abea
#endif

#ifndef ACPI_TB_SET_TABLE_LOADED_FLAG
#define ACPI_TB_SET_TABLE_LOADED_FLAG 0xffffffff8137ac2b
#endif

#ifndef ACPI_TB_CREATE_LOCAL_FADT
#define ACPI_TB_CREATE_LOCAL_FADT 0xffffffff8137ace1
#endif

#ifndef ACPI_TB_PARSE_FADT
#define ACPI_TB_PARSE_FADT 0xffffffff8137b0d6
#endif

#ifndef ACPI_TB_FIND_TABLE
#define ACPI_TB_FIND_TABLE 0xffffffff8137b183
#endif

#ifndef ACPI_TB_UNINSTALL_TABLE
#define ACPI_TB_UNINSTALL_TABLE 0xffffffff8137b2e8
#endif

#ifndef ACPI_TB_OVERRIDE_TABLE
#define ACPI_TB_OVERRIDE_TABLE 0xffffffff8137b317
#endif

#ifndef ACPI_TB_INSTALL_TABLE_WITH_OVERRIDE
#define ACPI_TB_INSTALL_TABLE_WITH_OVERRIDE 0xffffffff8137b421
#endif

#ifndef ACPI_TB_INSTALL_FIXED_TABLE
#define ACPI_TB_INSTALL_FIXED_TABLE 0xffffffff8137b486
#endif

#ifndef ACPI_TB_INSTALL_STANDARD_TABLE
#define ACPI_TB_INSTALL_STANDARD_TABLE 0xffffffff8137b539
#endif

#ifndef ACPI_TB_PRINT_TABLE_HEADER
#define ACPI_TB_PRINT_TABLE_HEADER 0xffffffff8137b785
#endif

#ifndef ACPI_TB_CHECKSUM
#define ACPI_TB_CHECKSUM 0xffffffff8137b917
#endif

#ifndef ACPI_TB_VERIFY_CHECKSUM
#define ACPI_TB_VERIFY_CHECKSUM 0xffffffff8137b931
#endif

#ifndef ACPI_TB_INITIALIZE_FACS
#define ACPI_TB_INITIALIZE_FACS 0xffffffff8137b988
#endif

#ifndef ACPI_TB_TABLES_LOADED
#define ACPI_TB_TABLES_LOADED 0xffffffff8137b9f9
#endif

#ifndef ACPI_TB_CHECK_DSDT_HEADER
#define ACPI_TB_CHECK_DSDT_HEADER 0xffffffff8137ba09
#endif

#ifndef ACPI_TB_COPY_DSDT
#define ACPI_TB_COPY_DSDT 0xffffffff8137ba97
#endif

#ifndef ACPI_REMOVE_TABLE_HANDLER
#define ACPI_REMOVE_TABLE_HANDLER 0xffffffff8137bb48
#endif

#ifndef ACPI_GET_TABLE_HEADER
#define ACPI_GET_TABLE_HEADER 0xffffffff8137bb93
#endif

#ifndef ACPI_GET_TABLE_WITH_SIZE
#define ACPI_GET_TABLE_WITH_SIZE 0xffffffff8137bc4a
#endif

#ifndef ACPI_GET_TABLE
#define ACPI_GET_TABLE 0xffffffff8137bcfd
#endif

#ifndef ACPI_GET_TABLE_BY_INDEX
#define ACPI_GET_TABLE_BY_INDEX 0xffffffff8137bd15
#endif

#ifndef ACPI_INSTALL_TABLE_HANDLER
#define ACPI_INSTALL_TABLE_HANDLER 0xffffffff8137bd8e
#endif

#ifndef ACPI_ALLOCATE_ROOT_TABLE
#define ACPI_ALLOCATE_ROOT_TABLE 0xffffffff8137bde7
#endif

#ifndef ACPI_UNLOAD_PARENT_TABLE
#define ACPI_UNLOAD_PARENT_TABLE 0xffffffff8137be00
#endif

#ifndef ACPI_LOAD_TABLE
#define ACPI_LOAD_TABLE 0xffffffff8137bedc
#endif

#ifndef ACPI_TB_GET_RSDP_LENGTH
#define ACPI_TB_GET_RSDP_LENGTH 0xffffffff8137bfa5
#endif

#ifndef ACPI_TB_VALIDATE_RSDP
#define ACPI_TB_VALIDATE_RSDP 0xffffffff8137bfd4
#endif

#ifndef ACPI_TB_SCAN_MEMORY_FOR_RSDP
#define ACPI_TB_SCAN_MEMORY_FOR_RSDP 0xffffffff8137c02e
#endif

#ifndef ACPI_UT_ADD_ADDRESS_RANGE
#define ACPI_UT_ADD_ADDRESS_RANGE 0xffffffff8137c060
#endif

#ifndef ACPI_UT_REMOVE_ADDRESS_RANGE
#define ACPI_UT_REMOVE_ADDRESS_RANGE 0xffffffff8137c118
#endif

#ifndef ACPI_UT_CHECK_ADDRESS_RANGE
#define ACPI_UT_CHECK_ADDRESS_RANGE 0xffffffff8137c163
#endif

#ifndef ACPI_UT_DELETE_ADDRESS_LISTS
#define ACPI_UT_DELETE_ADDRESS_LISTS 0xffffffff8137c279
#endif

#ifndef ACPI_UT_CREATE_CACHES
#define ACPI_UT_CREATE_CACHES 0xffffffff8137c2ea
#endif

#ifndef ACPI_UT_DELETE_CACHES
#define ACPI_UT_DELETE_CACHES 0xffffffff8137c39a
#endif

#ifndef ACPI_UT_VALIDATE_BUFFER
#define ACPI_UT_VALIDATE_BUFFER 0xffffffff8137c417
#endif

#ifndef ACPI_UT_INITIALIZE_BUFFER
#define ACPI_UT_INITIALIZE_BUFFER 0xffffffff8137c442
#endif

#ifndef ACPI_UT_DUMP_BUFFER
#define ACPI_UT_DUMP_BUFFER 0xffffffff8137c4ae
#endif

#ifndef ACPI_UT_DEBUG_DUMP_BUFFER
#define ACPI_UT_DEBUG_DUMP_BUFFER 0xffffffff8137c693
#endif

#ifndef ACPI_UT_COPY_IOBJECT_TO_EOBJECT
#define ACPI_UT_COPY_IOBJECT_TO_EOBJECT 0xffffffff8137cab6
#endif

#ifndef ACPI_UT_COPY_EOBJECT_TO_IOBJECT
#define ACPI_UT_COPY_EOBJECT_TO_IOBJECT 0xffffffff8137cb33
#endif

#ifndef ACPI_UT_COPY_IOBJECT_TO_IOBJECT
#define ACPI_UT_COPY_IOBJECT_TO_IOBJECT 0xffffffff8137cccf
#endif

#ifndef ACPI_UT_VALIDATE_EXCEPTION
#define ACPI_UT_VALIDATE_EXCEPTION 0xffffffff8137cdb8
#endif

#ifndef ACPI_FORMAT_EXCEPTION
#define ACPI_FORMAT_EXCEPTION 0xffffffff8137ce62
#endif

#ifndef ACPI_UT_GET_REGION_NAME
#define ACPI_UT_GET_REGION_NAME 0xffffffff8137ce9c
#endif

#ifndef ACPI_UT_GET_EVENT_NAME
#define ACPI_UT_GET_EVENT_NAME 0xffffffff8137cee1
#endif

#ifndef ACPI_UT_GET_TYPE_NAME
#define ACPI_UT_GET_TYPE_NAME 0xffffffff8137cefd
#endif

#ifndef ACPI_UT_GET_OBJECT_TYPE_NAME
#define ACPI_UT_GET_OBJECT_TYPE_NAME 0xffffffff8137cf19
#endif

#ifndef ACPI_UT_GET_NODE_NAME
#define ACPI_UT_GET_NODE_NAME 0xffffffff8137cf43
#endif

#ifndef ACPI_UT_GET_DESCRIPTOR_NAME
#define ACPI_UT_GET_DESCRIPTOR_NAME 0xffffffff8137cf89
#endif

#ifndef ACPI_UT_GET_REFERENCE_NAME
#define ACPI_UT_GET_REFERENCE_NAME 0xffffffff8137cfb3
#endif

#ifndef ACPI_UT_VALID_OBJECT_TYPE
#define ACPI_UT_VALID_OBJECT_TYPE 0xffffffff8137cff7
#endif

#ifndef ACPI_UT_REMOVE_REFERENCE
#define ACPI_UT_REMOVE_REFERENCE 0xffffffff8137d003
#endif

#ifndef ACPI_UT_DELETE_INTERNAL_OBJECT_LIST
#define ACPI_UT_DELETE_INTERNAL_OBJECT_LIST 0xffffffff8137d030
#endif

#ifndef ACPI_UT_UPDATE_OBJECT_REFERENCE
#define ACPI_UT_UPDATE_OBJECT_REFERENCE 0xffffffff8137d32b
#endif

#ifndef ACPI_UT_ADD_REFERENCE
#define ACPI_UT_ADD_REFERENCE 0xffffffff8137d4b1
#endif

#ifndef ACPI_UT_PREDEFINED_WARNING
#define ACPI_UT_PREDEFINED_WARNING 0xffffffff8137d4d0
#endif

#ifndef ACPI_UT_PREDEFINED_INFO
#define ACPI_UT_PREDEFINED_INFO 0xffffffff8137d54a
#endif

#ifndef ACPI_UT_PREDEFINED_BIOS_ERROR
#define ACPI_UT_PREDEFINED_BIOS_ERROR 0xffffffff8137d5c4
#endif

#ifndef ACPI_UT_NAMESPACE_ERROR
#define ACPI_UT_NAMESPACE_ERROR 0xffffffff8137d63e
#endif

#ifndef ACPI_UT_METHOD_ERROR
#define ACPI_UT_METHOD_ERROR 0xffffffff8137d70c
#endif

#ifndef ACPI_UT_EVALUATE_OBJECT
#define ACPI_UT_EVALUATE_OBJECT 0xffffffff8137d7be
#endif

#ifndef ACPI_UT_EVALUATE_NUMERIC_OBJECT
#define ACPI_UT_EVALUATE_NUMERIC_OBJECT 0xffffffff8137d94c
#endif

#ifndef ACPI_UT_EXECUTE_STA
#define ACPI_UT_EXECUTE_STA 0xffffffff8137d994
#endif

#ifndef ACPI_UT_EXECUTE_POWER_METHODS
#define ACPI_UT_EXECUTE_POWER_METHODS 0xffffffff8137d9e8
#endif

#ifndef ACPI_UT_HEX_TO_ASCII_CHAR
#define ACPI_UT_HEX_TO_ASCII_CHAR 0xffffffff8137da62
#endif

#ifndef ACPI_UT_ASCII_CHAR_TO_HEX
#define ACPI_UT_ASCII_CHAR_TO_HEX 0xffffffff8137da77
#endif

#ifndef ACPI_UT_EXECUTE_HID
#define ACPI_UT_EXECUTE_HID 0xffffffff8137dab9
#endif

#ifndef ACPI_UT_EXECUTE_SUB
#define ACPI_UT_EXECUTE_SUB 0xffffffff8137db59
#endif

#ifndef ACPI_UT_EXECUTE_UID
#define ACPI_UT_EXECUTE_UID 0xffffffff8137dbe3
#endif

#ifndef ACPI_UT_EXECUTE_CID
#define ACPI_UT_EXECUTE_CID 0xffffffff8137dc83
#endif

#ifndef ACPI_UT_INIT_GLOBALS
#define ACPI_UT_INIT_GLOBALS 0xffffffff8137ddc4
#endif

#ifndef ACPI_UT_SUBSYSTEM_SHUTDOWN
#define ACPI_UT_SUBSYSTEM_SHUTDOWN 0xffffffff8137e01d
#endif

#ifndef ACPI_UT_CREATE_RW_LOCK
#define ACPI_UT_CREATE_RW_LOCK 0xffffffff8137e091
#endif

#ifndef ACPI_UT_DELETE_RW_LOCK
#define ACPI_UT_DELETE_RW_LOCK 0xffffffff8137e0cd
#endif

#ifndef ACPI_UT_ACQUIRE_READ_LOCK
#define ACPI_UT_ACQUIRE_READ_LOCK 0xffffffff8137e0ff
#endif

#ifndef ACPI_UT_RELEASE_READ_LOCK
#define ACPI_UT_RELEASE_READ_LOCK 0xffffffff8137e158
#endif

#ifndef ACPI_UT_ACQUIRE_WRITE_LOCK
#define ACPI_UT_ACQUIRE_WRITE_LOCK 0xffffffff8137e1aa
#endif

#ifndef ACPI_UT_RELEASE_WRITE_LOCK
#define ACPI_UT_RELEASE_WRITE_LOCK 0xffffffff8137e1c3
#endif

#ifndef ACPI_UT_SHORT_DIVIDE
#define ACPI_UT_SHORT_DIVIDE 0xffffffff8137e1d7
#endif

#ifndef ACPI_UT_DIVIDE
#define ACPI_UT_DIVIDE 0xffffffff8137e22f
#endif

#ifndef ACPI_UT_IS_PCI_ROOT_BRIDGE
#define ACPI_UT_IS_PCI_ROOT_BRIDGE 0xffffffff8137e284
#endif

#ifndef ACPI_UT_DWORD_BYTE_SWAP
#define ACPI_UT_DWORD_BYTE_SWAP 0xffffffff8137e2b7
#endif

#ifndef ACPI_UT_SET_INTEGER_WIDTH
#define ACPI_UT_SET_INTEGER_WIDTH 0xffffffff8137e2e2
#endif

#ifndef ACPI_UT_CREATE_UPDATE_STATE_AND_PUSH
#define ACPI_UT_CREATE_UPDATE_STATE_AND_PUSH 0xffffffff8137e319
#endif

#ifndef ACPI_UT_WALK_PACKAGE_TREE
#define ACPI_UT_WALK_PACKAGE_TREE 0xffffffff8137e34f
#endif

#ifndef ACPI_UT_MUTEX_INITIALIZE
#define ACPI_UT_MUTEX_INITIALIZE 0xffffffff8137e477
#endif

#ifndef ACPI_UT_MUTEX_TERMINATE
#define ACPI_UT_MUTEX_TERMINATE 0xffffffff8137e535
#endif

#ifndef ACPI_UT_ACQUIRE_MUTEX
#define ACPI_UT_ACQUIRE_MUTEX 0xffffffff8137e5a9
#endif

#ifndef ACPI_UT_RELEASE_MUTEX
#define ACPI_UT_RELEASE_MUTEX 0xffffffff8137e63d
#endif

#ifndef ACPI_UT_VALID_INTERNAL_OBJECT
#define ACPI_UT_VALID_INTERNAL_OBJECT 0xffffffff8137e856
#endif

#ifndef ACPI_UT_ALLOCATE_OBJECT_DESC_DBG
#define ACPI_UT_ALLOCATE_OBJECT_DESC_DBG 0xffffffff8137e86a
#endif

#ifndef ACPI_UT_DELETE_OBJECT_DESC
#define ACPI_UT_DELETE_OBJECT_DESC 0xffffffff8137e8ce
#endif

#ifndef ACPI_UT_CREATE_INTERNAL_OBJECT_DBG
#define ACPI_UT_CREATE_INTERNAL_OBJECT_DBG 0xffffffff8137e912
#endif

#ifndef ACPI_UT_CREATE_PACKAGE_OBJECT
#define ACPI_UT_CREATE_PACKAGE_OBJECT 0xffffffff8137e98f
#endif

#ifndef ACPI_UT_CREATE_INTEGER_OBJECT
#define ACPI_UT_CREATE_INTEGER_OBJECT 0xffffffff8137e9ec
#endif

#ifndef ACPI_UT_CREATE_BUFFER_OBJECT
#define ACPI_UT_CREATE_BUFFER_OBJECT 0xffffffff8137ea1b
#endif

#ifndef ACPI_UT_CREATE_STRING_OBJECT
#define ACPI_UT_CREATE_STRING_OBJECT 0xffffffff8137ea95
#endif

#ifndef ACPI_UT_GET_OBJECT_SIZE
#define ACPI_UT_GET_OBJECT_SIZE 0xffffffff8137eb07
#endif

#ifndef ACPI_UT_INITIALIZE_INTERFACES
#define ACPI_UT_INITIALIZE_INTERFACES 0xffffffff8137ebab
#endif

#ifndef ACPI_UT_INTERFACE_TERMINATE
#define ACPI_UT_INTERFACE_TERMINATE 0xffffffff8137ec0b
#endif

#ifndef ACPI_UT_INSTALL_INTERFACE
#define ACPI_UT_INSTALL_INTERFACE 0xffffffff8137ec81
#endif

#ifndef ACPI_UT_REMOVE_INTERFACE
#define ACPI_UT_REMOVE_INTERFACE 0xffffffff8137ecf6
#endif

#ifndef ACPI_UT_UPDATE_INTERFACES
#define ACPI_UT_UPDATE_INTERFACES 0xffffffff8137ed79
#endif

#ifndef ACPI_UT_GET_INTERFACE
#define ACPI_UT_GET_INTERFACE 0xffffffff8137edc2
#endif

#ifndef ACPI_UT_OSI_IMPLEMENTATION
#define ACPI_UT_OSI_IMPLEMENTATION 0xffffffff8137edf9
#endif

#ifndef ACPI_UT_ALLOCATE_OWNER_ID
#define ACPI_UT_ALLOCATE_OWNER_ID 0xffffffff8137eee5
#endif

#ifndef ACPI_UT_RELEASE_OWNER_ID
#define ACPI_UT_RELEASE_OWNER_ID 0xffffffff8137efd4
#endif

#ifndef ACPI_UT_GET_NEXT_PREDEFINED_METHOD
#define ACPI_UT_GET_NEXT_PREDEFINED_METHOD 0xffffffff8137f067
#endif

#ifndef ACPI_UT_MATCH_PREDEFINED_METHOD
#define ACPI_UT_MATCH_PREDEFINED_METHOD 0xffffffff8137f087
#endif

#ifndef ACPI_UT_GET_EXPECTED_RETURN_TYPES
#define ACPI_UT_GET_EXPECTED_RETURN_TYPES 0xffffffff8137f0b7
#endif

#ifndef ACPI_UT_GET_RESOURCE_TYPE
#define ACPI_UT_GET_RESOURCE_TYPE 0xffffffff8137f118
#endif

#ifndef ACPI_UT_GET_RESOURCE_LENGTH
#define ACPI_UT_GET_RESOURCE_LENGTH 0xffffffff8137f12a
#endif

#ifndef ACPI_UT_VALIDATE_RESOURCE
#define ACPI_UT_VALIDATE_RESOURCE 0xffffffff8137f13f
#endif

#ifndef ACPI_UT_GET_RESOURCE_HEADER_LENGTH
#define ACPI_UT_GET_RESOURCE_HEADER_LENGTH 0xffffffff8137f277
#endif

#ifndef ACPI_UT_GET_DESCRIPTOR_LENGTH
#define ACPI_UT_GET_DESCRIPTOR_LENGTH 0xffffffff8137f287
#endif

#ifndef ACPI_UT_WALK_AML_RESOURCES
#define ACPI_UT_WALK_AML_RESOURCES 0xffffffff8137f2a6
#endif

#ifndef ACPI_UT_GET_RESOURCE_END_TAG
#define ACPI_UT_GET_RESOURCE_END_TAG 0xffffffff8137f3aa
#endif

#ifndef ACPI_UT_PUSH_GENERIC_STATE
#define ACPI_UT_PUSH_GENERIC_STATE 0xffffffff8137f3d1
#endif

#ifndef ACPI_UT_POP_GENERIC_STATE
#define ACPI_UT_POP_GENERIC_STATE 0xffffffff8137f3e0
#endif

#ifndef ACPI_UT_CREATE_GENERIC_STATE
#define ACPI_UT_CREATE_GENERIC_STATE 0xffffffff8137f3f4
#endif

#ifndef ACPI_UT_CREATE_THREAD_STATE
#define ACPI_UT_CREATE_THREAD_STATE 0xffffffff8137f433
#endif

#ifndef ACPI_UT_CREATE_UPDATE_STATE
#define ACPI_UT_CREATE_UPDATE_STATE 0xffffffff8137f486
#endif

#ifndef ACPI_UT_CREATE_PKG_STATE
#define ACPI_UT_CREATE_PKG_STATE 0xffffffff8137f4ad
#endif

#ifndef ACPI_UT_CREATE_CONTROL_STATE
#define ACPI_UT_CREATE_CONTROL_STATE 0xffffffff8137f4e4
#endif

#ifndef ACPI_UT_DELETE_GENERIC_STATE
#define ACPI_UT_DELETE_GENERIC_STATE 0xffffffff8137f500
#endif

#ifndef ACPI_UT_STRUPR
#define ACPI_UT_STRUPR 0xffffffff8137f51d
#endif

#ifndef ACPI_UT_STRTOUL64
#define ACPI_UT_STRTOUL64 0xffffffff8137f547
#endif

#ifndef ACPI_UT_PRINT_STRING
#define ACPI_UT_PRINT_STRING 0xffffffff8137f75c
#endif

#ifndef ACPI_UT_VALID_ACPI_CHAR
#define ACPI_UT_VALID_ACPI_CHAR 0xffffffff8137f89c
#endif

#ifndef ACPI_UT_VALID_ACPI_NAME
#define ACPI_UT_VALID_ACPI_NAME 0xffffffff8137f8ce
#endif

#ifndef ACPI_UT_REPAIR_NAME
#define ACPI_UT_REPAIR_NAME 0xffffffff8137f8f8
#endif

#ifndef ACPI_PURGE_CACHED_OBJECTS
#define ACPI_PURGE_CACHED_OBJECTS 0xffffffff8137f976
#endif

#ifndef ACPI_INSTALL_INTERFACE_HANDLER
#define ACPI_INSTALL_INTERFACE_HANDLER 0xffffffff8137f9b0
#endif

#ifndef ACPI_INSTALL_INTERFACE
#define ACPI_INSTALL_INTERFACE 0xffffffff8137fa0b
#endif

#ifndef ACPI_REMOVE_INTERFACE
#define ACPI_REMOVE_INTERFACE 0xffffffff8137fa80
#endif

#ifndef ACPI_CHECK_ADDRESS_RANGE
#define ACPI_CHECK_ADDRESS_RANGE 0xffffffff8137fad1
#endif

#ifndef ACPI_DECODE_PLD_BUFFER
#define ACPI_DECODE_PLD_BUFFER 0xffffffff8137fb28
#endif

#ifndef ACPI_UPDATE_INTERFACES
#define ACPI_UPDATE_INTERFACES 0xffffffff8137fcad
#endif

#ifndef ACPI_ERROR
#define ACPI_ERROR 0xffffffff8137fcee
#endif

#ifndef ACPI_WARNING
#define ACPI_WARNING 0xffffffff8137fd6a
#endif

#ifndef ACPI_INFO
#define ACPI_INFO 0xffffffff8137fde6
#endif

#ifndef ACPI_BIOS_ERROR
#define ACPI_BIOS_ERROR 0xffffffff8137fe4d
#endif

#ifndef ACPI_BIOS_WARNING
#define ACPI_BIOS_WARNING 0xffffffff8137fec9
#endif

#ifndef ACPI_EXCEPTION
#define ACPI_EXCEPTION 0xffffffff8137ff45
#endif

#ifndef ACPI_ACQUIRE_MUTEX
#define ACPI_ACQUIRE_MUTEX 0xffffffff81380026
#endif

#ifndef ACPI_RELEASE_MUTEX
#define ACPI_RELEASE_MUTEX 0xffffffff8138006b
#endif

#ifndef ACPI_PCI_SLOT_ENUMERATE
#define ACPI_PCI_SLOT_ENUMERATE 0xffffffff8138039c
#endif

#ifndef ACPI_PCI_SLOT_REMOVE
#define ACPI_PCI_SLOT_REMOVE 0xffffffff8138041a
#endif

#ifndef ACPI_IOAPIC_ADD
#define ACPI_IOAPIC_ADD 0xffffffff81380efd
#endif

#ifndef ACPI_IOAPIC_REMOVE
#define ACPI_IOAPIC_REMOVE 0xffffffff81380f53
#endif

#ifndef REGISTER_ACPI_HED_NOTIFIER
#define REGISTER_ACPI_HED_NOTIFIER 0xffffffff81381088
#endif

#ifndef UNREGISTER_ACPI_HED_NOTIFIER
#define UNREGISTER_ACPI_HED_NOTIFIER 0xffffffff8138109e
#endif

#ifndef APEI_EXEC_CTX_INIT
#define APEI_EXEC_CTX_INIT 0xffffffff813811c0
#endif

#ifndef APEI_EXEC_NOOP
#define APEI_EXEC_NOOP 0xffffffff813811e0
#endif

#ifndef __APEI_EXEC_RUN
#define __APEI_EXEC_RUN 0xffffffff81381210
#endif

#ifndef APEI_EXEC_POST_UNMAP_GARS
#define APEI_EXEC_POST_UNMAP_GARS 0xffffffff813813a0
#endif

#ifndef APEI_EXEC_COLLECT_RESOURCES
#define APEI_EXEC_COLLECT_RESOURCES 0xffffffff813813c0
#endif

#ifndef APEI_EXEC_PRE_MAP_GARS
#define APEI_EXEC_PRE_MAP_GARS 0xffffffff81381510
#endif

#ifndef APEI_RESOURCES_FINI
#define APEI_RESOURCES_FINI 0xffffffff81381660
#endif

#ifndef APEI_RESOURCES_ADD
#define APEI_RESOURCES_ADD 0xffffffff813817c0
#endif

#ifndef APEI_RESOURCES_SUB
#define APEI_RESOURCES_SUB 0xffffffff813819f0
#endif

#ifndef APEI_RESOURCES_RELEASE
#define APEI_RESOURCES_RELEASE 0xffffffff81381a30
#endif

#ifndef APEI_MAP_GENERIC_ADDRESS
#define APEI_MAP_GENERIC_ADDRESS 0xffffffff81381ad0
#endif

#ifndef APEI_READ
#define APEI_READ 0xffffffff81381b40
#endif

#ifndef APEI_WRITE
#define APEI_WRITE 0xffffffff81381bd0
#endif

#ifndef APEI_GET_DEBUGFS_DIR
#define APEI_GET_DEBUGFS_DIR 0xffffffff81381c50
#endif

#ifndef APEI_OSC_SETUP
#define APEI_OSC_SETUP 0xffffffff81381c90
#endif

#ifndef APEI_RESOURCES_REQUEST
#define APEI_RESOURCES_REQUEST 0xffffffff81381d40
#endif

#ifndef __APEI_EXEC_READ_REGISTER
#define __APEI_EXEC_READ_REGISTER 0xffffffff81382040
#endif

#ifndef APEI_EXEC_READ_REGISTER
#define APEI_EXEC_READ_REGISTER 0xffffffff81382080
#endif

#ifndef APEI_EXEC_READ_REGISTER_VALUE
#define APEI_EXEC_READ_REGISTER_VALUE 0xffffffff813820c0
#endif

#ifndef __APEI_EXEC_WRITE_REGISTER
#define __APEI_EXEC_WRITE_REGISTER 0xffffffff81382110
#endif

#ifndef APEI_EXEC_WRITE_REGISTER
#define APEI_EXEC_WRITE_REGISTER 0xffffffff81382180
#endif

#ifndef APEI_EXEC_WRITE_REGISTER_VALUE
#define APEI_EXEC_WRITE_REGISTER_VALUE 0xffffffff813821a0
#endif

#ifndef APEI_HEST_PARSE
#define APEI_HEST_PARSE 0xffffffff813821c0
#endif

#ifndef ERST_GET_RECORD_ID_BEGIN
#define ERST_GET_RECORD_ID_BEGIN 0xffffffff813827a0
#endif

#ifndef ERST_GET_RECORD_ID_END
#define ERST_GET_RECORD_ID_END 0xffffffff81382840
#endif

#ifndef ERST_GET_RECORD_COUNT
#define ERST_GET_RECORD_COUNT 0xffffffff813828d0
#endif

#ifndef ERST_CLEAR
#define ERST_CLEAR 0xffffffff81382960
#endif

#ifndef ERST_READ
#define ERST_READ 0xffffffff81382bc0
#endif

#ifndef ERST_GET_RECORD_ID_NEXT
#define ERST_GET_RECORD_ID_NEXT 0xffffffff81382db0
#endif

#ifndef ERST_WRITE
#define ERST_WRITE 0xffffffff813830e0
#endif

#ifndef SFI_ACPI_TABLE_PARSE
#define SFI_ACPI_TABLE_PARSE 0xffffffff813853d0
#endif

#ifndef SFI_GET_TABLE
#define SFI_GET_TABLE 0xffffffff813855d0
#endif

#ifndef SFI_TABLE_PARSE
#define SFI_TABLE_PARSE 0xffffffff81385640
#endif

#ifndef SFI_PUT_TABLE
#define SFI_PUT_TABLE 0xffffffff81385770
#endif

#ifndef PNP_ALLOC
#define PNP_ALLOC 0xffffffff81385810
#endif

#ifndef PNP_REGISTER_PROTOCOL
#define PNP_REGISTER_PROTOCOL 0xffffffff81385840
#endif

#ifndef PNP_UNREGISTER_PROTOCOL
#define PNP_UNREGISTER_PROTOCOL 0xffffffff81385970
#endif

#ifndef PNP_FREE_RESOURCE
#define PNP_FREE_RESOURCE 0xffffffff813859d0
#endif

#ifndef PNP_FREE_RESOURCES
#define PNP_FREE_RESOURCES 0xffffffff81385a10
#endif

#ifndef PNP_ALLOC_DEV
#define PNP_ALLOC_DEV 0xffffffff81385ad0
#endif

#ifndef __PNP_ADD_DEVICE
#define __PNP_ADD_DEVICE 0xffffffff81385bd0
#endif

#ifndef PNP_ADD_DEVICE
#define PNP_ADD_DEVICE 0xffffffff81385cc0
#endif

#ifndef __PNP_REMOVE_DEVICE
#define __PNP_REMOVE_DEVICE 0xffffffff81385dd0
#endif

#ifndef PNP_REQUEST_CARD_DEVICE
#define PNP_REQUEST_CARD_DEVICE 0xffffffff81385fc0
#endif

#ifndef PNP_RELEASE_CARD_DEVICE
#define PNP_RELEASE_CARD_DEVICE 0xffffffff813860b0
#endif

#ifndef PNP_UNREGISTER_CARD_DRIVER
#define PNP_UNREGISTER_CARD_DRIVER 0xffffffff813860e0
#endif

#ifndef PNP_REGISTER_CARD_DRIVER
#define PNP_REGISTER_CARD_DRIVER 0xffffffff813862d0
#endif

#ifndef PNP_ALLOC_CARD
#define PNP_ALLOC_CARD 0xffffffff813863c0
#endif

#ifndef PNP_ADD_CARD
#define PNP_ADD_CARD 0xffffffff81386530
#endif

#ifndef PNP_ADD_CARD_DEVICE
#define PNP_ADD_CARD_DEVICE 0xffffffff813866b0
#endif

#ifndef PNP_REMOVE_CARD_DEVICE
#define PNP_REMOVE_CARD_DEVICE 0xffffffff81386750
#endif

#ifndef PNP_REMOVE_CARD
#define PNP_REMOVE_CARD 0xffffffff813867c0
#endif

#ifndef PNP_DEVICE_ATTACH
#define PNP_DEVICE_ATTACH 0xffffffff813868c0
#endif

#ifndef PNP_DEVICE_DETACH
#define PNP_DEVICE_DETACH 0xffffffff81386920
#endif

#ifndef PNP_REGISTER_DRIVER
#define PNP_REGISTER_DRIVER 0xffffffff81386b80
#endif

#ifndef PNP_UNREGISTER_DRIVER
#define PNP_UNREGISTER_DRIVER 0xffffffff81386bb0
#endif

#ifndef COMPARE_PNP_ID
#define COMPARE_PNP_ID 0xffffffff81386bd0
#endif

#ifndef PNP_ADD_ID
#define PNP_ADD_ID 0xffffffff81386e00
#endif

#ifndef PNP_GET_RESOURCE
#define PNP_GET_RESOURCE 0xffffffff81386f10
#endif

#ifndef PNP_RANGE_RESERVED
#define PNP_RANGE_RESERVED 0xffffffff81386f70
#endif

#ifndef PNP_POSSIBLE_CONFIG
#define PNP_POSSIBLE_CONFIG 0xffffffff81386fe0
#endif

#ifndef PNP_REGISTER_IRQ_RESOURCE
#define PNP_REGISTER_IRQ_RESOURCE 0xffffffff81387140
#endif

#ifndef PNP_REGISTER_DMA_RESOURCE
#define PNP_REGISTER_DMA_RESOURCE 0xffffffff813871f0
#endif

#ifndef PNP_REGISTER_PORT_RESOURCE
#define PNP_REGISTER_PORT_RESOURCE 0xffffffff81387240
#endif

#ifndef PNP_REGISTER_MEM_RESOURCE
#define PNP_REGISTER_MEM_RESOURCE 0xffffffff813872c0
#endif

#ifndef PNP_FREE_OPTIONS
#define PNP_FREE_OPTIONS 0xffffffff81387340
#endif

#ifndef PNP_CHECK_PORT
#define PNP_CHECK_PORT 0xffffffff813873b0
#endif

#ifndef PNP_CHECK_MEM
#define PNP_CHECK_MEM 0xffffffff813875c0
#endif

#ifndef PNP_CHECK_IRQ
#define PNP_CHECK_IRQ 0xffffffff813877d0
#endif

#ifndef PNP_CHECK_DMA
#define PNP_CHECK_DMA 0xffffffff81387a40
#endif

#ifndef PNP_RESOURCE_TYPE
#define PNP_RESOURCE_TYPE 0xffffffff81387c20
#endif

#ifndef PNP_ADD_RESOURCE
#define PNP_ADD_RESOURCE 0xffffffff81387c30
#endif

#ifndef PNP_ADD_IRQ_RESOURCE
#define PNP_ADD_IRQ_RESOURCE 0xffffffff81387ce0
#endif

#ifndef PNP_ADD_DMA_RESOURCE
#define PNP_ADD_DMA_RESOURCE 0xffffffff81387d70
#endif

#ifndef PNP_ADD_IO_RESOURCE
#define PNP_ADD_IO_RESOURCE 0xffffffff81387e00
#endif

#ifndef PNP_ADD_MEM_RESOURCE
#define PNP_ADD_MEM_RESOURCE 0xffffffff81387e90
#endif

#ifndef PNP_ADD_BUS_RESOURCE
#define PNP_ADD_BUS_RESOURCE 0xffffffff81387f20
#endif

#ifndef PNP_START_DEV
#define PNP_START_DEV 0xffffffff81388030
#endif

#ifndef PNP_STOP_DEV
#define PNP_STOP_DEV 0xffffffff813880b0
#endif

#ifndef PNP_DISABLE_DEV
#define PNP_DISABLE_DEV 0xffffffff81388130
#endif

#ifndef PNP_INIT_RESOURCES
#define PNP_INIT_RESOURCES 0xffffffff81388780
#endif

#ifndef PNP_AUTO_CONFIG_DEV
#define PNP_AUTO_CONFIG_DEV 0xffffffff813887a0
#endif

#ifndef PNP_ACTIVATE_DEV
#define PNP_ACTIVATE_DEV 0xffffffff81388830
#endif

#ifndef PNP_IS_ACTIVE
#define PNP_IS_ACTIVE 0xffffffff81388880
#endif

#ifndef PNP_EISA_ID_TO_STRING
#define PNP_EISA_ID_TO_STRING 0xffffffff813889a0
#endif

#ifndef PNP_RESOURCE_TYPE_NAME
#define PNP_RESOURCE_TYPE_NAME 0xffffffff81388a20
#endif

#ifndef DBG_PNP_SHOW_RESOURCES
#define DBG_PNP_SHOW_RESOURCES 0xffffffff81388aa0
#endif

#ifndef PNP_OPTION_PRIORITY_NAME
#define PNP_OPTION_PRIORITY_NAME 0xffffffff81388ad0
#endif

#ifndef DBG_PNP_SHOW_OPTION
#define DBG_PNP_SHOW_OPTION 0xffffffff81388b00
#endif

#ifndef PNP_FIXUP_DEVICE
#define PNP_FIXUP_DEVICE 0xffffffff8138a4d0
#endif

#ifndef PNPACPI_PARSE_ALLOCATED_RESOURCE
#define PNPACPI_PARSE_ALLOCATED_RESOURCE 0xffffffff8138b020
#endif

#ifndef PNPACPI_BUILD_RESOURCE_TEMPLATE
#define PNPACPI_BUILD_RESOURCE_TEMPLATE 0xffffffff8138b090
#endif

#ifndef PNPACPI_ENCODE_RESOURCES
#define PNPACPI_ENCODE_RESOURCES 0xffffffff8138b1c0
#endif

#ifndef DMA_FIND_CHANNEL
#define DMA_FIND_CHANNEL 0xffffffff8138b660
#endif

#ifndef DMA_ISSUE_PENDING_ALL
#define DMA_ISSUE_PENDING_ALL 0xffffffff8138b680
#endif

#ifndef DMA_GET_SLAVE_CAPS
#define DMA_GET_SLAVE_CAPS 0xffffffff8138b720
#endif

#ifndef DMA_ASYNC_TX_DESCRIPTOR_INIT
#define DMA_ASYNC_TX_DESCRIPTOR_INIT 0xffffffff8138b7b0
#endif

#ifndef DMA_RUN_DEPENDENCIES
#define DMA_RUN_DEPENDENCIES 0xffffffff8138b7c0
#endif

#ifndef DMA_GET_SLAVE_CHANNEL
#define DMA_GET_SLAVE_CHANNEL 0xffffffff8138bb60
#endif

#ifndef DMAENGINE_GET
#define DMAENGINE_GET 0xffffffff8138bbf0
#endif

#ifndef DMA_ASYNC_DEVICE_UNREGISTER
#define DMA_ASYNC_DEVICE_UNREGISTER 0xffffffff8138bdd0
#endif

#ifndef DMA_SYNC_WAIT
#define DMA_SYNC_WAIT 0xffffffff8138c080
#endif

#ifndef DMA_WAIT_FOR_ASYNC_TX
#define DMA_WAIT_FOR_ASYNC_TX 0xffffffff8138c110
#endif

#ifndef DMA_REQUEST_SLAVE_CHANNEL_REASON
#define DMA_REQUEST_SLAVE_CHANNEL_REASON 0xffffffff8138c230
#endif

#ifndef DMA_REQUEST_SLAVE_CHANNEL
#define DMA_REQUEST_SLAVE_CHANNEL 0xffffffff8138c260
#endif

#ifndef DMAENGINE_PUT
#define DMAENGINE_PUT 0xffffffff8138c2a0
#endif

#ifndef DMAENGINE_GET_UNMAP_DATA
#define DMAENGINE_GET_UNMAP_DATA 0xffffffff8138c3b0
#endif

#ifndef DMA_ASYNC_DEVICE_REGISTER
#define DMA_ASYNC_DEVICE_REGISTER 0xffffffff8138c400
#endif

#ifndef DMA_GET_ANY_SLAVE_CHANNEL
#define DMA_GET_ANY_SLAVE_CHANNEL 0xffffffff8138cab0
#endif

#ifndef DMA_RELEASE_CHANNEL
#define DMA_RELEASE_CHANNEL 0xffffffff8138cb80
#endif

#ifndef __DMA_REQUEST_CHANNEL
#define __DMA_REQUEST_CHANNEL 0xffffffff8138cc00
#endif

#ifndef DMAENGINE_UNMAP_PUT
#define DMAENGINE_UNMAP_PUT 0xffffffff8138cfa0
#endif

#ifndef ACPI_DMA_CONTROLLER_FREE
#define ACPI_DMA_CONTROLLER_FREE 0xffffffff8138cfd0
#endif

#ifndef ACPI_DMA_REQUEST_SLAVE_CHAN_BY_INDEX
#define ACPI_DMA_REQUEST_SLAVE_CHAN_BY_INDEX 0xffffffff8138d0a0
#endif

#ifndef ACPI_DMA_REQUEST_SLAVE_CHAN_BY_NAME
#define ACPI_DMA_REQUEST_SLAVE_CHAN_BY_NAME 0xffffffff8138d230
#endif

#ifndef ACPI_DMA_SIMPLE_XLATE
#define ACPI_DMA_SIMPLE_XLATE 0xffffffff8138d2a0
#endif

#ifndef DEVM_ACPI_DMA_CONTROLLER_FREE
#define DEVM_ACPI_DMA_CONTROLLER_FREE 0xffffffff8138d320
#endif

#ifndef ACPI_DMA_CONTROLLER_REGISTER
#define ACPI_DMA_CONTROLLER_REGISTER 0xffffffff8138d360
#endif

#ifndef DEVM_ACPI_DMA_CONTROLLER_REGISTER
#define DEVM_ACPI_DMA_CONTROLLER_REGISTER 0xffffffff8138d650
#endif

#ifndef XEN_EVENT_CHANNEL_OP_COMPAT
#define XEN_EVENT_CHANNEL_OP_COMPAT 0xffffffff8138d930
#endif

#ifndef XEN_PHYSDEV_OP_COMPAT
#define XEN_PHYSDEV_OP_COMPAT 0xffffffff8138d9f0
#endif

#ifndef GNTTAB_GRANT_FOREIGN_ACCESS_REF
#define GNTTAB_GRANT_FOREIGN_ACCESS_REF 0xffffffff8138db30
#endif

#ifndef GNTTAB_QUERY_FOREIGN_ACCESS
#define GNTTAB_QUERY_FOREIGN_ACCESS 0xffffffff8138db80
#endif

#ifndef GNTTAB_GRANT_FOREIGN_TRANSFER_REF
#define GNTTAB_GRANT_FOREIGN_TRANSFER_REF 0xffffffff8138dbf0
#endif

#ifndef GNTTAB_END_FOREIGN_TRANSFER_REF
#define GNTTAB_END_FOREIGN_TRANSFER_REF 0xffffffff8138dc20
#endif

#ifndef GNTTAB_EMPTY_GRANT_REFERENCES
#define GNTTAB_EMPTY_GRANT_REFERENCES 0xffffffff8138dc40
#endif

#ifndef GNTTAB_RELEASE_GRANT_REFERENCE
#define GNTTAB_RELEASE_GRANT_REFERENCE 0xffffffff8138dc50
#endif

#ifndef GNTTAB_MAX_GRANT_FRAMES
#define GNTTAB_MAX_GRANT_FRAMES 0xffffffff8138dc80
#endif

#ifndef GNTTAB_CLAIM_GRANT_REFERENCE
#define GNTTAB_CLAIM_GRANT_REFERENCE 0xffffffff8138dd10
#endif

#ifndef GNTTAB_END_FOREIGN_ACCESS_REF
#define GNTTAB_END_FOREIGN_ACCESS_REF 0xffffffff8138dd50
#endif

#ifndef GNTTAB_END_FOREIGN_TRANSFER
#define GNTTAB_END_FOREIGN_TRANSFER 0xffffffff8138de10
#endif

#ifndef GNTTAB_FREE_GRANT_REFERENCE
#define GNTTAB_FREE_GRANT_REFERENCE 0xffffffff8138de40
#endif

#ifndef GNTTAB_REQUEST_FREE_CALLBACK
#define GNTTAB_REQUEST_FREE_CALLBACK 0xffffffff8138de60
#endif

#ifndef GNTTAB_CANCEL_FREE_CALLBACK
#define GNTTAB_CANCEL_FREE_CALLBACK 0xffffffff8138df00
#endif

#ifndef GNTTAB_ALLOC_PAGES
#define GNTTAB_ALLOC_PAGES 0xffffffff8138e190
#endif

#ifndef GNTTAB_FREE_PAGES
#define GNTTAB_FREE_PAGES 0xffffffff8138e1e0
#endif

#ifndef GNTTAB_FREE_GRANT_REFERENCES
#define GNTTAB_FREE_GRANT_REFERENCES 0xffffffff8138e2f0
#endif

#ifndef GNTTAB_END_FOREIGN_ACCESS
#define GNTTAB_END_FOREIGN_ACCESS 0xffffffff8138e3b0
#endif

#ifndef GNTTAB_FREE_AUTO_XLAT_FRAMES
#define GNTTAB_FREE_AUTO_XLAT_FRAMES 0xffffffff8138e540
#endif

#ifndef GNTTAB_UNMAP_REFS
#define GNTTAB_UNMAP_REFS 0xffffffff8138e5a0
#endif

#ifndef GNTTAB_UNMAP_REFS_ASYNC
#define GNTTAB_UNMAP_REFS_ASYNC 0xffffffff8138e6e0
#endif

#ifndef GNTTAB_UNMAP_REFS_SYNC
#define GNTTAB_UNMAP_REFS_SYNC 0xffffffff8138e740
#endif

#ifndef GNTTAB_SETUP_AUTO_XLAT_FRAMES
#define GNTTAB_SETUP_AUTO_XLAT_FRAMES 0xffffffff8138e810
#endif

#ifndef GNTTAB_INIT
#define GNTTAB_INIT 0xffffffff8138eab0
#endif

#ifndef GNTTAB_GRANT_FOREIGN_ACCESS
#define GNTTAB_GRANT_FOREIGN_ACCESS 0xffffffff8138efd0
#endif

#ifndef GNTTAB_GRANT_FOREIGN_TRANSFER
#define GNTTAB_GRANT_FOREIGN_TRANSFER 0xffffffff8138f030
#endif

#ifndef GNTTAB_ALLOC_GRANT_REFERENCES
#define GNTTAB_ALLOC_GRANT_REFERENCES 0xffffffff8138f080
#endif

#ifndef GNTTAB_BATCH_COPY
#define GNTTAB_BATCH_COPY 0xffffffff8138f0b0
#endif

#ifndef GNTTAB_MAP_REFS
#define GNTTAB_MAP_REFS 0xffffffff8138f1a0
#endif

#ifndef GNTTAB_BATCH_MAP
#define GNTTAB_BATCH_MAP 0xffffffff8138f310
#endif

#ifndef GNTTAB_RESUME
#define GNTTAB_RESUME 0xffffffff8138f400
#endif

#ifndef GNTTAB_SUSPEND
#define GNTTAB_SUSPEND 0xffffffff8138f450
#endif

#ifndef XEN_SETUP_FEATURES
#define XEN_SETUP_FEATURES 0xffffffff8138f480
#endif

#ifndef BALLOON_SET_NEW_TARGET
#define BALLOON_SET_NEW_TARGET 0xffffffff8138f850
#endif

#ifndef FREE_XENBALLOONED_PAGES
#define FREE_XENBALLOONED_PAGES 0xffffffff8138f880
#endif

#ifndef ALLOC_XENBALLOONED_PAGES
#define ALLOC_XENBALLOONED_PAGES 0xffffffff8138f990
#endif

#ifndef XEN_RESUME_NOTIFIER_REGISTER
#define XEN_RESUME_NOTIFIER_REGISTER 0xffffffff8138ff80
#endif

#ifndef XEN_RESUME_NOTIFIER_UNREGISTER
#define XEN_RESUME_NOTIFIER_UNREGISTER 0xffffffff8138ffa0
#endif

#ifndef XEN_SETUP_SHUTDOWN_EVENT
#define XEN_SETUP_SHUTDOWN_EVENT 0xffffffff8138ffc0
#endif

#ifndef XEN_MAYBE_PREEMPT_HCALL
#define XEN_MAYBE_PREEMPT_HCALL 0xffffffff813905f0
#endif

#ifndef XEN_IRQ_FROM_GSI
#define XEN_IRQ_FROM_GSI 0xffffffff81390670
#endif

#ifndef XEN_EVTCHN_NR_CHANNELS
#define XEN_EVTCHN_NR_CHANNELS 0xffffffff813906c0
#endif

#ifndef XEN_SET_CALLBACK_VIA
#define XEN_SET_CALLBACK_VIA 0xffffffff813906e0
#endif

#ifndef XEN_HVM_EVTCHN_DO_UPCALL
#define XEN_HVM_EVTCHN_DO_UPCALL 0xffffffff81390790
#endif

#ifndef XEN_PIRQ_FROM_IRQ
#define XEN_PIRQ_FROM_IRQ 0xffffffff81390980
#endif

#ifndef XEN_TEST_IRQ_SHARED
#define XEN_TEST_IRQ_SHARED 0xffffffff81390db0
#endif

#ifndef GET_EVTCHN_TO_IRQ
#define GET_EVTCHN_TO_IRQ 0xffffffff81390ed0
#endif

#ifndef IRQ_FROM_EVTCHN
#define IRQ_FROM_EVTCHN 0xffffffff81390f10
#endif

#ifndef EVTCHN_MAKE_REFCOUNTED
#define EVTCHN_MAKE_REFCOUNTED 0xffffffff81390f30
#endif

#ifndef EVTCHN_GET
#define EVTCHN_GET 0xffffffff81390fa0
#endif

#ifndef INFO_FOR_IRQ
#define INFO_FOR_IRQ 0xffffffff81391100
#endif

#ifndef EVTCHN_FROM_IRQ
#define EVTCHN_FROM_IRQ 0xffffffff81391130
#endif

#ifndef NOTIFY_REMOTE_VIA_IRQ
#define NOTIFY_REMOTE_VIA_IRQ 0xffffffff81391190
#endif

#ifndef XEN_SET_IRQ_PRIORITY
#define XEN_SET_IRQ_PRIORITY 0xffffffff81391700
#endif

#ifndef XEN_CLEAR_IRQ_PENDING
#define XEN_CLEAR_IRQ_PENDING 0xffffffff81391760
#endif

#ifndef XEN_POLL_IRQ_TIMEOUT
#define XEN_POLL_IRQ_TIMEOUT 0xffffffff813917a0
#endif

#ifndef BIND_EVTCHN_TO_IRQ
#define BIND_EVTCHN_TO_IRQ 0xffffffff81391970
#endif

#ifndef BIND_INTERDOMAIN_EVTCHN_TO_IRQ
#define BIND_INTERDOMAIN_EVTCHN_TO_IRQ 0xffffffff81391a50
#endif

#ifndef BIND_EVTCHN_TO_IRQHANDLER
#define BIND_EVTCHN_TO_IRQHANDLER 0xffffffff81391ad0
#endif

#ifndef BIND_INTERDOMAIN_EVTCHN_TO_IRQHANDLER
#define BIND_INTERDOMAIN_EVTCHN_TO_IRQHANDLER 0xffffffff81391b50
#endif

#ifndef UNBIND_FROM_IRQHANDLER
#define UNBIND_FROM_IRQHANDLER 0xffffffff81391bd0
#endif

#ifndef EVTCHN_PUT
#define EVTCHN_PUT 0xffffffff81391c30
#endif

#ifndef IRQ_FROM_VIRQ
#define IRQ_FROM_VIRQ 0xffffffff81391c70
#endif

#ifndef CPU_FROM_IRQ
#define CPU_FROM_IRQ 0xffffffff81391c90
#endif

#ifndef CPU_FROM_EVTCHN
#define CPU_FROM_EVTCHN 0xffffffff81391cc0
#endif

#ifndef XEN_BIND_PIRQ_GSI_TO_IRQ
#define XEN_BIND_PIRQ_GSI_TO_IRQ 0xffffffff81391d00
#endif

#ifndef XEN_ALLOCATE_PIRQ_MSI
#define XEN_ALLOCATE_PIRQ_MSI 0xffffffff81391f60
#endif

#ifndef XEN_BIND_PIRQ_MSI_TO_IRQ
#define XEN_BIND_PIRQ_MSI_TO_IRQ 0xffffffff81391ff0
#endif

#ifndef XEN_DESTROY_IRQ
#define XEN_DESTROY_IRQ 0xffffffff81392160
#endif

#ifndef XEN_IRQ_FROM_PIRQ
#define XEN_IRQ_FROM_PIRQ 0xffffffff81392280
#endif

#ifndef BIND_VIRQ_TO_IRQ
#define BIND_VIRQ_TO_IRQ 0xffffffff813922f0
#endif

#ifndef BIND_VIRQ_TO_IRQHANDLER
#define BIND_VIRQ_TO_IRQHANDLER 0xffffffff81392510
#endif

#ifndef BIND_IPI_TO_IRQHANDLER
#define BIND_IPI_TO_IRQHANDLER 0xffffffff81392590
#endif

#ifndef XEN_SEND_IPI_ONE
#define XEN_SEND_IPI_ONE 0xffffffff81392750
#endif

#ifndef XEN_EVTCHN_DO_UPCALL
#define XEN_EVTCHN_DO_UPCALL 0xffffffff813927d0
#endif

#ifndef REBIND_EVTCHN_IRQ
#define REBIND_EVTCHN_IRQ 0xffffffff81392810
#endif

#ifndef XEN_SET_IRQ_PENDING
#define XEN_SET_IRQ_PENDING 0xffffffff813928f0
#endif

#ifndef XEN_TEST_IRQ_PENDING
#define XEN_TEST_IRQ_PENDING 0xffffffff81392930
#endif

#ifndef XEN_POLL_IRQ
#define XEN_POLL_IRQ 0xffffffff81392970
#endif

#ifndef XEN_IRQ_RESUME
#define XEN_IRQ_RESUME 0xffffffff81392990
#endif

#ifndef XEN_CALLBACK_VECTOR
#define XEN_CALLBACK_VECTOR 0xffffffff81392cb0
#endif

#ifndef XEN_DEBUG_INTERRUPT
#define XEN_DEBUG_INTERRUPT 0xffffffff81393300
#endif

#ifndef XENBUS_STRSTATE
#define XENBUS_STRSTATE 0xffffffff81394000
#endif

#ifndef XENBUS_MAP_RING_VALLOC
#define XENBUS_MAP_RING_VALLOC 0xffffffff81394020
#endif

#ifndef XENBUS_UNMAP_RING_VFREE
#define XENBUS_UNMAP_RING_VFREE 0xffffffff81394040
#endif

#ifndef XENBUS_DEV_ERROR
#define XENBUS_DEV_ERROR 0xffffffff81394160
#endif

#ifndef XENBUS_UNMAP_RING
#define XENBUS_UNMAP_RING 0xffffffff813941b0
#endif

#ifndef XENBUS_READ_DRIVER_STATE
#define XENBUS_READ_DRIVER_STATE 0xffffffff81394310
#endif

#ifndef XENBUS_SWITCH_STATE
#define XENBUS_SWITCH_STATE 0xffffffff81394870
#endif

#ifndef XENBUS_DEV_FATAL
#define XENBUS_DEV_FATAL 0xffffffff813948a0
#endif

#ifndef XENBUS_WATCH_PATH
#define XENBUS_WATCH_PATH 0xffffffff81394900
#endif

#ifndef XENBUS_WATCH_PATHFMT
#define XENBUS_WATCH_PATHFMT 0xffffffff81394970
#endif

#ifndef XENBUS_GRANT_RING
#define XENBUS_GRANT_RING 0xffffffff81394a30
#endif

#ifndef XENBUS_ALLOC_EVTCHN
#define XENBUS_ALLOC_EVTCHN 0xffffffff81394bb0
#endif

#ifndef XENBUS_MAP_RING
#define XENBUS_MAP_RING 0xffffffff81394f30
#endif

#ifndef XENBUS_FRONTEND_CLOSED
#define XENBUS_FRONTEND_CLOSED 0xffffffff81395150
#endif

#ifndef XENBUS_FREE_EVTCHN
#define XENBUS_FREE_EVTCHN 0xffffffff81395180
#endif

#ifndef XB_WRITE
#define XB_WRITE 0xffffffff81395470
#endif

#ifndef XB_DATA_TO_READ
#define XB_DATA_TO_READ 0xffffffff813956d0
#endif

#ifndef XB_WAIT_FOR_DATA_TO_READ
#define XB_WAIT_FOR_DATA_TO_READ 0xffffffff813956f0
#endif

#ifndef XB_READ
#define XB_READ 0xffffffff813957a0
#endif

#ifndef XB_INIT_COMMS
#define XB_INIT_COMMS 0xffffffff81395970
#endif

#ifndef XB_DEINIT_COMMS
#define XB_DEINIT_COMMS 0xffffffff81395a60
#endif

#ifndef XENBUS_READ
#define XENBUS_READ 0xffffffff81395f20
#endif

#ifndef XENBUS_MKDIR
#define XENBUS_MKDIR 0xffffffff81395f70
#endif

#ifndef XENBUS_RM
#define XENBUS_RM 0xffffffff81395fe0
#endif

#ifndef XENBUS_WRITE
#define XENBUS_WRITE 0xffffffff81396050
#endif

#ifndef XENBUS_SCANF
#define XENBUS_SCANF 0xffffffff813961c0
#endif

#ifndef XENBUS_PRINTF
#define XENBUS_PRINTF 0xffffffff81396240
#endif

#ifndef XENBUS_GATHER
#define XENBUS_GATHER 0xffffffff813962d0
#endif

#ifndef REGISTER_XENBUS_WATCH
#define REGISTER_XENBUS_WATCH 0xffffffff81396450
#endif

#ifndef UNREGISTER_XENBUS_WATCH
#define UNREGISTER_XENBUS_WATCH 0xffffffff81396560
#endif

#ifndef XENBUS_DEV_REQUEST_AND_REPLY
#define XENBUS_DEV_REQUEST_AND_REPLY 0xffffffff81396900
#endif

#ifndef XENBUS_TRANSACTION_END
#define XENBUS_TRANSACTION_END 0xffffffff81396990
#endif

#ifndef XENBUS_TRANSACTION_START
#define XENBUS_TRANSACTION_START 0xffffffff813969e0
#endif

#ifndef XENBUS_DIRECTORY
#define XENBUS_DIRECTORY 0xffffffff81396b50
#endif

#ifndef XENBUS_EXISTS
#define XENBUS_EXISTS 0xffffffff81396bd0
#endif

#ifndef XS_SUSPEND
#define XS_SUSPEND 0xffffffff81396e80
#endif

#ifndef XS_RESUME
#define XS_RESUME 0xffffffff81396f20
#endif

#ifndef XS_SUSPEND_CANCEL
#define XS_SUSPEND_CANCEL 0xffffffff81396fd0
#endif

#ifndef XS_INIT
#define XS_INIT 0xffffffff81397010
#endif

#ifndef XENBUS_OTHEREND_CHANGED
#define XENBUS_OTHEREND_CHANGED 0xffffffff81397310
#endif

#ifndef XENBUS_DEV_SUSPEND
#define XENBUS_DEV_SUSPEND 0xffffffff813975d0
#endif

#ifndef XENBUS_DEV_SHUTDOWN
#define XENBUS_DEV_SHUTDOWN 0xffffffff813976d0
#endif

#ifndef XENBUS_REGISTER_DRIVER_COMMON
#define XENBUS_REGISTER_DRIVER_COMMON 0xffffffff813977a0
#endif

#ifndef XENBUS_UNREGISTER_DRIVER
#define XENBUS_UNREGISTER_DRIVER 0xffffffff813977e0
#endif

#ifndef XENBUS_PROBE_DEVICES
#define XENBUS_PROBE_DEVICES 0xffffffff813978a0
#endif

#ifndef UNREGISTER_XENSTORE_NOTIFIER
#define UNREGISTER_XENSTORE_NOTIFIER 0xffffffff813979a0
#endif

#ifndef XENBUS_PROBE
#define XENBUS_PROBE 0xffffffff813979c0
#endif

#ifndef XENBUS_MATCH
#define XENBUS_MATCH 0xffffffff813979f0
#endif

#ifndef XENBUS_READ_OTHEREND_DETAILS
#define XENBUS_READ_OTHEREND_DETAILS 0xffffffff81397a50
#endif

#ifndef XENBUS_DEV_CANCEL
#define XENBUS_DEV_CANCEL 0xffffffff81397b20
#endif

#ifndef REGISTER_XENSTORE_NOTIFIER
#define REGISTER_XENSTORE_NOTIFIER 0xffffffff81397b70
#endif

#ifndef XENBUS_PROBE_NODE
#define XENBUS_PROBE_NODE 0xffffffff81397bb0
#endif

#ifndef XENBUS_DEV_CHANGED
#define XENBUS_DEV_CHANGED 0xffffffff81397d20
#endif

#ifndef XENBUS_DEV_REMOVE
#define XENBUS_DEV_REMOVE 0xffffffff81397f20
#endif

#ifndef XENBUS_DEV_RESUME
#define XENBUS_DEV_RESUME 0xffffffff81397fc0
#endif

#ifndef XENBUS_DEV_PROBE
#define XENBUS_DEV_PROBE 0xffffffff81398100
#endif

#ifndef XENBUS_DEV_IS_ONLINE
#define XENBUS_DEV_IS_ONLINE 0xffffffff81398310
#endif

#ifndef __XENBUS_REGISTER_BACKEND
#define __XENBUS_REGISTER_BACKEND 0xffffffff81398350
#endif

#ifndef __XENBUS_REGISTER_FRONTEND
#define __XENBUS_REGISTER_FRONTEND 0xffffffff81399c80
#endif

#ifndef XEN_DBGP_RESET_PREP
#define XEN_DBGP_RESET_PREP 0xffffffff8139a730
#endif

#ifndef XEN_DBGP_EXTERNAL_STARTUP
#define XEN_DBGP_EXTERNAL_STARTUP 0xffffffff8139a750
#endif

#ifndef XEN_ACPI_NOTIFY_HYPERVISOR_SLEEP
#define XEN_ACPI_NOTIFY_HYPERVISOR_SLEEP 0xffffffff8139a850
#endif

#ifndef XEN_ACPI_NOTIFY_HYPERVISOR_EXTENDED_SLEEP
#define XEN_ACPI_NOTIFY_HYPERVISOR_EXTENDED_SLEEP 0xffffffff8139a870
#endif

#ifndef XEN_PCPU_ID
#define XEN_PCPU_ID 0xffffffff8139ac50
#endif

#ifndef XEN_PCPU_HOTPLUG_SYNC
#define XEN_PCPU_HOTPLUG_SYNC 0xffffffff8139ad70
#endif

#ifndef XEN_BIOVEC_PHYS_MERGEABLE
#define XEN_BIOVEC_PHYS_MERGEABLE 0xffffffff8139b0d0
#endif

#ifndef XEN_SWIOTLB_DMA_MAPPING_ERROR
#define XEN_SWIOTLB_DMA_MAPPING_ERROR 0xffffffff8139bde0
#endif

#ifndef XEN_SWIOTLB_DMA_SUPPORTED
#define XEN_SWIOTLB_DMA_SUPPORTED 0xffffffff8139bdf0
#endif

#ifndef XEN_SWIOTLB_SET_DMA_MASK
#define XEN_SWIOTLB_SET_DMA_MASK 0xffffffff8139beb0
#endif

#ifndef XEN_SWIOTLB_UNMAP_PAGE
#define XEN_SWIOTLB_UNMAP_PAGE 0xffffffff8139c310
#endif

#ifndef XEN_SWIOTLB_UNMAP_SG_ATTRS
#define XEN_SWIOTLB_UNMAP_SG_ATTRS 0xffffffff8139c330
#endif

#ifndef XEN_SWIOTLB_SYNC_SINGLE_FOR_CPU
#define XEN_SWIOTLB_SYNC_SINGLE_FOR_CPU 0xffffffff8139c560
#endif

#ifndef XEN_SWIOTLB_SYNC_SINGLE_FOR_DEVICE
#define XEN_SWIOTLB_SYNC_SINGLE_FOR_DEVICE 0xffffffff8139c580
#endif

#ifndef XEN_SWIOTLB_SYNC_SG_FOR_CPU
#define XEN_SWIOTLB_SYNC_SG_FOR_CPU 0xffffffff8139c5a0
#endif

#ifndef XEN_SWIOTLB_SYNC_SG_FOR_DEVICE
#define XEN_SWIOTLB_SYNC_SG_FOR_DEVICE 0xffffffff8139c600
#endif

#ifndef XEN_SWIOTLB_ALLOC_COHERENT
#define XEN_SWIOTLB_ALLOC_COHERENT 0xffffffff8139c660
#endif

#ifndef XEN_SWIOTLB_MAP_PAGE
#define XEN_SWIOTLB_MAP_PAGE 0xffffffff8139cac0
#endif

#ifndef XEN_SWIOTLB_MAP_SG_ATTRS
#define XEN_SWIOTLB_MAP_SG_ATTRS 0xffffffff8139cef0
#endif

#ifndef XEN_SWIOTLB_FREE_COHERENT
#define XEN_SWIOTLB_FREE_COHERENT 0xffffffff8139d410
#endif

#ifndef XEN_XLATE_UNMAP_GFN_RANGE
#define XEN_XLATE_UNMAP_GFN_RANGE 0xffffffff8139e870
#endif

#ifndef XEN_XLATE_REMAP_GFN_ARRAY
#define XEN_XLATE_REMAP_GFN_ARRAY 0xffffffff8139e8f0
#endif

#ifndef TTY_HUNG_UP_P
#define TTY_HUNG_UP_P 0xffffffff8139e9f0
#endif

#ifndef TTY_PUT_CHAR
#define TTY_PUT_CHAR 0xffffffff8139ea30
#endif

#ifndef TTY_SET_OPERATIONS
#define TTY_SET_OPERATIONS 0xffffffff8139ea80
#endif

#ifndef TTY_DEVNUM
#define TTY_DEVNUM 0xffffffff8139ea90
#endif

#ifndef TTY_FREE_TERMIOS
#define TTY_FREE_TERMIOS 0xffffffff8139eb80
#endif

#ifndef TTY_GET_PGRP
#define TTY_GET_PGRP 0xffffffff8139ec40
#endif

#ifndef TTY_WAKEUP
#define TTY_WAKEUP 0xffffffff8139ecd0
#endif

#ifndef TTY_HANGUP
#define TTY_HANGUP 0xffffffff8139ed40
#endif

#ifndef DO_SAK
#define DO_SAK 0xffffffff8139edd0
#endif

#ifndef TTY_INIT_TERMIOS
#define TTY_INIT_TERMIOS 0xffffffff8139ee90
#endif

#ifndef TTY_DO_RESIZE
#define TTY_DO_RESIZE 0xffffffff8139ef70
#endif

#ifndef TTY_UNREGISTER_DRIVER
#define TTY_UNREGISTER_DRIVER 0xffffffff8139f130
#endif

#ifndef TTY_NAME
#define TTY_NAME 0xffffffff8139f1c0
#endif

#ifndef TTY_UNREGISTER_DEVICE
#define TTY_UNREGISTER_DEVICE 0xffffffff8139f460
#endif

#ifndef START_TTY
#define START_TTY 0xffffffff8139f5b0
#endif

#ifndef TTY_CHECK_CHANGE
#define TTY_CHECK_CHANGE 0xffffffff8139f710
#endif

#ifndef __TTY_ALLOC_DRIVER
#define __TTY_ALLOC_DRIVER 0xffffffff8139f750
#endif

#ifndef STOP_TTY
#define STOP_TTY 0xffffffff8139f8b0
#endif

#ifndef TTY_REGISTER_DEVICE_ATTR
#define TTY_REGISTER_DEVICE_ATTR 0xffffffff8139f920
#endif

#ifndef TTY_REGISTER_DEVICE
#define TTY_REGISTER_DEVICE 0xffffffff8139fc20
#endif

#ifndef TTY_REGISTER_DRIVER
#define TTY_REGISTER_DRIVER 0xffffffff8139fc40
#endif

#ifndef PUT_TTY_DRIVER
#define PUT_TTY_DRIVER 0xffffffff8139fe30
#endif

#ifndef TTY_DRIVER_KREF_PUT
#define TTY_DRIVER_KREF_PUT 0xffffffff8139fe60
#endif

#ifndef TTY_KREF_PUT
#define TTY_KREF_PUT 0xffffffff8139fe90
#endif

#ifndef GET_CURRENT_TTY
#define GET_CURRENT_TTY 0xffffffff8139fec0
#endif

#ifndef TTY_STANDARD_INSTALL
#define TTY_STANDARD_INSTALL 0xffffffff8139ff70
#endif

#ifndef FREE_TTY_STRUCT
#define FREE_TTY_STRUCT 0xffffffff813a0190
#endif

#ifndef TTY_ALLOC_FILE
#define TTY_ALLOC_FILE 0xffffffff813a0290
#endif

#ifndef TTY_ADD_FILE
#define TTY_ADD_FILE 0xffffffff813a02d0
#endif

#ifndef TTY_FREE_FILE
#define TTY_FREE_FILE 0xffffffff813a0330
#endif

#ifndef TTY_PARANOIA_CHECK
#define TTY_PARANOIA_CHECK 0xffffffff813a0360
#endif

#ifndef REDIRECTED_TTY_WRITE
#define REDIRECTED_TTY_WRITE 0xffffffff813a06a0
#endif

#ifndef TTY_VHANGUP
#define TTY_VHANGUP 0xffffffff813a0c90
#endif

#ifndef PROC_CLEAR_TTY
#define PROC_CLEAR_TTY 0xffffffff813a0f70
#endif

#ifndef TTY_VHANGUP_SELF
#define TTY_VHANGUP_SELF 0xffffffff813a1350
#endif

#ifndef DISASSOCIATE_CTTY
#define DISASSOCIATE_CTTY 0xffffffff813a1390
#endif

#ifndef NO_TTY
#define NO_TTY 0xffffffff813a13d0
#endif

#ifndef TTY_IOCTL
#define TTY_IOCTL 0xffffffff813a1410
#endif

#ifndef __STOP_TTY
#define __STOP_TTY 0xffffffff813a2050
#endif

#ifndef __START_TTY
#define __START_TTY 0xffffffff813a2090
#endif

#ifndef TTY_WRITE_MESSAGE
#define TTY_WRITE_MESSAGE 0xffffffff813a20c0
#endif

#ifndef TTY_SEND_XCHAR
#define TTY_SEND_XCHAR 0xffffffff813a2150
#endif

#ifndef TTY_DRIVER_REMOVE_TTY
#define TTY_DRIVER_REMOVE_TTY 0xffffffff813a2200
#endif

#ifndef TTY_RELEASE
#define TTY_RELEASE 0xffffffff813a2350
#endif

#ifndef __DO_SAK
#define __DO_SAK 0xffffffff813a2900
#endif

#ifndef ALLOC_TTY_STRUCT
#define ALLOC_TTY_STRUCT 0xffffffff813a2ad0
#endif

#ifndef TTY_INIT_DEV
#define TTY_INIT_DEV 0xffffffff813a2cf0
#endif

#ifndef DEINITIALIZE_TTY_STRUCT
#define DEINITIALIZE_TTY_STRUCT 0xffffffff813a3510
#endif

#ifndef TTY_DEFAULT_FOPS
#define TTY_DEFAULT_FOPS 0xffffffff813a3530
#endif

#ifndef CONSOLE_SYSFS_NOTIFY
#define CONSOLE_SYSFS_NOTIFY 0xffffffff813a3590
#endif

#ifndef N_TTY_INHERIT_OPS
#define N_TTY_INHERIT_OPS 0xffffffff813a36c0
#endif

#ifndef IS_IGNORED
#define IS_IGNORED 0xffffffff813a76c0
#endif

#ifndef TTY_CHARS_IN_BUFFER
#define TTY_CHARS_IN_BUFFER 0xffffffff813a7710
#endif

#ifndef TTY_WRITE_ROOM
#define TTY_WRITE_ROOM 0xffffffff813a7740
#endif

#ifndef TTY_DRIVER_FLUSH_BUFFER
#define TTY_DRIVER_FLUSH_BUFFER 0xffffffff813a7770
#endif

#ifndef TTY_TERMIOS_BAUD_RATE
#define TTY_TERMIOS_BAUD_RATE 0xffffffff813a77a0
#endif

#ifndef TTY_TERMIOS_INPUT_BAUD_RATE
#define TTY_TERMIOS_INPUT_BAUD_RATE 0xffffffff813a77f0
#endif

#ifndef TTY_TERMIOS_ENCODE_BAUD_RATE
#define TTY_TERMIOS_ENCODE_BAUD_RATE 0xffffffff813a7850
#endif

#ifndef TTY_ENCODE_BAUD_RATE
#define TTY_ENCODE_BAUD_RATE 0xffffffff813a79c0
#endif

#ifndef TTY_TERMIOS_COPY_HW
#define TTY_TERMIOS_COPY_HW 0xffffffff813a79e0
#endif

#ifndef TTY_THROTTLE
#define TTY_THROTTLE 0xffffffff813a7a10
#endif

#ifndef TTY_UNTHROTTLE
#define TTY_UNTHROTTLE 0xffffffff813a7a70
#endif

#ifndef TTY_WAIT_UNTIL_SENT
#define TTY_WAIT_UNTIL_SENT 0xffffffff813a7bc0
#endif

#ifndef TTY_SET_TERMIOS
#define TTY_SET_TERMIOS 0xffffffff813a7d30
#endif

#ifndef TTY_TERMIOS_HW_CHANGE
#define TTY_TERMIOS_HW_CHANGE 0xffffffff813a81e0
#endif

#ifndef TTY_PERFORM_FLUSH
#define TTY_PERFORM_FLUSH 0xffffffff813a8500
#endif

#ifndef TTY_MODE_IOCTL
#define TTY_MODE_IOCTL 0xffffffff813a8560
#endif

#ifndef N_TTY_COMPAT_IOCTL_HELPER
#define N_TTY_COMPAT_IOCTL_HELPER 0xffffffff813a8ad0
#endif

#ifndef N_TTY_IOCTL_HELPER
#define N_TTY_IOCTL_HELPER 0xffffffff813a8b00
#endif

#ifndef TTY_THROTTLE_SAFE
#define TTY_THROTTLE_SAFE 0xffffffff813a8c60
#endif

#ifndef TTY_UNTHROTTLE_SAFE
#define TTY_UNTHROTTLE_SAFE 0xffffffff813a8cf0
#endif

#ifndef TTY_REGISTER_LDISC
#define TTY_REGISTER_LDISC 0xffffffff813a8de0
#endif

#ifndef TTY_UNREGISTER_LDISC
#define TTY_UNREGISTER_LDISC 0xffffffff813a8e40
#endif

#ifndef TTY_LDISC_REF_WAIT
#define TTY_LDISC_REF_WAIT 0xffffffff813a8f40
#endif

#ifndef TTY_LDISC_REF
#define TTY_LDISC_REF 0xffffffff813a8f90
#endif

#ifndef TTY_LDISC_DEREF
#define TTY_LDISC_DEREF 0xffffffff813a8ff0
#endif

#ifndef TTY_LDISC_FLUSH
#define TTY_LDISC_FLUSH 0xffffffff813a9010
#endif

#ifndef TTY_SET_LDISC
#define TTY_SET_LDISC 0xffffffff813a9420
#endif

#ifndef TTY_LDISC_HANGUP
#define TTY_LDISC_HANGUP 0xffffffff813a98c0
#endif

#ifndef TTY_LDISC_SETUP
#define TTY_LDISC_SETUP 0xffffffff813a9ad0
#endif

#ifndef TTY_LDISC_RELEASE
#define TTY_LDISC_RELEASE 0xffffffff813a9b40
#endif

#ifndef TTY_LDISC_INIT
#define TTY_LDISC_INIT 0xffffffff813a9cd0
#endif

#ifndef TTY_LDISC_DEINIT
#define TTY_LDISC_DEINIT 0xffffffff813a9d00
#endif

#ifndef TTY_LDISC_BEGIN
#define TTY_LDISC_BEGIN 0xffffffff813a9d70
#endif

#ifndef TTY_BUFFER_SPACE_AVAIL
#define TTY_BUFFER_SPACE_AVAIL 0xffffffff813a9d90
#endif

#ifndef TTY_BUFFER_SET_LIMIT
#define TTY_BUFFER_SET_LIMIT 0xffffffff813a9db0
#endif

#ifndef TTY_BUFFER_LOCK_EXCLUSIVE
#define TTY_BUFFER_LOCK_EXCLUSIVE 0xffffffff813a9de0
#endif

#ifndef TTY_SCHEDULE_FLIP
#define TTY_SCHEDULE_FLIP 0xffffffff813a9e00
#endif

#ifndef TTY_FLIP_BUFFER_PUSH
#define TTY_FLIP_BUFFER_PUSH 0xffffffff813a9e30
#endif

#ifndef TTY_BUFFER_REQUEST_ROOM
#define TTY_BUFFER_REQUEST_ROOM 0xffffffff813aa020
#endif

#ifndef TTY_INSERT_FLIP_STRING_FLAGS
#define TTY_INSERT_FLIP_STRING_FLAGS 0xffffffff813aa040
#endif

#ifndef TTY_INSERT_FLIP_STRING_FIXED_FLAG
#define TTY_INSERT_FLIP_STRING_FIXED_FLAG 0xffffffff813aa110
#endif

#ifndef TTY_PREPARE_FLIP_STRING
#define TTY_PREPARE_FLIP_STRING 0xffffffff813aa1f0
#endif

#ifndef TTY_BUFFER_UNLOCK_EXCLUSIVE
#define TTY_BUFFER_UNLOCK_EXCLUSIVE 0xffffffff813aa260
#endif

#ifndef TTY_BUFFER_FREE_ALL
#define TTY_BUFFER_FREE_ALL 0xffffffff813aa440
#endif

#ifndef TTY_BUFFER_FLUSH
#define TTY_BUFFER_FLUSH 0xffffffff813aa4f0
#endif

#ifndef TTY_BUFFER_INIT
#define TTY_BUFFER_INIT 0xffffffff813aa5f0
#endif

#ifndef TTY_BUFFER_SET_LOCK_SUBCLASS
#define TTY_BUFFER_SET_LOCK_SUBCLASS 0xffffffff813aa690
#endif

#ifndef TTY_PORT_CARRIER_RAISED
#define TTY_PORT_CARRIER_RAISED 0xffffffff813aa6a0
#endif

#ifndef TTY_PORT_RAISE_DTR_RTS
#define TTY_PORT_RAISE_DTR_RTS 0xffffffff813aa6d0
#endif

#ifndef TTY_PORT_LOWER_DTR_RTS
#define TTY_PORT_LOWER_DTR_RTS 0xffffffff813aa700
#endif

#ifndef TTY_PORT_INIT
#define TTY_PORT_INIT 0xffffffff813aa730
#endif

#ifndef TTY_PORT_LINK_DEVICE
#define TTY_PORT_LINK_DEVICE 0xffffffff813aa820
#endif

#ifndef TTY_PORT_REGISTER_DEVICE
#define TTY_PORT_REGISTER_DEVICE 0xffffffff813aa860
#endif

#ifndef TTY_PORT_REGISTER_DEVICE_ATTR
#define TTY_PORT_REGISTER_DEVICE_ATTR 0xffffffff813aa890
#endif

#ifndef TTY_PORT_ALLOC_XMIT_BUF
#define TTY_PORT_ALLOC_XMIT_BUF 0xffffffff813aa8d0
#endif

#ifndef TTY_PORT_FREE_XMIT_BUF
#define TTY_PORT_FREE_XMIT_BUF 0xffffffff813aa9d0
#endif

#ifndef TTY_PORT_DESTROY
#define TTY_PORT_DESTROY 0xffffffff813aaa20
#endif

#ifndef TTY_PORT_TTY_SET
#define TTY_PORT_TTY_SET 0xffffffff813aaad0
#endif

#ifndef TTY_PORT_HANGUP
#define TTY_PORT_HANGUP 0xffffffff813aab70
#endif

#ifndef TTY_PORT_BLOCK_TIL_READY
#define TTY_PORT_BLOCK_TIL_READY 0xffffffff813aac20
#endif

#ifndef TTY_PORT_CLOSE_END
#define TTY_PORT_CLOSE_END 0xffffffff813aaf20
#endif

#ifndef TTY_PORT_INSTALL
#define TTY_PORT_INSTALL 0xffffffff813aafe0
#endif

#ifndef TTY_PORT_OPEN
#define TTY_PORT_OPEN 0xffffffff813ab010
#endif

#ifndef TTY_PORT_CLOSE_START
#define TTY_PORT_CLOSE_START 0xffffffff813ab0e0
#endif

#ifndef TTY_PORT_CLOSE
#define TTY_PORT_CLOSE 0xffffffff813ab280
#endif

#ifndef TTY_PORT_PUT
#define TTY_PORT_PUT 0xffffffff813ab2e0
#endif

#ifndef TTY_PORT_TTY_GET
#define TTY_PORT_TTY_GET 0xffffffff813ab320
#endif

#ifndef TTY_PORT_TTY_HANGUP
#define TTY_PORT_TTY_HANGUP 0xffffffff813ab3a0
#endif

#ifndef TTY_PORT_TTY_WAKEUP
#define TTY_PORT_TTY_WAKEUP 0xffffffff813ab3e0
#endif

#ifndef TTY_SET_LOCK_SUBCLASS
#define TTY_SET_LOCK_SUBCLASS 0xffffffff813ab410
#endif

#ifndef __INIT_LDSEM
#define __INIT_LDSEM 0xffffffff813ab560
#endif

#ifndef LDSEM_DOWN_READ_TRYLOCK
#define LDSEM_DOWN_READ_TRYLOCK 0xffffffff813ab5a0
#endif

#ifndef LDSEM_DOWN_WRITE_TRYLOCK
#define LDSEM_DOWN_WRITE_TRYLOCK 0xffffffff813ab600
#endif

#ifndef LDSEM_UP_READ
#define LDSEM_UP_READ 0xffffffff813ab650
#endif

#ifndef LDSEM_UP_WRITE
#define LDSEM_UP_WRITE 0xffffffff813ab680
#endif

#ifndef TTY_AUDIT_EXIT
#define TTY_AUDIT_EXIT 0xffffffff813ac620
#endif

#ifndef TTY_AUDIT_FORK
#define TTY_AUDIT_FORK 0xffffffff813ac6a0
#endif

#ifndef TTY_AUDIT_TIOCSTI
#define TTY_AUDIT_TIOCSTI 0xffffffff813ac6e0
#endif

#ifndef TTY_AUDIT_PUSH_CURRENT
#define TTY_AUDIT_PUSH_CURRENT 0xffffffff813ac840
#endif

#ifndef TTY_AUDIT_ADD_DATA
#define TTY_AUDIT_ADD_DATA 0xffffffff813ac930
#endif

#ifndef TTY_AUDIT_PUSH
#define TTY_AUDIT_PUSH 0xffffffff813acd00
#endif

#ifndef REGISTER_SYSRQ_KEY
#define REGISTER_SYSRQ_KEY 0xffffffff813ad3d0
#endif

#ifndef UNREGISTER_SYSRQ_KEY
#define UNREGISTER_SYSRQ_KEY 0xffffffff813ad3f0
#endif

#ifndef __SYSRQ_GET_KEY_OP
#define __SYSRQ_GET_KEY_OP 0xffffffff813ad500
#endif

#ifndef __HANDLE_SYSRQ
#define __HANDLE_SYSRQ 0xffffffff813ad530
#endif

#ifndef HANDLE_SYSRQ
#define HANDLE_SYSRQ 0xffffffff813ad6a0
#endif

#ifndef SYSRQ_TOGGLE_SUPPORT
#define SYSRQ_TOGGLE_SUPPORT 0xffffffff813adad0
#endif

#ifndef PM_SET_VT_SWITCH
#define PM_SET_VT_SWITCH 0xffffffff813adc20
#endif

#ifndef VT_EVENT_POST
#define VT_EVENT_POST 0xffffffff813ade20
#endif

#ifndef VT_WAITACTIVE
#define VT_WAITACTIVE 0xffffffff813adef0
#endif

#ifndef RESET_VC
#define RESET_VC 0xffffffff813adf90
#endif

#ifndef VT_IOCTL
#define VT_IOCTL 0xffffffff813ae100
#endif

#ifndef VC_SAK
#define VC_SAK 0xffffffff813af450
#endif

#ifndef VT_COMPAT_IOCTL
#define VT_COMPAT_IOCTL 0xffffffff813af490
#endif

#ifndef CHANGE_CONSOLE
#define CHANGE_CONSOLE 0xffffffff813af8b0
#endif

#ifndef VT_MOVE_TO_CONSOLE
#define VT_MOVE_TO_CONSOLE 0xffffffff813af950
#endif

#ifndef VCS_MAKE_SYSFS
#define VCS_MAKE_SYSFS 0xffffffff813b08a0
#endif

#ifndef VCS_REMOVE_SYSFS
#define VCS_REMOVE_SYSFS 0xffffffff813b0910
#endif

#ifndef CLEAR_SELECTION
#define CLEAR_SELECTION 0xffffffff813b0980
#endif

#ifndef SEL_LOADLUT
#define SEL_LOADLUT 0xffffffff813b09e0
#endif

#ifndef SET_SELECTION
#define SET_SELECTION 0xffffffff813b0a40
#endif

#ifndef PASTE_SELECTION
#define PASTE_SELECTION 0xffffffff813b10d0
#endif

#ifndef REGISTER_KEYBOARD_NOTIFIER
#define REGISTER_KEYBOARD_NOTIFIER 0xffffffff813b1280
#endif

#ifndef UNREGISTER_KEYBOARD_NOTIFIER
#define UNREGISTER_KEYBOARD_NOTIFIER 0xffffffff813b12a0
#endif

#ifndef VT_GET_LEDS
#define VT_GET_LEDS 0xffffffff813b18a0
#endif

#ifndef KD_MKSOUND
#define KD_MKSOUND 0xffffffff813b1af0
#endif

#ifndef KBD_RATE
#define KBD_RATE 0xffffffff813b2fa0
#endif

#ifndef COMPUTE_SHIFTSTATE
#define COMPUTE_SHIFTSTATE 0xffffffff813b2ff0
#endif

#ifndef SETLEDSTATE
#define SETLEDSTATE 0xffffffff813b3020
#endif

#ifndef VT_SET_LED_STATE
#define VT_SET_LED_STATE 0xffffffff813b3090
#endif

#ifndef VT_KBD_CON_START
#define VT_KBD_CON_START 0xffffffff813b30b0
#endif

#ifndef VT_KBD_CON_STOP
#define VT_KBD_CON_STOP 0xffffffff813b3110
#endif

#ifndef VT_DO_DIACRIT
#define VT_DO_DIACRIT 0xffffffff813b3170
#endif

#ifndef VT_DO_KDSKBMODE
#define VT_DO_KDSKBMODE 0xffffffff813b3570
#endif

#ifndef VT_DO_KDSKBMETA
#define VT_DO_KDSKBMETA 0xffffffff813b3680
#endif

#ifndef VT_DO_KBKEYCODE_IOCTL
#define VT_DO_KBKEYCODE_IOCTL 0xffffffff813b36f0
#endif

#ifndef VT_DO_KDSK_IOCTL
#define VT_DO_KDSK_IOCTL 0xffffffff813b3860
#endif

#ifndef VT_DO_KDGKB_IOCTL
#define VT_DO_KDGKB_IOCTL 0xffffffff813b3c10
#endif

#ifndef VT_DO_KDSKLED
#define VT_DO_KDSKLED 0xffffffff813b40b0
#endif

#ifndef VT_DO_KDGKBMODE
#define VT_DO_KDGKBMODE 0xffffffff813b4230
#endif

#ifndef VT_DO_KDGKBMETA
#define VT_DO_KDGKBMETA 0xffffffff813b4260
#endif

#ifndef VT_RESET_UNICODE
#define VT_RESET_UNICODE 0xffffffff813b4280
#endif

#ifndef VT_GET_SHIFT_STATE
#define VT_GET_SHIFT_STATE 0xffffffff813b42d0
#endif

#ifndef VT_RESET_KEYBOARD
#define VT_RESET_KEYBOARD 0xffffffff813b42e0
#endif

#ifndef VT_GET_KBD_MODE_BIT
#define VT_GET_KBD_MODE_BIT 0xffffffff813b4370
#endif

#ifndef VT_SET_KBD_MODE_BIT
#define VT_SET_KBD_MODE_BIT 0xffffffff813b4390
#endif

#ifndef VT_CLR_KBD_MODE_BIT
#define VT_CLR_KBD_MODE_BIT 0xffffffff813b43f0
#endif

#ifndef INVERSE_TRANSLATE
#define INVERSE_TRANSLATE 0xffffffff813b4690
#endif

#ifndef SET_TRANSLATE
#define SET_TRANSLATE 0xffffffff813b4a60
#endif

#ifndef CON_GET_TRANS_NEW
#define CON_GET_TRANS_NEW 0xffffffff813b4a90
#endif

#ifndef CON_FREE_UNIMAP
#define CON_FREE_UNIMAP 0xffffffff813b4b00
#endif

#ifndef CON_COPY_UNIMAP
#define CON_COPY_UNIMAP 0xffffffff813b4b50
#endif

#ifndef CON_CLEAR_UNIMAP
#define CON_CLEAR_UNIMAP 0xffffffff813b4bb0
#endif

#ifndef CON_GET_UNIMAP
#define CON_GET_UNIMAP 0xffffffff813b4be0
#endif

#ifndef CONV_8BIT_TO_UNI
#define CONV_8BIT_TO_UNI 0xffffffff813b4d10
#endif

#ifndef CONV_UNI_TO_8BIT
#define CONV_UNI_TO_8BIT 0xffffffff813b4d30
#endif

#ifndef CONV_UNI_TO_PC
#define CONV_UNI_TO_PC 0xffffffff813b4d80
#endif

#ifndef CON_SET_TRANS_OLD
#define CON_SET_TRANS_OLD 0xffffffff813b4fb0
#endif

#ifndef CON_SET_TRANS_NEW
#define CON_SET_TRANS_NEW 0xffffffff813b5020
#endif

#ifndef CON_SET_UNIMAP
#define CON_SET_UNIMAP 0xffffffff813b5090
#endif

#ifndef CON_SET_DEFAULT_UNIMAP
#define CON_SET_DEFAULT_UNIMAP 0xffffffff813b5310
#endif

#ifndef CON_GET_TRANS_OLD
#define CON_GET_TRANS_OLD 0xffffffff813b5490
#endif

#ifndef CON_IS_BOUND
#define CON_IS_BOUND 0xffffffff813b58d0
#endif

#ifndef CON_DEBUG_ENTER
#define CON_DEBUG_ENTER 0xffffffff813b5910
#endif

#ifndef CON_DEBUG_LEAVE
#define CON_DEBUG_LEAVE 0xffffffff813b5990
#endif

#ifndef REGISTER_VT_NOTIFIER
#define REGISTER_VT_NOTIFIER 0xffffffff813b5a10
#endif

#ifndef UNREGISTER_VT_NOTIFIER
#define UNREGISTER_VT_NOTIFIER 0xffffffff813b5a30
#endif

#ifndef DO_UNREGISTER_CON_DRIVER
#define DO_UNREGISTER_CON_DRIVER 0xffffffff813b5df0
#endif

#ifndef GIVE_UP_CONSOLE
#define GIVE_UP_CONSOLE 0xffffffff813b5ee0
#endif

#ifndef UPDATE_REGION
#define UPDATE_REGION 0xffffffff813b61f0
#endif

#ifndef SCREEN_GLYPH
#define SCREEN_GLYPH 0xffffffff813b6470
#endif

#ifndef DO_BLANK_SCREEN
#define DO_BLANK_SCREEN 0xffffffff813b6be0
#endif

#ifndef SCHEDULE_CONSOLE_CALLBACK
#define SCHEDULE_CONSOLE_CALLBACK 0xffffffff813b6e60
#endif

#ifndef INVERT_SCREEN
#define INVERT_SCREEN 0xffffffff813b6e90
#endif

#ifndef COMPLEMENT_POS
#define COMPLEMENT_POS 0xffffffff813b70c0
#endif

#ifndef CLEAR_BUFFER_ATTRIBUTES
#define CLEAR_BUFFER_ATTRIBUTES 0xffffffff813b72b0
#endif

#ifndef REDRAW_SCREEN
#define REDRAW_SCREEN 0xffffffff813b7310
#endif

#ifndef VC_RESIZE
#define VC_RESIZE 0xffffffff813b7e90
#endif

#ifndef DO_UNBLANK_SCREEN
#define DO_UNBLANK_SCREEN 0xffffffff813b7f00
#endif

#ifndef UNBLANK_SCREEN
#define UNBLANK_SCREEN 0xffffffff813b80f0
#endif

#ifndef DO_UNBIND_CON_DRIVER
#define DO_UNBIND_CON_DRIVER 0xffffffff813b84d0
#endif

#ifndef DO_TAKE_OVER_CONSOLE
#define DO_TAKE_OVER_CONSOLE 0xffffffff813b8700
#endif

#ifndef VC_CONS_ALLOCATED
#define VC_CONS_ALLOCATED 0xffffffff813b8b30
#endif

#ifndef VC_ALLOCATE
#define VC_ALLOCATE 0xffffffff813b8b60
#endif

#ifndef VC_DEALLOCATE
#define VC_DEALLOCATE 0xffffffff813b8e00
#endif

#ifndef SCROLLBACK
#define SCROLLBACK 0xffffffff813b8ed0
#endif

#ifndef SCROLLFRONT
#define SCROLLFRONT 0xffffffff813b8f10
#endif

#ifndef MOUSE_REPORT
#define MOUSE_REPORT 0xffffffff813b8f50
#endif

#ifndef MOUSE_REPORTING
#define MOUSE_REPORTING 0xffffffff813b8fc0
#endif

#ifndef SET_CONSOLE
#define SET_CONSOLE 0xffffffff813b8ff0
#endif

#ifndef VT_KMSG_REDIRECT
#define VT_KMSG_REDIRECT 0xffffffff813b9070
#endif

#ifndef TIOCLINUX
#define TIOCLINUX 0xffffffff813b9090
#endif

#ifndef POKE_BLANKED_CONSOLE
#define POKE_BLANKED_CONSOLE 0xffffffff813b9340
#endif

#ifndef CON_SET_CMAP
#define CON_SET_CMAP 0xffffffff813b9580
#endif

#ifndef CON_GET_CMAP
#define CON_GET_CMAP 0xffffffff813b96b0
#endif

#ifndef RESET_PALETTE
#define RESET_PALETTE 0xffffffff813b9750
#endif

#ifndef CON_FONT_OP
#define CON_FONT_OP 0xffffffff813bb9a0
#endif

#ifndef SCREEN_POS
#define SCREEN_POS 0xffffffff813bbe40
#endif

#ifndef GETCONSXY
#define GETCONSXY 0xffffffff813bbea0
#endif

#ifndef PUTCONSXY
#define PUTCONSXY 0xffffffff813bbec0
#endif

#ifndef VCS_SCR_READW
#define VCS_SCR_READW 0xffffffff813bbf00
#endif

#ifndef VCS_SCR_WRITEW
#define VCS_SCR_WRITEW 0xffffffff813bbf30
#endif

#ifndef VCS_SCR_UPDATED
#define VCS_SCR_UPDATED 0xffffffff813bbf70
#endif

#ifndef HVC_KICK
#define HVC_KICK 0xffffffff813bc3d0
#endif

#ifndef __HVC_RESIZE
#define __HVC_RESIZE 0xffffffff813bc430
#endif

#ifndef HVC_REMOVE
#define HVC_REMOVE 0xffffffff813bc8d0
#endif

#ifndef HVC_ALLOC
#define HVC_ALLOC 0xffffffff813bc970
#endif

#ifndef HVC_POLL
#define HVC_POLL 0xffffffff813bccf0
#endif

#ifndef HVC_INSTANTIATE
#define HVC_INSTANTIATE 0xffffffff813bd240
#endif

#ifndef NOTIFIER_ADD_IRQ
#define NOTIFIER_ADD_IRQ 0xffffffff813bd320
#endif

#ifndef NOTIFIER_DEL_IRQ
#define NOTIFIER_DEL_IRQ 0xffffffff813bd380
#endif

#ifndef NOTIFIER_HANGUP_IRQ
#define NOTIFIER_HANGUP_IRQ 0xffffffff813bd3b0
#endif

#ifndef XEN_CONSOLE_RESUME
#define XEN_CONSOLE_RESUME 0xffffffff813be1d0
#endif

#ifndef XEN_RAW_CONSOLE_WRITE
#define XEN_RAW_CONSOLE_WRITE 0xffffffff813be2d0
#endif

#ifndef XEN_RAW_PRINTK
#define XEN_RAW_PRINTK 0xffffffff813be3f0
#endif

#ifndef UART_UPDATE_TIMEOUT
#define UART_UPDATE_TIMEOUT 0xffffffff813be460
#endif

#ifndef UART_GET_DIVISOR
#define UART_GET_DIVISOR 0xffffffff813be4c0
#endif

#ifndef UART_CONSOLE_WRITE
#define UART_CONSOLE_WRITE 0xffffffff813be510
#endif

#ifndef UART_GET_BAUD_RATE
#define UART_GET_BAUD_RATE 0xffffffff813be5b0
#endif

#ifndef UART_PARSE_OPTIONS
#define UART_PARSE_OPTIONS 0xffffffff813be710
#endif

#ifndef UART_PARSE_EARLYCON
#define UART_PARSE_EARLYCON 0xffffffff813be790
#endif

#ifndef UART_SET_OPTIONS
#define UART_SET_OPTIONS 0xffffffff813be860
#endif

#ifndef UART_UNREGISTER_DRIVER
#define UART_UNREGISTER_DRIVER 0xffffffff813befc0
#endif

#ifndef UART_REMOVE_ONE_PORT
#define UART_REMOVE_ONE_PORT 0xffffffff813bf3e0
#endif

#ifndef UART_HANDLE_DCD_CHANGE
#define UART_HANDLE_DCD_CHANGE 0xffffffff813bf550
#endif

#ifndef UART_MATCH_PORT
#define UART_MATCH_PORT 0xffffffff813bf7c0
#endif

#ifndef UART_WRITE_WAKEUP
#define UART_WRITE_WAKEUP 0xffffffff813bf840
#endif

#ifndef UART_HANDLE_CTS_CHANGE
#define UART_HANDLE_CTS_CHANGE 0xffffffff813bf870
#endif

#ifndef UART_REGISTER_DRIVER
#define UART_REGISTER_DRIVER 0xffffffff813bf9b0
#endif

#ifndef UART_ADD_ONE_PORT
#define UART_ADD_ONE_PORT 0xffffffff813bfb70
#endif

#ifndef UART_INSERT_CHAR
#define UART_INSERT_CHAR 0xffffffff813c0040
#endif

#ifndef UART_SUSPEND_PORT
#define UART_SUSPEND_PORT 0xffffffff813c2420
#endif

#ifndef UART_RESUME_PORT
#define UART_RESUME_PORT 0xffffffff813c2650
#endif

#ifndef UART_CONSOLE_DEVICE
#define UART_CONSOLE_DEVICE 0xffffffff813c29a0
#endif

#ifndef SERIAL8250_DO_SET_MCTRL
#define SERIAL8250_DO_SET_MCTRL 0xffffffff813c2e10
#endif

#ifndef SERIAL8250_GET_PORT
#define SERIAL8250_GET_PORT 0xffffffff813c2f30
#endif

#ifndef SERIAL8250_SET_ISA_CONFIGURATOR
#define SERIAL8250_SET_ISA_CONFIGURATOR 0xffffffff813c2f50
#endif

#ifndef SERIAL8250_MODEM_STATUS
#define SERIAL8250_MODEM_STATUS 0xffffffff813c3020
#endif

#ifndef SERIAL8250_SUSPEND_PORT
#define SERIAL8250_SUSPEND_PORT 0xffffffff813c3c80
#endif

#ifndef SERIAL8250_UNREGISTER_PORT
#define SERIAL8250_UNREGISTER_PORT 0xffffffff813c3da0
#endif

#ifndef SERIAL8250_REGISTER_8250_PORT
#define SERIAL8250_REGISTER_8250_PORT 0xffffffff813c3ef0
#endif

#ifndef SERIAL8250_CLEAR_AND_REINIT_FIFOS
#define SERIAL8250_CLEAR_AND_REINIT_FIFOS 0xffffffff813c4540
#endif

#ifndef SERIAL8250_RPM_GET
#define SERIAL8250_RPM_GET 0xffffffff813c4790
#endif

#ifndef SERIAL8250_RPM_PUT
#define SERIAL8250_RPM_PUT 0xffffffff813c4800
#endif

#ifndef SERIAL8250_DO_PM
#define SERIAL8250_DO_PM 0xffffffff813c4980
#endif

#ifndef SERIAL8250_DO_SHUTDOWN
#define SERIAL8250_DO_SHUTDOWN 0xffffffff813c4bf0
#endif

#ifndef SERIAL8250_DO_SET_TERMIOS
#define SERIAL8250_DO_SET_TERMIOS 0xffffffff813c4dd0
#endif

#ifndef SERIAL8250_RX_CHARS
#define SERIAL8250_RX_CHARS 0xffffffff813c55b0
#endif

#ifndef SERIAL8250_RESUME_PORT
#define SERIAL8250_RESUME_PORT 0xffffffff813c6590
#endif

#ifndef SERIAL8250_TX_CHARS
#define SERIAL8250_TX_CHARS 0xffffffff813c6ba0
#endif

#ifndef SERIAL8250_HANDLE_IRQ
#define SERIAL8250_HANDLE_IRQ 0xffffffff813c6f40
#endif

#ifndef SERIAL8250_DO_STARTUP
#define SERIAL8250_DO_STARTUP 0xffffffff813c71a0
#endif

#ifndef SERIAL8250_PNP_INIT
#define SERIAL8250_PNP_INIT 0xffffffff813c7c60
#endif

#ifndef SERIAL8250_PNP_EXIT
#define SERIAL8250_PNP_EXIT 0xffffffff813c7c80
#endif

#ifndef SERIAL8250_REQUEST_DMA
#define SERIAL8250_REQUEST_DMA 0xffffffff813c7ca0
#endif

#ifndef SERIAL8250_RELEASE_DMA
#define SERIAL8250_RELEASE_DMA 0xffffffff813c81c0
#endif

#ifndef SERIAL8250_TX_DMA
#define SERIAL8250_TX_DMA 0xffffffff813c8390
#endif

#ifndef SERIAL8250_RX_DMA
#define SERIAL8250_RX_DMA 0xffffffff813c8690
#endif

#ifndef PCISERIAL_REMOVE_PORTS
#define PCISERIAL_REMOVE_PORTS 0xffffffff813ca4d0
#endif

#ifndef PCISERIAL_SUSPEND_PORTS
#define PCISERIAL_SUSPEND_PORTS 0xffffffff813ca550
#endif

#ifndef PCISERIAL_RESUME_PORTS
#define PCISERIAL_RESUME_PORTS 0xffffffff813ca5e0
#endif

#ifndef PCISERIAL_INIT_PORTS
#define PCISERIAL_INIT_PORTS 0xffffffff813caf60
#endif

#ifndef ADD_DEVICE_RANDOMNESS
#define ADD_DEVICE_RANDOMNESS 0xffffffff813cc7c0
#endif

#ifndef ADD_DISK_RANDOMNESS
#define ADD_DISK_RANDOMNESS 0xffffffff813cca30
#endif

#ifndef GET_RANDOM_INT
#define GET_RANDOM_INT 0xffffffff813ccd60
#endif

#ifndef ADD_HWGENERATOR_RANDOMNESS
#define ADD_HWGENERATOR_RANDOMNESS 0xffffffff813ccde0
#endif

#ifndef ADD_INPUT_RANDOMNESS
#define ADD_INPUT_RANDOMNESS 0xffffffff813cd010
#endif

#ifndef GET_RANDOM_BYTES
#define GET_RANDOM_BYTES 0xffffffff813ce720
#endif

#ifndef GENERATE_RANDOM_UUID
#define GENERATE_RANDOM_UUID 0xffffffff813ce790
#endif

#ifndef GET_RANDOM_BYTES_ARCH
#define GET_RANDOM_BYTES_ARCH 0xffffffff813ce8b0
#endif

#ifndef ADD_INTERRUPT_RANDOMNESS
#define ADD_INTERRUPT_RANDOMNESS 0xffffffff813ceea0
#endif

#ifndef RAND_INITIALIZE_DISK
#define RAND_INITIALIZE_DISK 0xffffffff813cf080
#endif

#ifndef SYS_GETRANDOM
#define SYS_GETRANDOM 0xffffffff813cf0c0
#endif

#ifndef SYS_GETRANDOM
#define SYS_GETRANDOM 0xffffffff813cf0c0
#endif

#ifndef RANDOM_INT_SECRET_INIT
#define RANDOM_INT_SECRET_INIT 0xffffffff813cf200
#endif

#ifndef RANDOMIZE_RANGE
#define RANDOMIZE_RANGE 0xffffffff813cf230
#endif

#ifndef MISC_REGISTER
#define MISC_REGISTER 0xffffffff813cf2a0
#endif

#ifndef MISC_DEREGISTER
#define MISC_DEREGISTER 0xffffffff813cf3d0
#endif

#ifndef HPET_ALLOC
#define HPET_ALLOC 0xffffffff813d0490
#endif

#ifndef AGP_BACKEND_ACQUIRE
#define AGP_BACKEND_ACQUIRE 0xffffffff813d0900
#endif

#ifndef AGP_BACKEND_RELEASE
#define AGP_BACKEND_RELEASE 0xffffffff813d0940
#endif

#ifndef AGP_PUT_BRIDGE
#define AGP_PUT_BRIDGE 0xffffffff813d0960
#endif

#ifndef AGP_ADD_BRIDGE
#define AGP_ADD_BRIDGE 0xffffffff813d0a20
#endif

#ifndef AGP_REMOVE_BRIDGE
#define AGP_REMOVE_BRIDGE 0xffffffff813d0e70
#endif

#ifndef AGP_ALLOC_BRIDGE
#define AGP_ALLOC_BRIDGE 0xffffffff813d0ef0
#endif

#ifndef AGP_FIND_MEM_BY_KEY
#define AGP_FIND_MEM_BY_KEY 0xffffffff813d14e0
#endif

#ifndef AGP_CREATE_SEGMENT
#define AGP_CREATE_SEGMENT 0xffffffff813d1530
#endif

#ifndef AGP_FIND_PRIVATE
#define AGP_FIND_PRIVATE 0xffffffff813d1650
#endif

#ifndef AGP_FREE_MEMORY_WRAP
#define AGP_FREE_MEMORY_WRAP 0xffffffff813d1690
#endif

#ifndef AGP_ALLOCATE_MEMORY_WRAP
#define AGP_ALLOCATE_MEMORY_WRAP 0xffffffff813d16b0
#endif

#ifndef AGP_FIND_CLIENT_BY_PID
#define AGP_FIND_CLIENT_BY_PID 0xffffffff813d1710
#endif

#ifndef AGP_CREATE_CLIENT
#define AGP_CREATE_CLIENT 0xffffffff813d1760
#endif

#ifndef AGP_REMOVE_CLIENT
#define AGP_REMOVE_CLIENT 0xffffffff813d17c0
#endif

#ifndef AGPIOC_ACQUIRE_WRAP
#define AGPIOC_ACQUIRE_WRAP 0xffffffff813d1a70
#endif

#ifndef AGPIOC_RELEASE_WRAP
#define AGPIOC_RELEASE_WRAP 0xffffffff813d1b80
#endif

#ifndef AGPIOC_SETUP_WRAP
#define AGPIOC_SETUP_WRAP 0xffffffff813d1bb0
#endif

#ifndef AGPIOC_PROTECT_WRAP
#define AGPIOC_PROTECT_WRAP 0xffffffff813d1bf0
#endif

#ifndef AGPIOC_DEALLOCATE_WRAP
#define AGPIOC_DEALLOCATE_WRAP 0xffffffff813d1c00
#endif

#ifndef AGP_FRONTEND_INITIALIZE
#define AGP_FRONTEND_INITIALIZE 0xffffffff813d2130
#endif

#ifndef AGP_FRONTEND_CLEANUP
#define AGP_FRONTEND_CLEANUP 0xffffffff813d21a0
#endif

#ifndef AGP_NUM_ENTRIES
#define AGP_NUM_ENTRIES 0xffffffff813d21c0
#endif

#ifndef AGP_GENERIC_INSERT_MEMORY
#define AGP_GENERIC_INSERT_MEMORY 0xffffffff813d2210
#endif

#ifndef AGP_GENERIC_REMOVE_MEMORY
#define AGP_GENERIC_REMOVE_MEMORY 0xffffffff813d23e0
#endif

#ifndef AGP_GENERIC_ALLOC_BY_TYPE
#define AGP_GENERIC_ALLOC_BY_TYPE 0xffffffff813d24c0
#endif

#ifndef AGP_ENABLE
#define AGP_ENABLE 0xffffffff813d24d0
#endif

#ifndef AGP_GENERIC_MASK_MEMORY
#define AGP_GENERIC_MASK_MEMORY 0xffffffff813d2510
#endif

#ifndef AGP_GENERIC_TYPE_TO_MASK_TYPE
#define AGP_GENERIC_TYPE_TO_MASK_TYPE 0xffffffff813d2540
#endif

#ifndef AGP_ALLOC_PAGE_ARRAY
#define AGP_ALLOC_PAGE_ARRAY 0xffffffff813d2560
#endif

#ifndef AGP_COPY_INFO
#define AGP_COPY_INFO 0xffffffff813d2610
#endif

#ifndef AGP_COLLECT_DEVICE_STATUS
#define AGP_COLLECT_DEVICE_STATUS 0xffffffff813d2730
#endif

#ifndef AGP_DEVICE_COMMAND
#define AGP_DEVICE_COMMAND 0xffffffff813d2cd0
#endif

#ifndef AGP3_GENERIC_TLBFLUSH
#define AGP3_GENERIC_TLBFLUSH 0xffffffff813d2d80
#endif

#ifndef AGP3_GENERIC_CLEANUP
#define AGP3_GENERIC_CLEANUP 0xffffffff813d2e00
#endif

#ifndef AGP_GENERIC_CREATE_GATT_TABLE
#define AGP_GENERIC_CREATE_GATT_TABLE 0xffffffff813d2e60
#endif

#ifndef AGP_GENERIC_FREE_GATT_TABLE
#define AGP_GENERIC_FREE_GATT_TABLE 0xffffffff813d30a0
#endif

#ifndef AGP_GENERIC_ALLOC_PAGE
#define AGP_GENERIC_ALLOC_PAGE 0xffffffff813d31b0
#endif

#ifndef GLOBAL_CACHE_FLUSH
#define GLOBAL_CACHE_FLUSH 0xffffffff813d3210
#endif

#ifndef AGP3_GENERIC_FETCH_SIZE
#define AGP3_GENERIC_FETCH_SIZE 0xffffffff813d3250
#endif

#ifndef AGP3_GENERIC_CONFIGURE
#define AGP3_GENERIC_CONFIGURE 0xffffffff813d32f0
#endif

#ifndef AGP_FREE_KEY
#define AGP_FREE_KEY 0xffffffff813d33f0
#endif

#ifndef AGP_GENERIC_FREE_BY_TYPE
#define AGP_GENERIC_FREE_BY_TYPE 0xffffffff813d3410
#endif

#ifndef AGP_BIND_MEMORY
#define AGP_BIND_MEMORY 0xffffffff813d3440
#endif

#ifndef AGP_UNBIND_MEMORY
#define AGP_UNBIND_MEMORY 0xffffffff813d3520
#endif

#ifndef AGP_FREE_MEMORY
#define AGP_FREE_MEMORY 0xffffffff813d35e0
#endif

#ifndef GET_AGP_VERSION
#define GET_AGP_VERSION 0xffffffff813d3770
#endif

#ifndef AGP_GENERIC_ENABLE
#define AGP_GENERIC_ENABLE 0xffffffff813d37a0
#endif

#ifndef AGP_GENERIC_DESTROY_PAGES
#define AGP_GENERIC_DESTROY_PAGES 0xffffffff813d3920
#endif

#ifndef AGP_GENERIC_DESTROY_PAGE
#define AGP_GENERIC_DESTROY_PAGE 0xffffffff813d39a0
#endif

#ifndef AGP_GENERIC_ALLOC_USER
#define AGP_GENERIC_ALLOC_USER 0xffffffff813d3a00
#endif

#ifndef AGP_GENERIC_ALLOC_PAGES
#define AGP_GENERIC_ALLOC_PAGES 0xffffffff813d3af0
#endif

#ifndef AGP_CREATE_MEMORY
#define AGP_CREATE_MEMORY 0xffffffff813d3b90
#endif

#ifndef AGP_ALLOCATE_MEMORY
#define AGP_ALLOCATE_MEMORY 0xffffffff813d3c30
#endif

#ifndef AGP_GENERIC_FIND_BRIDGE
#define AGP_GENERIC_FIND_BRIDGE 0xffffffff813d3d70
#endif

#ifndef AGP_3_5_ENABLE
#define AGP_3_5_ENABLE 0xffffffff813d3da0
#endif

#ifndef COMPAT_AGP_IOCTL
#define COMPAT_AGP_IOCTL 0xffffffff813d4720
#endif

#ifndef INTEL_GTT_CLEAR_RANGE
#define INTEL_GTT_CLEAR_RANGE 0xffffffff813d6cb0
#endif

#ifndef INTEL_GTT_GET
#define INTEL_GTT_GET 0xffffffff813d6d50
#endif

#ifndef INTEL_GTT_CHIPSET_FLUSH
#define INTEL_GTT_CHIPSET_FLUSH 0xffffffff813d6d90
#endif

#ifndef INTEL_ENABLE_GTT
#define INTEL_ENABLE_GTT 0xffffffff813d6dc0
#endif

#ifndef INTEL_GTT_INSERT_SG_ENTRIES
#define INTEL_GTT_INSERT_SG_ENTRIES 0xffffffff813d6f70
#endif

#ifndef INTEL_GMCH_REMOVE
#define INTEL_GMCH_REMOVE 0xffffffff813d7800
#endif

#ifndef INTEL_GMCH_PROBE
#define INTEL_GMCH_PROBE 0xffffffff813d7cb0
#endif

#ifndef IOMMU_GROUP_GET_IOMMUDATA
#define IOMMU_GROUP_GET_IOMMUDATA 0xffffffff813d91e0
#endif

#ifndef IOMMU_GROUP_SET_IOMMUDATA
#define IOMMU_GROUP_SET_IOMMUDATA 0xffffffff813d91f0
#endif

#ifndef IOMMU_GROUP_ID
#define IOMMU_GROUP_ID 0xffffffff813d9210
#endif

#ifndef IOMMU_PRESENT
#define IOMMU_PRESENT 0xffffffff813d9220
#endif

#ifndef IOMMU_CAPABLE
#define IOMMU_CAPABLE 0xffffffff813d9240
#endif

#ifndef IOMMU_DOMAIN_ALLOC
#define IOMMU_DOMAIN_ALLOC 0xffffffff813d9270
#endif

#ifndef IOMMU_DOMAIN_FREE
#define IOMMU_DOMAIN_FREE 0xffffffff813d92c0
#endif

#ifndef IOMMU_DOMAIN_GET_ATTR
#define IOMMU_DOMAIN_GET_ATTR 0xffffffff813d92e0
#endif

#ifndef IOMMU_DOMAIN_SET_ATTR
#define IOMMU_DOMAIN_SET_ATTR 0xffffffff813d9360
#endif

#ifndef IOMMU_ATTACH_DEVICE
#define IOMMU_ATTACH_DEVICE 0xffffffff813d93c0
#endif

#ifndef IOMMU_DETACH_DEVICE
#define IOMMU_DETACH_DEVICE 0xffffffff813d9450
#endif

#ifndef IOMMU_IOVA_TO_PHYS
#define IOMMU_IOVA_TO_PHYS 0xffffffff813d94d0
#endif

#ifndef IOMMU_DOMAIN_WINDOW_ENABLE
#define IOMMU_DOMAIN_WINDOW_ENABLE 0xffffffff813d9500
#endif

#ifndef IOMMU_DOMAIN_WINDOW_DISABLE
#define IOMMU_DOMAIN_WINDOW_DISABLE 0xffffffff813d9530
#endif

#ifndef IOMMU_GROUP_FOR_EACH_DEV
#define IOMMU_GROUP_FOR_EACH_DEV 0xffffffff813d9560
#endif

#ifndef IOMMU_ATTACH_GROUP
#define IOMMU_ATTACH_GROUP 0xffffffff813d95e0
#endif

#ifndef IOMMU_DETACH_GROUP
#define IOMMU_DETACH_GROUP 0xffffffff813d9610
#endif

#ifndef IOMMU_GROUP_PUT
#define IOMMU_GROUP_PUT 0xffffffff813d96a0
#endif

#ifndef IOMMU_GROUP_GET
#define IOMMU_GROUP_GET 0xffffffff813d96d0
#endif

#ifndef IOMMU_GROUP_SET_NAME
#define IOMMU_GROUP_SET_NAME 0xffffffff813d9760
#endif

#ifndef IOMMU_GROUP_REMOVE_DEVICE
#define IOMMU_GROUP_REMOVE_DEVICE 0xffffffff813d9810
#endif

#ifndef IOMMU_GROUP_REGISTER_NOTIFIER
#define IOMMU_GROUP_REGISTER_NOTIFIER 0xffffffff813d9a40
#endif

#ifndef IOMMU_GROUP_UNREGISTER_NOTIFIER
#define IOMMU_GROUP_UNREGISTER_NOTIFIER 0xffffffff813d9a60
#endif

#ifndef IOMMU_SET_FAULT_HANDLER
#define IOMMU_SET_FAULT_HANDLER 0xffffffff813d9ad0
#endif

#ifndef IOMMU_UNMAP
#define IOMMU_UNMAP 0xffffffff813d9b40
#endif

#ifndef IOMMU_MAP
#define IOMMU_MAP 0xffffffff813d9cf0
#endif

#ifndef DEFAULT_IOMMU_MAP_SG
#define DEFAULT_IOMMU_MAP_SG 0xffffffff813d9f10
#endif

#ifndef IOMMU_GROUP_GET_BY_ID
#define IOMMU_GROUP_GET_BY_ID 0xffffffff813da040
#endif

#ifndef IOMMU_GROUP_ALLOC
#define IOMMU_GROUP_ALLOC 0xffffffff813da290
#endif

#ifndef BUS_SET_IOMMU
#define BUS_SET_IOMMU 0xffffffff813da440
#endif

#ifndef IOMMU_GROUP_ADD_DEVICE
#define IOMMU_GROUP_ADD_DEVICE 0xffffffff813da500
#endif

#ifndef IOMMU_GROUP_GET_FOR_DEV
#define IOMMU_GROUP_GET_FOR_DEV 0xffffffff813da710
#endif

#ifndef IOMMU_DEVICE_CREATE
#define IOMMU_DEVICE_CREATE 0xffffffff813db5c0
#endif

#ifndef IOMMU_DEVICE_DESTROY
#define IOMMU_DEVICE_DESTROY 0xffffffff813db6a0
#endif

#ifndef IOMMU_DEVICE_LINK
#define IOMMU_DEVICE_LINK 0xffffffff813db6d0
#endif

#ifndef IOMMU_DEVICE_UNLINK
#define IOMMU_DEVICE_UNLINK 0xffffffff813db790
#endif

#ifndef IOMMU_IOVA_CACHE_INIT
#define IOMMU_IOVA_CACHE_INIT 0xffffffff813db8f0
#endif

#ifndef IOMMU_IOVA_CACHE_DESTROY
#define IOMMU_IOVA_CACHE_DESTROY 0xffffffff813db940
#endif

#ifndef ALLOC_IOVA_MEM
#define ALLOC_IOVA_MEM 0xffffffff813db960
#endif

#ifndef FREE_IOVA_MEM
#define FREE_IOVA_MEM 0xffffffff813db980
#endif

#ifndef INIT_IOVA_DOMAIN
#define INIT_IOVA_DOMAIN 0xffffffff813db9a0
#endif

#ifndef ALLOC_IOVA
#define ALLOC_IOVA 0xffffffff813db9e0
#endif

#ifndef FIND_IOVA
#define FIND_IOVA 0xffffffff813dbc50
#endif

#ifndef __FREE_IOVA
#define __FREE_IOVA 0xffffffff813dbcd0
#endif

#ifndef FREE_IOVA
#define FREE_IOVA 0xffffffff813dbd30
#endif

#ifndef PUT_IOVA_DOMAIN
#define PUT_IOVA_DOMAIN 0xffffffff813dbd60
#endif

#ifndef RESERVE_IOVA
#define RESERVE_IOVA 0xffffffff813dbdd0
#endif

#ifndef COPY_RESERVED_IOVA
#define COPY_RESERVED_IOVA 0xffffffff813dbeb0
#endif

#ifndef SPLIT_AND_REMOVE_IOVA
#define SPLIT_AND_REMOVE_IOVA 0xffffffff813dbf30
#endif

#ifndef AMD_IOMMU_REGISTER_PPR_NOTIFIER
#define AMD_IOMMU_REGISTER_PPR_NOTIFIER 0xffffffff813dcb50
#endif

#ifndef AMD_IOMMU_UNREGISTER_PPR_NOTIFIER
#define AMD_IOMMU_UNREGISTER_PPR_NOTIFIER 0xffffffff813dcb70
#endif

#ifndef AMD_IOMMU_DEVICE_INFO
#define AMD_IOMMU_DEVICE_INFO 0xffffffff813dcb90
#endif

#ifndef AMD_IOMMU_ENABLE_DEVICE_ERRATUM
#define AMD_IOMMU_ENABLE_DEVICE_ERRATUM 0xffffffff813dd4c0
#endif

#ifndef AMD_IOMMU_COMPLETE_PPR
#define AMD_IOMMU_COMPLETE_PPR 0xffffffff813de130
#endif

#ifndef AMD_IOMMU_FLUSH_PAGE
#define AMD_IOMMU_FLUSH_PAGE 0xffffffff813def10
#endif

#ifndef AMD_IOMMU_FLUSH_TLB
#define AMD_IOMMU_FLUSH_TLB 0xffffffff813def60
#endif

#ifndef AMD_IOMMU_DOMAIN_SET_GCR3
#define AMD_IOMMU_DOMAIN_SET_GCR3 0xffffffff813defc0
#endif

#ifndef AMD_IOMMU_DOMAIN_CLEAR_GCR3
#define AMD_IOMMU_DOMAIN_CLEAR_GCR3 0xffffffff813df070
#endif

#ifndef AMD_IOMMU_DOMAIN_ENABLE_V2
#define AMD_IOMMU_DOMAIN_ENABLE_V2 0xffffffff813df520
#endif

#ifndef AMD_IOMMU_DOMAIN_DIRECT_MAP
#define AMD_IOMMU_DOMAIN_DIRECT_MAP 0xffffffff813df610
#endif

#ifndef AMD_IOMMU_GET_V2_DOMAIN
#define AMD_IOMMU_GET_V2_DOMAIN 0xffffffff813dfc40
#endif

#ifndef AMD_IOMMU_INT_THREAD
#define AMD_IOMMU_INT_THREAD 0xffffffff813e0d00
#endif

#ifndef AMD_IOMMU_INT_HANDLER
#define AMD_IOMMU_INT_HANDLER 0xffffffff813e1150
#endif

#ifndef IOMMU_FLUSH_ALL_CACHES
#define IOMMU_FLUSH_ALL_CACHES 0xffffffff813e1160
#endif

#ifndef AMD_IOMMU_INIT_NOTIFIER
#define AMD_IOMMU_INIT_NOTIFIER 0xffffffff813e1250
#endif

#ifndef AMD_IOMMU_V2_SUPPORTED
#define AMD_IOMMU_V2_SUPPORTED 0xffffffff813e1270
#endif

#ifndef AMD_IOMMU_PC_GET_MAX_BANKS
#define AMD_IOMMU_PC_GET_MAX_BANKS 0xffffffff813e1280
#endif

#ifndef AMD_IOMMU_PC_SUPPORTED
#define AMD_IOMMU_PC_SUPPORTED 0xffffffff813e12b0
#endif

#ifndef AMD_IOMMU_PC_GET_MAX_COUNTERS
#define AMD_IOMMU_PC_GET_MAX_COUNTERS 0xffffffff813e12c0
#endif

#ifndef AMD_IOMMU_PC_GET_SET_REG_VAL
#define AMD_IOMMU_PC_GET_SET_REG_VAL 0xffffffff813e12f0
#endif

#ifndef AMD_IOMMU_RESET_CMD_BUFFER
#define AMD_IOMMU_RESET_CMD_BUFFER 0xffffffff813e16d0
#endif

#ifndef AMD_IOMMU_APPLY_ERRATUM_63
#define AMD_IOMMU_APPLY_ERRATUM_63 0xffffffff813e1ba0
#endif

#ifndef AMD_IOMMU_DISABLE
#define AMD_IOMMU_DISABLE 0xffffffff813e1bf0
#endif

#ifndef AMD_IOMMU_REENABLE
#define AMD_IOMMU_REENABLE 0xffffffff813e1c30
#endif

#ifndef AMD_IOMMU_SET_INVALID_PPR_CB
#define AMD_IOMMU_SET_INVALID_PPR_CB 0xffffffff813e1e00
#endif

#ifndef AMD_IOMMU_SET_INVALIDATE_CTX_CB
#define AMD_IOMMU_SET_INVALIDATE_CTX_CB 0xffffffff813e1ec0
#endif

#ifndef AMD_IOMMU_BIND_PASID
#define AMD_IOMMU_BIND_PASID 0xffffffff813e2380
#endif

#ifndef AMD_IOMMU_UNBIND_PASID
#define AMD_IOMMU_UNBIND_PASID 0xffffffff813e26a0
#endif

#ifndef AMD_IOMMU_FREE_DEVICE
#define AMD_IOMMU_FREE_DEVICE 0xffffffff813e2750
#endif

#ifndef AMD_IOMMU_INIT_DEVICE
#define AMD_IOMMU_INIT_DEVICE 0xffffffff813e2970
#endif

#ifndef DMAR_FAULT
#define DMAR_FAULT 0xffffffff813e30f0
#endif

#ifndef DMAR_ALLOC_DEV_SCOPE
#define DMAR_ALLOC_DEV_SCOPE 0xffffffff813e3bb0
#endif

#ifndef DMAR_FREE_DEV_SCOPE
#define DMAR_FREE_DEV_SCOPE 0xffffffff813e3c60
#endif

#ifndef DMAR_INSERT_DEV_SCOPE
#define DMAR_INSERT_DEV_SCOPE 0xffffffff813e4380
#endif

#ifndef DMAR_REMOVE_DEV_SCOPE
#define DMAR_REMOVE_DEV_SCOPE 0xffffffff813e4760
#endif

#ifndef DMAR_FIND_MATCHED_DRHD_UNIT
#define DMAR_FIND_MATCHED_DRHD_UNIT 0xffffffff813e47a0
#endif

#ifndef QI_SUBMIT_SYNC
#define QI_SUBMIT_SYNC 0xffffffff813e4890
#endif

#ifndef QI_GLOBAL_IEC
#define QI_GLOBAL_IEC 0xffffffff813e4c80
#endif

#ifndef QI_FLUSH_CONTEXT
#define QI_FLUSH_CONTEXT 0xffffffff813e4cb0
#endif

#ifndef QI_FLUSH_IOTLB
#define QI_FLUSH_IOTLB 0xffffffff813e4d00
#endif

#ifndef QI_FLUSH_DEV_IOTLB
#define QI_FLUSH_DEV_IOTLB 0xffffffff813e4d70
#endif

#ifndef DMAR_DISABLE_QI
#define DMAR_DISABLE_QI 0xffffffff813e4e20
#endif

#ifndef DMAR_ENABLE_QI
#define DMAR_ENABLE_QI 0xffffffff813e4f30
#endif

#ifndef DMAR_MSI_UNMASK
#define DMAR_MSI_UNMASK 0xffffffff813e5060
#endif

#ifndef DMAR_MSI_MASK
#define DMAR_MSI_MASK 0xffffffff813e50a0
#endif

#ifndef DMAR_MSI_WRITE
#define DMAR_MSI_WRITE 0xffffffff813e50e0
#endif

#ifndef DMAR_MSI_READ
#define DMAR_MSI_READ 0xffffffff813e5140
#endif

#ifndef DMAR_SET_INTERRUPT
#define DMAR_SET_INTERRUPT 0xffffffff813e51a0
#endif

#ifndef DMAR_REENABLE_QI
#define DMAR_REENABLE_QI 0xffffffff813e51d0
#endif

#ifndef DMAR_DEVICE_ADD
#define DMAR_DEVICE_ADD 0xffffffff813e5210
#endif

#ifndef DMAR_DEVICE_REMOVE
#define DMAR_DEVICE_REMOVE 0xffffffff813e5230
#endif

#ifndef IOMMU_CALCULATE_MAX_SAGAW
#define IOMMU_CALCULATE_MAX_SAGAW 0xffffffff813e8910
#endif

#ifndef IOMMU_CALCULATE_AGAW
#define IOMMU_CALCULATE_AGAW 0xffffffff813e8930
#endif

#ifndef DOMAIN_UNMAP
#define DOMAIN_UNMAP 0xffffffff813e8950
#endif

#ifndef DMA_FREE_PAGELIST
#define DMA_FREE_PAGELIST 0xffffffff813e8a50
#endif

#ifndef DMAR_PARSE_ONE_ATSR
#define DMAR_PARSE_ONE_ATSR 0xffffffff813e9800
#endif

#ifndef DMAR_RELEASE_ONE_ATSR
#define DMAR_RELEASE_ONE_ATSR 0xffffffff813e98f0
#endif

#ifndef DMAR_CHECK_ONE_ATSR
#define DMAR_CHECK_ONE_ATSR 0xffffffff813e9940
#endif

#ifndef DMAR_IOMMU_HOTPLUG
#define DMAR_IOMMU_HOTPLUG 0xffffffff813e99b0
#endif

#ifndef DMAR_FIND_MATCHED_ATSR_UNIT
#define DMAR_FIND_MATCHED_ATSR_UNIT 0xffffffff813e9c10
#endif

#ifndef DMAR_IOMMU_NOTIFY_SCOPE_DEV
#define DMAR_IOMMU_NOTIFY_SCOPE_DEV 0xffffffff813eb110
#endif

#ifndef DMAR_IR_HOTPLUG
#define DMAR_IR_HOTPLUG 0xffffffff813ec7c0
#endif

#ifndef SETUP_IOAPIC_REMAPPED_ENTRY
#define SETUP_IOAPIC_REMAPPED_ENTRY 0xffffffff813ec9e0
#endif

#ifndef COMPOSE_REMAPPED_MSI_MSG
#define COMPOSE_REMAPPED_MSI_MSG 0xffffffff813ecd20
#endif

#ifndef SETUP_HPET_MSI_REMAPPED
#define SETUP_HPET_MSI_REMAPPED 0xffffffff813ecdb0
#endif

#ifndef SET_IRQ_REMAPPING_BROKEN
#define SET_IRQ_REMAPPING_BROKEN 0xffffffff813ece70
#endif

#ifndef IRQ_REMAPPING_DISABLE
#define IRQ_REMAPPING_DISABLE 0xffffffff813ece80
#endif

#ifndef IRQ_REMAPPING_REENABLE
#define IRQ_REMAPPING_REENABLE 0xffffffff813ecec0
#endif

#ifndef FREE_REMAPPED_IRQ
#define FREE_REMAPPED_IRQ 0xffffffff813ecf00
#endif

#ifndef PANIC_IF_IRQ_REMAP
#define PANIC_IF_IRQ_REMAP 0xffffffff813ecf40
#endif

#ifndef IRQ_REMAP_MODIFY_CHIP_DEFAULTS
#define IRQ_REMAP_MODIFY_CHIP_DEFAULTS 0xffffffff813ecf60
#endif

#ifndef SETUP_REMAPPED_IRQ
#define SETUP_REMAPPED_IRQ 0xffffffff813ecf90
#endif

#ifndef MIPI_DSI_HOST_REGISTER
#define MIPI_DSI_HOST_REGISTER 0xffffffff813ed020
#endif

#ifndef MIPI_DSI_ATTACH
#define MIPI_DSI_ATTACH 0xffffffff813ed030
#endif

#ifndef MIPI_DSI_DETACH
#define MIPI_DSI_DETACH 0xffffffff813ed070
#endif

#ifndef MIPI_DSI_PACKET_FORMAT_IS_SHORT
#define MIPI_DSI_PACKET_FORMAT_IS_SHORT 0xffffffff813ed0b0
#endif

#ifndef MIPI_DSI_PACKET_FORMAT_IS_LONG
#define MIPI_DSI_PACKET_FORMAT_IS_LONG 0xffffffff813ed0e0
#endif

#ifndef OF_FIND_MIPI_DSI_DEVICE_BY_NODE
#define OF_FIND_MIPI_DSI_DEVICE_BY_NODE 0xffffffff813ed190
#endif

#ifndef MIPI_DSI_HOST_UNREGISTER
#define MIPI_DSI_HOST_UNREGISTER 0xffffffff813ed1d0
#endif

#ifndef MIPI_DSI_CREATE_PACKET
#define MIPI_DSI_CREATE_PACKET 0xffffffff813ed210
#endif

#ifndef MIPI_DSI_DRIVER_REGISTER_FULL
#define MIPI_DSI_DRIVER_REGISTER_FULL 0xffffffff813ed340
#endif

#ifndef MIPI_DSI_DRIVER_UNREGISTER
#define MIPI_DSI_DRIVER_UNREGISTER 0xffffffff813ed3a0
#endif

#ifndef MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE
#define MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE 0xffffffff813ed420
#endif

#ifndef MIPI_DSI_GENERIC_WRITE
#define MIPI_DSI_GENERIC_WRITE 0xffffffff813ed490
#endif

#ifndef MIPI_DSI_GENERIC_READ
#define MIPI_DSI_GENERIC_READ 0xffffffff813ed520
#endif

#ifndef MIPI_DSI_DCS_WRITE_BUFFER
#define MIPI_DSI_DCS_WRITE_BUFFER 0xffffffff813ed5b0
#endif

#ifndef MIPI_DSI_DCS_WRITE
#define MIPI_DSI_DCS_WRITE 0xffffffff813ed630
#endif

#ifndef MIPI_DSI_DCS_SET_COLUMN_ADDRESS
#define MIPI_DSI_DCS_SET_COLUMN_ADDRESS 0xffffffff813ed6e0
#endif

#ifndef MIPI_DSI_DCS_SET_PAGE_ADDRESS
#define MIPI_DSI_DCS_SET_PAGE_ADDRESS 0xffffffff813ed730
#endif

#ifndef MIPI_DSI_DCS_SET_TEAR_ON
#define MIPI_DSI_DCS_SET_TEAR_ON 0xffffffff813ed780
#endif

#ifndef MIPI_DSI_DCS_SET_PIXEL_FORMAT
#define MIPI_DSI_DCS_SET_PIXEL_FORMAT 0xffffffff813ed7c0
#endif

#ifndef MIPI_DSI_DCS_READ
#define MIPI_DSI_DCS_READ 0xffffffff813ed800
#endif

#ifndef MIPI_DSI_DCS_GET_POWER_MODE
#define MIPI_DSI_DCS_GET_POWER_MODE 0xffffffff813ed860
#endif

#ifndef MIPI_DSI_DCS_GET_PIXEL_FORMAT
#define MIPI_DSI_DCS_GET_PIXEL_FORMAT 0xffffffff813ed8a0
#endif

#ifndef MIPI_DSI_DCS_SET_TEAR_OFF
#define MIPI_DSI_DCS_SET_TEAR_OFF 0xffffffff813ed8e0
#endif

#ifndef MIPI_DSI_DCS_NOP
#define MIPI_DSI_DCS_NOP 0xffffffff813ed910
#endif

#ifndef MIPI_DSI_DCS_SOFT_RESET
#define MIPI_DSI_DCS_SOFT_RESET 0xffffffff813ed940
#endif

#ifndef MIPI_DSI_DCS_ENTER_SLEEP_MODE
#define MIPI_DSI_DCS_ENTER_SLEEP_MODE 0xffffffff813ed970
#endif

#ifndef MIPI_DSI_DCS_EXIT_SLEEP_MODE
#define MIPI_DSI_DCS_EXIT_SLEEP_MODE 0xffffffff813ed9a0
#endif

#ifndef MIPI_DSI_DCS_SET_DISPLAY_OFF
#define MIPI_DSI_DCS_SET_DISPLAY_OFF 0xffffffff813ed9d0
#endif

#ifndef MIPI_DSI_DCS_SET_DISPLAY_ON
#define MIPI_DSI_DCS_SET_DISPLAY_ON 0xffffffff813eda00
#endif

#ifndef VGA_DEFAULT_DEVICE
#define VGA_DEFAULT_DEVICE 0xffffffff813eda30
#endif

#ifndef VGA_PUT
#define VGA_PUT 0xffffffff813ede90
#endif

#ifndef VGA_CLIENT_REGISTER
#define VGA_CLIENT_REGISTER 0xffffffff813edf20
#endif

#ifndef VGA_TRYGET
#define VGA_TRYGET 0xffffffff813ee680
#endif

#ifndef VGA_GET
#define VGA_GET 0xffffffff813ee770
#endif

#ifndef VGA_SET_LEGACY_DECODING
#define VGA_SET_LEGACY_DECODING 0xffffffff813eeab0
#endif

#ifndef VGA_SET_DEFAULT_DEVICE
#define VGA_SET_DEFAULT_DEVICE 0xffffffff813ef110
#endif

#ifndef VGA_SWITCHEROO_GET_CLIENT_STATE
#define VGA_SWITCHEROO_GET_CLIENT_STATE 0xffffffff813ef5d0
#endif

#ifndef VGA_SWITCHEROO_SET_DYNAMIC_SWITCH
#define VGA_SWITCHEROO_SET_DYNAMIC_SWITCH 0xffffffff813ef710
#endif

#ifndef VGA_SWITCHEROO_INIT_DOMAIN_PM_OPS
#define VGA_SWITCHEROO_INIT_DOMAIN_PM_OPS 0xffffffff813ef800
#endif

#ifndef VGA_SWITCHEROO_FINI_DOMAIN_PM_OPS
#define VGA_SWITCHEROO_FINI_DOMAIN_PM_OPS 0xffffffff813ef870
#endif

#ifndef VGA_SWITCHEROO_INIT_DOMAIN_PM_OPTIMUS_HDMI_AUDIO
#define VGA_SWITCHEROO_INIT_DOMAIN_PM_OPTIMUS_HDMI_AUDIO 0xffffffff813ef890
#endif

#ifndef VGA_SWITCHEROO_CLIENT_FB_SET
#define VGA_SWITCHEROO_CLIENT_FB_SET 0xffffffff813ef8f0
#endif

#ifndef VGA_SWITCHEROO_UNREGISTER_HANDLER
#define VGA_SWITCHEROO_UNREGISTER_HANDLER 0xffffffff813efca0
#endif

#ifndef VGA_SWITCHEROO_UNREGISTER_CLIENT
#define VGA_SWITCHEROO_UNREGISTER_CLIENT 0xffffffff813efd10
#endif

#ifndef VGA_SWITCHEROO_PROCESS_DELAYED_SWITCH
#define VGA_SWITCHEROO_PROCESS_DELAYED_SWITCH 0xffffffff813eff30
#endif

#ifndef VGA_SWITCHEROO_REGISTER_HANDLER
#define VGA_SWITCHEROO_REGISTER_HANDLER 0xffffffff813f0390
#endif

#ifndef VGA_SWITCHEROO_REGISTER_AUDIO_CLIENT
#define VGA_SWITCHEROO_REGISTER_AUDIO_CLIENT 0xffffffff813f0510
#endif

#ifndef VGA_SWITCHEROO_REGISTER_CLIENT
#define VGA_SWITCHEROO_REGISTER_CLIENT 0xffffffff813f0530
#endif

#ifndef CN_QUEUE_RELEASE_CALLBACK
#define CN_QUEUE_RELEASE_CALLBACK 0xffffffff813f0570
#endif

#ifndef CN_CB_EQUAL
#define CN_CB_EQUAL 0xffffffff813f05a0
#endif

#ifndef CN_QUEUE_ADD_CALLBACK
#define CN_QUEUE_ADD_CALLBACK 0xffffffff813f05c0
#endif

#ifndef CN_QUEUE_DEL_CALLBACK
#define CN_QUEUE_DEL_CALLBACK 0xffffffff813f06e0
#endif

#ifndef CN_QUEUE_ALLOC_DEV
#define CN_QUEUE_ALLOC_DEV 0xffffffff813f07a0
#endif

#ifndef CN_QUEUE_FREE_DEV
#define CN_QUEUE_FREE_DEV 0xffffffff813f0810
#endif

#ifndef CN_ADD_CALLBACK
#define CN_ADD_CALLBACK 0xffffffff813f08c0
#endif

#ifndef CN_DEL_CALLBACK
#define CN_DEL_CALLBACK 0xffffffff813f0900
#endif

#ifndef CN_NETLINK_SEND_MULT
#define CN_NETLINK_SEND_MULT 0xffffffff813f0be0
#endif

#ifndef CN_NETLINK_SEND
#define CN_NETLINK_SEND 0xffffffff813f0dc0
#endif

#ifndef PROC_FORK_CONNECTOR
#define PROC_FORK_CONNECTOR 0xffffffff813f0f50
#endif

#ifndef PROC_EXEC_CONNECTOR
#define PROC_EXEC_CONNECTOR 0xffffffff813f1050
#endif

#ifndef PROC_ID_CONNECTOR
#define PROC_ID_CONNECTOR 0xffffffff813f1130
#endif

#ifndef PROC_SID_CONNECTOR
#define PROC_SID_CONNECTOR 0xffffffff813f1270
#endif

#ifndef PROC_PTRACE_CONNECTOR
#define PROC_PTRACE_CONNECTOR 0xffffffff813f1350
#endif

#ifndef PROC_COMM_CONNECTOR
#define PROC_COMM_CONNECTOR 0xffffffff813f1490
#endif

#ifndef PROC_COREDUMP_CONNECTOR
#define PROC_COREDUMP_CONNECTOR 0xffffffff813f1580
#endif

#ifndef PROC_EXIT_CONNECTOR
#define PROC_EXIT_CONNECTOR 0xffffffff813f1660
#endif

#ifndef COMPONENT_MASTER_ADD_CHILD
#define COMPONENT_MASTER_ADD_CHILD 0xffffffff813f1760
#endif

#ifndef COMPONENT_MATCH_ADD
#define COMPONENT_MATCH_ADD 0xffffffff813f18d0
#endif

#ifndef COMPONENT_MASTER_DEL
#define COMPONENT_MASTER_DEL 0xffffffff813f1a00
#endif

#ifndef COMPONENT_DEL
#define COMPONENT_DEL 0xffffffff813f1aa0
#endif

#ifndef COMPONENT_UNBIND_ALL
#define COMPONENT_UNBIND_ALL 0xffffffff813f1cc0
#endif

#ifndef COMPONENT_BIND_ALL
#define COMPONENT_BIND_ALL 0xffffffff813f1d70
#endif

#ifndef COMPONENT_ADD
#define COMPONENT_ADD 0xffffffff813f1fd0
#endif

#ifndef COMPONENT_MASTER_ADD_WITH_MATCH
#define COMPONENT_MASTER_ADD_WITH_MATCH 0xffffffff813f2100
#endif

#ifndef COMPONENT_MASTER_ADD
#define COMPONENT_MASTER_ADD 0xffffffff813f2240
#endif

#ifndef DEVICE_STORE_ULONG
#define DEVICE_STORE_ULONG 0xffffffff813f2330
#endif

#ifndef DEVICE_SHOW_ULONG
#define DEVICE_SHOW_ULONG 0xffffffff813f2380
#endif

#ifndef DEVICE_SHOW_INT
#define DEVICE_SHOW_INT 0xffffffff813f23b0
#endif

#ifndef DEVICE_SHOW_BOOL
#define DEVICE_SHOW_BOOL 0xffffffff813f23e0
#endif

#ifndef DEVICE_STORE_INT
#define DEVICE_STORE_INT 0xffffffff813f2410
#endif

#ifndef DEVICE_STORE_BOOL
#define DEVICE_STORE_BOOL 0xffffffff813f2480
#endif

#ifndef DEVICE_CREATE_FILE
#define DEVICE_CREATE_FILE 0xffffffff813f24b0
#endif

#ifndef DEVICE_REMOVE_FILE
#define DEVICE_REMOVE_FILE 0xffffffff813f2560
#endif

#ifndef DEVICE_REMOVE_FILE_SELF
#define DEVICE_REMOVE_FILE_SELF 0xffffffff813f2620
#endif

#ifndef DEVICE_CREATE_BIN_FILE
#define DEVICE_CREATE_BIN_FILE 0xffffffff813f2650
#endif

#ifndef DEVICE_REMOVE_BIN_FILE
#define DEVICE_REMOVE_BIN_FILE 0xffffffff813f2680
#endif

#ifndef DEVICE_INITIALIZE
#define DEVICE_INITIALIZE 0xffffffff813f2790
#endif

#ifndef DEV_SET_NAME
#define DEV_SET_NAME 0xffffffff813f2850
#endif

#ifndef GET_DEVICE
#define GET_DEVICE 0xffffffff813f2990
#endif

#ifndef PUT_DEVICE
#define PUT_DEVICE 0xffffffff813f29f0
#endif

#ifndef DEVICE_FOR_EACH_CHILD
#define DEVICE_FOR_EACH_CHILD 0xffffffff813f2ae0
#endif

#ifndef DEVICE_FIND_CHILD
#define DEVICE_FIND_CHILD 0xffffffff813f2b50
#endif

#ifndef DEVICE_RENAME
#define DEVICE_RENAME 0xffffffff813f2be0
#endif

#ifndef DEV_DRIVER_STRING
#define DEV_DRIVER_STRING 0xffffffff813f2d30
#endif

#ifndef SET_PRIMARY_FWNODE
#define SET_PRIMARY_FWNODE 0xffffffff813f2d80
#endif

#ifndef DEVICE_DEL
#define DEVICE_DEL 0xffffffff813f2e90
#endif

#ifndef DEVICE_UNREGISTER
#define DEVICE_UNREGISTER 0xffffffff813f30f0
#endif

#ifndef ROOT_DEVICE_UNREGISTER
#define ROOT_DEVICE_UNREGISTER 0xffffffff813f3160
#endif

#ifndef DEVICE_DESTROY
#define DEVICE_DESTROY 0xffffffff813f3190
#endif

#ifndef DEV_VPRINTK_EMIT
#define DEV_VPRINTK_EMIT 0xffffffff813f3220
#endif

#ifndef DEV_PRINTK_EMIT
#define DEV_PRINTK_EMIT 0xffffffff813f3480
#endif

#ifndef DEV_PRINTK
#define DEV_PRINTK 0xffffffff813f3570
#endif

#ifndef DEV_EMERG
#define DEV_EMERG 0xffffffff813f35d0
#endif

#ifndef DEV_ALERT
#define DEV_ALERT 0xffffffff813f3640
#endif

#ifndef DEV_CRIT
#define DEV_CRIT 0xffffffff813f36b0
#endif

#ifndef DEV_ERR
#define DEV_ERR 0xffffffff813f3720
#endif

#ifndef DEV_WARN
#define DEV_WARN 0xffffffff813f37f0
#endif

#ifndef DEV_NOTICE
#define DEV_NOTICE 0xffffffff813f3860
#endif

#ifndef _DEV_INFO
#define _DEV_INFO 0xffffffff813f38d0
#endif

#ifndef LOCK_DEVICE_HOTPLUG
#define LOCK_DEVICE_HOTPLUG 0xffffffff813f3a50
#endif

#ifndef UNLOCK_DEVICE_HOTPLUG
#define UNLOCK_DEVICE_HOTPLUG 0xffffffff813f3a70
#endif

#ifndef LOCK_DEVICE_HOTPLUG_SYSFS
#define LOCK_DEVICE_HOTPLUG_SYSFS 0xffffffff813f3a90
#endif

#ifndef DEVICE_ADD_GROUPS
#define DEVICE_ADD_GROUPS 0xffffffff813f3ae0
#endif

#ifndef DEVICE_REMOVE_GROUPS
#define DEVICE_REMOVE_GROUPS 0xffffffff813f3b00
#endif

#ifndef VIRTUAL_DEVICE_PARENT
#define VIRTUAL_DEVICE_PARENT 0xffffffff813f3b20
#endif

#ifndef DEVICE_MOVE
#define DEVICE_MOVE 0xffffffff813f3d20
#endif

#ifndef DEVICE_PRIVATE_INIT
#define DEVICE_PRIVATE_INIT 0xffffffff813f40c0
#endif

#ifndef DEVICE_ADD
#define DEVICE_ADD 0xffffffff813f4130
#endif

#ifndef DEVICE_REGISTER
#define DEVICE_REGISTER 0xffffffff813f47d0
#endif

#ifndef __ROOT_DEVICE_REGISTER
#define __ROOT_DEVICE_REGISTER 0xffffffff813f47f0
#endif

#ifndef DEVICE_CREATE_VARGS
#define DEVICE_CREATE_VARGS 0xffffffff813f49f0
#endif

#ifndef DEVICE_CREATE
#define DEVICE_CREATE 0xffffffff813f4a10
#endif

#ifndef DEVICE_CREATE_WITH_GROUPS
#define DEVICE_CREATE_WITH_GROUPS 0xffffffff813f4a60
#endif

#ifndef DEVICE_GET_DEVNODE
#define DEVICE_GET_DEVNODE 0xffffffff813f4aa0
#endif

#ifndef DEVICE_OFFLINE
#define DEVICE_OFFLINE 0xffffffff813f4e60
#endif

#ifndef DEVICE_ONLINE
#define DEVICE_ONLINE 0xffffffff813f4f10
#endif

#ifndef DEVICE_SHUTDOWN
#define DEVICE_SHUTDOWN 0xffffffff813f5030
#endif

#ifndef SET_SECONDARY_FWNODE
#define SET_SECONDARY_FWNODE 0xffffffff813f51c0
#endif

#ifndef BUS_GET_KSET
#define BUS_GET_KSET 0xffffffff813f5340
#endif

#ifndef BUS_GET_DEVICE_KLIST
#define BUS_GET_DEVICE_KLIST 0xffffffff813f5350
#endif

#ifndef SUBSYS_DEV_ITER_INIT
#define SUBSYS_DEV_ITER_INIT 0xffffffff813f5370
#endif

#ifndef SUBSYS_DEV_ITER_EXIT
#define SUBSYS_DEV_ITER_EXIT 0xffffffff813f53c0
#endif

#ifndef BUS_FOR_EACH_DEV
#define BUS_FOR_EACH_DEV 0xffffffff813f53e0
#endif

#ifndef BUS_RESCAN_DEVICES
#define BUS_RESCAN_DEVICES 0xffffffff813f5480
#endif

#ifndef BUS_FOR_EACH_DRV
#define BUS_FOR_EACH_DRV 0xffffffff813f54a0
#endif

#ifndef SUBSYS_DEV_ITER_NEXT
#define SUBSYS_DEV_ITER_NEXT 0xffffffff813f5530
#endif

#ifndef BUS_FIND_DEVICE
#define BUS_FIND_DEVICE 0xffffffff813f5570
#endif

#ifndef BUS_FIND_DEVICE_BY_NAME
#define BUS_FIND_DEVICE_BY_NAME 0xffffffff813f5620
#endif

#ifndef SUBSYS_FIND_DEVICE_BY_ID
#define SUBSYS_FIND_DEVICE_BY_ID 0xffffffff813f5640
#endif

#ifndef SUBSYS_INTERFACE_REGISTER
#define SUBSYS_INTERFACE_REGISTER 0xffffffff813f5800
#endif

#ifndef SUBSYS_INTERFACE_UNREGISTER
#define SUBSYS_INTERFACE_UNREGISTER 0xffffffff813f58e0
#endif

#ifndef DEVICE_REPROBE
#define DEVICE_REPROBE 0xffffffff813f59b0
#endif

#ifndef BUS_REGISTER_NOTIFIER
#define BUS_REGISTER_NOTIFIER 0xffffffff813f5c00
#endif

#ifndef BUS_UNREGISTER_NOTIFIER
#define BUS_UNREGISTER_NOTIFIER 0xffffffff813f5c20
#endif

#ifndef BUS_SORT_BREADTHFIRST
#define BUS_SORT_BREADTHFIRST 0xffffffff813f5c40
#endif

#ifndef BUS_REMOVE_FILE
#define BUS_REMOVE_FILE 0xffffffff813f5e00
#endif

#ifndef BUS_UNREGISTER
#define BUS_UNREGISTER 0xffffffff813f5e70
#endif

#ifndef BUS_CREATE_FILE
#define BUS_CREATE_FILE 0xffffffff813f5ff0
#endif

#ifndef BUS_REGISTER
#define BUS_REGISTER 0xffffffff813f6050
#endif

#ifndef SUBSYS_SYSTEM_REGISTER
#define SUBSYS_SYSTEM_REGISTER 0xffffffff813f62e0
#endif

#ifndef SUBSYS_VIRTUAL_REGISTER
#define SUBSYS_VIRTUAL_REGISTER 0xffffffff813f6320
#endif

#ifndef BUS_ADD_DEVICE
#define BUS_ADD_DEVICE 0xffffffff813f6610
#endif

#ifndef BUS_PROBE_DEVICE
#define BUS_PROBE_DEVICE 0xffffffff813f6810
#endif

#ifndef BUS_REMOVE_DEVICE
#define BUS_REMOVE_DEVICE 0xffffffff813f68e0
#endif

#ifndef BUS_ADD_DRIVER
#define BUS_ADD_DRIVER 0xffffffff813f6a60
#endif

#ifndef BUS_REMOVE_DRIVER
#define BUS_REMOVE_DRIVER 0xffffffff813f6cb0
#endif

#ifndef WAIT_FOR_DEVICE_PROBE
#define WAIT_FOR_DEVICE_PROBE 0xffffffff813f6f50
#endif

#ifndef DRIVER_ATTACH
#define DRIVER_ATTACH 0xffffffff813f6fd0
#endif

#ifndef DEVICE_RELEASE_DRIVER
#define DEVICE_RELEASE_DRIVER 0xffffffff813f7120
#endif

#ifndef DRIVER_DEFERRED_PROBE_DEL
#define DRIVER_DEFERRED_PROBE_DEL 0xffffffff813f7260
#endif

#ifndef DEVICE_BIND_DRIVER
#define DEVICE_BIND_DRIVER 0xffffffff813f73e0
#endif

#ifndef DEVICE_ATTACH
#define DEVICE_ATTACH 0xffffffff813f7410
#endif

#ifndef DRIVER_PROBE_DONE
#define DRIVER_PROBE_DONE 0xffffffff813f74d0
#endif

#ifndef DRIVER_PROBE_DEVICE
#define DRIVER_PROBE_DEVICE 0xffffffff813f7530
#endif

#ifndef DRIVER_DETACH
#define DRIVER_DETACH 0xffffffff813f7ad0
#endif

#ifndef REGISTER_SYSCORE_OPS
#define REGISTER_SYSCORE_OPS 0xffffffff813f7b80
#endif

#ifndef UNREGISTER_SYSCORE_OPS
#define UNREGISTER_SYSCORE_OPS 0xffffffff813f7bc0
#endif

#ifndef SYSCORE_RESUME
#define SYSCORE_RESUME 0xffffffff813f7c10
#endif

#ifndef SYSCORE_SUSPEND
#define SYSCORE_SUSPEND 0xffffffff813f7d90
#endif

#ifndef SYSCORE_SHUTDOWN
#define SYSCORE_SHUTDOWN 0xffffffff813f7fb0
#endif

#ifndef DRIVER_FOR_EACH_DEVICE
#define DRIVER_FOR_EACH_DEVICE 0xffffffff813f8020
#endif

#ifndef DRIVER_FIND_DEVICE
#define DRIVER_FIND_DEVICE 0xffffffff813f80b0
#endif

#ifndef DRIVER_CREATE_FILE
#define DRIVER_CREATE_FILE 0xffffffff813f8160
#endif

#ifndef DRIVER_REMOVE_FILE
#define DRIVER_REMOVE_FILE 0xffffffff813f8190
#endif

#ifndef DRIVER_FIND
#define DRIVER_FIND 0xffffffff813f81c0
#endif

#ifndef DRIVER_REGISTER
#define DRIVER_REGISTER 0xffffffff813f8210
#endif

#ifndef DRIVER_UNREGISTER
#define DRIVER_UNREGISTER 0xffffffff813f8300
#endif

#ifndef DRIVER_ADD_GROUPS
#define DRIVER_ADD_GROUPS 0xffffffff813f8350
#endif

#ifndef DRIVER_REMOVE_GROUPS
#define DRIVER_REMOVE_GROUPS 0xffffffff813f8370
#endif

#ifndef CLASS_CREATE_FILE_NS
#define CLASS_CREATE_FILE_NS 0xffffffff813f8410
#endif

#ifndef CLASS_REMOVE_FILE_NS
#define CLASS_REMOVE_FILE_NS 0xffffffff813f8440
#endif

#ifndef CLASS_COMPAT_UNREGISTER
#define CLASS_COMPAT_UNREGISTER 0xffffffff813f8590
#endif

#ifndef CLASS_UNREGISTER
#define CLASS_UNREGISTER 0xffffffff813f85b0
#endif

#ifndef CLASS_DESTROY
#define CLASS_DESTROY 0xffffffff813f8640
#endif

#ifndef CLASS_DEV_ITER_INIT
#define CLASS_DEV_ITER_INIT 0xffffffff813f8670
#endif

#ifndef CLASS_DEV_ITER_NEXT
#define CLASS_DEV_ITER_NEXT 0xffffffff813f86c0
#endif

#ifndef CLASS_DEV_ITER_EXIT
#define CLASS_DEV_ITER_EXIT 0xffffffff813f8700
#endif

#ifndef CLASS_INTERFACE_REGISTER
#define CLASS_INTERFACE_REGISTER 0xffffffff813f8720
#endif

#ifndef CLASS_INTERFACE_UNREGISTER
#define CLASS_INTERFACE_UNREGISTER 0xffffffff813f87f0
#endif

#ifndef SHOW_CLASS_ATTR_STRING
#define SHOW_CLASS_ATTR_STRING 0xffffffff813f88a0
#endif

#ifndef CLASS_COMPAT_REGISTER
#define CLASS_COMPAT_REGISTER 0xffffffff813f88d0
#endif

#ifndef CLASS_COMPAT_CREATE_LINK
#define CLASS_COMPAT_CREATE_LINK 0xffffffff813f8940
#endif

#ifndef CLASS_COMPAT_REMOVE_LINK
#define CLASS_COMPAT_REMOVE_LINK 0xffffffff813f89d0
#endif

#ifndef CLASS_FOR_EACH_DEVICE
#define CLASS_FOR_EACH_DEVICE 0xffffffff813f8a30
#endif

#ifndef CLASS_FIND_DEVICE
#define CLASS_FIND_DEVICE 0xffffffff813f8af0
#endif

#ifndef __CLASS_REGISTER
#define __CLASS_REGISTER 0xffffffff813f8bc0
#endif

#ifndef __CLASS_CREATE
#define __CLASS_CREATE 0xffffffff813f8e10
#endif

#ifndef PLATFORM_GET_RESOURCE
#define PLATFORM_GET_RESOURCE 0xffffffff813f8ea0
#endif

#ifndef PLATFORM_PM_SUSPEND
#define PLATFORM_PM_SUSPEND 0xffffffff813f8f20
#endif

#ifndef PLATFORM_PM_RESUME
#define PLATFORM_PM_RESUME 0xffffffff813f8f70
#endif

#ifndef PLATFORM_PM_FREEZE
#define PLATFORM_PM_FREEZE 0xffffffff813f8fc0
#endif

#ifndef PLATFORM_PM_THAW
#define PLATFORM_PM_THAW 0xffffffff813f9010
#endif

#ifndef PLATFORM_PM_POWEROFF
#define PLATFORM_PM_POWEROFF 0xffffffff813f9060
#endif

#ifndef PLATFORM_PM_RESTORE
#define PLATFORM_PM_RESTORE 0xffffffff813f90b0
#endif

#ifndef DMA_GET_REQUIRED_MASK
#define DMA_GET_REQUIRED_MASK 0xffffffff813f9100
#endif

#ifndef PLATFORM_GET_IRQ
#define PLATFORM_GET_IRQ 0xffffffff813f9160
#endif

#ifndef PLATFORM_GET_RESOURCE_BYNAME
#define PLATFORM_GET_RESOURCE_BYNAME 0xffffffff813f9210
#endif

#ifndef PLATFORM_GET_IRQ_BYNAME
#define PLATFORM_GET_IRQ_BYNAME 0xffffffff813f92b0
#endif

#ifndef PLATFORM_DEVICE_PUT
#define PLATFORM_DEVICE_PUT 0xffffffff813f92e0
#endif

#ifndef PLATFORM_DEVICE_ADD_RESOURCES
#define PLATFORM_DEVICE_ADD_RESOURCES 0xffffffff813f9360
#endif

#ifndef PLATFORM_DEVICE_ADD_DATA
#define PLATFORM_DEVICE_ADD_DATA 0xffffffff813f93d0
#endif

#ifndef PLATFORM_DEVICE_ADD
#define PLATFORM_DEVICE_ADD 0xffffffff813f9430
#endif

#ifndef PLATFORM_DEVICE_DEL
#define PLATFORM_DEVICE_DEL 0xffffffff813f96e0
#endif

#ifndef PLATFORM_DEVICE_UNREGISTER
#define PLATFORM_DEVICE_UNREGISTER 0xffffffff813f9770
#endif

#ifndef __PLATFORM_DRIVER_REGISTER
#define __PLATFORM_DRIVER_REGISTER 0xffffffff813f97a0
#endif

#ifndef PLATFORM_DRIVER_UNREGISTER
#define PLATFORM_DRIVER_UNREGISTER 0xffffffff813f9900
#endif

#ifndef __PLATFORM_DRIVER_PROBE
#define __PLATFORM_DRIVER_PROBE 0xffffffff813f9920
#endif

#ifndef PLATFORM_DEVICE_ALLOC
#define PLATFORM_DEVICE_ALLOC 0xffffffff813f9c00
#endif

#ifndef PLATFORM_DEVICE_REGISTER_FULL
#define PLATFORM_DEVICE_REGISTER_FULL 0xffffffff813f9c70
#endif

#ifndef __PLATFORM_CREATE_BUNDLE
#define __PLATFORM_CREATE_BUNDLE 0xffffffff813f9d80
#endif

#ifndef PLATFORM_DEVICE_REGISTER
#define PLATFORM_DEVICE_REGISTER 0xffffffff813f9e50
#endif

#ifndef PLATFORM_ADD_DEVICES
#define PLATFORM_ADD_DEVICES 0xffffffff813f9e80
#endif

#ifndef GET_CPU_DEVICE
#define GET_CPU_DEVICE 0xffffffff813f9f10
#endif

#ifndef CPU_IS_HOTPLUGGABLE
#define CPU_IS_HOTPLUGGABLE 0xffffffff813f9f50
#endif

#ifndef CPU_DEVICE_CREATE
#define CPU_DEVICE_CREATE 0xffffffff813fa1a0
#endif

#ifndef UNREGISTER_CPU
#define UNREGISTER_CPU 0xffffffff813fa3e0
#endif

#ifndef REGISTER_CPU
#define REGISTER_CPU 0xffffffff813fa440
#endif

#ifndef KOBJ_MAP
#define KOBJ_MAP 0xffffffff813fa570
#endif

#ifndef KOBJ_UNMAP
#define KOBJ_UNMAP 0xffffffff813fa710
#endif

#ifndef KOBJ_LOOKUP
#define KOBJ_LOOKUP 0xffffffff813fa7f0
#endif

#ifndef KOBJ_MAP_INIT
#define KOBJ_MAP_INIT 0xffffffff813fa960
#endif

#ifndef DEVRES_ALLOC
#define DEVRES_ALLOC 0xffffffff813fab50
#endif

#ifndef DEVRES_FOR_EACH_RES
#define DEVRES_FOR_EACH_RES 0xffffffff813fab90
#endif

#ifndef DEVRES_FIND
#define DEVRES_FIND 0xffffffff813fac80
#endif

#ifndef DEVRES_REMOVE
#define DEVRES_REMOVE 0xffffffff813fad00
#endif

#ifndef DEVRES_REMOVE_GROUP
#define DEVRES_REMOVE_GROUP 0xffffffff813fada0
#endif

#ifndef DEVRES_ADD
#define DEVRES_ADD 0xffffffff813faef0
#endif

#ifndef DEVM_ADD_ACTION
#define DEVM_ADD_ACTION 0xffffffff813faf40
#endif

#ifndef DEVM_GET_FREE_PAGES
#define DEVM_GET_FREE_PAGES 0xffffffff813fafa0
#endif

#ifndef DEVRES_OPEN_GROUP
#define DEVRES_OPEN_GROUP 0xffffffff813fb010
#endif

#ifndef DEVRES_CLOSE_GROUP
#define DEVRES_CLOSE_GROUP 0xffffffff813fb0d0
#endif

#ifndef DEVRES_RELEASE_GROUP
#define DEVRES_RELEASE_GROUP 0xffffffff813fb380
#endif

#ifndef DEVRES_FREE
#define DEVRES_FREE 0xffffffff813fb460
#endif

#ifndef DEVRES_GET
#define DEVRES_GET 0xffffffff813fb4a0
#endif

#ifndef DEVRES_DESTROY
#define DEVRES_DESTROY 0xffffffff813fb530
#endif

#ifndef DEVRES_RELEASE
#define DEVRES_RELEASE 0xffffffff813fb560
#endif

#ifndef DEVM_REMOVE_ACTION
#define DEVM_REMOVE_ACTION 0xffffffff813fb5a0
#endif

#ifndef DEVM_KFREE
#define DEVM_KFREE 0xffffffff813fb5f0
#endif

#ifndef DEVM_FREE_PAGES
#define DEVM_FREE_PAGES 0xffffffff813fb640
#endif

#ifndef DEVM_KMALLOC
#define DEVM_KMALLOC 0xffffffff813fb690
#endif

#ifndef DEVM_KSTRDUP
#define DEVM_KSTRDUP 0xffffffff813fb6f0
#endif

#ifndef DEVM_KMEMDUP
#define DEVM_KMEMDUP 0xffffffff813fb760
#endif

#ifndef DEVM_KVASPRINTF
#define DEVM_KVASPRINTF 0xffffffff813fb7a0
#endif

#ifndef DEVM_KASPRINTF
#define DEVM_KASPRINTF 0xffffffff813fb820
#endif

#ifndef DEVRES_RELEASE_ALL
#define DEVRES_RELEASE_ALL 0xffffffff813fb870
#endif

#ifndef ATTRIBUTE_CONTAINER_CLASSDEV_TO_CONTAINER
#define ATTRIBUTE_CONTAINER_CLASSDEV_TO_CONTAINER 0xffffffff813fb8d0
#endif

#ifndef ATTRIBUTE_CONTAINER_REGISTER
#define ATTRIBUTE_CONTAINER_REGISTER 0xffffffff813fb8e0
#endif

#ifndef ATTRIBUTE_CONTAINER_UNREGISTER
#define ATTRIBUTE_CONTAINER_UNREGISTER 0xffffffff813fb980
#endif

#ifndef ATTRIBUTE_CONTAINER_FIND_CLASS_DEVICE
#define ATTRIBUTE_CONTAINER_FIND_CLASS_DEVICE 0xffffffff813fba20
#endif

#ifndef ATTRIBUTE_CONTAINER_DEVICE_TRIGGER
#define ATTRIBUTE_CONTAINER_DEVICE_TRIGGER 0xffffffff813fba90
#endif

#ifndef ATTRIBUTE_CONTAINER_TRIGGER
#define ATTRIBUTE_CONTAINER_TRIGGER 0xffffffff813fbb40
#endif

#ifndef ATTRIBUTE_CONTAINER_ADD_ATTRS
#define ATTRIBUTE_CONTAINER_ADD_ATTRS 0xffffffff813fbbb0
#endif

#ifndef ATTRIBUTE_CONTAINER_ADD_CLASS_DEVICE
#define ATTRIBUTE_CONTAINER_ADD_CLASS_DEVICE 0xffffffff813fbc20
#endif

#ifndef ATTRIBUTE_CONTAINER_ADD_DEVICE
#define ATTRIBUTE_CONTAINER_ADD_DEVICE 0xffffffff813fbc50
#endif

#ifndef ATTRIBUTE_CONTAINER_ADD_CLASS_DEVICE_ADAPTER
#define ATTRIBUTE_CONTAINER_ADD_CLASS_DEVICE_ADAPTER 0xffffffff813fbda0
#endif

#ifndef ATTRIBUTE_CONTAINER_REMOVE_ATTRS
#define ATTRIBUTE_CONTAINER_REMOVE_ATTRS 0xffffffff813fbdc0
#endif

#ifndef ATTRIBUTE_CONTAINER_REMOVE_DEVICE
#define ATTRIBUTE_CONTAINER_REMOVE_DEVICE 0xffffffff813fbe40
#endif

#ifndef ATTRIBUTE_CONTAINER_CLASS_DEVICE_DEL
#define ATTRIBUTE_CONTAINER_CLASS_DEVICE_DEL 0xffffffff813fbf30
#endif

#ifndef TRANSPORT_CLASS_REGISTER
#define TRANSPORT_CLASS_REGISTER 0xffffffff813fbfc0
#endif

#ifndef TRANSPORT_CLASS_UNREGISTER
#define TRANSPORT_CLASS_UNREGISTER 0xffffffff813fbfe0
#endif

#ifndef ANON_TRANSPORT_CLASS_REGISTER
#define ANON_TRANSPORT_CLASS_REGISTER 0xffffffff813fc000
#endif

#ifndef TRANSPORT_SETUP_DEVICE
#define TRANSPORT_SETUP_DEVICE 0xffffffff813fc040
#endif

#ifndef TRANSPORT_ADD_DEVICE
#define TRANSPORT_ADD_DEVICE 0xffffffff813fc060
#endif

#ifndef TRANSPORT_CONFIGURE_DEVICE
#define TRANSPORT_CONFIGURE_DEVICE 0xffffffff813fc080
#endif

#ifndef TRANSPORT_REMOVE_DEVICE
#define TRANSPORT_REMOVE_DEVICE 0xffffffff813fc0a0
#endif

#ifndef TRANSPORT_DESTROY_DEVICE
#define TRANSPORT_DESTROY_DEVICE 0xffffffff813fc160
#endif

#ifndef ANON_TRANSPORT_CLASS_UNREGISTER
#define ANON_TRANSPORT_CLASS_UNREGISTER 0xffffffff813fc1c0
#endif

#ifndef FWNODE_HANDLE_PUT
#define FWNODE_HANDLE_PUT 0xffffffff813fc4e0
#endif

#ifndef DEVICE_ADD_PROPERTY_SET
#define DEVICE_ADD_PROPERTY_SET 0xffffffff813fc4f0
#endif

#ifndef FWNODE_PROPERTY_READ_STRING
#define FWNODE_PROPERTY_READ_STRING 0xffffffff813fc580
#endif

#ifndef DEVICE_PROPERTY_READ_STRING
#define DEVICE_PROPERTY_READ_STRING 0xffffffff813fc5c0
#endif

#ifndef DEVICE_GET_NEXT_CHILD_NODE
#define DEVICE_GET_NEXT_CHILD_NODE 0xffffffff813fc6a0
#endif

#ifndef DEVICE_GET_CHILD_NODE_COUNT
#define DEVICE_GET_CHILD_NODE_COUNT 0xffffffff813fc6f0
#endif

#ifndef FWNODE_PROPERTY_PRESENT
#define FWNODE_PROPERTY_PRESENT 0xffffffff813fc730
#endif

#ifndef DEVICE_PROPERTY_PRESENT
#define DEVICE_PROPERTY_PRESENT 0xffffffff813fc790
#endif

#ifndef FWNODE_PROPERTY_READ_U8_ARRAY
#define FWNODE_PROPERTY_READ_U8_ARRAY 0xffffffff813fc7b0
#endif

#ifndef DEVICE_PROPERTY_READ_U8_ARRAY
#define DEVICE_PROPERTY_READ_U8_ARRAY 0xffffffff813fc810
#endif

#ifndef FWNODE_PROPERTY_READ_U16_ARRAY
#define FWNODE_PROPERTY_READ_U16_ARRAY 0xffffffff813fc830
#endif

#ifndef DEVICE_PROPERTY_READ_U16_ARRAY
#define DEVICE_PROPERTY_READ_U16_ARRAY 0xffffffff813fc890
#endif

#ifndef FWNODE_PROPERTY_READ_U32_ARRAY
#define FWNODE_PROPERTY_READ_U32_ARRAY 0xffffffff813fc8b0
#endif

#ifndef DEVICE_PROPERTY_READ_U32_ARRAY
#define DEVICE_PROPERTY_READ_U32_ARRAY 0xffffffff813fc910
#endif

#ifndef FWNODE_PROPERTY_READ_U64_ARRAY
#define FWNODE_PROPERTY_READ_U64_ARRAY 0xffffffff813fc930
#endif

#ifndef DEVICE_PROPERTY_READ_U64_ARRAY
#define DEVICE_PROPERTY_READ_U64_ARRAY 0xffffffff813fc990
#endif

#ifndef FWNODE_PROPERTY_READ_STRING_ARRAY
#define FWNODE_PROPERTY_READ_STRING_ARRAY 0xffffffff813fc9b0
#endif

#ifndef DEVICE_PROPERTY_READ_STRING_ARRAY
#define DEVICE_PROPERTY_READ_STRING_ARRAY 0xffffffff813fca10
#endif

#ifndef GET_CPU_CACHEINFO
#define GET_CPU_CACHEINFO 0xffffffff813fd120
#endif

#ifndef DEVTMPFS_CREATE_NODE
#define DEVTMPFS_CREATE_NODE 0xffffffff813fdc00
#endif

#ifndef DEVTMPFS_DELETE_NODE
#define DEVTMPFS_DELETE_NODE 0xffffffff813fdd30
#endif

#ifndef DEVTMPFS_MOUNT
#define DEVTMPFS_MOUNT 0xffffffff813fde00
#endif

#ifndef DPM_SYSFS_ADD
#define DPM_SYSFS_ADD 0xffffffff813fed00
#endif

#ifndef WAKEUP_SYSFS_ADD
#define WAKEUP_SYSFS_ADD 0xffffffff813fede0
#endif

#ifndef WAKEUP_SYSFS_REMOVE
#define WAKEUP_SYSFS_REMOVE 0xffffffff813fee00
#endif

#ifndef PM_QOS_SYSFS_ADD_RESUME_LATENCY
#define PM_QOS_SYSFS_ADD_RESUME_LATENCY 0xffffffff813fee20
#endif

#ifndef PM_QOS_SYSFS_REMOVE_RESUME_LATENCY
#define PM_QOS_SYSFS_REMOVE_RESUME_LATENCY 0xffffffff813fee40
#endif

#ifndef PM_QOS_SYSFS_ADD_FLAGS
#define PM_QOS_SYSFS_ADD_FLAGS 0xffffffff813fee60
#endif

#ifndef PM_QOS_SYSFS_REMOVE_FLAGS
#define PM_QOS_SYSFS_REMOVE_FLAGS 0xffffffff813fee80
#endif

#ifndef RPM_SYSFS_REMOVE
#define RPM_SYSFS_REMOVE 0xffffffff813feea0
#endif

#ifndef DPM_SYSFS_REMOVE
#define DPM_SYSFS_REMOVE 0xffffffff813feec0
#endif

#ifndef PM_GENERIC_RUNTIME_SUSPEND
#define PM_GENERIC_RUNTIME_SUSPEND 0xffffffff813fef20
#endif

#ifndef PM_GENERIC_RUNTIME_RESUME
#define PM_GENERIC_RUNTIME_RESUME 0xffffffff813fef60
#endif

#ifndef PM_GENERIC_SUSPEND_NOIRQ
#define PM_GENERIC_SUSPEND_NOIRQ 0xffffffff813fefa0
#endif

#ifndef PM_GENERIC_SUSPEND_LATE
#define PM_GENERIC_SUSPEND_LATE 0xffffffff813fefe0
#endif

#ifndef PM_GENERIC_SUSPEND
#define PM_GENERIC_SUSPEND 0xffffffff813ff020
#endif

#ifndef PM_GENERIC_FREEZE_NOIRQ
#define PM_GENERIC_FREEZE_NOIRQ 0xffffffff813ff060
#endif

#ifndef PM_GENERIC_FREEZE_LATE
#define PM_GENERIC_FREEZE_LATE 0xffffffff813ff0a0
#endif

#ifndef PM_GENERIC_FREEZE
#define PM_GENERIC_FREEZE 0xffffffff813ff0e0
#endif

#ifndef PM_GENERIC_POWEROFF_NOIRQ
#define PM_GENERIC_POWEROFF_NOIRQ 0xffffffff813ff120
#endif

#ifndef PM_GENERIC_POWEROFF_LATE
#define PM_GENERIC_POWEROFF_LATE 0xffffffff813ff160
#endif

#ifndef PM_GENERIC_POWEROFF
#define PM_GENERIC_POWEROFF 0xffffffff813ff1a0
#endif

#ifndef PM_GENERIC_THAW_NOIRQ
#define PM_GENERIC_THAW_NOIRQ 0xffffffff813ff1e0
#endif

#ifndef PM_GENERIC_THAW_EARLY
#define PM_GENERIC_THAW_EARLY 0xffffffff813ff220
#endif

#ifndef PM_GENERIC_THAW
#define PM_GENERIC_THAW 0xffffffff813ff260
#endif

#ifndef PM_GENERIC_RESUME_NOIRQ
#define PM_GENERIC_RESUME_NOIRQ 0xffffffff813ff2a0
#endif

#ifndef PM_GENERIC_RESUME_EARLY
#define PM_GENERIC_RESUME_EARLY 0xffffffff813ff2e0
#endif

#ifndef PM_GENERIC_RESUME
#define PM_GENERIC_RESUME 0xffffffff813ff320
#endif

#ifndef PM_GENERIC_RESTORE_NOIRQ
#define PM_GENERIC_RESTORE_NOIRQ 0xffffffff813ff360
#endif

#ifndef PM_GENERIC_RESTORE_EARLY
#define PM_GENERIC_RESTORE_EARLY 0xffffffff813ff3a0
#endif

#ifndef PM_GENERIC_RESTORE
#define PM_GENERIC_RESTORE 0xffffffff813ff3e0
#endif

#ifndef PM_GENERIC_PREPARE
#define PM_GENERIC_PREPARE 0xffffffff813ff420
#endif

#ifndef PM_GENERIC_COMPLETE
#define PM_GENERIC_COMPLETE 0xffffffff813ff460
#endif

#ifndef DEV_PM_DOMAIN_DETACH
#define DEV_PM_DOMAIN_DETACH 0xffffffff813ff4a0
#endif

#ifndef DEV_PM_DOMAIN_ATTACH
#define DEV_PM_DOMAIN_ATTACH 0xffffffff813ff4e0
#endif

#ifndef DEV_PM_GET_SUBSYS_DATA
#define DEV_PM_GET_SUBSYS_DATA 0xffffffff813ff510
#endif

#ifndef DEV_PM_PUT_SUBSYS_DATA
#define DEV_PM_PUT_SUBSYS_DATA 0xffffffff813ff5b0
#endif

#ifndef DEV_PM_QOS_UPDATE_REQUEST
#define DEV_PM_QOS_UPDATE_REQUEST 0xffffffff813ff840
#endif

#ifndef DEV_PM_QOS_ADD_GLOBAL_NOTIFIER
#define DEV_PM_QOS_ADD_GLOBAL_NOTIFIER 0xffffffff813ff880
#endif

#ifndef DEV_PM_QOS_REMOVE_NOTIFIER
#define DEV_PM_QOS_REMOVE_NOTIFIER 0xffffffff813ff8a0
#endif

#ifndef DEV_PM_QOS_REMOVE_GLOBAL_NOTIFIER
#define DEV_PM_QOS_REMOVE_GLOBAL_NOTIFIER 0xffffffff813ff900
#endif

#ifndef DEV_PM_QOS_HIDE_LATENCY_LIMIT
#define DEV_PM_QOS_HIDE_LATENCY_LIMIT 0xffffffff813ffa80
#endif

#ifndef DEV_PM_QOS_REMOVE_REQUEST
#define DEV_PM_QOS_REMOVE_REQUEST 0xffffffff813ffad0
#endif

#ifndef DEV_PM_QOS_ADD_REQUEST
#define DEV_PM_QOS_ADD_REQUEST 0xffffffff813ffd90
#endif

#ifndef DEV_PM_QOS_ADD_ANCESTOR_REQUEST
#define DEV_PM_QOS_ADD_ANCESTOR_REQUEST 0xffffffff813ffdf0
#endif

#ifndef DEV_PM_QOS_ADD_NOTIFIER
#define DEV_PM_QOS_ADD_NOTIFIER 0xffffffff813ffe60
#endif

#ifndef DEV_PM_QOS_EXPOSE_LATENCY_LIMIT
#define DEV_PM_QOS_EXPOSE_LATENCY_LIMIT 0xffffffff813ffee0
#endif

#ifndef DEV_PM_QOS_EXPOSE_FLAGS
#define DEV_PM_QOS_EXPOSE_FLAGS 0xffffffff81400070
#endif

#ifndef DEV_PM_QOS_HIDE_FLAGS
#define DEV_PM_QOS_HIDE_FLAGS 0xffffffff81400230
#endif

#ifndef __DEV_PM_QOS_FLAGS
#define __DEV_PM_QOS_FLAGS 0xffffffff814002a0
#endif

#ifndef DEV_PM_QOS_FLAGS
#define DEV_PM_QOS_FLAGS 0xffffffff814002f0
#endif

#ifndef __DEV_PM_QOS_READ_VALUE
#define __DEV_PM_QOS_READ_VALUE 0xffffffff81400340
#endif

#ifndef DEV_PM_QOS_READ_VALUE
#define DEV_PM_QOS_READ_VALUE 0xffffffff81400380
#endif

#ifndef DEV_PM_QOS_CONSTRAINTS_DESTROY
#define DEV_PM_QOS_CONSTRAINTS_DESTROY 0xffffffff814003c0
#endif

#ifndef DEV_PM_QOS_UPDATE_FLAGS
#define DEV_PM_QOS_UPDATE_FLAGS 0xffffffff814005c0
#endif

#ifndef DEV_PM_QOS_GET_USER_LATENCY_TOLERANCE
#define DEV_PM_QOS_GET_USER_LATENCY_TOLERANCE 0xffffffff81400660
#endif

#ifndef DEV_PM_QOS_UPDATE_USER_LATENCY_TOLERANCE
#define DEV_PM_QOS_UPDATE_USER_LATENCY_TOLERANCE 0xffffffff814006b0
#endif

#ifndef PM_RUNTIME_ENABLE
#define PM_RUNTIME_ENABLE 0xffffffff81400920
#endif

#ifndef PM_RUNTIME_AUTOSUSPEND_EXPIRATION
#define PM_RUNTIME_AUTOSUSPEND_EXPIRATION 0xffffffff81400a20
#endif

#ifndef PM_RUNTIME_NO_CALLBACKS
#define PM_RUNTIME_NO_CALLBACKS 0xffffffff81400a50
#endif

#ifndef PM_RUNTIME_SET_MEMALLOC_NOIO
#define PM_RUNTIME_SET_MEMALLOC_NOIO 0xffffffff81400aa0
#endif

#ifndef PM_SCHEDULE_SUSPEND
#define PM_SCHEDULE_SUSPEND 0xffffffff81401850
#endif

#ifndef __PM_RUNTIME_IDLE
#define __PM_RUNTIME_IDLE 0xffffffff81401b50
#endif

#ifndef __PM_RUNTIME_SET_STATUS
#define __PM_RUNTIME_SET_STATUS 0xffffffff81401be0
#endif

#ifndef PM_RUNTIME_FORCE_RESUME
#define PM_RUNTIME_FORCE_RESUME 0xffffffff81401e10
#endif

#ifndef PM_RUNTIME_ALLOW
#define PM_RUNTIME_ALLOW 0xffffffff81401e70
#endif

#ifndef __PM_RUNTIME_SUSPEND
#define __PM_RUNTIME_SUSPEND 0xffffffff81401ed0
#endif

#ifndef __PM_RUNTIME_RESUME
#define __PM_RUNTIME_RESUME 0xffffffff81401fd0
#endif

#ifndef PM_RUNTIME_IRQ_SAFE
#define PM_RUNTIME_IRQ_SAFE 0xffffffff81402050
#endif

#ifndef PM_RUNTIME_FORBID
#define PM_RUNTIME_FORBID 0xffffffff81402090
#endif

#ifndef PM_RUNTIME_SET_AUTOSUSPEND_DELAY
#define PM_RUNTIME_SET_AUTOSUSPEND_DELAY 0xffffffff81402150
#endif

#ifndef __PM_RUNTIME_USE_AUTOSUSPEND
#define __PM_RUNTIME_USE_AUTOSUSPEND 0xffffffff814021b0
#endif

#ifndef PM_RUNTIME_BARRIER
#define PM_RUNTIME_BARRIER 0xffffffff81402410
#endif

#ifndef __PM_RUNTIME_DISABLE
#define __PM_RUNTIME_DISABLE 0xffffffff814024c0
#endif

#ifndef PM_RUNTIME_FORCE_SUSPEND
#define PM_RUNTIME_FORCE_SUSPEND 0xffffffff814025e0
#endif

#ifndef UPDATE_PM_RUNTIME_ACCOUNTING
#define UPDATE_PM_RUNTIME_ACCOUNTING 0xffffffff81402670
#endif

#ifndef PM_RUNTIME_INIT
#define PM_RUNTIME_INIT 0xffffffff814026c0
#endif

#ifndef PM_RUNTIME_REMOVE
#define PM_RUNTIME_REMOVE 0xffffffff814027a0
#endif

#ifndef DPM_FOR_EACH_DEV
#define DPM_FOR_EACH_DEV 0xffffffff81402a00
#endif

#ifndef DEVICE_PM_WAIT_FOR_DEV
#define DEVICE_PM_WAIT_FOR_DEV 0xffffffff81402af0
#endif

#ifndef __SUSPEND_REPORT_RESULT
#define __SUSPEND_REPORT_RESULT 0xffffffff81402cb0
#endif

#ifndef DEVICE_PM_SLEEP_INIT
#define DEVICE_PM_SLEEP_INIT 0xffffffff81403ba0
#endif

#ifndef DEVICE_PM_LOCK
#define DEVICE_PM_LOCK 0xffffffff81403c10
#endif

#ifndef DEVICE_PM_UNLOCK
#define DEVICE_PM_UNLOCK 0xffffffff81403c30
#endif

#ifndef DEVICE_PM_ADD
#define DEVICE_PM_ADD 0xffffffff81403c50
#endif

#ifndef DEVICE_PM_REMOVE
#define DEVICE_PM_REMOVE 0xffffffff81403d30
#endif

#ifndef DEVICE_PM_MOVE_BEFORE
#define DEVICE_PM_MOVE_BEFORE 0xffffffff81403df0
#endif

#ifndef DEVICE_PM_MOVE_AFTER
#define DEVICE_PM_MOVE_AFTER 0xffffffff81403ed0
#endif

#ifndef DEVICE_PM_MOVE_LAST
#define DEVICE_PM_MOVE_LAST 0xffffffff81403fb0
#endif

#ifndef DPM_RESUME_NOIRQ
#define DPM_RESUME_NOIRQ 0xffffffff81404050
#endif

#ifndef DPM_RESUME_EARLY
#define DPM_RESUME_EARLY 0xffffffff81404300
#endif

#ifndef DPM_RESUME_START
#define DPM_RESUME_START 0xffffffff814045a0
#endif

#ifndef DPM_RESUME
#define DPM_RESUME 0xffffffff814045c0
#endif

#ifndef DPM_COMPLETE
#define DPM_COMPLETE 0xffffffff81404870
#endif

#ifndef DPM_RESUME_END
#define DPM_RESUME_END 0xffffffff81404bb0
#endif

#ifndef DPM_SUSPEND_NOIRQ
#define DPM_SUSPEND_NOIRQ 0xffffffff81404bd0
#endif

#ifndef DPM_SUSPEND_LATE
#define DPM_SUSPEND_LATE 0xffffffff81404eb0
#endif

#ifndef DPM_SUSPEND_END
#define DPM_SUSPEND_END 0xffffffff81405190
#endif

#ifndef DPM_SUSPEND
#define DPM_SUSPEND 0xffffffff81405200
#endif

#ifndef DPM_PREPARE
#define DPM_PREPARE 0xffffffff814054c0
#endif

#ifndef DPM_SUSPEND_START
#define DPM_SUSPEND_START 0xffffffff81405890
#endif

#ifndef WAKEUP_SOURCE_PREPARE
#define WAKEUP_SOURCE_PREPARE 0xffffffff814058e0
#endif

#ifndef WAKEUP_SOURCE_CREATE
#define WAKEUP_SOURCE_CREATE 0xffffffff81405920
#endif

#ifndef WAKEUP_SOURCE_ADD
#define WAKEUP_SOURCE_ADD 0xffffffff814059b0
#endif

#ifndef WAKEUP_SOURCE_REGISTER
#define WAKEUP_SOURCE_REGISTER 0xffffffff81405a50
#endif

#ifndef WAKEUP_SOURCE_REMOVE
#define WAKEUP_SOURCE_REMOVE 0xffffffff81405a70
#endif

#ifndef DEVICE_SET_WAKEUP_CAPABLE
#define DEVICE_SET_WAKEUP_CAPABLE 0xffffffff81405ae0
#endif

#ifndef __PM_STAY_AWAKE
#define __PM_STAY_AWAKE 0xffffffff81405c20
#endif

#ifndef PM_STAY_AWAKE
#define PM_STAY_AWAKE 0xffffffff81405c80
#endif

#ifndef PM_SYSTEM_WAKEUP
#define PM_SYSTEM_WAKEUP 0xffffffff81405cd0
#endif

#ifndef PM_PRINT_ACTIVE_WAKEUP_SOURCES
#define PM_PRINT_ACTIVE_WAKEUP_SOURCES 0xffffffff81405cf0
#endif

#ifndef __PM_RELAX
#define __PM_RELAX 0xffffffff81406110
#endif

#ifndef WAKEUP_SOURCE_DROP
#define WAKEUP_SOURCE_DROP 0xffffffff81406190
#endif

#ifndef WAKEUP_SOURCE_DESTROY
#define WAKEUP_SOURCE_DESTROY 0xffffffff814061c0
#endif

#ifndef WAKEUP_SOURCE_UNREGISTER
#define WAKEUP_SOURCE_UNREGISTER 0xffffffff814061f0
#endif

#ifndef PM_RELAX
#define PM_RELAX 0xffffffff81406220
#endif

#ifndef __PM_WAKEUP_EVENT
#define __PM_WAKEUP_EVENT 0xffffffff81406270
#endif

#ifndef PM_WAKEUP_EVENT
#define PM_WAKEUP_EVENT 0xffffffff81406340
#endif

#ifndef DEVICE_WAKEUP_DISABLE
#define DEVICE_WAKEUP_DISABLE 0xffffffff814063a0
#endif

#ifndef DEVICE_WAKEUP_ENABLE
#define DEVICE_WAKEUP_ENABLE 0xffffffff81406400
#endif

#ifndef DEVICE_SET_WAKEUP_ENABLE
#define DEVICE_SET_WAKEUP_ENABLE 0xffffffff814064c0
#endif

#ifndef DEVICE_INIT_WAKEUP
#define DEVICE_INIT_WAKEUP 0xffffffff81406510
#endif

#ifndef PM_WAKEUP_PENDING
#define PM_WAKEUP_PENDING 0xffffffff81406570
#endif

#ifndef PM_WAKEUP_CLEAR
#define PM_WAKEUP_CLEAR 0xffffffff81406610
#endif

#ifndef PM_GET_WAKEUP_COUNT
#define PM_GET_WAKEUP_COUNT 0xffffffff81406620
#endif

#ifndef PM_SAVE_WAKEUP_COUNT
#define PM_SAVE_WAKEUP_COUNT 0xffffffff814066e0
#endif

#ifndef PM_CLK_ADD
#define PM_CLK_ADD 0xffffffff81406950
#endif

#ifndef PM_CLK_ADD_CLK
#define PM_CLK_ADD_CLK 0xffffffff81406970
#endif

#ifndef PM_CLK_REMOVE
#define PM_CLK_REMOVE 0xffffffff81406990
#endif

#ifndef PM_CLK_INIT
#define PM_CLK_INIT 0xffffffff81406a70
#endif

#ifndef PM_CLK_CREATE
#define PM_CLK_CREATE 0xffffffff81406aa0
#endif

#ifndef PM_CLK_DESTROY
#define PM_CLK_DESTROY 0xffffffff81406ac0
#endif

#ifndef PM_CLK_SUSPEND
#define PM_CLK_SUSPEND 0xffffffff81406cb0
#endif

#ifndef PM_CLK_RESUME
#define PM_CLK_RESUME 0xffffffff81406d80
#endif

#ifndef PM_CLK_ADD_NOTIFIER
#define PM_CLK_ADD_NOTIFIER 0xffffffff81406e70
#endif

#ifndef DMA_COMMON_GET_SGTABLE
#define DMA_COMMON_GET_SGTABLE 0xffffffff81406ea0
#endif

#ifndef DMA_COMMON_MMAP
#define DMA_COMMON_MMAP 0xffffffff81406f30
#endif

#ifndef DMAM_FREE_NONCOHERENT
#define DMAM_FREE_NONCOHERENT 0xffffffff81407030
#endif

#ifndef DMAM_ALLOC_COHERENT
#define DMAM_ALLOC_COHERENT 0xffffffff81407110
#endif

#ifndef DMAM_ALLOC_NONCOHERENT
#define DMAM_ALLOC_NONCOHERENT 0xffffffff81407250
#endif

#ifndef DMAM_FREE_COHERENT
#define DMAM_FREE_COHERENT 0xffffffff814074d0
#endif

#ifndef DMA_COMMON_PAGES_REMAP
#define DMA_COMMON_PAGES_REMAP 0xffffffff814075b0
#endif

#ifndef DMA_COMMON_CONTIGUOUS_REMAP
#define DMA_COMMON_CONTIGUOUS_REMAP 0xffffffff81407610
#endif

#ifndef DMA_COMMON_FREE_REMAP
#define DMA_COMMON_FREE_REMAP 0xffffffff814076e0
#endif

#ifndef RELEASE_FIRMWARE
#define RELEASE_FIRMWARE 0xffffffff81408300
#endif

#ifndef REQUEST_FIRMWARE_NOWAIT
#define REQUEST_FIRMWARE_NOWAIT 0xffffffff814087a0
#endif

#ifndef REQUEST_FIRMWARE
#define REQUEST_FIRMWARE 0xffffffff814093d0
#endif

#ifndef REQUEST_FIRMWARE_DIRECT
#define REQUEST_FIRMWARE_DIRECT 0xffffffff81409530
#endif

#ifndef REGISTER_HUGETLBFS_WITH_NODE
#define REGISTER_HUGETLBFS_WITH_NODE 0xffffffff8140a960
#endif

#ifndef UNREGISTER_NODE
#define UNREGISTER_NODE 0xffffffff8140a980
#endif

#ifndef REGISTER_CPU_UNDER_NODE
#define REGISTER_CPU_UNDER_NODE 0xffffffff8140a9a0
#endif

#ifndef UNREGISTER_CPU_UNDER_NODE
#define UNREGISTER_CPU_UNDER_NODE 0xffffffff8140aa30
#endif

#ifndef REGISTER_MEM_SECT_UNDER_NODE
#define REGISTER_MEM_SECT_UNDER_NODE 0xffffffff8140aaa0
#endif

#ifndef UNREGISTER_MEM_SECT_UNDER_NODES
#define UNREGISTER_MEM_SECT_UNDER_NODES 0xffffffff8140abc0
#endif

#ifndef REGISTER_ONE_NODE
#define REGISTER_ONE_NODE 0xffffffff8140aca0
#endif

#ifndef UNREGISTER_ONE_NODE
#define UNREGISTER_ONE_NODE 0xffffffff8140aed0
#endif

#ifndef REGISTER_MEMORY_NOTIFIER
#define REGISTER_MEMORY_NOTIFIER 0xffffffff8140af00
#endif

#ifndef UNREGISTER_MEMORY_NOTIFIER
#define UNREGISTER_MEMORY_NOTIFIER 0xffffffff8140af20
#endif

#ifndef REGISTER_MEMORY_ISOLATE_NOTIFIER
#define REGISTER_MEMORY_ISOLATE_NOTIFIER 0xffffffff8140af40
#endif

#ifndef UNREGISTER_MEMORY_ISOLATE_NOTIFIER
#define UNREGISTER_MEMORY_ISOLATE_NOTIFIER 0xffffffff8140af60
#endif

#ifndef MEMORY_NOTIFY
#define MEMORY_NOTIFY 0xffffffff8140b790
#endif

#ifndef MEMORY_ISOLATE_NOTIFY
#define MEMORY_ISOLATE_NOTIFY 0xffffffff8140b7b0
#endif

#ifndef FIND_MEMORY_BLOCK_HINTED
#define FIND_MEMORY_BLOCK_HINTED 0xffffffff8140b8d0
#endif

#ifndef FIND_MEMORY_BLOCK
#define FIND_MEMORY_BLOCK 0xffffffff8140b940
#endif

#ifndef REGISTER_NEW_MEMORY
#define REGISTER_NEW_MEMORY 0xffffffff8140b960
#endif

#ifndef UNREGISTER_MEMORY_SECTION
#define UNREGISTER_MEMORY_SECTION 0xffffffff8140ba00
#endif

#ifndef IS_MEMBLOCK_OFFLINED
#define IS_MEMBLOCK_OFFLINED 0xffffffff8140bab0
#endif

#ifndef MODULE_ADD_DRIVER
#define MODULE_ADD_DRIVER 0xffffffff8140bac0
#endif

#ifndef MODULE_REMOVE_DRIVER
#define MODULE_REMOVE_DRIVER 0xffffffff8140bb90
#endif

#ifndef REGMAP_REG_IN_RANGES
#define REGMAP_REG_IN_RANGES 0xffffffff8140bc30
#endif

#ifndef REGMAP_GET_VAL_ENDIAN
#define REGMAP_GET_VAL_ENDIAN 0xffffffff8140bdd0
#endif

#ifndef REGMAP_GET_DEVICE
#define REGMAP_GET_DEVICE 0xffffffff8140be10
#endif

#ifndef REGMAP_CAN_RAW_WRITE
#define REGMAP_CAN_RAW_WRITE 0xffffffff8140be20
#endif

#ifndef REGMAP_GET_VAL_BYTES
#define REGMAP_GET_VAL_BYTES 0xffffffff8140beb0
#endif

#ifndef REGMAP_PARSE_VAL
#define REGMAP_PARSE_VAL 0xffffffff8140bed0
#endif

#ifndef REGMAP_ATTACH_DEV
#define REGMAP_ATTACH_DEV 0xffffffff8140c3d0
#endif

#ifndef REGMAP_FIELD_FREE
#define REGMAP_FIELD_FREE 0xffffffff8140c440
#endif

#ifndef REGMAP_REINIT_CACHE
#define REGMAP_REINIT_CACHE 0xffffffff8140c460
#endif

#ifndef REGMAP_EXIT
#define REGMAP_EXIT 0xffffffff8140c690
#endif

#ifndef DEVM_REGMAP_FIELD_ALLOC
#define DEVM_REGMAP_FIELD_ALLOC 0xffffffff8140c770
#endif

#ifndef DEVM_REGMAP_FIELD_FREE
#define DEVM_REGMAP_FIELD_FREE 0xffffffff8140c7e0
#endif

#ifndef DEV_GET_REGMAP
#define DEV_GET_REGMAP 0xffffffff8140c800
#endif

#ifndef REGMAP_ASYNC_COMPLETE_CB
#define REGMAP_ASYNC_COMPLETE_CB 0xffffffff8140c840
#endif

#ifndef REGMAP_CHECK_RANGE_TABLE
#define REGMAP_CHECK_RANGE_TABLE 0xffffffff8140c930
#endif

#ifndef REGMAP_ASYNC_COMPLETE
#define REGMAP_ASYNC_COMPLETE 0xffffffff8140ca10
#endif

#ifndef REGMAP_FIELD_ALLOC
#define REGMAP_FIELD_ALLOC 0xffffffff8140dd70
#endif

#ifndef REGMAP_INIT
#define REGMAP_INIT 0xffffffff8140e000
#endif

#ifndef DEVM_REGMAP_INIT
#define DEVM_REGMAP_INIT 0xffffffff8140ea60
#endif

#ifndef REGMAP_WRITEABLE
#define REGMAP_WRITEABLE 0xffffffff8140eb00
#endif

#ifndef REGMAP_READABLE
#define REGMAP_READABLE 0xffffffff8140eb60
#endif

#ifndef REGMAP_READ
#define REGMAP_READ 0xffffffff8140ed20
#endif

#ifndef REGMAP_FIELD_READ
#define REGMAP_FIELD_READ 0xffffffff8140ed70
#endif

#ifndef REGMAP_FIELDS_READ
#define REGMAP_FIELDS_READ 0xffffffff8140edb0
#endif

#ifndef REGMAP_VOLATILE
#define REGMAP_VOLATILE 0xffffffff8140ee00
#endif

#ifndef REGMAP_PRECIOUS
#define REGMAP_PRECIOUS 0xffffffff8140ee80
#endif

#ifndef _REGMAP_WRITE
#define _REGMAP_WRITE 0xffffffff8140eef0
#endif

#ifndef REGMAP_RAW_READ
#define REGMAP_RAW_READ 0xffffffff8140f4a0
#endif

#ifndef REGMAP_BULK_READ
#define REGMAP_BULK_READ 0xffffffff8140f5e0
#endif

#ifndef _REGMAP_RAW_WRITE
#define _REGMAP_RAW_WRITE 0xffffffff8140f7c0
#endif

#ifndef REGMAP_RAW_WRITE
#define REGMAP_RAW_WRITE 0xffffffff8140ff90
#endif

#ifndef REGMAP_RAW_WRITE_ASYNC
#define REGMAP_RAW_WRITE_ASYNC 0xffffffff81410020
#endif

#ifndef REGMAP_UPDATE_BITS
#define REGMAP_UPDATE_BITS 0xffffffff814100b0
#endif

#ifndef REGMAP_FIELD_WRITE
#define REGMAP_FIELD_WRITE 0xffffffff81410100
#endif

#ifndef REGMAP_FIELD_UPDATE_BITS
#define REGMAP_FIELD_UPDATE_BITS 0xffffffff81410130
#endif

#ifndef REGMAP_FIELDS_WRITE
#define REGMAP_FIELDS_WRITE 0xffffffff81410160
#endif

#ifndef REGMAP_FIELDS_UPDATE_BITS
#define REGMAP_FIELDS_UPDATE_BITS 0xffffffff814101a0
#endif

#ifndef REGMAP_UPDATE_BITS_ASYNC
#define REGMAP_UPDATE_BITS_ASYNC 0xffffffff814101e0
#endif

#ifndef REGMAP_UPDATE_BITS_CHECK
#define REGMAP_UPDATE_BITS_CHECK 0xffffffff81410240
#endif

#ifndef REGMAP_UPDATE_BITS_CHECK_ASYNC
#define REGMAP_UPDATE_BITS_CHECK_ASYNC 0xffffffff814102a0
#endif

#ifndef REGMAP_WRITE
#define REGMAP_WRITE 0xffffffff81410300
#endif

#ifndef REGMAP_WRITE_ASYNC
#define REGMAP_WRITE_ASYNC 0xffffffff81410350
#endif

#ifndef REGMAP_BULK_WRITE
#define REGMAP_BULK_WRITE 0xffffffff814103b0
#endif

#ifndef REGMAP_MULTI_REG_WRITE
#define REGMAP_MULTI_REG_WRITE 0xffffffff81410920
#endif

#ifndef REGMAP_MULTI_REG_WRITE_BYPASSED
#define REGMAP_MULTI_REG_WRITE_BYPASSED 0xffffffff81410960
#endif

#ifndef REGMAP_REGISTER_PATCH
#define REGMAP_REGISTER_PATCH 0xffffffff814109d0
#endif

#ifndef REGCACHE_DROP_REGION
#define REGCACHE_DROP_REGION 0xffffffff81410af0
#endif

#ifndef REGCACHE_MARK_DIRTY
#define REGCACHE_MARK_DIRTY 0xffffffff81410b90
#endif

#ifndef REGCACHE_CACHE_ONLY
#define REGCACHE_CACHE_ONLY 0xffffffff81410bd0
#endif

#ifndef REGCACHE_CACHE_BYPASS
#define REGCACHE_CACHE_BYPASS 0xffffffff81410c70
#endif

#ifndef REGCACHE_EXIT
#define REGCACHE_EXIT 0xffffffff81410e10
#endif

#ifndef REGCACHE_READ
#define REGCACHE_READ 0xffffffff81410ed0
#endif

#ifndef REGCACHE_WRITE
#define REGCACHE_WRITE 0xffffffff81410fb0
#endif

#ifndef REGCACHE_GET_VAL
#define REGCACHE_GET_VAL 0xffffffff81411020
#endif

#ifndef REGCACHE_INIT
#define REGCACHE_INIT 0xffffffff814110b0
#endif

#ifndef REGCACHE_SET_VAL
#define REGCACHE_SET_VAL 0xffffffff81411490
#endif

#ifndef REGCACHE_LOOKUP_REG
#define REGCACHE_LOOKUP_REG 0xffffffff81411540
#endif

#ifndef REGCACHE_SYNC
#define REGCACHE_SYNC 0xffffffff814116b0
#endif

#ifndef REGCACHE_SYNC_REGION
#define REGCACHE_SYNC_REGION 0xffffffff814118c0
#endif

#ifndef REGCACHE_SYNC_BLOCK
#define REGCACHE_SYNC_BLOCK 0xffffffff81411a40
#endif

#ifndef REGMAP_DEBUGFS_INIT
#define REGMAP_DEBUGFS_INIT 0xffffffff81413910
#endif

#ifndef REGMAP_DEBUGFS_EXIT
#define REGMAP_DEBUGFS_EXIT 0xffffffff81413c00
#endif

#ifndef REGMAP_DEBUGFS_INITCALL
#define REGMAP_DEBUGFS_INITCALL 0xffffffff81413d00
#endif

#ifndef PINCTRL_BIND_PINS
#define PINCTRL_BIND_PINS 0xffffffff81413dd0
#endif

#ifndef DEV_COREDUMPM
#define DEV_COREDUMPM 0xffffffff81414210
#endif

#ifndef DEV_COREDUMPV
#define DEV_COREDUMPV 0xffffffff81414430
#endif

#ifndef DMA_BUF_BEGIN_CPU_ACCESS
#define DMA_BUF_BEGIN_CPU_ACCESS 0xffffffff81414550
#endif

#ifndef DMA_BUF_END_CPU_ACCESS
#define DMA_BUF_END_CPU_ACCESS 0xffffffff814145a0
#endif

#ifndef DMA_BUF_KMAP_ATOMIC
#define DMA_BUF_KMAP_ATOMIC 0xffffffff81414610
#endif

#ifndef DMA_BUF_KUNMAP_ATOMIC
#define DMA_BUF_KUNMAP_ATOMIC 0xffffffff81414660
#endif

#ifndef DMA_BUF_KMAP
#define DMA_BUF_KMAP 0xffffffff814146c0
#endif

#ifndef DMA_BUF_KUNMAP
#define DMA_BUF_KUNMAP 0xffffffff81414710
#endif

#ifndef DMA_BUF_DETACH
#define DMA_BUF_DETACH 0xffffffff81414770
#endif

#ifndef DMA_BUF_VMAP
#define DMA_BUF_VMAP 0xffffffff81414810
#endif

#ifndef DMA_BUF_VUNMAP
#define DMA_BUF_VUNMAP 0xffffffff814148f0
#endif

#ifndef DMA_BUF_FD
#define DMA_BUF_FD 0xffffffff814149e0
#endif

#ifndef DMA_BUF_GET
#define DMA_BUF_GET 0xffffffff81414a30
#endif

#ifndef DMA_BUF_PUT
#define DMA_BUF_PUT 0xffffffff81414a80
#endif

#ifndef DMA_BUF_MMAP
#define DMA_BUF_MMAP 0xffffffff81414ac0
#endif

#ifndef DMA_BUF_MAP_ATTACHMENT
#define DMA_BUF_MAP_ATTACHMENT 0xffffffff81414bd0
#endif

#ifndef DMA_BUF_UNMAP_ATTACHMENT
#define DMA_BUF_UNMAP_ATTACHMENT 0xffffffff81414c40
#endif

#ifndef DMA_BUF_EXPORT
#define DMA_BUF_EXPORT 0xffffffff81414e90
#endif

#ifndef DMA_BUF_ATTACH
#define DMA_BUF_ATTACH 0xffffffff814150e0
#endif

#ifndef DMA_BUF_DEBUGFS_CREATE_FILE
#define DMA_BUF_DEBUGFS_CREATE_FILE 0xffffffff814156f0
#endif

#ifndef FENCE_INIT
#define FENCE_INIT 0xffffffff81415b10
#endif

#ifndef FENCE_REMOVE_CALLBACK
#define FENCE_REMOVE_CALLBACK 0xffffffff81415bc0
#endif

#ifndef FENCE_FREE
#define FENCE_FREE 0xffffffff81415c10
#endif

#ifndef FENCE_CONTEXT_ALLOC
#define FENCE_CONTEXT_ALLOC 0xffffffff81415c50
#endif

#ifndef FENCE_RELEASE
#define FENCE_RELEASE 0xffffffff81415c70
#endif

#ifndef FENCE_SIGNAL
#define FENCE_SIGNAL 0xffffffff81415ea0
#endif

#ifndef FENCE_WAIT_TIMEOUT
#define FENCE_WAIT_TIMEOUT 0xffffffff81415fb0
#endif

#ifndef FENCE_SIGNAL_LOCKED
#define FENCE_SIGNAL_LOCKED 0xffffffff81416100
#endif

#ifndef FENCE_ENABLE_SW_SIGNALING
#define FENCE_ENABLE_SW_SIGNALING 0xffffffff81416200
#endif

#ifndef FENCE_ADD_CALLBACK
#define FENCE_ADD_CALLBACK 0xffffffff814162a0
#endif

#ifndef FENCE_DEFAULT_WAIT
#define FENCE_DEFAULT_WAIT 0xffffffff814165f0
#endif

#ifndef RESERVATION_OBJECT_RESERVE_SHARED
#define RESERVATION_OBJECT_RESERVE_SHARED 0xffffffff81416b90
#endif

#ifndef RESERVATION_OBJECT_ADD_EXCL_FENCE
#define RESERVATION_OBJECT_ADD_EXCL_FENCE 0xffffffff81416c10
#endif

#ifndef RESERVATION_OBJECT_GET_FENCES_RCU
#define RESERVATION_OBJECT_GET_FENCES_RCU 0xffffffff81416d00
#endif

#ifndef RESERVATION_OBJECT_ADD_SHARED_FENCE
#define RESERVATION_OBJECT_ADD_SHARED_FENCE 0xffffffff81416f80
#endif

#ifndef RESERVATION_OBJECT_TEST_SIGNALED_RCU
#define RESERVATION_OBJECT_TEST_SIGNALED_RCU 0xffffffff814171c0
#endif

#ifndef RESERVATION_OBJECT_WAIT_TIMEOUT_RCU
#define RESERVATION_OBJECT_WAIT_TIMEOUT_RCU 0xffffffff814173f0
#endif

#ifndef SPI_REGISTER_DRIVER
#define SPI_REGISTER_DRIVER 0xffffffff814182c0
#endif

#ifndef SPI_BUS_UNLOCK
#define SPI_BUS_UNLOCK 0xffffffff81418420
#endif

#ifndef SPI_FINALIZE_CURRENT_TRANSFER
#define SPI_FINALIZE_CURRENT_TRANSFER 0xffffffff81418440
#endif

#ifndef SPI_GET_NEXT_QUEUED_MESSAGE
#define SPI_GET_NEXT_QUEUED_MESSAGE 0xffffffff81418480
#endif

#ifndef SPI_BUS_LOCK
#define SPI_BUS_LOCK 0xffffffff814184d0
#endif

#ifndef SPI_SETUP
#define SPI_SETUP 0xffffffff814187d0
#endif

#ifndef SPI_ADD_DEVICE
#define SPI_ADD_DEVICE 0xffffffff814189d0
#endif

#ifndef SPI_BUSNUM_TO_MASTER
#define SPI_BUSNUM_TO_MASTER 0xffffffff81418c10
#endif

#ifndef SPI_MASTER_RESUME
#define SPI_MASTER_RESUME 0xffffffff81418c40
#endif

#ifndef SPI_UNREGISTER_MASTER
#define SPI_UNREGISTER_MASTER 0xffffffff81418cf0
#endif

#ifndef SPI_MASTER_SUSPEND
#define SPI_MASTER_SUSPEND 0xffffffff81418db0
#endif

#ifndef SPI_FINALIZE_CURRENT_MESSAGE
#define SPI_FINALIZE_CURRENT_MESSAGE 0xffffffff81418f40
#endif

#ifndef SPI_GET_DEVICE_ID
#define SPI_GET_DEVICE_ID 0xffffffff81419c50
#endif

#ifndef SPI_ASYNC_LOCKED
#define SPI_ASYNC_LOCKED 0xffffffff8141a130
#endif

#ifndef SPI_ASYNC
#define SPI_ASYNC 0xffffffff8141a200
#endif

#ifndef SPI_SYNC
#define SPI_SYNC 0xffffffff8141a460
#endif

#ifndef SPI_SYNC_LOCKED
#define SPI_SYNC_LOCKED 0xffffffff8141a480
#endif

#ifndef SPI_WRITE_THEN_READ
#define SPI_WRITE_THEN_READ 0xffffffff8141a4a0
#endif

#ifndef SPI_ALLOC_DEVICE
#define SPI_ALLOC_DEVICE 0xffffffff8141a660
#endif

#ifndef SPI_NEW_DEVICE
#define SPI_NEW_DEVICE 0xffffffff8141a710
#endif

#ifndef SPI_REGISTER_MASTER
#define SPI_REGISTER_MASTER 0xffffffff8141a850
#endif

#ifndef DEVM_SPI_REGISTER_MASTER
#define DEVM_SPI_REGISTER_MASTER 0xffffffff8141aca0
#endif

#ifndef SPI_ALLOC_MASTER
#define SPI_ALLOC_MASTER 0xffffffff8141aeb0
#endif

#ifndef SPI_REGISTER_BOARD_INFO
#define SPI_REGISTER_BOARD_INFO 0xffffffff8141af40
#endif

#ifndef SB800_PREFETCH
#define SB800_PREFETCH 0xffffffff8141b3e0
#endif

#ifndef USB_AMD_FIND_CHIPSET_INFO
#define USB_AMD_FIND_CHIPSET_INFO 0xffffffff8141b460
#endif

#ifndef USB_AMD_HANG_SYMPTOM_QUIRK
#define USB_AMD_HANG_SYMPTOM_QUIRK 0xffffffff8141b780
#endif

#ifndef USB_AMD_PREFETCH_QUIRK
#define USB_AMD_PREFETCH_QUIRK 0xffffffff8141b7d0
#endif

#ifndef USB_AMD_DEV_PUT
#define USB_AMD_DEV_PUT 0xffffffff8141b7f0
#endif

#ifndef USB_AMD_QUIRK_PLL_DISABLE
#define USB_AMD_QUIRK_PLL_DISABLE 0xffffffff8141bcc0
#endif

#ifndef USB_AMD_QUIRK_PLL_ENABLE
#define USB_AMD_QUIRK_PLL_ENABLE 0xffffffff8141bce0
#endif

#ifndef USB_DISABLE_XHCI_PORTS
#define USB_DISABLE_XHCI_PORTS 0xffffffff8141bd00
#endif

#ifndef UHCI_RESET_HC
#define UHCI_RESET_HC 0xffffffff8141bd30
#endif

#ifndef UHCI_CHECK_AND_RESET_HC
#define UHCI_CHECK_AND_RESET_HC 0xffffffff8141bda0
#endif

#ifndef USB_HCD_AMD_REMOTE_WAKEUP_QUIRK
#define USB_HCD_AMD_REMOTE_WAKEUP_QUIRK 0xffffffff8141bf00
#endif

#ifndef USB_ENABLE_INTEL_XHCI_PORTS
#define USB_ENABLE_INTEL_XHCI_PORTS 0xffffffff8141bf60
#endif

#ifndef SERIO_RESCAN
#define SERIO_RESCAN 0xffffffff8141cb90
#endif

#ifndef SERIO_RECONNECT
#define SERIO_RECONNECT 0xffffffff8141cbb0
#endif

#ifndef __SERIO_REGISTER_PORT
#define __SERIO_REGISTER_PORT 0xffffffff8141cd60
#endif

#ifndef __SERIO_REGISTER_DRIVER
#define __SERIO_REGISTER_DRIVER 0xffffffff8141d1a0
#endif

#ifndef SERIO_INTERRUPT
#define SERIO_INTERRUPT 0xffffffff8141d240
#endif

#ifndef SERIO_CLOSE
#define SERIO_CLOSE 0xffffffff8141d420
#endif

#ifndef SERIO_OPEN
#define SERIO_OPEN 0xffffffff8141d460
#endif

#ifndef SERIO_UNREGISTER_DRIVER
#define SERIO_UNREGISTER_DRIVER 0xffffffff8141dc90
#endif

#ifndef SERIO_UNREGISTER_PORT
#define SERIO_UNREGISTER_PORT 0xffffffff8141dd30
#endif

#ifndef SERIO_UNREGISTER_CHILD_PORT
#define SERIO_UNREGISTER_CHILD_PORT 0xffffffff8141dd70
#endif

#ifndef I8042_CHECK_PORT_OWNER
#define I8042_CHECK_PORT_OWNER 0xffffffff8141de10
#endif

#ifndef I8042_LOCK_CHIP
#define I8042_LOCK_CHIP 0xffffffff8141de40
#endif

#ifndef I8042_UNLOCK_CHIP
#define I8042_UNLOCK_CHIP 0xffffffff8141de60
#endif

#ifndef I8042_INSTALL_FILTER
#define I8042_INSTALL_FILTER 0xffffffff8141de80
#endif

#ifndef I8042_REMOVE_FILTER
#define I8042_REMOVE_FILTER 0xffffffff8141ded0
#endif

#ifndef I8042_COMMAND
#define I8042_COMMAND 0xffffffff8141e7f0
#endif

#ifndef PS2_BEGIN_COMMAND
#define PS2_BEGIN_COMMAND 0xffffffff8141f360
#endif

#ifndef PS2_END_COMMAND
#define PS2_END_COMMAND 0xffffffff8141f390
#endif

#ifndef PS2_IS_KEYBOARD_ID
#define PS2_IS_KEYBOARD_ID 0xffffffff8141f3c0
#endif

#ifndef PS2_INIT
#define PS2_INIT 0xffffffff8141f3f0
#endif

#ifndef PS2_CMD_ABORTED
#define PS2_CMD_ABORTED 0xffffffff8141f440
#endif

#ifndef PS2_HANDLE_RESPONSE
#define PS2_HANDLE_RESPONSE 0xffffffff8141f480
#endif

#ifndef PS2_HANDLE_ACK
#define PS2_HANDLE_ACK 0xffffffff8141f530
#endif

#ifndef PS2_SENDBYTE
#define PS2_SENDBYTE 0xffffffff8141f660
#endif

#ifndef PS2_DRAIN
#define PS2_DRAIN 0xffffffff8141f7a0
#endif

#ifndef __PS2_COMMAND
#define __PS2_COMMAND 0xffffffff8141f8e0
#endif

#ifndef PS2_COMMAND
#define PS2_COMMAND 0xffffffff8141fd80
#endif

#ifndef INPUT_SCANCODE_TO_SCALAR
#define INPUT_SCANCODE_TO_SCALAR 0xffffffff8141fed0
#endif

#ifndef INPUT_HANDLER_FOR_EACH_HANDLE
#define INPUT_HANDLER_FOR_EACH_HANDLE 0xffffffff814201b0
#endif

#ifndef INPUT_GET_KEYCODE
#define INPUT_GET_KEYCODE 0xffffffff81420390
#endif

#ifndef INPUT_GRAB_DEVICE
#define INPUT_GRAB_DEVICE 0xffffffff814203e0
#endif

#ifndef INPUT_FLUSH_DEVICE
#define INPUT_FLUSH_DEVICE 0xffffffff81420440
#endif

#ifndef INPUT_REGISTER_HANDLE
#define INPUT_REGISTER_HANDLE 0xffffffff814204d0
#endif

#ifndef INPUT_RELEASE_DEVICE
#define INPUT_RELEASE_DEVICE 0xffffffff81420610
#endif

#ifndef INPUT_OPEN_DEVICE
#define INPUT_OPEN_DEVICE 0xffffffff81420650
#endif

#ifndef INPUT_CLOSE_DEVICE
#define INPUT_CLOSE_DEVICE 0xffffffff814206f0
#endif

#ifndef INPUT_UNREGISTER_HANDLE
#define INPUT_UNREGISTER_HANDLE 0xffffffff81420750
#endif

#ifndef INPUT_FREE_DEVICE
#define INPUT_FREE_DEVICE 0xffffffff81420d40
#endif

#ifndef INPUT_GET_NEW_MINOR
#define INPUT_GET_NEW_MINOR 0xffffffff81420db0
#endif

#ifndef INPUT_FREE_MINOR
#define INPUT_FREE_MINOR 0xffffffff81420e10
#endif

#ifndef INPUT_ALLOCATE_DEVICE
#define INPUT_ALLOCATE_DEVICE 0xffffffff81421e20
#endif

#ifndef DEVM_INPUT_ALLOCATE_DEVICE
#define DEVM_INPUT_ALLOCATE_DEVICE 0xffffffff81421f10
#endif

#ifndef INPUT_ALLOC_ABSINFO
#define INPUT_ALLOC_ABSINFO 0xffffffff81421f90
#endif

#ifndef INPUT_SET_ABS_PARAMS
#define INPUT_SET_ABS_PARAMS 0xffffffff81421ff0
#endif

#ifndef INPUT_SET_CAPABILITY
#define INPUT_SET_CAPABILITY 0xffffffff81422060
#endif

#ifndef INPUT_REGISTER_DEVICE
#define INPUT_REGISTER_DEVICE 0xffffffff81422350
#endif

#ifndef INPUT_RESET_DEVICE
#define INPUT_RESET_DEVICE 0xffffffff814228e0
#endif

#ifndef INPUT_REGISTER_HANDLER
#define INPUT_REGISTER_HANDLER 0xffffffff814229f0
#endif

#ifndef INPUT_UNREGISTER_HANDLER
#define INPUT_UNREGISTER_HANDLER 0xffffffff81422b00
#endif

#ifndef INPUT_UNREGISTER_DEVICE
#define INPUT_UNREGISTER_DEVICE 0xffffffff81422da0
#endif

#ifndef INPUT_SET_KEYCODE
#define INPUT_SET_KEYCODE 0xffffffff81422ef0
#endif

#ifndef INPUT_EVENT
#define INPUT_EVENT 0xffffffff81423530
#endif

#ifndef INPUT_INJECT_EVENT
#define INPUT_INJECT_EVENT 0xffffffff814235b0
#endif

#ifndef INPUT_EVENT_TO_USER
#define INPUT_EVENT_TO_USER 0xffffffff81423660
#endif

#ifndef INPUT_FF_EFFECT_FROM_USER
#define INPUT_FF_EFFECT_FROM_USER 0xffffffff81423700
#endif

#ifndef INPUT_EVENT_FROM_USER
#define INPUT_EVENT_FROM_USER 0xffffffff814237a0
#endif

#ifndef INPUT_MT_ASSIGN_SLOTS
#define INPUT_MT_ASSIGN_SLOTS 0xffffffff81423970
#endif

#ifndef INPUT_MT_GET_SLOT_BY_KEY
#define INPUT_MT_GET_SLOT_BY_KEY 0xffffffff81423d00
#endif

#ifndef INPUT_MT_DESTROY_SLOTS
#define INPUT_MT_DESTROY_SLOTS 0xffffffff81423d90
#endif

#ifndef INPUT_MT_REPORT_FINGER_COUNT
#define INPUT_MT_REPORT_FINGER_COUNT 0xffffffff81423e50
#endif

#ifndef INPUT_MT_REPORT_POINTER_EMULATION
#define INPUT_MT_REPORT_POINTER_EMULATION 0xffffffff81423ef0
#endif

#ifndef INPUT_MT_DROP_UNUSED
#define INPUT_MT_DROP_UNUSED 0xffffffff814240b0
#endif

#ifndef INPUT_MT_SYNC_FRAME
#define INPUT_MT_SYNC_FRAME 0xffffffff814240d0
#endif

#ifndef INPUT_MT_REPORT_SLOT_STATE
#define INPUT_MT_REPORT_SLOT_STATE 0xffffffff81424130
#endif

#ifndef INPUT_MT_INIT_SLOTS
#define INPUT_MT_INIT_SLOTS 0xffffffff814241d0
#endif

#ifndef INPUT_FF_EVENT
#define INPUT_FF_EVENT 0xffffffff81424390
#endif

#ifndef INPUT_FF_UPLOAD
#define INPUT_FF_UPLOAD 0xffffffff81424430
#endif

#ifndef INPUT_FF_DESTROY
#define INPUT_FF_DESTROY 0xffffffff81424750
#endif

#ifndef INPUT_FF_CREATE
#define INPUT_FF_CREATE 0xffffffff814247b0
#endif

#ifndef INPUT_FF_ERASE
#define INPUT_FF_ERASE 0xffffffff814249d0
#endif

#ifndef RTC_MONTH_DAYS
#define RTC_MONTH_DAYS 0xffffffff81429300
#endif

#ifndef RTC_YEAR_DAYS
#define RTC_YEAR_DAYS 0xffffffff81429360
#endif

#ifndef RTC_TIME64_TO_TM
#define RTC_TIME64_TO_TM 0xffffffff814293d0
#endif

#ifndef RTC_VALID_TM
#define RTC_VALID_TM 0xffffffff814295e0
#endif

#ifndef RTC_TM_TO_TIME64
#define RTC_TM_TO_TIME64 0xffffffff81429680
#endif

#ifndef RTC_TM_TO_KTIME
#define RTC_TM_TO_KTIME 0xffffffff814296c0
#endif

#ifndef RTC_KTIME_TO_TM
#define RTC_KTIME_TO_TM 0xffffffff81429700
#endif

#ifndef RTC_SET_NTP_TIME
#define RTC_SET_NTP_TIME 0xffffffff81429760
#endif

#ifndef RTC_DEVICE_UNREGISTER
#define RTC_DEVICE_UNREGISTER 0xffffffff81429840
#endif

#ifndef DEVM_RTC_DEVICE_UNREGISTER
#define DEVM_RTC_DEVICE_UNREGISTER 0xffffffff814298e0
#endif

#ifndef RTC_DEVICE_REGISTER
#define RTC_DEVICE_REGISTER 0xffffffff81429c80
#endif

#ifndef DEVM_RTC_DEVICE_REGISTER
#define DEVM_RTC_DEVICE_REGISTER 0xffffffff81429f50
#endif

#ifndef RTC_READ_TIME
#define RTC_READ_TIME 0xffffffff8142a0d0
#endif

#ifndef RTC_UPDATE_IRQ
#define RTC_UPDATE_IRQ 0xffffffff8142a110
#endif

#ifndef RTC_SET_MMSS
#define RTC_SET_MMSS 0xffffffff8142a160
#endif

#ifndef RTC_READ_ALARM
#define RTC_READ_ALARM 0xffffffff8142a270
#endif

#ifndef RTC_CLASS_OPEN
#define RTC_CLASS_OPEN 0xffffffff8142a360
#endif

#ifndef RTC_CLASS_CLOSE
#define RTC_CLASS_CLOSE 0xffffffff8142a3f0
#endif

#ifndef RTC_IRQ_SET_STATE
#define RTC_IRQ_SET_STATE 0xffffffff8142a480
#endif

#ifndef RTC_SET_TIME
#define RTC_SET_TIME 0xffffffff8142a6c0
#endif

#ifndef RTC_ALARM_IRQ_ENABLE
#define RTC_ALARM_IRQ_ENABLE 0xffffffff8142a8c0
#endif

#ifndef RTC_UPDATE_IRQ_ENABLE
#define RTC_UPDATE_IRQ_ENABLE 0xffffffff8142a950
#endif

#ifndef RTC_SET_ALARM
#define RTC_SET_ALARM 0xffffffff8142aa60
#endif

#ifndef RTC_INITIALIZE_ALARM
#define RTC_INITIALIZE_ALARM 0xffffffff8142ab40
#endif

#ifndef RTC_IRQ_SET_FREQ
#define RTC_IRQ_SET_FREQ 0xffffffff8142ac50
#endif

#ifndef RTC_IRQ_REGISTER
#define RTC_IRQ_REGISTER 0xffffffff8142ad20
#endif

#ifndef RTC_IRQ_UNREGISTER
#define RTC_IRQ_UNREGISTER 0xffffffff8142adb0
#endif

#ifndef __RTC_READ_ALARM
#define __RTC_READ_ALARM 0xffffffff8142ae00
#endif

#ifndef RTC_HANDLE_LEGACY_IRQ
#define RTC_HANDLE_LEGACY_IRQ 0xffffffff8142b280
#endif

#ifndef RTC_AIE_UPDATE_IRQ
#define RTC_AIE_UPDATE_IRQ 0xffffffff8142b340
#endif

#ifndef RTC_UIE_UPDATE_IRQ
#define RTC_UIE_UPDATE_IRQ 0xffffffff8142b360
#endif

#ifndef RTC_PIE_UPDATE_IRQ
#define RTC_PIE_UPDATE_IRQ 0xffffffff8142b380
#endif

#ifndef RTC_TIMER_DO_WORK
#define RTC_TIMER_DO_WORK 0xffffffff8142b3e0
#endif

#ifndef RTC_TIMER_INIT
#define RTC_TIMER_INIT 0xffffffff8142b5e0
#endif

#ifndef RTC_TIMER_START
#define RTC_TIMER_START 0xffffffff8142b600
#endif

#ifndef RTC_TIMER_CANCEL
#define RTC_TIMER_CANCEL 0xffffffff8142b670
#endif

#ifndef RTC_DEV_PREPARE
#define RTC_DEV_PREPARE 0xffffffff8142bec0
#endif

#ifndef RTC_DEV_ADD_DEVICE
#define RTC_DEV_ADD_DEVICE 0xffffffff8142bf40
#endif

#ifndef RTC_DEV_DEL_DEVICE
#define RTC_DEV_DEL_DEVICE 0xffffffff8142bfe0
#endif

#ifndef RTC_PROC_ADD_DEVICE
#define RTC_PROC_ADD_DEVICE 0xffffffff8142c420
#endif

#ifndef RTC_PROC_DEL_DEVICE
#define RTC_PROC_DEL_DEVICE 0xffffffff8142c460
#endif

#ifndef RTC_SYSFS_ADD_DEVICE
#define RTC_SYSFS_ADD_DEVICE 0xffffffff8142c840
#endif

#ifndef RTC_SYSFS_DEL_DEVICE
#define RTC_SYSFS_DEL_DEVICE 0xffffffff8142c8a0
#endif

#ifndef POWER_SUPPLY_SET_BATTERY_CHARGED
#define POWER_SUPPLY_SET_BATTERY_CHARGED 0xffffffff8142dfb0
#endif

#ifndef POWER_SUPPLY_GET_PROPERTY
#define POWER_SUPPLY_GET_PROPERTY 0xffffffff8142dff0
#endif

#ifndef POWER_SUPPLY_SET_PROPERTY
#define POWER_SUPPLY_SET_PROPERTY 0xffffffff8142e020
#endif

#ifndef POWER_SUPPLY_PROPERTY_IS_WRITEABLE
#define POWER_SUPPLY_PROPERTY_IS_WRITEABLE 0xffffffff8142e060
#endif

#ifndef POWER_SUPPLY_EXTERNAL_POWER_CHANGED
#define POWER_SUPPLY_EXTERNAL_POWER_CHANGED 0xffffffff8142e0a0
#endif

#ifndef POWER_SUPPLY_GET_DRVDATA
#define POWER_SUPPLY_GET_DRVDATA 0xffffffff8142e0d0
#endif

#ifndef POWER_SUPPLY_CHANGED
#define POWER_SUPPLY_CHANGED 0xffffffff8142e0e0
#endif

#ifndef POWER_SUPPLY_AM_I_SUPPLIED
#define POWER_SUPPLY_AM_I_SUPPLIED 0xffffffff8142e180
#endif

#ifndef POWER_SUPPLY_IS_SYSTEM_SUPPLIED
#define POWER_SUPPLY_IS_SYSTEM_SUPPLIED 0xffffffff8142e1f0
#endif

#ifndef POWER_SUPPLY_GET_BY_NAME
#define POWER_SUPPLY_GET_BY_NAME 0xffffffff8142e260
#endif

#ifndef POWER_SUPPLY_PUT
#define POWER_SUPPLY_PUT 0xffffffff8142e2b0
#endif

#ifndef POWER_SUPPLY_POWERS
#define POWER_SUPPLY_POWERS 0xffffffff8142e2d0
#endif

#ifndef POWER_SUPPLY_REG_NOTIFIER
#define POWER_SUPPLY_REG_NOTIFIER 0xffffffff8142e300
#endif

#ifndef POWER_SUPPLY_UNREG_NOTIFIER
#define POWER_SUPPLY_UNREG_NOTIFIER 0xffffffff8142e320
#endif

#ifndef POWER_SUPPLY_UNREGISTER
#define POWER_SUPPLY_UNREGISTER 0xffffffff8142e4f0
#endif

#ifndef POWER_SUPPLY_REGISTER
#define POWER_SUPPLY_REGISTER 0xffffffff8142e910
#endif

#ifndef POWER_SUPPLY_REGISTER_NO_WS
#define POWER_SUPPLY_REGISTER_NO_WS 0xffffffff8142e930
#endif

#ifndef DEVM_POWER_SUPPLY_REGISTER
#define DEVM_POWER_SUPPLY_REGISTER 0xffffffff8142e950
#endif

#ifndef DEVM_POWER_SUPPLY_REGISTER_NO_WS
#define DEVM_POWER_SUPPLY_REGISTER_NO_WS 0xffffffff8142e9e0
#endif

#ifndef POWER_SUPPLY_INIT_ATTRS
#define POWER_SUPPLY_INIT_ATTRS 0xffffffff8142ed60
#endif

#ifndef POWER_SUPPLY_UEVENT
#define POWER_SUPPLY_UEVENT 0xffffffff8142eda0
#endif

#ifndef POWER_SUPPLY_UPDATE_LEDS
#define POWER_SUPPLY_UPDATE_LEDS 0xffffffff8142f030
#endif

#ifndef POWER_SUPPLY_CREATE_TRIGGERS
#define POWER_SUPPLY_CREATE_TRIGGERS 0xffffffff8142f200
#endif

#ifndef POWER_SUPPLY_REMOVE_TRIGGERS
#define POWER_SUPPLY_REMOVE_TRIGGERS 0xffffffff8142f370
#endif

#ifndef HWMON_DEVICE_UNREGISTER
#define HWMON_DEVICE_UNREGISTER 0xffffffff8142f490
#endif

#ifndef DEVM_HWMON_DEVICE_UNREGISTER
#define DEVM_HWMON_DEVICE_UNREGISTER 0xffffffff8142f540
#endif

#ifndef HWMON_DEVICE_REGISTER_WITH_GROUPS
#define HWMON_DEVICE_REGISTER_WITH_GROUPS 0xffffffff8142f6a0
#endif

#ifndef DEVM_HWMON_DEVICE_REGISTER_WITH_GROUPS
#define DEVM_HWMON_DEVICE_REGISTER_WITH_GROUPS 0xffffffff8142f710
#endif

#ifndef HWMON_DEVICE_REGISTER
#define HWMON_DEVICE_REGISTER 0xffffffff8142f7b0
#endif

#ifndef WATCHDOG_INIT_TIMEOUT
#define WATCHDOG_INIT_TIMEOUT 0xffffffff8142f7d0
#endif

#ifndef WATCHDOG_REGISTER_DEVICE
#define WATCHDOG_REGISTER_DEVICE 0xffffffff8142f880
#endif

#ifndef WATCHDOG_UNREGISTER_DEVICE
#define WATCHDOG_UNREGISTER_DEVICE 0xffffffff8142fa40
#endif

#ifndef WATCHDOG_DEV_REGISTER
#define WATCHDOG_DEV_REGISTER 0xffffffff81430230
#endif

#ifndef WATCHDOG_DEV_UNREGISTER
#define WATCHDOG_DEV_UNREGISTER 0xffffffff81430330
#endif

#ifndef DM_KOBJECT_RELEASE
#define DM_KOBJECT_RELEASE 0xffffffff81430390
#endif

#ifndef BRAILLE_REGISTER_CONSOLE
#define BRAILLE_REGISTER_CONSOLE 0xffffffff81430b20
#endif

#ifndef BRAILLE_UNREGISTER_CONSOLE
#define BRAILLE_UNREGISTER_CONSOLE 0xffffffff81430bb0
#endif

#ifndef EDAC_HANDLER_SET
#define EDAC_HANDLER_SET 0xffffffff81430c10
#endif

#ifndef EDAC_ATOMIC_ASSERT_ERROR
#define EDAC_ATOMIC_ASSERT_ERROR 0xffffffff81430c30
#endif

#ifndef EDAC_GET_SYSFS_SUBSYS
#define EDAC_GET_SYSFS_SUBSYS 0xffffffff81430c40
#endif

#ifndef EDAC_PUT_SYSFS_SUBSYS
#define EDAC_PUT_SYSFS_SUBSYS 0xffffffff81430ca0
#endif

#ifndef HAVE_GOVERNOR_PER_POLICY
#define HAVE_GOVERNOR_PER_POLICY 0xffffffff81430cd0
#endif

#ifndef GET_GOVERNOR_PARENT_KOBJ
#define GET_GOVERNOR_PARENT_KOBJ 0xffffffff81430cf0
#endif

#ifndef CPUFREQ_GET_CURRENT_DRIVER
#define CPUFREQ_GET_CURRENT_DRIVER 0xffffffff81430d10
#endif

#ifndef CPUFREQ_GET_DRIVER_DATA
#define CPUFREQ_GET_DRIVER_DATA 0xffffffff81430d20
#endif

#ifndef CPUFREQ_BOOST_ENABLED
#define CPUFREQ_BOOST_ENABLED 0xffffffff81430d50
#endif

#ifndef GET_CPU_IDLE_TIME
#define GET_CPU_IDLE_TIME 0xffffffff81430d70
#endif

#ifndef CPUFREQ_GENERIC_GET
#define CPUFREQ_GENERIC_GET 0xffffffff81430e30
#endif

#ifndef CPUFREQ_BOOST_SUPPORTED
#define CPUFREQ_BOOST_SUPPORTED 0xffffffff81430ec0
#endif

#ifndef CPUFREQ_CPU_PUT
#define CPUFREQ_CPU_PUT 0xffffffff81430ef0
#endif

#ifndef CPUFREQ_FREQ_TRANSITION_BEGIN
#define CPUFREQ_FREQ_TRANSITION_BEGIN 0xffffffff81431120
#endif

#ifndef CPUFREQ_FREQ_TRANSITION_END
#define CPUFREQ_FREQ_TRANSITION_END 0xffffffff81431240
#endif

#ifndef CPUFREQ_SHOW_CPUS
#define CPUFREQ_SHOW_CPUS 0xffffffff81431380
#endif

#ifndef CPUFREQ_REGISTER_NOTIFIER
#define CPUFREQ_REGISTER_NOTIFIER 0xffffffff81431670
#endif

#ifndef CPUFREQ_UNREGISTER_NOTIFIER
#define CPUFREQ_UNREGISTER_NOTIFIER 0xffffffff81431700
#endif

#ifndef __CPUFREQ_DRIVER_TARGET
#define __CPUFREQ_DRIVER_TARGET 0xffffffff81431760
#endif

#ifndef CPUFREQ_DRIVER_TARGET
#define CPUFREQ_DRIVER_TARGET 0xffffffff81431af0
#endif

#ifndef CPUFREQ_REGISTER_GOVERNOR
#define CPUFREQ_REGISTER_GOVERNOR 0xffffffff81431bb0
#endif

#ifndef CPUFREQ_CPU_GET
#define CPUFREQ_CPU_GET 0xffffffff81431fe0
#endif

#ifndef CPUFREQ_QUICK_GET_MAX
#define CPUFREQ_QUICK_GET_MAX 0xffffffff814320a0
#endif

#ifndef CPUFREQ_GET
#define CPUFREQ_GET 0xffffffff814320e0
#endif

#ifndef CPUFREQ_GET_POLICY
#define CPUFREQ_GET_POLICY 0xffffffff81432140
#endif

#ifndef CPUFREQ_QUICK_GET
#define CPUFREQ_QUICK_GET 0xffffffff814321c0
#endif

#ifndef CPUFREQ_GET_GLOBAL_KOBJECT
#define CPUFREQ_GET_GLOBAL_KOBJECT 0xffffffff81432360
#endif

#ifndef CPUFREQ_PUT_GLOBAL_KOBJECT
#define CPUFREQ_PUT_GLOBAL_KOBJECT 0xffffffff81432390
#endif

#ifndef CPUFREQ_SUSPEND
#define CPUFREQ_SUSPEND 0xffffffff81432630
#endif

#ifndef CPUFREQ_UPDATE_POLICY
#define CPUFREQ_UPDATE_POLICY 0xffffffff81432a50
#endif

#ifndef CPUFREQ_GENERIC_SUSPEND
#define CPUFREQ_GENERIC_SUSPEND 0xffffffff81432e30
#endif

#ifndef CPUFREQ_UNREGISTER_GOVERNOR
#define CPUFREQ_UNREGISTER_GOVERNOR 0xffffffff81432ee0
#endif

#ifndef CPUFREQ_GENERIC_INIT
#define CPUFREQ_GENERIC_INIT 0xffffffff81433880
#endif

#ifndef CPUFREQ_SYSFS_CREATE_FILE
#define CPUFREQ_SYSFS_CREATE_FILE 0xffffffff81434700
#endif

#ifndef CPUFREQ_SYSFS_REMOVE_FILE
#define CPUFREQ_SYSFS_REMOVE_FILE 0xffffffff81434790
#endif

#ifndef CPUFREQ_REGISTER_DRIVER
#define CPUFREQ_REGISTER_DRIVER 0xffffffff814347d0
#endif

#ifndef CPUFREQ_UNREGISTER_DRIVER
#define CPUFREQ_UNREGISTER_DRIVER 0xffffffff81434a80
#endif

#ifndef DISABLE_CPUFREQ
#define DISABLE_CPUFREQ 0xffffffff81434b70
#endif

#ifndef CPUFREQ_CPU_GET_RAW
#define CPUFREQ_CPU_GET_RAW 0xffffffff81434b80
#endif

#ifndef CPUFREQ_RESUME
#define CPUFREQ_RESUME 0xffffffff81434ba0
#endif

#ifndef CPUFREQ_BOOST_TRIGGER_STATE
#define CPUFREQ_BOOST_TRIGGER_STATE 0xffffffff81434d20
#endif

#ifndef CPUFREQ_FREQUENCY_TABLE_CPUINFO
#define CPUFREQ_FREQUENCY_TABLE_CPUINFO 0xffffffff81434d50
#endif

#ifndef CPUFREQ_TABLE_VALIDATE_AND_SHOW
#define CPUFREQ_TABLE_VALIDATE_AND_SHOW 0xffffffff81434e30
#endif

#ifndef CPUFREQ_FREQUENCY_TABLE_TARGET
#define CPUFREQ_FREQUENCY_TABLE_TARGET 0xffffffff81434e60
#endif

#ifndef CPUFREQ_FREQUENCY_GET_TABLE
#define CPUFREQ_FREQUENCY_GET_TABLE 0xffffffff81435150
#endif

#ifndef CPUFREQ_FREQUENCY_TABLE_GET_INDEX
#define CPUFREQ_FREQUENCY_TABLE_GET_INDEX 0xffffffff81435180
#endif

#ifndef CPUFREQ_FREQUENCY_TABLE_VERIFY
#define CPUFREQ_FREQUENCY_TABLE_VERIFY 0xffffffff81435220
#endif

#ifndef CPUFREQ_GENERIC_FREQUENCY_TABLE_VERIFY
#define CPUFREQ_GENERIC_FREQUENCY_TABLE_VERIFY 0xffffffff81435390
#endif

#ifndef OD_REGISTER_POWERSAVE_BIAS_HANDLER
#define OD_REGISTER_POWERSAVE_BIAS_HANDLER 0xffffffff81436430
#endif

#ifndef OD_UNREGISTER_POWERSAVE_BIAS_HANDLER
#define OD_UNREGISTER_POWERSAVE_BIAS_HANDLER 0xffffffff81436450
#endif

#ifndef DBS_CHECK_CPU
#define DBS_CHECK_CPU 0xffffffff81436530
#endif

#ifndef NEED_LOAD_EVAL
#define NEED_LOAD_EVAL 0xffffffff81436700
#endif

#ifndef GOV_QUEUE_WORK
#define GOV_QUEUE_WORK 0xffffffff81436780
#endif

#ifndef CPUFREQ_GOVERNOR_DBS
#define CPUFREQ_GOVERNOR_DBS 0xffffffff81436840
#endif

#ifndef CPUIDLE_RESUME_AND_UNLOCK
#define CPUIDLE_RESUME_AND_UNLOCK 0xffffffff81438590
#endif

#ifndef CPUIDLE_ENABLE_DEVICE
#define CPUIDLE_ENABLE_DEVICE 0xffffffff81438630
#endif

#ifndef CPUIDLE_REGISTER_DEVICE
#define CPUIDLE_REGISTER_DEVICE 0xffffffff814386e0
#endif

#ifndef CPUIDLE_DISABLE_DEVICE
#define CPUIDLE_DISABLE_DEVICE 0xffffffff81438830
#endif

#ifndef CPUIDLE_DISABLED
#define CPUIDLE_DISABLED 0xffffffff81438890
#endif

#ifndef DISABLE_CPUIDLE
#define DISABLE_CPUIDLE 0xffffffff814388a0
#endif

#ifndef CPUIDLE_NOT_AVAILABLE
#define CPUIDLE_NOT_AVAILABLE 0xffffffff814388b0
#endif

#ifndef CPUIDLE_PLAY_DEAD
#define CPUIDLE_PLAY_DEAD 0xffffffff814388f0
#endif

#ifndef CPUIDLE_FIND_DEEPEST_STATE
#define CPUIDLE_FIND_DEEPEST_STATE 0xffffffff81438950
#endif

#ifndef CPUIDLE_ENTER_FREEZE
#define CPUIDLE_ENTER_FREEZE 0xffffffff814389c0
#endif

#ifndef CPUIDLE_ENTER_STATE
#define CPUIDLE_ENTER_STATE 0xffffffff81438a90
#endif

#ifndef CPUIDLE_SELECT
#define CPUIDLE_SELECT 0xffffffff81438c90
#endif

#ifndef CPUIDLE_ENTER
#define CPUIDLE_ENTER 0xffffffff81438cb0
#endif

#ifndef CPUIDLE_REFLECT
#define CPUIDLE_REFLECT 0xffffffff81438cd0
#endif

#ifndef CPUIDLE_INSTALL_IDLE_HANDLER
#define CPUIDLE_INSTALL_IDLE_HANDLER 0xffffffff81438d00
#endif

#ifndef CPUIDLE_UNINSTALL_IDLE_HANDLER
#define CPUIDLE_UNINSTALL_IDLE_HANDLER 0xffffffff81438d20
#endif

#ifndef CPUIDLE_PAUSE_AND_LOCK
#define CPUIDLE_PAUSE_AND_LOCK 0xffffffff81438d60
#endif

#ifndef CPUIDLE_UNREGISTER_DEVICE
#define CPUIDLE_UNREGISTER_DEVICE 0xffffffff81438d80
#endif

#ifndef CPUIDLE_UNREGISTER
#define CPUIDLE_UNREGISTER 0xffffffff81438df0
#endif

#ifndef CPUIDLE_REGISTER
#define CPUIDLE_REGISTER 0xffffffff81438e50
#endif

#ifndef CPUIDLE_PAUSE
#define CPUIDLE_PAUSE 0xffffffff81438f00
#endif

#ifndef CPUIDLE_RESUME
#define CPUIDLE_RESUME 0xffffffff81438f30
#endif

#ifndef CPUIDLE_GET_DRIVER
#define CPUIDLE_GET_DRIVER 0xffffffff81438f70
#endif

#ifndef CPUIDLE_GET_CPU_DRIVER
#define CPUIDLE_GET_CPU_DRIVER 0xffffffff81438f80
#endif

#ifndef CPUIDLE_REGISTER_DRIVER
#define CPUIDLE_REGISTER_DRIVER 0xffffffff81438fd0
#endif

#ifndef CPUIDLE_UNREGISTER_DRIVER
#define CPUIDLE_UNREGISTER_DRIVER 0xffffffff81439120
#endif

#ifndef CPUIDLE_DRIVER_REF
#define CPUIDLE_DRIVER_REF 0xffffffff81439260
#endif

#ifndef CPUIDLE_DRIVER_UNREF
#define CPUIDLE_DRIVER_UNREF 0xffffffff814392a0
#endif

#ifndef CPUIDLE_SWITCH_GOVERNOR
#define CPUIDLE_SWITCH_GOVERNOR 0xffffffff81439300
#endif

#ifndef CPUIDLE_REGISTER_GOVERNOR
#define CPUIDLE_REGISTER_GOVERNOR 0xffffffff81439400
#endif

#ifndef CPUIDLE_ADD_INTERFACE
#define CPUIDLE_ADD_INTERFACE 0xffffffff81439b10
#endif

#ifndef CPUIDLE_REMOVE_INTERFACE
#define CPUIDLE_REMOVE_INTERFACE 0xffffffff81439b50
#endif

#ifndef CPUIDLE_ADD_DEVICE_SYSFS
#define CPUIDLE_ADD_DEVICE_SYSFS 0xffffffff81439b70
#endif

#ifndef CPUIDLE_REMOVE_DEVICE_SYSFS
#define CPUIDLE_REMOVE_DEVICE_SYSFS 0xffffffff81439d30
#endif

#ifndef CPUIDLE_ADD_SYSFS
#define CPUIDLE_ADD_SYSFS 0xffffffff81439da0
#endif

#ifndef CPUIDLE_REMOVE_SYSFS
#define CPUIDLE_REMOVE_SYSFS 0xffffffff81439e60
#endif

#ifndef SDHCI_PCI_O2_PROBE_SLOT
#define SDHCI_PCI_O2_PROBE_SLOT 0xffffffff8143a5e0
#endif

#ifndef SDHCI_PCI_O2_FUJIN2_PCI_INIT
#define SDHCI_PCI_O2_FUJIN2_PCI_INIT 0xffffffff8143a660
#endif

#ifndef SDHCI_PCI_O2_PROBE
#define SDHCI_PCI_O2_PROBE 0xffffffff8143a930
#endif

#ifndef SDHCI_PCI_O2_RESUME
#define SDHCI_PCI_O2_RESUME 0xffffffff8143afd0
#endif

#ifndef LED_UPDATE_BRIGHTNESS
#define LED_UPDATE_BRIGHTNESS 0xffffffff8143aff0
#endif

#ifndef LED_SYSFS_DISABLE
#define LED_SYSFS_DISABLE 0xffffffff8143b020
#endif

#ifndef LED_SYSFS_ENABLE
#define LED_SYSFS_ENABLE 0xffffffff8143b030
#endif

#ifndef LED_STOP_SOFTWARE_BLINK
#define LED_STOP_SOFTWARE_BLINK 0xffffffff8143b040
#endif

#ifndef LED_BLINK_SET
#define LED_BLINK_SET 0xffffffff8143b160
#endif

#ifndef LED_BLINK_SET_ONESHOT
#define LED_BLINK_SET_ONESHOT 0xffffffff8143b1a0
#endif

#ifndef LED_SET_BRIGHTNESS
#define LED_SET_BRIGHTNESS 0xffffffff8143b210
#endif

#ifndef LED_CLASSDEV_SUSPEND
#define LED_CLASSDEV_SUSPEND 0xffffffff8143b2d0
#endif

#ifndef LED_CLASSDEV_RESUME
#define LED_CLASSDEV_RESUME 0xffffffff8143b2f0
#endif

#ifndef LED_CLASSDEV_UNREGISTER
#define LED_CLASSDEV_UNREGISTER 0xffffffff8143b520
#endif

#ifndef DEVM_LED_CLASSDEV_UNREGISTER
#define DEVM_LED_CLASSDEV_UNREGISTER 0xffffffff8143b740
#endif

#ifndef LED_CLASSDEV_REGISTER
#define LED_CLASSDEV_REGISTER 0xffffffff8143b790
#endif

#ifndef DEVM_LED_CLASSDEV_REGISTER
#define DEVM_LED_CLASSDEV_REGISTER 0xffffffff8143ba10
#endif

#ifndef LED_TRIGGER_SHOW
#define LED_TRIGGER_SHOW 0xffffffff8143ba90
#endif

#ifndef LED_TRIGGER_SET
#define LED_TRIGGER_SET 0xffffffff8143bbe0
#endif

#ifndef LED_TRIGGER_REMOVE
#define LED_TRIGGER_REMOVE 0xffffffff8143bd50
#endif

#ifndef LED_TRIGGER_STORE
#define LED_TRIGGER_STORE 0xffffffff8143bd90
#endif

#ifndef LED_TRIGGER_SET_DEFAULT
#define LED_TRIGGER_SET_DEFAULT 0xffffffff8143bf30
#endif

#ifndef LED_TRIGGER_UNREGISTER
#define LED_TRIGGER_UNREGISTER 0xffffffff8143bfe0
#endif

#ifndef LED_TRIGGER_UNREGISTER_SIMPLE
#define LED_TRIGGER_UNREGISTER_SIMPLE 0xffffffff8143c0b0
#endif

#ifndef LED_TRIGGER_EVENT
#define LED_TRIGGER_EVENT 0xffffffff8143c0d0
#endif

#ifndef LED_TRIGGER_BLINK
#define LED_TRIGGER_BLINK 0xffffffff8143c150
#endif

#ifndef LED_TRIGGER_REGISTER
#define LED_TRIGGER_REGISTER 0xffffffff8143c1d0
#endif

#ifndef LED_TRIGGER_RENAME_STATIC
#define LED_TRIGGER_RENAME_STATIC 0xffffffff8143c320
#endif

#ifndef LED_TRIGGER_REGISTER_SIMPLE
#define LED_TRIGGER_REGISTER_SIMPLE 0xffffffff8143c370
#endif

#ifndef LED_TRIGGER_BLINK_ONESHOT
#define LED_TRIGGER_BLINK_ONESHOT 0xffffffff8143c400
#endif

#ifndef LEDTRIG_CPU
#define LEDTRIG_CPU 0xffffffff8143c490
#endif

#ifndef DMI_GET_SYSTEM_INFO
#define DMI_GET_SYSTEM_INFO 0xffffffff8143c690
#endif

#ifndef DMI_MEMDEV_NAME
#define DMI_MEMDEV_NAME 0xffffffff8143c6b0
#endif

#ifndef DMI_NAME_IN_VENDORS
#define DMI_NAME_IN_VENDORS 0xffffffff8143c720
#endif

#ifndef DMI_CHECK_SYSTEM
#define DMI_CHECK_SYSTEM 0xffffffff8143c860
#endif

#ifndef DMI_FIRST_MATCH
#define DMI_FIRST_MATCH 0xffffffff8143c8c0
#endif

#ifndef DMI_FIND_DEVICE
#define DMI_FIND_DEVICE 0xffffffff8143c910
#endif

#ifndef DMI_MATCH
#define DMI_MATCH 0xffffffff8143c980
#endif

#ifndef DMI_GET_DATE
#define DMI_GET_DATE 0xffffffff8143c9c0
#endif

#ifndef DMI_WALK
#define DMI_WALK 0xffffffff8143cb30
#endif

#ifndef DMI_NAME_IN_SERIAL
#define DMI_NAME_IN_SERIAL 0xffffffff8143cba0
#endif

#ifndef EFI_RUNTIME_DISABLED
#define EFI_RUNTIME_DISABLED 0xffffffff8143dcf0
#endif

#ifndef EFI_LOOKUP_MAPPED_ADDR
#define EFI_LOOKUP_MAPPED_ADDR 0xffffffff8143dd00
#endif

#ifndef EFIVAR_VALIDATE
#define EFIVAR_VALIDATE 0xffffffff8143de10
#endif

#ifndef __EFIVAR_ENTRY_DELETE
#define __EFIVAR_ENTRY_DELETE 0xffffffff8143df50
#endif

#ifndef __EFIVAR_ENTRY_GET
#define __EFIVAR_ENTRY_GET 0xffffffff8143df90
#endif

#ifndef EFIVARS_KOBJECT
#define EFIVARS_KOBJECT 0xffffffff8143dfd0
#endif

#ifndef EFIVARS_REGISTER
#define EFIVARS_REGISTER 0xffffffff8143e000
#endif

#ifndef EFIVARS_UNREGISTER
#define EFIVARS_UNREGISTER 0xffffffff8143e020
#endif

#ifndef EFIVAR_ENTRY_FIND
#define EFIVAR_ENTRY_FIND 0xffffffff8143e060
#endif

#ifndef EFIVAR_ENTRY_ITER_BEGIN
#define EFIVAR_ENTRY_ITER_BEGIN 0xffffffff8143e1e0
#endif

#ifndef __EFIVAR_ENTRY_ITER
#define __EFIVAR_ENTRY_ITER 0xffffffff8143e2a0
#endif

#ifndef EFIVAR_RUN_WORKER
#define EFIVAR_RUN_WORKER 0xffffffff8143e4d0
#endif

#ifndef EFIVAR_ENTRY_ITER_END
#define EFIVAR_ENTRY_ITER_END 0xffffffff8143e510
#endif

#ifndef EFIVAR_ENTRY_ADD
#define EFIVAR_ENTRY_ADD 0xffffffff8143e530
#endif

#ifndef EFIVAR_ENTRY_REMOVE
#define EFIVAR_ENTRY_REMOVE 0xffffffff8143e590
#endif

#ifndef EFIVAR_ENTRY_SET_SAFE
#define EFIVAR_ENTRY_SET_SAFE 0xffffffff8143e5f0
#endif

#ifndef EFIVAR_ENTRY_GET
#define EFIVAR_ENTRY_GET 0xffffffff8143e800
#endif

#ifndef EFIVAR_ENTRY_SIZE
#define EFIVAR_ENTRY_SIZE 0xffffffff8143e870
#endif

#ifndef EFIVAR_ENTRY_ITER
#define EFIVAR_ENTRY_ITER 0xffffffff8143e8f0
#endif

#ifndef EFIVAR_ENTRY_DELETE
#define EFIVAR_ENTRY_DELETE 0xffffffff8143e990
#endif

#ifndef EFIVAR_ENTRY_SET_GET_SIZE
#define EFIVAR_ENTRY_SET_GET_SIZE 0xffffffff8143ea60
#endif

#ifndef EFIVAR_ENTRY_SET
#define EFIVAR_ENTRY_SET 0xffffffff8143ec50
#endif

#ifndef EFIVAR_INIT
#define EFIVAR_INIT 0xffffffff8143eda0
#endif

#ifndef EFI_REBOOT
#define EFI_REBOOT 0xffffffff8143f0f0
#endif

#ifndef CPER_SEVERITY_STR
#define CPER_SEVERITY_STR 0xffffffff8143f160
#endif

#ifndef CPER_MEM_ERR_TYPE_STR
#define CPER_MEM_ERR_TYPE_STR 0xffffffff8143f180
#endif

#ifndef CPER_ESTATUS_CHECK_HEADER
#define CPER_ESTATUS_CHECK_HEADER 0xffffffff8143f1a0
#endif

#ifndef CPER_ESTATUS_CHECK
#define CPER_ESTATUS_CHECK 0xffffffff8143f1e0
#endif

#ifndef CPER_NEXT_RECORD_ID
#define CPER_NEXT_RECORD_ID 0xffffffff8143f290
#endif

#ifndef CPER_PRINT_BITS
#define CPER_PRINT_BITS 0xffffffff8143f6a0
#endif

#ifndef CPER_MEM_ERR_PACK
#define CPER_MEM_ERR_PACK 0xffffffff8143f7d0
#endif

#ifndef CPER_ESTATUS_PRINT
#define CPER_ESTATUS_PRINT 0xffffffff81440120
#endif

#ifndef CPER_MEM_ERR_UNPACK
#define CPER_MEM_ERR_UNPACK 0xffffffff81440220
#endif

#ifndef EFI_GET_RUNTIME_MAP_SIZE
#define EFI_GET_RUNTIME_MAP_SIZE 0xffffffff814403e0
#endif

#ifndef EFI_GET_RUNTIME_MAP_DESC_SIZE
#define EFI_GET_RUNTIME_MAP_DESC_SIZE 0xffffffff81440400
#endif

#ifndef EFI_RUNTIME_MAP_COPY
#define EFI_RUNTIME_MAP_COPY 0xffffffff81440410
#endif

#ifndef EFI_RUNTIME_MAP_SETUP
#define EFI_RUNTIME_MAP_SETUP 0xffffffff81440450
#endif

#ifndef EFI_NATIVE_RUNTIME_SETUP
#define EFI_NATIVE_RUNTIME_SETUP 0xffffffff81440ba0
#endif

#ifndef ACPI_PM_READ_VERIFIED
#define ACPI_PM_READ_VERIFIED 0xffffffff81440ce0
#endif

#ifndef DEVM_CLK_GET
#define DEVM_CLK_GET 0xffffffff81440e50
#endif

#ifndef DEVM_CLK_PUT
#define DEVM_CLK_PUT 0xffffffff81440ed0
#endif

#ifndef CLKDEV_ADD
#define CLKDEV_ADD 0xffffffff81440f60
#endif

#ifndef CLK_GET_SYS
#define CLK_GET_SYS 0xffffffff81440fa0
#endif

#ifndef CLK_GET
#define CLK_GET 0xffffffff814410f0
#endif

#ifndef CLK_REGISTER_CLKDEVS
#define CLK_REGISTER_CLKDEVS 0xffffffff81441140
#endif

#ifndef CLK_PUT
#define CLK_PUT 0xffffffff814411b0
#endif

#ifndef CLKDEV_DROP
#define CLKDEV_DROP 0xffffffff814411d0
#endif

#ifndef CLK_ADD_ALIAS
#define CLK_ADD_ALIAS 0xffffffff81441230
#endif

#ifndef CLK_REGISTER_CLKDEV
#define CLK_REGISTER_CLKDEV 0xffffffff814412b0
#endif

#ifndef __CLK_GET_NAME
#define __CLK_GET_NAME 0xffffffff81441320
#endif

#ifndef __CLK_GET_HW
#define __CLK_GET_HW 0xffffffff81441340
#endif

#ifndef __CLK_GET_NUM_PARENTS
#define __CLK_GET_NUM_PARENTS 0xffffffff81441360
#endif

#ifndef __CLK_GET_PARENT
#define __CLK_GET_PARENT 0xffffffff81441380
#endif

#ifndef __CLK_GET_RATE
#define __CLK_GET_RATE 0xffffffff814413b0
#endif

#ifndef __CLK_GET_FLAGS
#define __CLK_GET_FLAGS 0xffffffff814413f0
#endif

#ifndef __CLK_IS_ENABLED
#define __CLK_IS_ENABLED 0xffffffff81441410
#endif

#ifndef __CLK_DETERMINE_RATE
#define __CLK_DETERMINE_RATE 0xffffffff81441520
#endif

#ifndef CLK_DEBUGFS_ADD_FILE
#define CLK_DEBUGFS_ADD_FILE 0xffffffff814419f0
#endif

#ifndef CLK_IS_MATCH
#define CLK_IS_MATCH 0xffffffff81441a90
#endif

#ifndef __CLK_ROUND_RATE
#define __CLK_ROUND_RATE 0xffffffff814422b0
#endif

#ifndef CLK_GET_ACCURACY
#define CLK_GET_ACCURACY 0xffffffff81442410
#endif

#ifndef CLK_GET_PHASE
#define CLK_GET_PHASE 0xffffffff81442440
#endif

#ifndef CLK_ROUND_RATE
#define CLK_ROUND_RATE 0xffffffff81442480
#endif

#ifndef CLK_GET_PARENT
#define CLK_GET_PARENT 0xffffffff814424c0
#endif

#ifndef CLK_SET_PHASE
#define CLK_SET_PHASE 0xffffffff81442500
#endif

#ifndef CLK_GET_RATE
#define CLK_GET_RATE 0xffffffff81442690
#endif

#ifndef CLK_NOTIFIER_UNREGISTER
#define CLK_NOTIFIER_UNREGISTER 0xffffffff81442850
#endif

#ifndef CLK_GET_PARENT_BY_INDEX
#define CLK_GET_PARENT_BY_INDEX 0xffffffff81442db0
#endif

#ifndef __CLK_MUX_DETERMINE_RATE
#define __CLK_MUX_DETERMINE_RATE 0xffffffff81442ff0
#endif

#ifndef __CLK_MUX_DETERMINE_RATE_CLOSEST
#define __CLK_MUX_DETERMINE_RATE_CLOSEST 0xffffffff81443010
#endif

#ifndef CLK_HAS_PARENT
#define CLK_HAS_PARENT 0xffffffff81443030
#endif

#ifndef DEVM_CLK_UNREGISTER
#define DEVM_CLK_UNREGISTER 0xffffffff814430b0
#endif

#ifndef CLK_NOTIFIER_REGISTER
#define CLK_NOTIFIER_REGISTER 0xffffffff814434b0
#endif

#ifndef CLK_ENABLE
#define CLK_ENABLE 0xffffffff814440f0
#endif

#ifndef CLK_DISABLE
#define CLK_DISABLE 0xffffffff81444130
#endif

#ifndef CLK_UNPREPARE
#define CLK_UNPREPARE 0xffffffff81444280
#endif

#ifndef CLK_PREPARE
#define CLK_PREPARE 0xffffffff814443b0
#endif

#ifndef CLK_SET_PARENT
#define CLK_SET_PARENT 0xffffffff814446e0
#endif

#ifndef CLK_UNREGISTER
#define CLK_UNREGISTER 0xffffffff81444730
#endif

#ifndef CLK_SET_RATE
#define CLK_SET_RATE 0xffffffff81444ce0
#endif

#ifndef CLK_SET_RATE_RANGE
#define CLK_SET_RATE_RANGE 0xffffffff81444d20
#endif

#ifndef CLK_SET_MIN_RATE
#define CLK_SET_MIN_RATE 0xffffffff81444dd0
#endif

#ifndef CLK_SET_MAX_RATE
#define CLK_SET_MAX_RATE 0xffffffff81444e00
#endif

#ifndef __CLK_GET_ENABLE_COUNT
#define __CLK_GET_ENABLE_COUNT 0xffffffff814450b0
#endif

#ifndef __CLK_IS_PREPARED
#define __CLK_IS_PREPARED 0xffffffff814450d0
#endif

#ifndef __CLK_LOOKUP
#define __CLK_LOOKUP 0xffffffff81445130
#endif

#ifndef __CLK_CREATE_CLK
#define __CLK_CREATE_CLK 0xffffffff81445160
#endif

#ifndef __CLK_FREE_CLK
#define __CLK_FREE_CLK 0xffffffff81445220
#endif

#ifndef CLK_REGISTER
#define CLK_REGISTER 0xffffffff81445270
#endif

#ifndef DEVM_CLK_REGISTER
#define DEVM_CLK_REGISTER 0xffffffff81445a80
#endif

#ifndef __CLK_GET
#define __CLK_GET 0xffffffff81445b00
#endif

#ifndef __CLK_PUT
#define __CLK_PUT 0xffffffff81445b90
#endif

#ifndef CLK_UNREGISTER_DIVIDER
#define CLK_UNREGISTER_DIVIDER 0xffffffff81445c80
#endif

#ifndef DIVIDER_GET_VAL
#define DIVIDER_GET_VAL 0xffffffff81445df0
#endif

#ifndef DIVIDER_ROUND_RATE
#define DIVIDER_ROUND_RATE 0xffffffff814464b0
#endif

#ifndef DIVIDER_RECALC_RATE
#define DIVIDER_RECALC_RATE 0xffffffff814464e0
#endif

#ifndef CLK_REGISTER_DIVIDER
#define CLK_REGISTER_DIVIDER 0xffffffff81446770
#endif

#ifndef CLK_REGISTER_DIVIDER_TABLE
#define CLK_REGISTER_DIVIDER_TABLE 0xffffffff814467b0
#endif

#ifndef CLK_REGISTER_FIXED_FACTOR
#define CLK_REGISTER_FIXED_FACTOR 0xffffffff81446880
#endif

#ifndef CLK_REGISTER_FIXED_RATE_WITH_ACCURACY
#define CLK_REGISTER_FIXED_RATE_WITH_ACCURACY 0xffffffff81446980
#endif

#ifndef CLK_REGISTER_FIXED_RATE
#define CLK_REGISTER_FIXED_RATE 0xffffffff81446a80
#endif

#ifndef CLK_UNREGISTER_GATE
#define CLK_UNREGISTER_GATE 0xffffffff81446be0
#endif

#ifndef CLK_REGISTER_GATE
#define CLK_REGISTER_GATE 0xffffffff81446c20
#endif

#ifndef CLK_UNREGISTER_MUX
#define CLK_UNREGISTER_MUX 0xffffffff81446ea0
#endif

#ifndef CLK_REGISTER_MUX_TABLE
#define CLK_REGISTER_MUX_TABLE 0xffffffff81446ee0
#endif

#ifndef CLK_REGISTER_MUX
#define CLK_REGISTER_MUX 0xffffffff81447060
#endif

#ifndef CLK_REGISTER_COMPOSITE
#define CLK_REGISTER_COMPOSITE 0xffffffff81447520
#endif

#ifndef CLK_REGISTER_FRACTIONAL_DIVIDER
#define CLK_REGISTER_FRACTIONAL_DIVIDER 0xffffffff81447980
#endif

#ifndef CLK_REGISTER_GPIO_GATE
#define CLK_REGISTER_GPIO_GATE 0xffffffff81447b50
#endif

#ifndef DEVFREQ_SUSPEND_DEVICE
#define DEVFREQ_SUSPEND_DEVICE 0xffffffff81447e90
#endif

#ifndef DEVFREQ_RESUME_DEVICE
#define DEVFREQ_RESUME_DEVICE 0xffffffff81447ed0
#endif

#ifndef DEVFREQ_RECOMMENDED_OPP
#define DEVFREQ_RECOMMENDED_OPP 0xffffffff81447f10
#endif

#ifndef DEVFREQ_REGISTER_OPP_NOTIFIER
#define DEVFREQ_REGISTER_OPP_NOTIFIER 0xffffffff81447f20
#endif

#ifndef DEVFREQ_UNREGISTER_OPP_NOTIFIER
#define DEVFREQ_UNREGISTER_OPP_NOTIFIER 0xffffffff81447f30
#endif

#ifndef UPDATE_DEVFREQ
#define UPDATE_DEVFREQ 0xffffffff81447f50
#endif

#ifndef DEVFREQ_MONITOR_START
#define DEVFREQ_MONITOR_START 0xffffffff81448090
#endif

#ifndef DEVFREQ_MONITOR_RESUME
#define DEVFREQ_MONITOR_RESUME 0xffffffff814481b0
#endif

#ifndef DEVFREQ_MONITOR_STOP
#define DEVFREQ_MONITOR_STOP 0xffffffff81448270
#endif

#ifndef DEVFREQ_MONITOR_SUSPEND
#define DEVFREQ_MONITOR_SUSPEND 0xffffffff81448290
#endif

#ifndef DEVFREQ_INTERVAL_UPDATE
#define DEVFREQ_INTERVAL_UPDATE 0xffffffff81448300
#endif

#ifndef DEVFREQ_REMOVE_DEVICE
#define DEVFREQ_REMOVE_DEVICE 0xffffffff81448410
#endif

#ifndef DEVM_DEVFREQ_REGISTER_OPP_NOTIFIER
#define DEVM_DEVFREQ_REGISTER_OPP_NOTIFIER 0xffffffff81448460
#endif

#ifndef DEVFREQ_ADD_GOVERNOR
#define DEVFREQ_ADD_GOVERNOR 0xffffffff81448d60
#endif

#ifndef DEVFREQ_REMOVE_GOVERNOR
#define DEVFREQ_REMOVE_GOVERNOR 0xffffffff81448f20
#endif

#ifndef DEVM_DEVFREQ_REMOVE_DEVICE
#define DEVM_DEVFREQ_REMOVE_DEVICE 0xffffffff81449260
#endif

#ifndef DEVM_DEVFREQ_UNREGISTER_OPP_NOTIFIER
#define DEVM_DEVFREQ_UNREGISTER_OPP_NOTIFIER 0xffffffff814492b0
#endif

#ifndef DEVFREQ_ADD_DEVICE
#define DEVFREQ_ADD_DEVICE 0xffffffff81449300
#endif

#ifndef DEVM_DEVFREQ_ADD_DEVICE
#define DEVM_DEVFREQ_ADD_DEVICE 0xffffffff81449630
#endif

#ifndef POWERCAP_UNREGISTER_ZONE
#define POWERCAP_UNREGISTER_ZONE 0xffffffff81449a60
#endif

#ifndef POWERCAP_UNREGISTER_CONTROL_TYPE
#define POWERCAP_UNREGISTER_CONTROL_TYPE 0xffffffff8144a210
#endif

#ifndef POWERCAP_REGISTER_CONTROL_TYPE
#define POWERCAP_REGISTER_CONTROL_TYPE 0xffffffff8144a2f0
#endif

#ifndef POWERCAP_REGISTER_ZONE
#define POWERCAP_REGISTER_ZONE 0xffffffff8144a490
#endif

#ifndef RAS_USERSPACE_CONSUMERS
#define RAS_USERSPACE_CONSUMERS 0xffffffff8144b860
#endif

#ifndef PCIBIOS_ALIGN_RESOURCE
#define PCIBIOS_ALIGN_RESOURCE 0xffffffff8144b8d0
#endif

#ifndef PCIBIOS_RETRIEVE_FW_ADDR
#define PCIBIOS_RETRIEVE_FW_ADDR 0xffffffff8144beb0
#endif

#ifndef PCIBIOS_RESOURCE_SURVEY_BUS
#define PCIBIOS_RESOURCE_SURVEY_BUS 0xffffffff8144bf20
#endif

#ifndef PCI_MMAP_PAGE_RANGE
#define PCI_MMAP_PAGE_RANGE 0xffffffff8144bf80
#endif

#ifndef PCI_MMCFG_ARCH_MAP
#define PCI_MMCFG_ARCH_MAP 0xffffffff8144c1d0
#endif

#ifndef PCI_MMCFG_ARCH_UNMAP
#define PCI_MMCFG_ARCH_UNMAP 0xffffffff8144c250
#endif

#ifndef PCI_MMCONFIG_LOOKUP
#define PCI_MMCONFIG_LOOKUP 0xffffffff8144cac0
#endif

#ifndef PCI_MMCONFIG_INSERT
#define PCI_MMCONFIG_INSERT 0xffffffff8144cb30
#endif

#ifndef PCI_MMCONFIG_DELETE
#define PCI_MMCONFIG_DELETE 0xffffffff8144cd30
#endif

#ifndef XEN_FIND_DEVICE_DOMAIN_OWNER
#define XEN_FIND_DEVICE_DOMAIN_OWNER 0xffffffff8144cf80
#endif

#ifndef XEN_UNREGISTER_DEVICE_DOMAIN_OWNER
#define XEN_UNREGISTER_DEVICE_DOMAIN_OWNER 0xffffffff8144d000
#endif

#ifndef XEN_REGISTER_DEVICE_DOMAIN_OWNER
#define XEN_REGISTER_DEVICE_DOMAIN_OWNER 0xffffffff8144d800
#endif

#ifndef PCI_ACPI_SCAN_ROOT
#define PCI_ACPI_SCAN_ROOT 0xffffffff8144e800
#endif

#ifndef PCIBIOS_ROOT_BRIDGE_PREPARE
#define PCIBIOS_ROOT_BRIDGE_PREPARE 0xffffffff8144ee70
#endif

#ifndef PCIBIOS_SCAN_SPECIFIC_BUS
#define PCIBIOS_SCAN_SPECIFIC_BUS 0xffffffff8144eec0
#endif

#ifndef EISA_SET_LEVEL_IRQ
#define EISA_SET_LEVEL_IRQ 0xffffffff8144f830
#endif

#ifndef PCIBIOS_PENALIZE_ISA_IRQ
#define PCIBIOS_PENALIZE_ISA_IRQ 0xffffffff81450120
#endif

#ifndef MP_SHOULD_KEEP_IRQ
#define MP_SHOULD_KEEP_IRQ 0xffffffff81450170
#endif

#ifndef RAW_PCI_READ
#define RAW_PCI_READ 0xffffffff81450190
#endif

#ifndef RAW_PCI_WRITE
#define RAW_PCI_WRITE 0xffffffff81450210
#endif

#ifndef PCIBIOS_FIXUP_BUS
#define PCIBIOS_FIXUP_BUS 0xffffffff81450290
#endif

#ifndef PCIBIOS_ADD_BUS
#define PCIBIOS_ADD_BUS 0xffffffff81450350
#endif

#ifndef PCIBIOS_REMOVE_BUS
#define PCIBIOS_REMOVE_BUS 0xffffffff81450370
#endif

#ifndef PCIBIOS_SCAN_ROOT
#define PCIBIOS_SCAN_ROOT 0xffffffff81450390
#endif

#ifndef PCIBIOS_ASSIGN_ALL_BUSSES
#define PCIBIOS_ASSIGN_ALL_BUSSES 0xffffffff81450450
#endif

#ifndef PCIBIOS_ADD_DEVICE
#define PCIBIOS_ADD_DEVICE 0xffffffff81450470
#endif

#ifndef PCIBIOS_ENABLE_DEVICE
#define PCIBIOS_ENABLE_DEVICE 0xffffffff81450540
#endif

#ifndef PCIBIOS_DISABLE_DEVICE
#define PCIBIOS_DISABLE_DEVICE 0xffffffff81450570
#endif

#ifndef PCI_EXT_CFG_AVAIL
#define PCI_EXT_CFG_AVAIL 0xffffffff814505a0
#endif

#ifndef READ_PCI_CONFIG
#define READ_PCI_CONFIG 0xffffffff814505c0
#endif

#ifndef READ_PCI_CONFIG_BYTE
#define READ_PCI_CONFIG_BYTE 0xffffffff81450600
#endif

#ifndef READ_PCI_CONFIG_16
#define READ_PCI_CONFIG_16 0xffffffff81450640
#endif

#ifndef WRITE_PCI_CONFIG
#define WRITE_PCI_CONFIG 0xffffffff81450680
#endif

#ifndef WRITE_PCI_CONFIG_BYTE
#define WRITE_PCI_CONFIG_BYTE 0xffffffff814506c0
#endif

#ifndef WRITE_PCI_CONFIG_16
#define WRITE_PCI_CONFIG_16 0xffffffff81450700
#endif

#ifndef EARLY_PCI_ALLOWED
#define EARLY_PCI_ALLOWED 0xffffffff81450750
#endif

#ifndef EARLY_DUMP_PCI_DEVICE
#define EARLY_DUMP_PCI_DEVICE 0xffffffff81450770
#endif

#ifndef EARLY_DUMP_PCI_DEVICES
#define EARLY_DUMP_PCI_DEVICES 0xffffffff81450830
#endif

#ifndef X86_PCI_ROOT_BUS_NODE
#define X86_PCI_ROOT_BUS_NODE 0xffffffff81450930
#endif

#ifndef X86_PCI_ROOT_BUS_RESOURCES
#define X86_PCI_ROOT_BUS_RESOURCES 0xffffffff81450990
#endif

#ifndef UPDATE_RES
#define UPDATE_RES 0xffffffff81450ac0
#endif

#ifndef SAVE_PROCESSOR_STATE
#define SAVE_PROCESSOR_STATE 0xffffffff81450c90
#endif

#ifndef RESTORE_PROCESSOR_STATE
#define RESTORE_PROCESSOR_STATE 0xffffffff81450e20
#endif

#ifndef SWSUSP_ARCH_RESUME
#define SWSUSP_ARCH_RESUME 0xffffffff814510a0
#endif

#ifndef PFN_IS_NOSAVE
#define PFN_IS_NOSAVE 0xffffffff814511a0
#endif

#ifndef ARCH_HIBERNATION_HEADER_SAVE
#define ARCH_HIBERNATION_HEADER_SAVE 0xffffffff814511e0
#endif

#ifndef ARCH_HIBERNATION_HEADER_RESTORE
#define ARCH_HIBERNATION_HEADER_RESTORE 0xffffffff81451220
#endif

#ifndef SWSUSP_ARCH_SUSPEND
#define SWSUSP_ARCH_SUSPEND 0xffffffff81451260
#endif

#ifndef RESTORE_IMAGE
#define RESTORE_IMAGE 0xffffffff814512d0
#endif

#ifndef CORE_RESTORE_CODE
#define CORE_RESTORE_CODE 0xffffffff81451330
#endif

#ifndef RESTORE_REGISTERS
#define RESTORE_REGISTERS 0xffffffff81451350
#endif

#ifndef FB_IS_PRIMARY_DEVICE
#define FB_IS_PRIMARY_DEVICE 0xffffffff814513d0
#endif

#ifndef SOCK_FROM_FILE
#define SOCK_FROM_FILE 0xffffffff81451420
#endif

#ifndef __SOCK_TX_TIMESTAMP
#define __SOCK_TX_TIMESTAMP 0xffffffff81451450
#endif

#ifndef KERNEL_BIND
#define KERNEL_BIND 0xffffffff814514d0
#endif

#ifndef KERNEL_LISTEN
#define KERNEL_LISTEN 0xffffffff814514f0
#endif

#ifndef KERNEL_CONNECT
#define KERNEL_CONNECT 0xffffffff81451510
#endif

#ifndef KERNEL_GETSOCKNAME
#define KERNEL_GETSOCKNAME 0xffffffff81451530
#endif

#ifndef KERNEL_GETPEERNAME
#define KERNEL_GETPEERNAME 0xffffffff81451550
#endif

#ifndef KERNEL_SOCK_IOCTL
#define KERNEL_SOCK_IOCTL 0xffffffff81451570
#endif

#ifndef KERNEL_SOCK_SHUTDOWN
#define KERNEL_SOCK_SHUTDOWN 0xffffffff814515c0
#endif

#ifndef SOCK_ALLOC_FILE
#define SOCK_ALLOC_FILE 0xffffffff81451620
#endif

#ifndef BRIOCTL_SET
#define BRIOCTL_SET 0xffffffff81452810
#endif

#ifndef VLAN_IOCTL_SET
#define VLAN_IOCTL_SET 0xffffffff81452840
#endif

#ifndef DLCI_IOCTL_SET
#define DLCI_IOCTL_SET 0xffffffff81452870
#endif

#ifndef SOCKFD_LOOKUP
#define SOCKFD_LOOKUP 0xffffffff814528a0
#endif

#ifndef __SOCK_RECV_TIMESTAMP
#define __SOCK_RECV_TIMESTAMP 0xffffffff814528f0
#endif

#ifndef SOCK_WAKE_ASYNC
#define SOCK_WAKE_ASYNC 0xffffffff81452c30
#endif

#ifndef KERNEL_SETSOCKOPT
#define KERNEL_SETSOCKOPT 0xffffffff81452d40
#endif

#ifndef KERNEL_GETSOCKOPT
#define KERNEL_GETSOCKOPT 0xffffffff81452da0
#endif

#ifndef SOCK_REGISTER
#define SOCK_REGISTER 0xffffffff81452e00
#endif

#ifndef KERNEL_SENDPAGE
#define KERNEL_SENDPAGE 0xffffffff81453000
#endif

#ifndef SOCK_RELEASE
#define SOCK_RELEASE 0xffffffff81453060
#endif

#ifndef SOCK_CREATE_LITE
#define SOCK_CREATE_LITE 0xffffffff81453110
#endif

#ifndef __SOCK_CREATE
#define __SOCK_CREATE 0xffffffff814531a0
#endif

#ifndef SOCK_CREATE
#define SOCK_CREATE 0xffffffff814533f0
#endif

#ifndef SOCK_CREATE_KERN
#define SOCK_CREATE_KERN 0xffffffff81453430
#endif

#ifndef __SOCK_RECV_WIFI_STATUS
#define __SOCK_RECV_WIFI_STATUS 0xffffffff81453900
#endif

#ifndef __SOCK_RECV_TS_AND_DROPS
#define __SOCK_RECV_TS_AND_DROPS 0xffffffff81453950
#endif

#ifndef SOCK_RECVMSG
#define SOCK_RECVMSG 0xffffffff81453a20
#endif

#ifndef KERNEL_RECVMSG
#define KERNEL_RECVMSG 0xffffffff81453b60
#endif

#ifndef KERNEL_ACCEPT
#define KERNEL_ACCEPT 0xffffffff81453d20
#endif

#ifndef SOCK_UNREGISTER
#define SOCK_UNREGISTER 0xffffffff81453dc0
#endif

#ifndef SOCK_SENDMSG
#define SOCK_SENDMSG 0xffffffff81453f30
#endif

#ifndef KERNEL_SENDMSG
#define KERNEL_SENDMSG 0xffffffff81454070
#endif

#ifndef MOVE_ADDR_TO_KERNEL
#define MOVE_ADDR_TO_KERNEL 0xffffffff81454ad0
#endif

#ifndef SYS_SOCKET
#define SYS_SOCKET 0xffffffff81454b10
#endif

#ifndef SYS_SOCKET
#define SYS_SOCKET 0xffffffff81454b10
#endif

#ifndef SYS_SOCKETPAIR
#define SYS_SOCKETPAIR 0xffffffff81454be0
#endif

#ifndef SYS_SOCKETPAIR
#define SYS_SOCKETPAIR 0xffffffff81454be0
#endif

#ifndef SYS_BIND
#define SYS_BIND 0xffffffff81454e20
#endif

#ifndef SYS_BIND
#define SYS_BIND 0xffffffff81454e20
#endif

#ifndef SYS_LISTEN
#define SYS_LISTEN 0xffffffff81454e40
#endif

#ifndef SYS_LISTEN
#define SYS_LISTEN 0xffffffff81454e40
#endif

#ifndef SYS_ACCEPT4
#define SYS_ACCEPT4 0xffffffff81454ed0
#endif

#ifndef SYS_ACCEPT4
#define SYS_ACCEPT4 0xffffffff81454ed0
#endif

#ifndef SYS_ACCEPT
#define SYS_ACCEPT 0xffffffff81454ef0
#endif

#ifndef SYS_ACCEPT
#define SYS_ACCEPT 0xffffffff81454ef0
#endif

#ifndef SYS_CONNECT
#define SYS_CONNECT 0xffffffff81454f10
#endif

#ifndef SYS_CONNECT
#define SYS_CONNECT 0xffffffff81454f10
#endif

#ifndef SYS_GETSOCKNAME
#define SYS_GETSOCKNAME 0xffffffff81454f30
#endif

#ifndef SYS_GETSOCKNAME
#define SYS_GETSOCKNAME 0xffffffff81454f30
#endif

#ifndef SYS_GETPEERNAME
#define SYS_GETPEERNAME 0xffffffff81454f50
#endif

#ifndef SYS_GETPEERNAME
#define SYS_GETPEERNAME 0xffffffff81454f50
#endif

#ifndef SYS_SENDTO
#define SYS_SENDTO 0xffffffff81454f70
#endif

#ifndef SYS_SENDTO
#define SYS_SENDTO 0xffffffff81454f70
#endif

#ifndef SYS_SEND
#define SYS_SEND 0xffffffff81454f90
#endif

#ifndef SYS_SEND
#define SYS_SEND 0xffffffff81454f90
#endif

#ifndef SYS_RECVFROM
#define SYS_RECVFROM 0xffffffff81454fb0
#endif

#ifndef SYS_RECVFROM
#define SYS_RECVFROM 0xffffffff81454fb0
#endif

#ifndef SYS_RECV
#define SYS_RECV 0xffffffff81454fd0
#endif

#ifndef SYS_RECV
#define SYS_RECV 0xffffffff81454fd0
#endif

#ifndef SYS_SETSOCKOPT
#define SYS_SETSOCKOPT 0xffffffff81454ff0
#endif

#ifndef SYS_SETSOCKOPT
#define SYS_SETSOCKOPT 0xffffffff81454ff0
#endif

#ifndef SYS_GETSOCKOPT
#define SYS_GETSOCKOPT 0xffffffff814550c0
#endif

#ifndef SYS_GETSOCKOPT
#define SYS_GETSOCKOPT 0xffffffff814550c0
#endif

#ifndef SYS_SHUTDOWN
#define SYS_SHUTDOWN 0xffffffff81455180
#endif

#ifndef SYS_SHUTDOWN
#define SYS_SHUTDOWN 0xffffffff81455180
#endif

#ifndef __SYS_SENDMSG
#define __SYS_SENDMSG 0xffffffff81455200
#endif

#ifndef SYS_SENDMSG
#define SYS_SENDMSG 0xffffffff81455280
#endif

#ifndef SYS_SENDMSG
#define SYS_SENDMSG 0xffffffff81455280
#endif

#ifndef __SYS_SENDMMSG
#define __SYS_SENDMMSG 0xffffffff814552b0
#endif

#ifndef SYS_SENDMMSG
#define SYS_SENDMMSG 0xffffffff81455440
#endif

#ifndef SYS_SENDMMSG
#define SYS_SENDMMSG 0xffffffff81455440
#endif

#ifndef __SYS_RECVMSG
#define __SYS_RECVMSG 0xffffffff81455470
#endif

#ifndef SYS_RECVMSG
#define SYS_RECVMSG 0xffffffff814554f0
#endif

#ifndef SYS_RECVMSG
#define SYS_RECVMSG 0xffffffff814554f0
#endif

#ifndef __SYS_RECVMMSG
#define __SYS_RECVMMSG 0xffffffff81455520
#endif

#ifndef SYS_RECVMMSG
#define SYS_RECVMMSG 0xffffffff814557b0
#endif

#ifndef SYS_RECVMMSG
#define SYS_RECVMMSG 0xffffffff814557b0
#endif

#ifndef SYS_SOCKETCALL
#define SYS_SOCKETCALL 0xffffffff81455870
#endif

#ifndef SYS_SOCKETCALL
#define SYS_SOCKETCALL 0xffffffff81455870
#endif

#ifndef SOCKET_SEQ_SHOW
#define SOCKET_SEQ_SHOW 0xffffffff81456070
#endif

#ifndef SOCK_RFREE
#define SOCK_RFREE 0xffffffff81456100
#endif

#ifndef __SK_MEM_RECLAIM
#define __SK_MEM_RECLAIM 0xffffffff81456130
#endif

#ifndef SOCK_NO_BIND
#define SOCK_NO_BIND 0xffffffff81456190
#endif

#ifndef SOCK_NO_CONNECT
#define SOCK_NO_CONNECT 0xffffffff814561a0
#endif

#ifndef SOCK_NO_SOCKETPAIR
#define SOCK_NO_SOCKETPAIR 0xffffffff814561b0
#endif

#ifndef SOCK_NO_ACCEPT
#define SOCK_NO_ACCEPT 0xffffffff814561c0
#endif

#ifndef SOCK_NO_GETNAME
#define SOCK_NO_GETNAME 0xffffffff814561d0
#endif

#ifndef SOCK_NO_POLL
#define SOCK_NO_POLL 0xffffffff814561e0
#endif

#ifndef SOCK_NO_IOCTL
#define SOCK_NO_IOCTL 0xffffffff814561f0
#endif

#ifndef SOCK_NO_LISTEN
#define SOCK_NO_LISTEN 0xffffffff81456200
#endif

#ifndef SOCK_NO_SHUTDOWN
#define SOCK_NO_SHUTDOWN 0xffffffff81456210
#endif

#ifndef SOCK_NO_SETSOCKOPT
#define SOCK_NO_SETSOCKOPT 0xffffffff81456220
#endif

#ifndef SOCK_NO_GETSOCKOPT
#define SOCK_NO_GETSOCKOPT 0xffffffff81456230
#endif

#ifndef SOCK_NO_SENDMSG
#define SOCK_NO_SENDMSG 0xffffffff81456240
#endif

#ifndef SOCK_NO_RECVMSG
#define SOCK_NO_RECVMSG 0xffffffff81456250
#endif

#ifndef SOCK_NO_MMAP
#define SOCK_NO_MMAP 0xffffffff81456260
#endif

#ifndef SOCK_COMMON_GETSOCKOPT
#define SOCK_COMMON_GETSOCKOPT 0xffffffff81456270
#endif

#ifndef COMPAT_SOCK_COMMON_GETSOCKOPT
#define COMPAT_SOCK_COMMON_GETSOCKOPT 0xffffffff81456290
#endif

#ifndef SOCK_COMMON_RECVMSG
#define SOCK_COMMON_RECVMSG 0xffffffff814562c0
#endif

#ifndef SOCK_COMMON_SETSOCKOPT
#define SOCK_COMMON_SETSOCKOPT 0xffffffff81456300
#endif

#ifndef COMPAT_SOCK_COMMON_SETSOCKOPT
#define COMPAT_SOCK_COMMON_SETSOCKOPT 0xffffffff81456320
#endif

#ifndef SK_NS_CAPABLE
#define SK_NS_CAPABLE 0xffffffff81456350
#endif

#ifndef SK_CAPABLE
#define SK_CAPABLE 0xffffffff81456390
#endif

#ifndef SK_NET_CAPABLE
#define SK_NET_CAPABLE 0xffffffff814563b0
#endif

#ifndef SK_SET_MEMALLOC
#define SK_SET_MEMALLOC 0xffffffff814563d0
#endif

#ifndef SK_CLEAR_MEMALLOC
#define SK_CLEAR_MEMALLOC 0xffffffff81456400
#endif

#ifndef SOCK_PROT_INUSE_ADD
#define SOCK_PROT_INUSE_ADD 0xffffffff81456460
#endif

#ifndef __SK_DST_CHECK
#define __SK_DST_CHECK 0xffffffff81456480
#endif

#ifndef SK_DST_CHECK
#define SK_DST_CHECK 0xffffffff81456500
#endif

#ifndef SK_SETUP_CAPS
#define SK_SETUP_CAPS 0xffffffff814565e0
#endif

#ifndef SK_PROT_CLEAR_PORTADDR_NULLS
#define SK_PROT_CLEAR_PORTADDR_NULLS 0xffffffff814566c0
#endif

#ifndef SOCK_I_UID
#define SOCK_I_UID 0xffffffff814568b0
#endif

#ifndef SOCK_I_INO
#define SOCK_I_INO 0xffffffff81456900
#endif

#ifndef SOCK_KZFREE_S
#define SOCK_KZFREE_S 0xffffffff81456950
#endif

#ifndef SOCK_NO_SENDPAGE
#define SOCK_NO_SENDPAGE 0xffffffff814569b0
#endif

#ifndef SOCK_INIT_DATA
#define SOCK_INIT_DATA 0xffffffff81456a40
#endif

#ifndef LOCK_SOCK_NESTED
#define LOCK_SOCK_NESTED 0xffffffff81456eb0
#endif

#ifndef SOCK_RECV_ERRQUEUE
#define SOCK_RECV_ERRQUEUE 0xffffffff81456f00
#endif

#ifndef SOCK_PROT_INUSE_GET
#define SOCK_PROT_INUSE_GET 0xffffffff81457040
#endif

#ifndef __SK_MEM_SCHEDULE
#define __SK_MEM_SCHEDULE 0xffffffff81457240
#endif

#ifndef SK_ALLOC
#define SK_ALLOC 0xffffffff814574b0
#endif

#ifndef PROTO_UNREGISTER
#define PROTO_UNREGISTER 0xffffffff814575e0
#endif

#ifndef __SK_BACKLOG_RCV
#define __SK_BACKLOG_RCV 0xffffffff814576b0
#endif

#ifndef SK_MC_LOOP
#define SK_MC_LOOP 0xffffffff81457710
#endif

#ifndef SKB_PAGE_FRAG_REFILL
#define SKB_PAGE_FRAG_REFILL 0xffffffff81457950
#endif

#ifndef SK_SEND_SIGURG
#define SK_SEND_SIGURG 0xffffffff81457a20
#endif

#ifndef SK_RESET_TIMER
#define SK_RESET_TIMER 0xffffffff81457a80
#endif

#ifndef SK_STOP_TIMER
#define SK_STOP_TIMER 0xffffffff81457aa0
#endif

#ifndef LOCK_SOCK_FAST
#define LOCK_SOCK_FAST 0xffffffff81457ac0
#endif

#ifndef PROTO_REGISTER
#define PROTO_REGISTER 0xffffffff81457b20
#endif

#ifndef SK_PAGE_FRAG_REFILL
#define SK_PAGE_FRAG_REFILL 0xffffffff81458170
#endif

#ifndef SOCK_KMALLOC
#define SOCK_KMALLOC 0xffffffff814581f0
#endif

#ifndef SOCK_UPDATE_NETPRIOIDX
#define SOCK_UPDATE_NETPRIOIDX 0xffffffff81458250
#endif

#ifndef SK_FREE
#define SK_FREE 0xffffffff814583c0
#endif

#ifndef SK_COMMON_RELEASE
#define SK_COMMON_RELEASE 0xffffffff814583f0
#endif

#ifndef SK_CLONE_LOCK
#define SK_CLONE_LOCK 0xffffffff81458500
#endif

#ifndef SOCK_WFREE
#define SOCK_WFREE 0xffffffff81458850
#endif

#ifndef SOCK_ALLOC_SEND_PSKB
#define SOCK_ALLOC_SEND_PSKB 0xffffffff814588c0
#endif

#ifndef SOCK_ALLOC_SEND_SKB
#define SOCK_ALLOC_SEND_SKB 0xffffffff81458b20
#endif

#ifndef SOCK_KFREE_S
#define SOCK_KFREE_S 0xffffffff81458b40
#endif

#ifndef SOCK_EFREE
#define SOCK_EFREE 0xffffffff81458ba0
#endif

#ifndef RELEASE_SOCK
#define RELEASE_SOCK 0xffffffff81458bd0
#endif

#ifndef SK_WAIT_DATA
#define SK_WAIT_DATA 0xffffffff81458d40
#endif

#ifndef SK_RELEASE_KERNEL
#define SK_RELEASE_KERNEL 0xffffffff81458e10
#endif

#ifndef SK_RECEIVE_SKB
#define SK_RECEIVE_SKB 0xffffffff81458e60
#endif

#ifndef SOCK_QUEUE_RCV_SKB
#define SOCK_QUEUE_RCV_SKB 0xffffffff81458fa0
#endif

#ifndef SOCK_WMALLOC
#define SOCK_WMALLOC 0xffffffff81459180
#endif

#ifndef SKB_ORPHAN_PARTIAL
#define SKB_ORPHAN_PARTIAL 0xffffffff81459230
#endif

#ifndef SOCK_GETSOCKOPT
#define SOCK_GETSOCKOPT 0xffffffff814592a0
#endif

#ifndef SOCK_ENABLE_TIMESTAMP
#define SOCK_ENABLE_TIMESTAMP 0xffffffff81459a30
#endif

#ifndef SOCK_SETSOCKOPT
#define SOCK_SETSOCKOPT 0xffffffff81459a80
#endif

#ifndef SOCK_GET_TIMESTAMP
#define SOCK_GET_TIMESTAMP 0xffffffff8145a390
#endif

#ifndef SOCK_GET_TIMESTAMPNS
#define SOCK_GET_TIMESTAMPNS 0xffffffff8145a430
#endif

#ifndef REQSK_QUEUE_ALLOC
#define REQSK_QUEUE_ALLOC 0xffffffff8145a4d0
#endif

#ifndef __REQSK_QUEUE_DESTROY
#define __REQSK_QUEUE_DESTROY 0xffffffff8145a5b0
#endif

#ifndef REQSK_QUEUE_DESTROY
#define REQSK_QUEUE_DESTROY 0xffffffff8145a5d0
#endif

#ifndef REQSK_FASTOPEN_REMOVE
#define REQSK_FASTOPEN_REMOVE 0xffffffff8145a820
#endif

#ifndef SKB_COALESCE_RX_FRAG
#define SKB_COALESCE_RX_FRAG 0xffffffff8145a9b0
#endif

#ifndef SKB_ZEROCOPY_HEADLEN
#define SKB_ZEROCOPY_HEADLEN 0xffffffff8145aa50
#endif

#ifndef SKB_PREPARE_SEQ_READ
#define SKB_PREPARE_SEQ_READ 0xffffffff8145aac0
#endif

#ifndef SKB_ABORT_SEQ_READ
#define SKB_ABORT_SEQ_READ 0xffffffff8145aaf0
#endif

#ifndef SKB_GSO_TRANSPORT_SEGLEN
#define SKB_GSO_TRANSPORT_SEGLEN 0xffffffff8145abd0
#endif

#ifndef SKB_SEQ_READ
#define SKB_SEQ_READ 0xffffffff8145ac50
#endif

#ifndef SKB_COPY_BITS
#define SKB_COPY_BITS 0xffffffff8145af30
#endif

#ifndef SKB_STORE_BITS
#define SKB_STORE_BITS 0xffffffff8145b1e0
#endif

#ifndef __SKB_CHECKSUM
#define __SKB_CHECKSUM 0xffffffff8145b490
#endif

#ifndef SKB_CHECKSUM
#define SKB_CHECKSUM 0xffffffff8145b750
#endif

#ifndef SKB_PUSH
#define SKB_PUSH 0xffffffff8145b7f0
#endif

#ifndef SKB_COPY_AND_CSUM_BITS
#define SKB_COPY_AND_CSUM_BITS 0xffffffff8145b850
#endif

#ifndef SKB_COPY_AND_CSUM_DEV
#define SKB_COPY_AND_CSUM_DEV 0xffffffff8145bb50
#endif

#ifndef SKB_DEQUEUE
#define SKB_DEQUEUE 0xffffffff8145bc30
#endif

#ifndef SKB_DEQUEUE_TAIL
#define SKB_DEQUEUE_TAIL 0xffffffff8145bca0
#endif

#ifndef SKB_QUEUE_HEAD
#define SKB_QUEUE_HEAD 0xffffffff8145bd10
#endif

#ifndef SKB_QUEUE_TAIL
#define SKB_QUEUE_TAIL 0xffffffff8145bd50
#endif

#ifndef SKB_UNLINK
#define SKB_UNLINK 0xffffffff8145bda0
#endif

#ifndef SKB_APPEND
#define SKB_APPEND 0xffffffff8145bdf0
#endif

#ifndef SKB_INSERT
#define SKB_INSERT 0xffffffff8145be40
#endif

#ifndef SKB_TX_ERROR
#define SKB_TX_ERROR 0xffffffff8145bea0
#endif

#ifndef __KFREE_SKB
#define __KFREE_SKB 0xffffffff8145c090
#endif

#ifndef KFREE_SKB
#define KFREE_SKB 0xffffffff8145c0b0
#endif

#ifndef KFREE_SKB_LIST
#define KFREE_SKB_LIST 0xffffffff8145c130
#endif

#ifndef SKB_QUEUE_PURGE
#define SKB_QUEUE_PURGE 0xffffffff8145c220
#endif

#ifndef CONSUME_SKB
#define CONSUME_SKB 0xffffffff8145c250
#endif

#ifndef KFREE_SKB_PARTIAL
#define KFREE_SKB_PARTIAL 0xffffffff8145c2d0
#endif

#ifndef SKB_TO_SGVEC_NOMARK
#define SKB_TO_SGVEC_NOMARK 0xffffffff8145c580
#endif

#ifndef SKB_TO_SGVEC
#define SKB_TO_SGVEC 0xffffffff8145c5a0
#endif

#ifndef SKB_PUT
#define SKB_PUT 0xffffffff8145c5d0
#endif

#ifndef PSKB_PUT
#define PSKB_PUT 0xffffffff8145c630
#endif

#ifndef SOCK_DEQUEUE_ERR_SKB
#define SOCK_DEQUEUE_ERR_SKB 0xffffffff8145c660
#endif

#ifndef SKB_PARTIAL_CSUM_SET
#define SKB_PARTIAL_CSUM_SET 0xffffffff8145c740
#endif

#ifndef __SKB_WARN_LRO_FORWARDING
#define __SKB_WARN_LRO_FORWARDING 0xffffffff8145c7f0
#endif

#ifndef SKB_MORPH
#define SKB_MORPH 0xffffffff8145cac0
#endif

#ifndef SKB_FIND_TEXT
#define SKB_FIND_TEXT 0xffffffff8145cb80
#endif

#ifndef NETDEV_ALLOC_FRAG
#define NETDEV_ALLOC_FRAG 0xffffffff8145cde0
#endif

#ifndef NAPI_ALLOC_FRAG
#define NAPI_ALLOC_FRAG 0xffffffff8145ce00
#endif

#ifndef SKB_TRIM
#define SKB_TRIM 0xffffffff8145ce20
#endif

#ifndef SKB_PULL_RCSUM
#define SKB_PULL_RCSUM 0xffffffff8145ce80
#endif

#ifndef SOCK_QUEUE_ERR_SKB
#define SOCK_QUEUE_ERR_SKB 0xffffffff8145cf10
#endif

#ifndef SKB_COMPLETE_WIFI_ACK
#define SKB_COMPLETE_WIFI_ACK 0xffffffff8145d070
#endif

#ifndef SKB_COMPLETE_TX_TIMESTAMP
#define SKB_COMPLETE_TX_TIMESTAMP 0xffffffff8145d110
#endif

#ifndef SKB_PULL
#define SKB_PULL 0xffffffff8145d190
#endif

#ifndef SKB_ADD_RX_FRAG
#define SKB_ADD_RX_FRAG 0xffffffff8145d1e0
#endif

#ifndef __ALLOC_SKB
#define __ALLOC_SKB 0xffffffff8145d270
#endif

#ifndef SKB_COPY
#define SKB_COPY 0xffffffff8145d460
#endif

#ifndef SKB_COPY_EXPAND
#define SKB_COPY_EXPAND 0xffffffff8145d510
#endif

#ifndef SKB_COPY_UBUFS
#define SKB_COPY_UBUFS 0xffffffff8145d600
#endif

#ifndef SKB_CLONE
#define SKB_CLONE 0xffffffff8145d810
#endif

#ifndef SKB_CLONE_SK
#define SKB_CLONE_SK 0xffffffff8145d8c0
#endif

#ifndef __SKB_TSTAMP_TX
#define __SKB_TSTAMP_TX 0xffffffff8145d940
#endif

#ifndef SKB_TSTAMP_TX
#define SKB_TSTAMP_TX 0xffffffff8145da80
#endif

#ifndef ALLOC_SKB_WITH_FRAGS
#define ALLOC_SKB_WITH_FRAGS 0xffffffff8145daa0
#endif

#ifndef PSKB_EXPAND_HEAD
#define PSKB_EXPAND_HEAD 0xffffffff8145dc80
#endif

#ifndef ___PSKB_TRIM
#define ___PSKB_TRIM 0xffffffff8145ded0
#endif

#ifndef SKB_VLAN_PUSH
#define SKB_VLAN_PUSH 0xffffffff8145e210
#endif

#ifndef __PSKB_COPY_FCLONE
#define __PSKB_COPY_FCLONE 0xffffffff8145e400
#endif

#ifndef SKB_REALLOC_HEADROOM
#define SKB_REALLOC_HEADROOM 0xffffffff8145e620
#endif

#ifndef SKB_APPEND_DATATO_FRAGS
#define SKB_APPEND_DATATO_FRAGS 0xffffffff8145e6b0
#endif

#ifndef __PSKB_PULL_TAIL
#define __PSKB_PULL_TAIL 0xffffffff8145ece0
#endif

#ifndef SKB_PAD
#define SKB_PAD 0xffffffff8145f030
#endif

#ifndef SKB_COW_DATA
#define SKB_COW_DATA 0xffffffff8145f160
#endif

#ifndef SKB_CHECKSUM_SETUP
#define SKB_CHECKSUM_SETUP 0xffffffff8145f670
#endif

#ifndef SKB_VLAN_UNTAG
#define SKB_VLAN_UNTAG 0xffffffff8145f920
#endif

#ifndef SKB_ENSURE_WRITABLE
#define SKB_ENSURE_WRITABLE 0xffffffff8145fb00
#endif

#ifndef SKB_VLAN_POP
#define SKB_VLAN_POP 0xffffffff8145fd90
#endif

#ifndef SKB_SPLIT
#define SKB_SPLIT 0xffffffff8145fe40
#endif

#ifndef SKB_SEGMENT
#define SKB_SEGMENT 0xffffffff81460140
#endif

#ifndef SKB_TRY_COALESCE
#define SKB_TRY_COALESCE 0xffffffff81460b90
#endif

#ifndef SKB_ZEROCOPY
#define SKB_ZEROCOPY 0xffffffff81460fe0
#endif

#ifndef SKB_SCRUB_PACKET
#define SKB_SCRUB_PACKET 0xffffffff81461370
#endif

#ifndef __ALLOC_SKB_HEAD
#define __ALLOC_SKB_HEAD 0xffffffff814614a0
#endif

#ifndef __BUILD_SKB
#define __BUILD_SKB 0xffffffff81461530
#endif

#ifndef BUILD_SKB
#define BUILD_SKB 0xffffffff81461630
#endif

#ifndef __NETDEV_ALLOC_SKB
#define __NETDEV_ALLOC_SKB 0xffffffff814617b0
#endif

#ifndef __NAPI_ALLOC_SKB
#define __NAPI_ALLOC_SKB 0xffffffff814617f0
#endif

#ifndef SKB_SPLICE_BITS
#define SKB_SPLICE_BITS 0xffffffff81461830
#endif

#ifndef SKB_SHIFT
#define SKB_SHIFT 0xffffffff81461960
#endif

#ifndef SKB_GRO_RECEIVE
#define SKB_GRO_RECEIVE 0xffffffff81461e10
#endif

#ifndef DATAGRAM_POLL
#define DATAGRAM_POLL 0xffffffff814621a0
#endif

#ifndef SKB_FREE_DATAGRAM_LOCKED
#define SKB_FREE_DATAGRAM_LOCKED 0xffffffff814622d0
#endif

#ifndef SKB_COPY_DATAGRAM_ITER
#define SKB_COPY_DATAGRAM_ITER 0xffffffff814623b0
#endif

#ifndef SKB_COPY_DATAGRAM_FROM_ITER
#define SKB_COPY_DATAGRAM_FROM_ITER 0xffffffff81462620
#endif

#ifndef ZEROCOPY_SG_FROM_ITER
#define ZEROCOPY_SG_FROM_ITER 0xffffffff81462830
#endif

#ifndef __SKB_CHECKSUM_COMPLETE_HEAD
#define __SKB_CHECKSUM_COMPLETE_HEAD 0xffffffff814629f0
#endif

#ifndef __SKB_CHECKSUM_COMPLETE
#define __SKB_CHECKSUM_COMPLETE 0xffffffff81462a90
#endif

#ifndef SKB_COPY_AND_CSUM_DATAGRAM_MSG
#define SKB_COPY_AND_CSUM_DATAGRAM_MSG 0xffffffff81462ee0
#endif

#ifndef __SKB_RECV_DATAGRAM
#define __SKB_RECV_DATAGRAM 0xffffffff81462fd0
#endif

#ifndef SKB_RECV_DATAGRAM
#define SKB_RECV_DATAGRAM 0xffffffff81463550
#endif

#ifndef SKB_FREE_DATAGRAM
#define SKB_FREE_DATAGRAM 0xffffffff81463590
#endif

#ifndef SKB_KILL_DATAGRAM
#define SKB_KILL_DATAGRAM 0xffffffff814635d0
#endif

#ifndef SK_STREAM_WAIT_CONNECT
#define SK_STREAM_WAIT_CONNECT 0xffffffff814636b0
#endif

#ifndef SK_STREAM_WAIT_CLOSE
#define SK_STREAM_WAIT_CLOSE 0xffffffff81463890
#endif

#ifndef SK_STREAM_ERROR
#define SK_STREAM_ERROR 0xffffffff81463980
#endif

#ifndef SK_STREAM_KILL_QUEUES
#define SK_STREAM_KILL_QUEUES 0xffffffff814639e0
#endif

#ifndef SK_STREAM_WRITE_SPACE
#define SK_STREAM_WRITE_SPACE 0xffffffff81463b40
#endif

#ifndef SK_STREAM_WAIT_MEMORY
#define SK_STREAM_WAIT_MEMORY 0xffffffff81463c00
#endif

#ifndef __SCM_DESTROY
#define __SCM_DESTROY 0xffffffff81463ee0
#endif

#ifndef __SCM_SEND
#define __SCM_SEND 0xffffffff81463f40
#endif

#ifndef PUT_CMSG
#define PUT_CMSG 0xffffffff81464340
#endif

#ifndef SCM_DETACH_FDS
#define SCM_DETACH_FDS 0xffffffff81464430
#endif

#ifndef SCM_FP_DUP
#define SCM_FP_DUP 0xffffffff81464680
#endif

#ifndef __GNET_STATS_COPY_BASIC
#define __GNET_STATS_COPY_BASIC 0xffffffff81464740
#endif

#ifndef GNET_STATS_COPY_QUEUE
#define GNET_STATS_COPY_QUEUE 0xffffffff81464770
#endif

#ifndef GNET_STATS_COPY_APP
#define GNET_STATS_COPY_APP 0xffffffff814648c0
#endif

#ifndef GNET_STATS_START_COPY_COMPAT
#define GNET_STATS_START_COPY_COMPAT 0xffffffff81464960
#endif

#ifndef GNET_STATS_START_COPY
#define GNET_STATS_START_COPY 0xffffffff81464a40
#endif

#ifndef GNET_STATS_FINISH_COPY
#define GNET_STATS_FINISH_COPY 0xffffffff81464a60
#endif

#ifndef GNET_STATS_COPY_RATE_EST
#define GNET_STATS_COPY_RATE_EST 0xffffffff81464b20
#endif

#ifndef GNET_STATS_COPY_BASIC
#define GNET_STATS_COPY_BASIC 0xffffffff81464bf0
#endif

#ifndef GEN_KILL_ESTIMATOR
#define GEN_KILL_ESTIMATOR 0xffffffff81464e50
#endif

#ifndef GEN_ESTIMATOR_ACTIVE
#define GEN_ESTIMATOR_ACTIVE 0xffffffff81464f30
#endif

#ifndef GEN_NEW_ESTIMATOR
#define GEN_NEW_ESTIMATOR 0xffffffff81464fd0
#endif

#ifndef GEN_REPLACE_ESTIMATOR
#define GEN_REPLACE_ESTIMATOR 0xffffffff814651f0
#endif

#ifndef __PUT_NET
#define __PUT_NET 0xffffffff814652f0
#endif

#ifndef GET_NET_NS_BY_FD
#define GET_NET_NS_BY_FD 0xffffffff81465350
#endif

#ifndef GET_NET_NS_BY_PID
#define GET_NET_NS_BY_PID 0xffffffff814653a0
#endif

#ifndef UNREGISTER_PERNET_SUBSYS
#define UNREGISTER_PERNET_SUBSYS 0xffffffff81465640
#endif

#ifndef UNREGISTER_PERNET_DEVICE
#define UNREGISTER_PERNET_DEVICE 0xffffffff81465670
#endif

#ifndef PEERNET2ID
#define PEERNET2ID 0xffffffff81465a30
#endif

#ifndef REGISTER_PERNET_SUBSYS
#define REGISTER_PERNET_SUBSYS 0xffffffff81466220
#endif

#ifndef REGISTER_PERNET_DEVICE
#define REGISTER_PERNET_DEVICE 0xffffffff81466260
#endif

#ifndef GET_NET_NS_BY_ID
#define GET_NET_NS_BY_ID 0xffffffff814662d0
#endif

#ifndef NET_DROP_NS
#define NET_DROP_NS 0xffffffff81466330
#endif

#ifndef COPY_NET_NS
#define COPY_NET_NS 0xffffffff814665d0
#endif

#ifndef SECURE_IPV6_PORT_EPHEMERAL
#define SECURE_IPV6_PORT_EPHEMERAL 0xffffffff81466700
#endif

#ifndef SECURE_IPV4_PORT_EPHEMERAL
#define SECURE_IPV4_PORT_EPHEMERAL 0xffffffff814667b0
#endif

#ifndef SECURE_TCPV6_SEQUENCE_NUMBER
#define SECURE_TCPV6_SEQUENCE_NUMBER 0xffffffff81466830
#endif

#ifndef SECURE_DCCP_SEQUENCE_NUMBER
#define SECURE_DCCP_SEQUENCE_NUMBER 0xffffffff81466900
#endif

#ifndef SECURE_DCCPV6_SEQUENCE_NUMBER
#define SECURE_DCCPV6_SEQUENCE_NUMBER 0xffffffff814669a0
#endif

#ifndef SECURE_TCP_SEQUENCE_NUMBER
#define SECURE_TCP_SEQUENCE_NUMBER 0xffffffff81466a80
#endif

#ifndef __SKB_FLOW_GET_PORTS
#define __SKB_FLOW_GET_PORTS 0xffffffff81466b10
#endif

#ifndef FLOW_HASH_FROM_KEYS
#define FLOW_HASH_FROM_KEYS 0xffffffff81466bd0
#endif

#ifndef __SKB_FLOW_DISSECT
#define __SKB_FLOW_DISSECT 0xffffffff81466cb0
#endif

#ifndef __SKB_GET_HASH
#define __SKB_GET_HASH 0xffffffff81467230
#endif

#ifndef __SKB_TX_HASH
#define __SKB_TX_HASH 0xffffffff81467380
#endif

#ifndef __SKB_GET_POFF
#define __SKB_GET_POFF 0xffffffff81467580
#endif

#ifndef SKB_GET_POFF
#define SKB_GET_POFF 0xffffffff81467650
#endif

#ifndef NETDEV_PICK_TX
#define NETDEV_PICK_TX 0xffffffff814676b0
#endif

#ifndef DEV_GET_IFLINK
#define DEV_GET_IFLINK 0xffffffff81467f40
#endif

#ifndef __DEV_GET_BY_INDEX
#define __DEV_GET_BY_INDEX 0xffffffff81467f80
#endif

#ifndef DEV_GET_BY_INDEX_RCU
#define DEV_GET_BY_INDEX_RCU 0xffffffff81467fe0
#endif

#ifndef DEV_GET_BY_INDEX
#define DEV_GET_BY_INDEX 0xffffffff81468040
#endif

#ifndef DEV_GETFIRSTBYHWTYPE
#define DEV_GETFIRSTBYHWTYPE 0xffffffff81468060
#endif

#ifndef PASSTHRU_FEATURES_CHECK
#define PASSTHRU_FEATURES_CHECK 0xffffffff814680e0
#endif

#ifndef RPS_MAY_EXPIRE_FLOW
#define RPS_MAY_EXPIRE_FLOW 0xffffffff814680f0
#endif

#ifndef GRO_FIND_RECEIVE_BY_TYPE
#define GRO_FIND_RECEIVE_BY_TYPE 0xffffffff814681f0
#endif

#ifndef GRO_FIND_COMPLETE_BY_TYPE
#define GRO_FIND_COMPLETE_BY_TYPE 0xffffffff81468240
#endif

#ifndef NAPI_BY_ID
#define NAPI_BY_ID 0xffffffff81468290
#endif

#ifndef NETDEV_ADJACENT_GET_PRIVATE
#define NETDEV_ADJACENT_GET_PRIVATE 0xffffffff814682f0
#endif

#ifndef NETDEV_UPPER_GET_NEXT_DEV_RCU
#define NETDEV_UPPER_GET_NEXT_DEV_RCU 0xffffffff81468300
#endif

#ifndef NETDEV_ALL_UPPER_GET_NEXT_DEV_RCU
#define NETDEV_ALL_UPPER_GET_NEXT_DEV_RCU 0xffffffff81468340
#endif

#ifndef NETDEV_LOWER_GET_NEXT_PRIVATE
#define NETDEV_LOWER_GET_NEXT_PRIVATE 0xffffffff81468380
#endif

#ifndef NETDEV_LOWER_GET_NEXT_PRIVATE_RCU
#define NETDEV_LOWER_GET_NEXT_PRIVATE_RCU 0xffffffff814683b0
#endif

#ifndef NETDEV_LOWER_GET_NEXT
#define NETDEV_LOWER_GET_NEXT 0xffffffff814683f0
#endif

#ifndef NETDEV_LOWER_DEV_GET_PRIVATE
#define NETDEV_LOWER_DEV_GET_PRIVATE 0xffffffff81468420
#endif

#ifndef DEV_GET_FLAGS
#define DEV_GET_FLAGS 0xffffffff81468470
#endif

#ifndef DEV_SET_GROUP
#define DEV_SET_GROUP 0xffffffff814684e0
#endif

#ifndef DEV_CHANGE_CARRIER
#define DEV_CHANGE_CARRIER 0xffffffff814684f0
#endif

#ifndef DEV_GET_PHYS_PORT_ID
#define DEV_GET_PHYS_PORT_ID 0xffffffff81468540
#endif

#ifndef DEV_GET_PHYS_PORT_NAME
#define DEV_GET_PHYS_PORT_NAME 0xffffffff81468580
#endif

#ifndef NETDEV_SET_DEFAULT_ETHTOOL_OPS
#define NETDEV_SET_DEFAULT_ETHTOOL_OPS 0xffffffff814685c0
#endif

#ifndef NETDEV_INCREMENT_FEATURES
#define NETDEV_INCREMENT_FEATURES 0xffffffff814685e0
#endif

#ifndef NAPI_HASH_DEL
#define NAPI_HASH_DEL 0xffffffff81468630
#endif

#ifndef DEV_ADD_PACK
#define DEV_ADD_PACK 0xffffffff81468690
#endif

#ifndef DEV_ADD_OFFLOAD
#define DEV_ADD_OFFLOAD 0xffffffff81468730
#endif

#ifndef __DEV_REMOVE_PACK
#define __DEV_REMOVE_PACK 0xffffffff81468780
#endif

#ifndef NETDEV_BOOT_SETUP_CHECK
#define NETDEV_BOOT_SETUP_CHECK 0xffffffff81468860
#endif

#ifndef INIT_DUMMY_NETDEV
#define INIT_DUMMY_NETDEV 0xffffffff814688e0
#endif

#ifndef NETDEV_STATS_TO_STATS64
#define NETDEV_STATS_TO_STATS64 0xffffffff81468940
#endif

#ifndef DEV_GET_STATS
#define DEV_GET_STATS 0xffffffff81468980
#endif

#ifndef NETDEV_LOWER_GET_FIRST_PRIVATE_RCU
#define NETDEV_LOWER_GET_FIRST_PRIVATE_RCU 0xffffffff81468a90
#endif

#ifndef NETDEV_MASTER_UPPER_DEV_GET_RCU
#define NETDEV_MASTER_UPPER_DEV_GET_RCU 0xffffffff81468ad0
#endif

#ifndef DEV_GETBYHWADDR_RCU
#define DEV_GETBYHWADDR_RCU 0xffffffff81468b20
#endif

#ifndef __DEV_GETFIRSTBYHWTYPE
#define __DEV_GETFIRSTBYHWTYPE 0xffffffff81468bc0
#endif

#ifndef __DEV_GET_BY_FLAGS
#define __DEV_GET_BY_FLAGS 0xffffffff81468c40
#endif

#ifndef NETDEV_HAS_UPPER_DEV
#define NETDEV_HAS_UPPER_DEV 0xffffffff81468cd0
#endif

#ifndef NETDEV_MASTER_UPPER_DEV_GET
#define NETDEV_MASTER_UPPER_DEV_GET 0xffffffff81468d60
#endif

#ifndef DEV_GET_NEST_LEVEL
#define DEV_GET_NEST_LEVEL 0xffffffff81468dc0
#endif

#ifndef NETDEV_RX_HANDLER_REGISTER
#define NETDEV_RX_HANDLER_REGISTER 0xffffffff81468e50
#endif

#ifndef CALL_NETDEVICE_NOTIFIERS
#define CALL_NETDEVICE_NOTIFIERS 0xffffffff81469030
#endif

#ifndef NETDEV_FEATURES_CHANGE
#define NETDEV_FEATURES_CHANGE 0xffffffff81469050
#endif

#ifndef DEV_SET_MTU
#define DEV_SET_MTU 0xffffffff81469070
#endif

#ifndef NETDEV_BONDING_INFO_CHANGE
#define NETDEV_BONDING_INFO_CHANGE 0xffffffff814691a0
#endif

#ifndef NETDEV_NOTIFY_PEERS
#define NETDEV_NOTIFY_PEERS 0xffffffff81469220
#endif

#ifndef DEV_CLOSE_MANY
#define DEV_CLOSE_MANY 0xffffffff81469330
#endif

#ifndef REGISTER_NETDEVICE_NOTIFIER
#define REGISTER_NETDEVICE_NOTIFIER 0xffffffff814694a0
#endif

#ifndef UNREGISTER_NETDEVICE_NOTIFIER
#define UNREGISTER_NETDEVICE_NOTIFIER 0xffffffff81469670
#endif

#ifndef NET_INC_INGRESS_QUEUE
#define NET_INC_INGRESS_QUEUE 0xffffffff81469770
#endif

#ifndef NET_DEC_INGRESS_QUEUE
#define NET_DEC_INGRESS_QUEUE 0xffffffff81469790
#endif

#ifndef NET_ENABLE_TIMESTAMP
#define NET_ENABLE_TIMESTAMP 0xffffffff814697b0
#endif

#ifndef __NAPI_SCHEDULE_IRQOFF
#define __NAPI_SCHEDULE_IRQOFF 0xffffffff81469c80
#endif

#ifndef NETDEV_REFCNT_READ
#define NETDEV_REFCNT_READ 0xffffffff81469e50
#endif

#ifndef NETIF_SET_REAL_NUM_TX_QUEUES
#define NETIF_SET_REAL_NUM_TX_QUEUES 0xffffffff81469fe0
#endif

#ifndef NETIF_SET_REAL_NUM_RX_QUEUES
#define NETIF_SET_REAL_NUM_RX_QUEUES 0xffffffff8146a1b0
#endif

#ifndef NETIF_NAPI_DEL
#define NETIF_NAPI_DEL 0xffffffff8146a320
#endif

#ifndef NETIF_NAPI_ADD
#define NETIF_NAPI_ADD 0xffffffff8146a430
#endif

#ifndef NAPI_DISABLE
#define NAPI_DISABLE 0xffffffff8146a500
#endif

#ifndef NETDEV_UPPER_DEV_UNLINK
#define NETDEV_UPPER_DEV_UNLINK 0xffffffff8146a860
#endif

#ifndef FREE_NETDEV
#define FREE_NETDEV 0xffffffff8146a990
#endif

#ifndef SYNCHRONIZE_NET
#define SYNCHRONIZE_NET 0xffffffff8146aa70
#endif

#ifndef DEV_REMOVE_PACK
#define DEV_REMOVE_PACK 0xffffffff8146aaa0
#endif

#ifndef DEV_REMOVE_OFFLOAD
#define DEV_REMOVE_OFFLOAD 0xffffffff8146aac0
#endif

#ifndef NETDEV_RX_HANDLER_UNREGISTER
#define NETDEV_RX_HANDLER_UNREGISTER 0xffffffff8146ab50
#endif

#ifndef UNREGISTER_NETDEVICE_MANY
#define UNREGISTER_NETDEVICE_MANY 0xffffffff8146af30
#endif

#ifndef SKB_CHECKSUM_HELP
#define SKB_CHECKSUM_HELP 0xffffffff8146afd0
#endif

#ifndef IS_SKB_FORWARDABLE
#define IS_SKB_FORWARDABLE 0xffffffff8146b170
#endif

#ifndef DEV_GET_BY_NAME_RCU
#define DEV_GET_BY_NAME_RCU 0xffffffff8146b1c0
#endif

#ifndef DEV_GET_BY_NAME
#define DEV_GET_BY_NAME 0xffffffff8146b260
#endif

#ifndef DEV_VALID_NAME
#define DEV_VALID_NAME 0xffffffff8146b290
#endif

#ifndef __NAPI_COMPLETE
#define __NAPI_COMPLETE 0xffffffff8146b350
#endif

#ifndef NAPI_HASH_ADD
#define NAPI_HASH_ADD 0xffffffff8146b390
#endif

#ifndef NETDEV_STATE_CHANGE
#define NETDEV_STATE_CHANGE 0xffffffff8146b470
#endif

#ifndef DEV_SET_MAC_ADDRESS
#define DEV_SET_MAC_ADDRESS 0xffffffff8146b4c0
#endif

#ifndef DEV_CLOSE
#define DEV_CLOSE 0xffffffff8146b5a0
#endif

#ifndef NET_DISABLE_TIMESTAMP
#define NET_DISABLE_TIMESTAMP 0xffffffff8146b5d0
#endif

#ifndef NETIF_DEVICE_DETACH
#define NETIF_DEVICE_DETACH 0xffffffff8146b610
#endif

#ifndef NETDEV_RX_CSUM_FAULT
#define NETDEV_RX_CSUM_FAULT 0xffffffff8146b6b0
#endif

#ifndef __SKB_GRO_CHECKSUM_COMPLETE
#define __SKB_GRO_CHECKSUM_COMPLETE 0xffffffff8146b6f0
#endif

#ifndef NAPI_GET_FRAGS
#define NAPI_GET_FRAGS 0xffffffff8146b780
#endif

#ifndef NETDEV_UPPER_DEV_LINK
#define NETDEV_UPPER_DEV_LINK 0xffffffff8146bee0
#endif

#ifndef NETDEV_MASTER_UPPER_DEV_LINK
#define NETDEV_MASTER_UPPER_DEV_LINK 0xffffffff8146bf00
#endif

#ifndef NETDEV_MASTER_UPPER_DEV_LINK_PRIVATE
#define NETDEV_MASTER_UPPER_DEV_LINK_PRIVATE 0xffffffff8146bf20
#endif

#ifndef NETIF_STACKED_TRANSFER_OPERSTATE
#define NETIF_STACKED_TRANSFER_OPERSTATE 0xffffffff8146bf40
#endif

#ifndef UNREGISTER_NETDEVICE_QUEUE
#define UNREGISTER_NETDEVICE_QUEUE 0xffffffff8146bfe0
#endif

#ifndef UNREGISTER_NETDEV
#define UNREGISTER_NETDEV 0xffffffff8146c0b0
#endif

#ifndef NETIF_SET_XPS_QUEUE
#define NETIF_SET_XPS_QUEUE 0xffffffff8146c2c0
#endif

#ifndef NETIF_GET_NUM_DEFAULT_RSS_QUEUES
#define NETIF_GET_NUM_DEFAULT_RSS_QUEUES 0xffffffff8146c880
#endif

#ifndef __DEV_FORWARD_SKB
#define __DEV_FORWARD_SKB 0xffffffff8146c8b0
#endif

#ifndef __DEV_GET_BY_NAME
#define __DEV_GET_BY_NAME 0xffffffff8146cb80
#endif

#ifndef DEV_ALLOC_NAME
#define DEV_ALLOC_NAME 0xffffffff8146cd80
#endif

#ifndef DEV_CHANGE_NET_NAMESPACE
#define DEV_CHANGE_NET_NAMESPACE 0xffffffff8146cef0
#endif

#ifndef __NAPI_SCHEDULE
#define __NAPI_SCHEDULE 0xffffffff8146d5b0
#endif

#ifndef __DEV_KFREE_SKB_IRQ
#define __DEV_KFREE_SKB_IRQ 0xffffffff8146d640
#endif

#ifndef __DEV_KFREE_SKB_ANY
#define __DEV_KFREE_SKB_ANY 0xffffffff8146d6b0
#endif

#ifndef __NETIF_SCHEDULE
#define __NETIF_SCHEDULE 0xffffffff8146d6f0
#endif

#ifndef NETIF_SCHEDULE_QUEUE
#define NETIF_SCHEDULE_QUEUE 0xffffffff8146d760
#endif

#ifndef NETIF_WAKE_SUBQUEUE
#define NETIF_WAKE_SUBQUEUE 0xffffffff8146d790
#endif

#ifndef NETIF_TX_WAKE_QUEUE
#define NETIF_TX_WAKE_QUEUE 0xffffffff8146d7d0
#endif

#ifndef NETIF_DEVICE_ATTACH
#define NETIF_DEVICE_ATTACH 0xffffffff8146d800
#endif

#ifndef DEV_FORWARD_SKB
#define DEV_FORWARD_SKB 0xffffffff8146db90
#endif

#ifndef NETIF_RX
#define NETIF_RX 0xffffffff8146dbc0
#endif

#ifndef NETIF_RX_NI
#define NETIF_RX_NI 0xffffffff8146dc30
#endif

#ifndef DEV_LOOPBACK_XMIT
#define DEV_LOOPBACK_XMIT 0xffffffff8146dca0
#endif

#ifndef NETDEV_PRINTK
#define NETDEV_PRINTK 0xffffffff8146e1c0
#endif

#ifndef NETDEV_EMERG
#define NETDEV_EMERG 0xffffffff8146e220
#endif

#ifndef NETDEV_ALERT
#define NETDEV_ALERT 0xffffffff8146e290
#endif

#ifndef NETDEV_CRIT
#define NETDEV_CRIT 0xffffffff8146e300
#endif

#ifndef NETDEV_ERR
#define NETDEV_ERR 0xffffffff8146e370
#endif

#ifndef NETDEV_WARN
#define NETDEV_WARN 0xffffffff8146e3e0
#endif

#ifndef NETDEV_NOTICE
#define NETDEV_NOTICE 0xffffffff8146e450
#endif

#ifndef NETDEV_INFO
#define NETDEV_INFO 0xffffffff8146e4c0
#endif

#ifndef NETIF_RECEIVE_SKB_SK
#define NETIF_RECEIVE_SKB_SK 0xffffffff8146efb0
#endif

#ifndef NAPI_GRO_FLUSH
#define NAPI_GRO_FLUSH 0xffffffff8146f100
#endif

#ifndef NAPI_COMPLETE_DONE
#define NAPI_COMPLETE_DONE 0xffffffff8146f180
#endif

#ifndef NAPI_GRO_FRAGS
#define NAPI_GRO_FRAGS 0xffffffff8146f8e0
#endif

#ifndef NAPI_GRO_RECEIVE
#define NAPI_GRO_RECEIVE 0xffffffff8146fac0
#endif

#ifndef ALLOC_NETDEV_MQS
#define ALLOC_NETDEV_MQS 0xffffffff8146fcd0
#endif

#ifndef NETDEV_BOOT_BASE
#define NETDEV_BOOT_BASE 0xffffffff814700b0
#endif

#ifndef NETDEV_GET_NAME
#define NETDEV_GET_NAME 0xffffffff81470160
#endif

#ifndef DEV_SET_ALIAS
#define DEV_SET_ALIAS 0xffffffff814701d0
#endif

#ifndef SKB_NETWORK_PROTOCOL
#define SKB_NETWORK_PROTOCOL 0xffffffff814702a0
#endif

#ifndef SKB_MAC_GSO_SEGMENT
#define SKB_MAC_GSO_SEGMENT 0xffffffff814703e0
#endif

#ifndef __SKB_GSO_SEGMENT
#define __SKB_GSO_SEGMENT 0xffffffff814704d0
#endif

#ifndef NETIF_SKB_FEATURES
#define NETIF_SKB_FEATURES 0xffffffff814705b0
#endif

#ifndef DEV_HARD_START_XMIT
#define DEV_HARD_START_XMIT 0xffffffff81470aa0
#endif

#ifndef DEV_QUEUE_XMIT_SK
#define DEV_QUEUE_XMIT_SK 0xffffffff814713b0
#endif

#ifndef DEV_QUEUE_XMIT_ACCEL
#define DEV_QUEUE_XMIT_ACCEL 0xffffffff814713d0
#endif

#ifndef VALIDATE_XMIT_SKB_LIST
#define VALIDATE_XMIT_SKB_LIST 0xffffffff814713f0
#endif

#ifndef NETDEV_ADJACENT_RENAME_LINKS
#define NETDEV_ADJACENT_RENAME_LINKS 0xffffffff81471450
#endif

#ifndef DEV_CHANGE_NAME
#define DEV_CHANGE_NAME 0xffffffff81471540
#endif

#ifndef __DEV_NOTIFY_FLAGS
#define __DEV_NOTIFY_FLAGS 0xffffffff81471840
#endif

#ifndef __DEV_SET_RX_MODE
#define __DEV_SET_RX_MODE 0xffffffff81471ad0
#endif

#ifndef DEV_SET_RX_MODE
#define DEV_SET_RX_MODE 0xffffffff81471b80
#endif

#ifndef DEV_OPEN
#define DEV_OPEN 0xffffffff81471cf0
#endif

#ifndef DEV_SET_PROMISCUITY
#define DEV_SET_PROMISCUITY 0xffffffff81471d50
#endif

#ifndef DEV_SET_ALLMULTI
#define DEV_SET_ALLMULTI 0xffffffff81471ea0
#endif

#ifndef __DEV_CHANGE_FLAGS
#define __DEV_CHANGE_FLAGS 0xffffffff81471ec0
#endif

#ifndef DEV_CHANGE_FLAGS
#define DEV_CHANGE_FLAGS 0xffffffff81472020
#endif

#ifndef __NETDEV_UPDATE_FEATURES
#define __NETDEV_UPDATE_FEATURES 0xffffffff81472080
#endif

#ifndef NETDEV_UPDATE_FEATURES
#define NETDEV_UPDATE_FEATURES 0xffffffff81472460
#endif

#ifndef DEV_DISABLE_LRO
#define DEV_DISABLE_LRO 0xffffffff81472490
#endif

#ifndef NETDEV_CHANGE_FEATURES
#define NETDEV_CHANGE_FEATURES 0xffffffff814725c0
#endif

#ifndef REGISTER_NETDEVICE
#define REGISTER_NETDEVICE 0xffffffff814725f0
#endif

#ifndef REGISTER_NETDEV
#define REGISTER_NETDEV 0xffffffff81472a70
#endif

#ifndef NETDEV_RUN_TODO
#define NETDEV_RUN_TODO 0xffffffff81472aa0
#endif

#ifndef DEV_INGRESS_QUEUE_CREATE
#define DEV_INGRESS_QUEUE_CREATE 0xffffffff81472db0
#endif

#ifndef NETDEV_FREEMEM
#define NETDEV_FREEMEM 0xffffffff81472e40
#endif

#ifndef NETDEV_DRIVERNAME
#define NETDEV_DRIVERNAME 0xffffffff81472e60
#endif

#ifndef ETHTOOL_OP_GET_LINK
#define ETHTOOL_OP_GET_LINK 0xffffffff81472ea0
#endif

#ifndef ETHTOOL_OP_GET_TS_INFO
#define ETHTOOL_OP_GET_TS_INFO 0xffffffff81472ec0
#endif

#ifndef __ETHTOOL_GET_SETTINGS
#define __ETHTOOL_GET_SETTINGS 0xffffffff814730a0
#endif

#ifndef NETDEV_RSS_KEY_FILL
#define NETDEV_RSS_KEY_FILL 0xffffffff81473980
#endif

#ifndef DEV_ETHTOOL
#define DEV_ETHTOOL 0xffffffff81474580
#endif

#ifndef __HW_ADDR_INIT
#define __HW_ADDR_INIT 0xffffffff81476210
#endif

#ifndef DEV_UC_INIT
#define DEV_UC_INIT 0xffffffff81476230
#endif

#ifndef DEV_MC_INIT
#define DEV_MC_INIT 0xffffffff81476260
#endif

#ifndef DEV_ADDR_FLUSH
#define DEV_ADDR_FLUSH 0xffffffff814764b0
#endif

#ifndef DEV_ADDR_INIT
#define DEV_ADDR_INIT 0xffffffff814764e0
#endif

#ifndef DEV_ADDR_ADD
#define DEV_ADDR_ADD 0xffffffff814765a0
#endif

#ifndef DEV_UC_ADD_EXCL
#define DEV_UC_ADD_EXCL 0xffffffff81476630
#endif

#ifndef DEV_UC_ADD
#define DEV_UC_ADD 0xffffffff81476710
#endif

#ifndef DEV_UC_FLUSH
#define DEV_UC_FLUSH 0xffffffff81476780
#endif

#ifndef DEV_MC_ADD_EXCL
#define DEV_MC_ADD_EXCL 0xffffffff814767c0
#endif

#ifndef DEV_MC_ADD
#define DEV_MC_ADD 0xffffffff81476920
#endif

#ifndef DEV_MC_ADD_GLOBAL
#define DEV_MC_ADD_GLOBAL 0xffffffff81476940
#endif

#ifndef DEV_MC_FLUSH
#define DEV_MC_FLUSH 0xffffffff81476960
#endif

#ifndef DEV_ADDR_DEL
#define DEV_ADDR_DEL 0xffffffff81476b80
#endif

#ifndef DEV_UC_DEL
#define DEV_UC_DEL 0xffffffff81476c60
#endif

#ifndef DEV_MC_DEL
#define DEV_MC_DEL 0xffffffff81476d30
#endif

#ifndef DEV_MC_DEL_GLOBAL
#define DEV_MC_DEL_GLOBAL 0xffffffff81476d50
#endif

#ifndef __HW_ADDR_SYNC_DEV
#define __HW_ADDR_SYNC_DEV 0xffffffff81476d70
#endif

#ifndef __HW_ADDR_UNSYNC_DEV
#define __HW_ADDR_UNSYNC_DEV 0xffffffff81476e60
#endif

#ifndef __HW_ADDR_SYNC
#define __HW_ADDR_SYNC 0xffffffff81476f40
#endif

#ifndef __HW_ADDR_UNSYNC
#define __HW_ADDR_UNSYNC 0xffffffff81476fd0
#endif

#ifndef DEV_UC_UNSYNC
#define DEV_UC_UNSYNC 0xffffffff814770c0
#endif

#ifndef DEV_UC_SYNC
#define DEV_UC_SYNC 0xffffffff81477160
#endif

#ifndef DEV_UC_SYNC_MULTIPLE
#define DEV_UC_SYNC_MULTIPLE 0xffffffff814771f0
#endif

#ifndef DEV_MC_SYNC
#define DEV_MC_SYNC 0xffffffff81477280
#endif

#ifndef DEV_MC_SYNC_MULTIPLE
#define DEV_MC_SYNC_MULTIPLE 0xffffffff81477310
#endif

#ifndef DEV_MC_UNSYNC
#define DEV_MC_UNSYNC 0xffffffff814773a0
#endif

#ifndef DST_DISCARD_SK
#define DST_DISCARD_SK 0xffffffff814774c0
#endif

#ifndef DST_ALLOC
#define DST_ALLOC 0xffffffff814774f0
#endif

#ifndef __DST_FREE
#define __DST_FREE 0xffffffff81477670
#endif

#ifndef DST_RELEASE
#define DST_RELEASE 0xffffffff81477850
#endif

#ifndef __DST_DESTROY_METRICS_GENERIC
#define __DST_DESTROY_METRICS_GENERIC 0xffffffff814778d0
#endif

#ifndef DST_COW_METRICS_GENERIC
#define DST_COW_METRICS_GENERIC 0xffffffff81477910
#endif

#ifndef DST_DESTROY
#define DST_DESTROY 0xffffffff814779c0
#endif

#ifndef REGISTER_NETEVENT_NOTIFIER
#define REGISTER_NETEVENT_NOTIFIER 0xffffffff81477cf0
#endif

#ifndef UNREGISTER_NETEVENT_NOTIFIER
#define UNREGISTER_NETEVENT_NOTIFIER 0xffffffff81477d10
#endif

#ifndef CALL_NETEVENT_NOTIFIERS
#define CALL_NETEVENT_NOTIFIERS 0xffffffff81477d30
#endif

#ifndef NEIGH_SEQ_STOP
#define NEIGH_SEQ_STOP 0xffffffff81477fb0
#endif

#ifndef NEIGH_LOOKUP_NODEV
#define NEIGH_LOOKUP_NODEV 0xffffffff81477fd0
#endif

#ifndef __PNEIGH_LOOKUP
#define __PNEIGH_LOOKUP 0xffffffff81478140
#endif

#ifndef NEIGH_PARMS_RELEASE
#define NEIGH_PARMS_RELEASE 0xffffffff81478200
#endif

#ifndef PNEIGH_LOOKUP
#define PNEIGH_LOOKUP 0xffffffff81478310
#endif

#ifndef NEIGH_DIRECT_OUTPUT
#define NEIGH_DIRECT_OUTPUT 0xffffffff814785e0
#endif

#ifndef NEIGH_FOR_EACH
#define NEIGH_FOR_EACH 0xffffffff814786a0
#endif

#ifndef NEIGH_PROC_DOINTVEC
#define NEIGH_PROC_DOINTVEC 0xffffffff81478770
#endif

#ifndef NEIGH_PROC_DOINTVEC_JIFFIES
#define NEIGH_PROC_DOINTVEC_JIFFIES 0xffffffff814787a0
#endif

#ifndef NEIGH_PROC_DOINTVEC_MS_JIFFIES
#define NEIGH_PROC_DOINTVEC_MS_JIFFIES 0xffffffff814787d0
#endif

#ifndef NEIGH_SYSCTL_REGISTER
#define NEIGH_SYSCTL_REGISTER 0xffffffff81478800
#endif

#ifndef NEIGH_SYSCTL_UNREGISTER
#define NEIGH_SYSCTL_UNREGISTER 0xffffffff81478b80
#endif

#ifndef NEIGH_SEQ_NEXT
#define NEIGH_SEQ_NEXT 0xffffffff81478e60
#endif

#ifndef NEIGH_SEQ_START
#define NEIGH_SEQ_START 0xffffffff81478ee0
#endif

#ifndef NEIGH_RAND_REACH_TIME
#define NEIGH_RAND_REACH_TIME 0xffffffff81479010
#endif

#ifndef __NEIGH_EVENT_SEND
#define __NEIGH_EVENT_SEND 0xffffffff81479130
#endif

#ifndef __NEIGH_SET_PROBE_ONCE
#define __NEIGH_SET_PROBE_ONCE 0xffffffff81479380
#endif

#ifndef PNEIGH_ENQUEUE
#define PNEIGH_ENQUEUE 0xffffffff814793f0
#endif

#ifndef NEIGH_PARMS_ALLOC
#define NEIGH_PARMS_ALLOC 0xffffffff81479560
#endif

#ifndef NEIGH_RESOLVE_OUTPUT
#define NEIGH_RESOLVE_OUTPUT 0xffffffff81479680
#endif

#ifndef NEIGH_CONNECTED_OUTPUT
#define NEIGH_CONNECTED_OUTPUT 0xffffffff81479880
#endif

#ifndef NEIGH_LOOKUP
#define NEIGH_LOOKUP 0xffffffff81479990
#endif

#ifndef NEIGH_APP_NS
#define NEIGH_APP_NS 0xffffffff8147a6b0
#endif

#ifndef NEIGH_DESTROY
#define NEIGH_DESTROY 0xffffffff8147ac00
#endif

#ifndef NEIGH_CHANGEADDR
#define NEIGH_CHANGEADDR 0xffffffff8147aee0
#endif

#ifndef NEIGH_IFDOWN
#define NEIGH_IFDOWN 0xffffffff8147af20
#endif

#ifndef NEIGH_TABLE_CLEAR
#define NEIGH_TABLE_CLEAR 0xffffffff8147b010
#endif

#ifndef __NEIGH_FOR_EACH_RELEASE
#define __NEIGH_FOR_EACH_RELEASE 0xffffffff8147b2d0
#endif

#ifndef NEIGH_UPDATE
#define NEIGH_UPDATE 0xffffffff8147bdc0
#endif

#ifndef __NEIGH_CREATE
#define __NEIGH_CREATE 0xffffffff8147c660
#endif

#ifndef NEIGH_EVENT_NS
#define NEIGH_EVENT_NS 0xffffffff8147cbf0
#endif

#ifndef NEIGH_XMIT
#define NEIGH_XMIT 0xffffffff8147cf80
#endif

#ifndef NEIGH_TABLE_INIT
#define NEIGH_TABLE_INIT 0xffffffff8147d0d0
#endif

#ifndef PNEIGH_DELETE
#define PNEIGH_DELETE 0xffffffff8147d340
#endif

#ifndef RTNL_IS_LOCKED
#define RTNL_IS_LOCKED 0xffffffff8147d5d0
#endif

#ifndef __RTNL_AF_UNREGISTER
#define __RTNL_AF_UNREGISTER 0xffffffff8147d5f0
#endif

#ifndef RTNL_LOCK
#define RTNL_LOCK 0xffffffff8147d750
#endif

#ifndef RTNL_UNLOCK
#define RTNL_UNLOCK 0xffffffff8147d770
#endif

#ifndef RTNL_AF_REGISTER
#define RTNL_AF_REGISTER 0xffffffff8147d790
#endif

#ifndef RTNL_AF_UNREGISTER
#define RTNL_AF_UNREGISTER 0xffffffff8147d7d0
#endif

#ifndef RTNL_TRYLOCK
#define RTNL_TRYLOCK 0xffffffff8147d820
#endif

#ifndef __RTNL_LINK_REGISTER
#define __RTNL_LINK_REGISTER 0xffffffff8147d8a0
#endif

#ifndef RTNL_LINK_REGISTER
#define RTNL_LINK_REGISTER 0xffffffff8147d900
#endif

#ifndef __RTNL_LINK_UNREGISTER
#define __RTNL_LINK_UNREGISTER 0xffffffff8147d930
#endif

#ifndef RTNL_LINK_UNREGISTER
#define RTNL_LINK_UNREGISTER 0xffffffff8147da00
#endif

#ifndef RTNL_UNICAST
#define RTNL_UNICAST 0xffffffff8147db00
#endif

#ifndef RTNL_NOTIFY
#define RTNL_NOTIFY 0xffffffff8147db30
#endif

#ifndef RTNL_SET_SK_ERR
#define RTNL_SET_SK_ERR 0xffffffff8147db80
#endif

#ifndef RTNL_PUT_CACHEINFO
#define RTNL_PUT_CACHEINFO 0xffffffff8147dba0
#endif

#ifndef RTNL_NLA_PARSE_IFLA
#define RTNL_NLA_PARSE_IFLA 0xffffffff8147dc80
#endif

#ifndef RTNL_CONFIGURE_LINK
#define RTNL_CONFIGURE_LINK 0xffffffff8147dcb0
#endif

#ifndef RTNL_CREATE_LINK
#define RTNL_CREATE_LINK 0xffffffff8147ddc0
#endif

#ifndef NDO_DFLT_FDB_ADD
#define NDO_DFLT_FDB_ADD 0xffffffff8147e240
#endif

#ifndef NDO_DFLT_FDB_DEL
#define NDO_DFLT_FDB_DEL 0xffffffff8147e2e0
#endif

#ifndef RTNL_UNREGISTER_ALL
#define RTNL_UNREGISTER_ALL 0xffffffff8147e670
#endif

#ifndef RTNL_LINK_GET_NET
#define RTNL_LINK_GET_NET 0xffffffff8147e6e0
#endif

#ifndef __RTNL_REGISTER
#define __RTNL_REGISTER 0xffffffff8147eae0
#endif

#ifndef RTNL_REGISTER
#define RTNL_REGISTER 0xffffffff8147eba0
#endif

#ifndef RTNL_UNREGISTER
#define RTNL_UNREGISTER 0xffffffff8147f000
#endif

#ifndef NDO_DFLT_FDB_DUMP
#define NDO_DFLT_FDB_DUMP 0xffffffff81480640
#endif

#ifndef RTNETLINK_PUT_METRICS
#define RTNETLINK_PUT_METRICS 0xffffffff814808f0
#endif

#ifndef NDO_DFLT_BRIDGE_GETLINK
#define NDO_DFLT_BRIDGE_GETLINK 0xffffffff81481390
#endif

#ifndef __RTNL_UNLOCK
#define __RTNL_UNLOCK 0xffffffff81482e40
#endif

#ifndef RTNETLINK_SEND
#define RTNETLINK_SEND 0xffffffff81482e60
#endif

#ifndef RTMSG_IFINFO_BUILD_SKB
#define RTMSG_IFINFO_BUILD_SKB 0xffffffff81482ed0
#endif

#ifndef RTMSG_IFINFO
#define RTMSG_IFINFO 0xffffffff81483010
#endif

#ifndef RTMSG_IFINFO_SEND
#define RTMSG_IFINFO_SEND 0xffffffff81483090
#endif

#ifndef NET_RATELIMIT
#define NET_RATELIMIT 0xffffffff814830d0
#endif

#ifndef IN_ATON
#define IN_ATON 0xffffffff814830f0
#endif

#ifndef INET_PROTO_CSUM_REPLACE16
#define INET_PROTO_CSUM_REPLACE16 0xffffffff81483160
#endif

#ifndef __NET_GET_RANDOM_ONCE
#define __NET_GET_RANDOM_ONCE 0xffffffff81483270
#endif

#ifndef INET_PROTO_CSUM_REPLACE4
#define INET_PROTO_CSUM_REPLACE4 0xffffffff81483350
#endif

#ifndef IN4_PTON
#define IN4_PTON 0xffffffff81483420
#endif

#ifndef IN6_PTON
#define IN6_PTON 0xffffffff814835a0
#endif

#ifndef LINKWATCH_FIRE_EVENT
#define LINKWATCH_FIRE_EVENT 0xffffffff81483c40
#endif

#ifndef LINKWATCH_INIT_DEV
#define LINKWATCH_INIT_DEV 0xffffffff81483e80
#endif

#ifndef LINKWATCH_FORGET_DEV
#define LINKWATCH_FORGET_DEV 0xffffffff81483eb0
#endif

#ifndef LINKWATCH_RUN_QUEUE
#define LINKWATCH_RUN_QUEUE 0xffffffff81483f20
#endif

#ifndef SK_FILTER
#define SK_FILTER 0xffffffff81483fa0
#endif

#ifndef BPF_CHECK_CLASSIC
#define BPF_CHECK_CLASSIC 0xffffffff81484170
#endif

#ifndef BPF_PROG_DESTROY
#define BPF_PROG_DESTROY 0xffffffff814846f0
#endif

#ifndef BPF_CONVERT_FILTER
#define BPF_CONVERT_FILTER 0xffffffff81484a80
#endif

#ifndef BPF_PROG_CREATE
#define BPF_PROG_CREATE 0xffffffff814856a0
#endif

#ifndef SK_FILTER_UNCHARGE
#define SK_FILTER_UNCHARGE 0xffffffff81485750
#endif

#ifndef SK_DETACH_FILTER
#define SK_DETACH_FILTER 0xffffffff814857b0
#endif

#ifndef SK_FILTER_CHARGE
#define SK_FILTER_CHARGE 0xffffffff81485800
#endif

#ifndef SK_ATTACH_FILTER
#define SK_ATTACH_FILTER 0xffffffff81485850
#endif

#ifndef SK_ATTACH_BPF
#define SK_ATTACH_BPF 0xffffffff81485a30
#endif

#ifndef SK_GET_FILTER
#define SK_GET_FILTER 0xffffffff81485a50
#endif

#ifndef SOCK_DIAG_CHECK_COOKIE
#define SOCK_DIAG_CHECK_COOKIE 0xffffffff81485b30
#endif

#ifndef SOCK_DIAG_SAVE_COOKIE
#define SOCK_DIAG_SAVE_COOKIE 0xffffffff81485b70
#endif

#ifndef SOCK_DIAG_PUT_MEMINFO
#define SOCK_DIAG_PUT_MEMINFO 0xffffffff81485b90
#endif

#ifndef SOCK_DIAG_PUT_FILTERINFO
#define SOCK_DIAG_PUT_FILTERINFO 0xffffffff81485c10
#endif

#ifndef SOCK_DIAG_REGISTER_INET_COMPAT
#define SOCK_DIAG_REGISTER_INET_COMPAT 0xffffffff81485ca0
#endif

#ifndef SOCK_DIAG_UNREGISTER_INET_COMPAT
#define SOCK_DIAG_UNREGISTER_INET_COMPAT 0xffffffff81485cd0
#endif

#ifndef SOCK_DIAG_REGISTER
#define SOCK_DIAG_REGISTER 0xffffffff81485d00
#endif

#ifndef SOCK_DIAG_UNREGISTER
#define SOCK_DIAG_UNREGISTER 0xffffffff81485e20
#endif

#ifndef REGISTER_GIFCONF
#define REGISTER_GIFCONF 0xffffffff81485fd0
#endif

#ifndef DEV_LOAD
#define DEV_LOAD 0xffffffff81486000
#endif

#ifndef DEV_IOCTL
#define DEV_IOCTL 0xffffffff81486470
#endif

#ifndef TSO_COUNT_DESCS
#define TSO_COUNT_DESCS 0xffffffff81486a50
#endif

#ifndef TSO_BUILD_HDR
#define TSO_BUILD_HDR 0xffffffff81486a70
#endif

#ifndef TSO_BUILD_DATA
#define TSO_BUILD_DATA 0xffffffff81486b40
#endif

#ifndef TSO_START
#define TSO_START 0xffffffff81486bc0
#endif

#ifndef FLOW_CACHE_FINI
#define FLOW_CACHE_FINI 0xffffffff81486d60
#endif

#ifndef FLOW_CACHE_LOOKUP
#define FLOW_CACHE_LOOKUP 0xffffffff81486ff0
#endif

#ifndef FLOW_CACHE_INIT
#define FLOW_CACHE_INIT 0xffffffff814876f0
#endif

#ifndef FLOW_CACHE_FLUSH
#define FLOW_CACHE_FLUSH 0xffffffff81487a10
#endif

#ifndef FLOW_CACHE_FLUSH_DEFERRED
#define FLOW_CACHE_FLUSH_DEFERRED 0xffffffff81487bc0
#endif

#ifndef NETDEV_CLASS_CREATE_FILE_NS
#define NETDEV_CLASS_CREATE_FILE_NS 0xffffffff81488860
#endif

#ifndef NETDEV_CLASS_REMOVE_FILE_NS
#define NETDEV_CLASS_REMOVE_FILE_NS 0xffffffff81488880
#endif

#ifndef NET_RX_QUEUE_UPDATE_KOBJECTS
#define NET_RX_QUEUE_UPDATE_KOBJECTS 0xffffffff81489a20
#endif

#ifndef NETDEV_QUEUE_UPDATE_KOBJECTS
#define NETDEV_QUEUE_UPDATE_KOBJECTS 0xffffffff81489b60
#endif

#ifndef NETDEV_UNREGISTER_KOBJECT
#define NETDEV_UNREGISTER_KOBJECT 0xffffffff81489c70
#endif

#ifndef NETDEV_REGISTER_KOBJECT
#define NETDEV_REGISTER_KOBJECT 0xffffffff81489ce0
#endif

#ifndef NETPOLL_POLL_DISABLE
#define NETPOLL_POLL_DISABLE 0xffffffff8148a790
#endif

#ifndef NETPOLL_POLL_ENABLE
#define NETPOLL_POLL_ENABLE 0xffffffff8148a7e0
#endif

#ifndef NETPOLL_PRINT_OPTIONS
#define NETPOLL_PRINT_OPTIONS 0xffffffff8148a890
#endif

#ifndef NETPOLL_PARSE_OPTIONS
#define NETPOLL_PARSE_OPTIONS 0xffffffff8148a9f0
#endif

#ifndef __NETPOLL_SETUP
#define __NETPOLL_SETUP 0xffffffff8148ac20
#endif

#ifndef NETPOLL_SETUP
#define NETPOLL_SETUP 0xffffffff8148ade0
#endif

#ifndef __NETPOLL_CLEANUP
#define __NETPOLL_CLEANUP 0xffffffff8148b100
#endif

#ifndef NETPOLL_CLEANUP
#define NETPOLL_CLEANUP 0xffffffff8148b1c0
#endif

#ifndef __NETPOLL_FREE_ASYNC
#define __NETPOLL_FREE_ASYNC 0xffffffff8148b2a0
#endif

#ifndef NETPOLL_SEND_SKB_ON_DEV
#define NETPOLL_SEND_SKB_ON_DEV 0xffffffff8148b8a0
#endif

#ifndef NETPOLL_SEND_UDP
#define NETPOLL_SEND_UDP 0xffffffff8148bb00
#endif

#ifndef FIB_DEFAULT_RULE_PREF
#define FIB_DEFAULT_RULE_PREF 0xffffffff8148bee0
#endif

#ifndef FIB_RULES_REGISTER
#define FIB_RULES_REGISTER 0xffffffff8148bf50
#endif

#ifndef FIB_RULES_LOOKUP
#define FIB_RULES_LOOKUP 0xffffffff8148c360
#endif

#ifndef FIB_RULES_UNREGISTER
#define FIB_RULES_UNREGISTER 0xffffffff8148d2e0
#endif

#ifndef FIB_DEFAULT_RULE_ADD
#define FIB_DEFAULT_RULE_ADD 0xffffffff8148d3c0
#endif

#ifndef PTP_CLASSIFY_RAW
#define PTP_CLASSIFY_RAW 0xffffffff8148f200
#endif

#ifndef TASK_CLS_STATE
#define TASK_CLS_STATE 0xffffffff8148f6c0
#endif

#ifndef COMPAT_SOCK_GET_TIMESTAMP
#define COMPAT_SOCK_GET_TIMESTAMP 0xffffffff8148f900
#endif

#ifndef COMPAT_SOCK_GET_TIMESTAMPNS
#define COMPAT_SOCK_GET_TIMESTAMPNS 0xffffffff8148f9d0
#endif

#ifndef COMPAT_MC_SETSOCKOPT
#define COMPAT_MC_SETSOCKOPT 0xffffffff8148fbb0
#endif

#ifndef COMPAT_MC_GETSOCKOPT
#define COMPAT_MC_GETSOCKOPT 0xffffffff8148ffd0
#endif

#ifndef GET_COMPAT_MSGHDR
#define GET_COMPAT_MSGHDR 0xffffffff814902b0
#endif

#ifndef CMSGHDR_FROM_USER_COMPAT_TO_KERN
#define CMSGHDR_FROM_USER_COMPAT_TO_KERN 0xffffffff81490480
#endif

#ifndef PUT_CMSG_COMPAT
#define PUT_CMSG_COMPAT 0xffffffff81490710
#endif

#ifndef SCM_DETACH_FDS_COMPAT
#define SCM_DETACH_FDS_COMPAT 0xffffffff814908b0
#endif

#ifndef COMPAT_SYS_SETSOCKOPT
#define COMPAT_SYS_SETSOCKOPT 0xffffffff81490a00
#endif

#ifndef COMPAT_SYS_SETSOCKOPT
#define COMPAT_SYS_SETSOCKOPT 0xffffffff81490a00
#endif

#ifndef COMPAT_SYS_GETSOCKOPT
#define COMPAT_SYS_GETSOCKOPT 0xffffffff81490af0
#endif

#ifndef COMPAT_SYS_GETSOCKOPT
#define COMPAT_SYS_GETSOCKOPT 0xffffffff81490af0
#endif

#ifndef COMPAT_SYS_SENDMSG
#define COMPAT_SYS_SENDMSG 0xffffffff81490bd0
#endif

#ifndef COMPAT_SYS_SENDMSG
#define COMPAT_SYS_SENDMSG 0xffffffff81490bd0
#endif

#ifndef COMPAT_SYS_SENDMMSG
#define COMPAT_SYS_SENDMMSG 0xffffffff81490bf0
#endif

#ifndef COMPAT_SYS_SENDMMSG
#define COMPAT_SYS_SENDMMSG 0xffffffff81490bf0
#endif

#ifndef COMPAT_SYS_RECVMSG
#define COMPAT_SYS_RECVMSG 0xffffffff81490c10
#endif

#ifndef COMPAT_SYS_RECVMSG
#define COMPAT_SYS_RECVMSG 0xffffffff81490c10
#endif

#ifndef COMPAT_SYS_RECV
#define COMPAT_SYS_RECV 0xffffffff81490c30
#endif

#ifndef COMPAT_SYS_RECV
#define COMPAT_SYS_RECV 0xffffffff81490c30
#endif

#ifndef COMPAT_SYS_RECVFROM
#define COMPAT_SYS_RECVFROM 0xffffffff81490c50
#endif

#ifndef COMPAT_SYS_RECVFROM
#define COMPAT_SYS_RECVFROM 0xffffffff81490c50
#endif

#ifndef COMPAT_SYS_RECVMMSG
#define COMPAT_SYS_RECVMMSG 0xffffffff81490c70
#endif

#ifndef COMPAT_SYS_RECVMMSG
#define COMPAT_SYS_RECVMMSG 0xffffffff81490c70
#endif

#ifndef COMPAT_SYS_SOCKETCALL
#define COMPAT_SYS_SOCKETCALL 0xffffffff81490d10
#endif

#ifndef COMPAT_SYS_SOCKETCALL
#define COMPAT_SYS_SOCKETCALL 0xffffffff81490d10
#endif

#ifndef ETH_PREPARE_MAC_ADDR_CHANGE
#define ETH_PREPARE_MAC_ADDR_CHANGE 0xffffffff814911f0
#endif

#ifndef ETH_CHANGE_MTU
#define ETH_CHANGE_MTU 0xffffffff81491240
#endif

#ifndef ETH_VALIDATE_ADDR
#define ETH_VALIDATE_ADDR 0xffffffff81491270
#endif

#ifndef ETH_HEADER_PARSE
#define ETH_HEADER_PARSE 0xffffffff814912a0
#endif

#ifndef ETH_HEADER_CACHE
#define ETH_HEADER_CACHE 0xffffffff814912d0
#endif

#ifndef ETH_HEADER_CACHE_UPDATE
#define ETH_HEADER_CACHE_UPDATE 0xffffffff81491330
#endif

#ifndef ETH_COMMIT_MAC_ADDR_CHANGE
#define ETH_COMMIT_MAC_ADDR_CHANGE 0xffffffff81491350
#endif

#ifndef ETH_HEADER
#define ETH_HEADER 0xffffffff81491370
#endif

#ifndef ETHER_SETUP
#define ETHER_SETUP 0xffffffff81491430
#endif

#ifndef ALLOC_ETHERDEV_MQS
#define ALLOC_ETHERDEV_MQS 0xffffffff814914a0
#endif

#ifndef SYSFS_FORMAT_MAC
#define SYSFS_FORMAT_MAC 0xffffffff814914d0
#endif

#ifndef ETH_GRO_COMPLETE
#define ETH_GRO_COMPLETE 0xffffffff81491500
#endif

#ifndef ETH_MAC_ADDR
#define ETH_MAC_ADDR 0xffffffff81491560
#endif

#ifndef ETH_GET_HEADLEN
#define ETH_GET_HEADLEN 0xffffffff81491590
#endif

#ifndef ETH_GRO_RECEIVE
#define ETH_GRO_RECEIVE 0xffffffff81491610
#endif

#ifndef ETH_TYPE_TRANS
#define ETH_TYPE_TRANS 0xffffffff81491770
#endif

#ifndef ALLOC_FCDEV
#define ALLOC_FCDEV 0xffffffff814918d0
#endif

#ifndef FDDI_CHANGE_MTU
#define FDDI_CHANGE_MTU 0xffffffff81491bf0
#endif

#ifndef FDDI_TYPE_TRANS
#define FDDI_TYPE_TRANS 0xffffffff81491c20
#endif

#ifndef ALLOC_FDDIDEV
#define ALLOC_FDDIDEV 0xffffffff81491d40
#endif

#ifndef HIPPI_CHANGE_MTU
#define HIPPI_CHANGE_MTU 0xffffffff81492090
#endif

#ifndef HIPPI_NEIGH_SETUP_DEV
#define HIPPI_NEIGH_SETUP_DEV 0xffffffff814920c0
#endif

#ifndef HIPPI_TYPE_TRANS
#define HIPPI_TYPE_TRANS 0xffffffff814920e0
#endif

#ifndef HIPPI_MAC_ADDR
#define HIPPI_MAC_ADDR 0xffffffff81492120
#endif

#ifndef ALLOC_HIPPI_DEV
#define ALLOC_HIPPI_DEV 0xffffffff814921d0
#endif

#ifndef QDISC_RESET
#define QDISC_RESET 0xffffffff81492550
#endif

#ifndef DEV_TRANS_START
#define DEV_TRANS_START 0xffffffff81492590
#endif

#ifndef QDISC_DESTROY
#define QDISC_DESTROY 0xffffffff81492740
#endif

#ifndef DEV_GRAFT_QDISC
#define DEV_GRAFT_QDISC 0xffffffff81492820
#endif

#ifndef PSCHED_RATECFG_PRECOMPUTE
#define PSCHED_RATECFG_PRECOMPUTE 0xffffffff81492ae0
#endif

#ifndef NETIF_CARRIER_OFF
#define NETIF_CARRIER_OFF 0xffffffff81492b70
#endif

#ifndef SCH_DIRECT_XMIT
#define SCH_DIRECT_XMIT 0xffffffff81492ca0
#endif

#ifndef __QDISC_RUN
#define __QDISC_RUN 0xffffffff81492e80
#endif

#ifndef __NETDEV_WATCHDOG_UP
#define __NETDEV_WATCHDOG_UP 0xffffffff81493040
#endif

#ifndef NETIF_CARRIER_ON
#define NETIF_CARRIER_ON 0xffffffff814930b0
#endif

#ifndef QDISC_ALLOC
#define QDISC_ALLOC 0xffffffff81493100
#endif

#ifndef QDISC_CREATE_DFLT
#define QDISC_CREATE_DFLT 0xffffffff81493220
#endif

#ifndef DEV_ACTIVATE
#define DEV_ACTIVATE 0xffffffff814932a0
#endif

#ifndef DEV_DEACTIVATE_MANY
#define DEV_DEACTIVATE_MANY 0xffffffff814934b0
#endif

#ifndef DEV_DEACTIVATE
#define DEV_DEACTIVATE 0xffffffff814936f0
#endif

#ifndef DEV_INIT_SCHEDULER
#define DEV_INIT_SCHEDULER 0xffffffff81493740
#endif

#ifndef DEV_SHUTDOWN
#define DEV_SHUTDOWN 0xffffffff814937d0
#endif

#ifndef QDISC_CLASS_HASH_INSERT
#define QDISC_CLASS_HASH_INSERT 0xffffffff81493f00
#endif

#ifndef QDISC_CLASS_HASH_REMOVE
#define QDISC_CLASS_HASH_REMOVE 0xffffffff81493f50
#endif

#ifndef TC_CLASSIFY_COMPAT
#define TC_CLASSIFY_COMPAT 0xffffffff81494040
#endif

#ifndef UNREGISTER_QDISC
#define UNREGISTER_QDISC 0xffffffff814940e0
#endif

#ifndef REGISTER_QDISC
#define REGISTER_QDISC 0xffffffff81494160
#endif

#ifndef __QDISC_CALCULATE_PKT_LEN
#define __QDISC_CALCULATE_PKT_LEN 0xffffffff814942d0
#endif

#ifndef QDISC_PUT_STAB
#define QDISC_PUT_STAB 0xffffffff81494360
#endif

#ifndef QDISC_WATCHDOG_INIT
#define QDISC_WATCHDOG_INIT 0xffffffff814943d0
#endif

#ifndef QDISC_WATCHDOG_CANCEL
#define QDISC_WATCHDOG_CANCEL 0xffffffff81494440
#endif

#ifndef QDISC_CLASS_HASH_DESTROY
#define QDISC_CLASS_HASH_DESTROY 0xffffffff814944b0
#endif

#ifndef QDISC_LIST_DEL
#define QDISC_LIST_DEL 0xffffffff81494830
#endif

#ifndef QDISC_LIST_ADD
#define QDISC_LIST_ADD 0xffffffff81494870
#endif

#ifndef QDISC_GET_RTAB
#define QDISC_GET_RTAB 0xffffffff814948f0
#endif

#ifndef QDISC_PUT_RTAB
#define QDISC_PUT_RTAB 0xffffffff81494b10
#endif

#ifndef QDISC_WARN_NONWC
#define QDISC_WARN_NONWC 0xffffffff81494b90
#endif

#ifndef QDISC_WATCHDOG_SCHEDULE_NS
#define QDISC_WATCHDOG_SCHEDULE_NS 0xffffffff81494bd0
#endif

#ifndef TC_CLASSIFY
#define TC_CLASSIFY 0xffffffff81494c10
#endif

#ifndef QDISC_CLASS_HASH_INIT
#define QDISC_CLASS_HASH_INIT 0xffffffff81494fc0
#endif

#ifndef QDISC_CLASS_HASH_GROW
#define QDISC_CLASS_HASH_GROW 0xffffffff81495e50
#endif

#ifndef QDISC_GET_DEFAULT
#define QDISC_GET_DEFAULT 0xffffffff81495ff0
#endif

#ifndef QDISC_SET_DEFAULT
#define QDISC_SET_DEFAULT 0xffffffff81496040
#endif

#ifndef QDISC_LOOKUP
#define QDISC_LOOKUP 0xffffffff814960f0
#endif

#ifndef QDISC_TREE_DECREASE_QLEN
#define QDISC_TREE_DECREASE_QLEN 0xffffffff814961b0
#endif

#ifndef TCF_DESTROY
#define TCF_DESTROY 0xffffffff81497170
#endif

#ifndef TCF_DESTROY_CHAIN
#define TCF_DESTROY_CHAIN 0xffffffff814971c0
#endif

#ifndef REGISTER_TCF_PROTO_OPS
#define REGISTER_TCF_PROTO_OPS 0xffffffff81497230
#endif

#ifndef UNREGISTER_TCF_PROTO_OPS
#define UNREGISTER_TCF_PROTO_OPS 0xffffffff814972c0
#endif

#ifndef TCF_EXTS_DESTROY
#define TCF_EXTS_DESTROY 0xffffffff81497360
#endif

#ifndef TCF_EXTS_VALIDATE
#define TCF_EXTS_VALIDATE 0xffffffff81497390
#endif

#ifndef TCF_EXTS_DUMP_STATS
#define TCF_EXTS_DUMP_STATS 0xffffffff81497450
#endif

#ifndef TCF_EXTS_CHANGE
#define TCF_EXTS_CHANGE 0xffffffff81498230
#endif

#ifndef TCF_EXTS_DUMP
#define TCF_EXTS_DUMP 0xffffffff81498350
#endif

#ifndef TCF_HASH_CLEANUP
#define TCF_HASH_CLEANUP 0xffffffff81498480
#endif

#ifndef TCF_HASH_DESTROY
#define TCF_HASH_DESTROY 0xffffffff814984b0
#endif

#ifndef __TCF_HASH_RELEASE
#define __TCF_HASH_RELEASE 0xffffffff81498530
#endif

#ifndef TCF_HASH_NEW_INDEX
#define TCF_HASH_NEW_INDEX 0xffffffff81498600
#endif

#ifndef TCF_HASH_SEARCH
#define TCF_HASH_SEARCH 0xffffffff81498640
#endif

#ifndef TCF_HASH_CHECK
#define TCF_HASH_CHECK 0xffffffff81498680
#endif

#ifndef TCF_HASH_INSERT
#define TCF_HASH_INSERT 0xffffffff814986f0
#endif

#ifndef TCF_UNREGISTER_ACTION
#define TCF_UNREGISTER_ACTION 0xffffffff814987c0
#endif

#ifndef TCF_ACTION_EXEC
#define TCF_ACTION_EXEC 0xffffffff81498970
#endif

#ifndef TCF_REGISTER_ACTION
#define TCF_REGISTER_ACTION 0xffffffff81498a00
#endif

#ifndef TCF_HASH_CREATE
#define TCF_HASH_CREATE 0xffffffff81499160
#endif

#ifndef TCF_ACTION_DESTROY
#define TCF_ACTION_DESTROY 0xffffffff81499260
#endif

#ifndef TCF_ACTION_DUMP_OLD
#define TCF_ACTION_DUMP_OLD 0xffffffff81499320
#endif

#ifndef TCF_ACTION_INIT_1
#define TCF_ACTION_INIT_1 0xffffffff81499340
#endif

#ifndef TCF_ACTION_INIT
#define TCF_ACTION_INIT 0xffffffff81499530
#endif

#ifndef TCF_ACTION_COPY_STATS
#define TCF_ACTION_COPY_STATS 0xffffffff81499620
#endif

#ifndef TCF_ACTION_DUMP_1
#define TCF_ACTION_DUMP_1 0xffffffff814996f0
#endif

#ifndef TCF_ACTION_DUMP
#define TCF_ACTION_DUMP 0xffffffff81499c00
#endif

#ifndef FIFO_SET_LIMIT
#define FIFO_SET_LIMIT 0xffffffff8149a7e0
#endif

#ifndef FIFO_CREATE_DFLT
#define FIFO_CREATE_DFLT 0xffffffff8149a880
#endif

#ifndef TCF_EM_REGISTER
#define TCF_EM_REGISTER 0xffffffff8149a9c0
#endif

#ifndef TCF_EM_UNREGISTER
#define TCF_EM_UNREGISTER 0xffffffff8149aa70
#endif

#ifndef TCF_EM_TREE_DESTROY
#define TCF_EM_TREE_DESTROY 0xffffffff8149aac0
#endif

#ifndef __TCF_EM_TREE_MATCH
#define __TCF_EM_TREE_MATCH 0xffffffff8149ab60
#endif

#ifndef TCF_EM_TREE_VALIDATE
#define TCF_EM_TREE_VALIDATE 0xffffffff8149ad60
#endif

#ifndef TCF_EM_TREE_DUMP
#define TCF_EM_TREE_DUMP 0xffffffff8149b120
#endif

#ifndef NETLINK_ADD_TAP
#define NETLINK_ADD_TAP 0xffffffff8149b720
#endif

#ifndef NETLINK_REMOVE_TAP
#define NETLINK_REMOVE_TAP 0xffffffff8149b780
#endif

#ifndef __NETLINK_NS_CAPABLE
#define __NETLINK_NS_CAPABLE 0xffffffff8149b830
#endif

#ifndef NETLINK_NS_CAPABLE
#define NETLINK_NS_CAPABLE 0xffffffff8149b880
#endif

#ifndef NETLINK_CAPABLE
#define NETLINK_CAPABLE 0xffffffff8149b8a0
#endif

#ifndef NETLINK_NET_CAPABLE
#define NETLINK_NET_CAPABLE 0xffffffff8149b8c0
#endif

#ifndef __NLMSG_PUT
#define __NLMSG_PUT 0xffffffff8149ba20
#endif

#ifndef NETLINK_SET_ERR
#define NETLINK_SET_ERR 0xffffffff8149bab0
#endif

#ifndef NETLINK_KERNEL_RELEASE
#define NETLINK_KERNEL_RELEASE 0xffffffff8149c1b0
#endif

#ifndef NETLINK_REGISTER_NOTIFIER
#define NETLINK_REGISTER_NOTIFIER 0xffffffff8149c1d0
#endif

#ifndef NETLINK_UNREGISTER_NOTIFIER
#define NETLINK_UNREGISTER_NOTIFIER 0xffffffff8149c1f0
#endif

#ifndef NETLINK_HAS_LISTENERS
#define NETLINK_HAS_LISTENERS 0xffffffff8149c5d0
#endif

#ifndef NETLINK_BROADCAST_FILTERED
#define NETLINK_BROADCAST_FILTERED 0xffffffff8149ce90
#endif

#ifndef NETLINK_BROADCAST
#define NETLINK_BROADCAST 0xffffffff8149d210
#endif

#ifndef NETLINK_ALLOC_SKB
#define NETLINK_ALLOC_SKB 0xffffffff8149d430
#endif

#ifndef __NETLINK_DUMP_START
#define __NETLINK_DUMP_START 0xffffffff8149de40
#endif

#ifndef NETLINK_TABLE_GRAB
#define NETLINK_TABLE_GRAB 0xffffffff8149e4c0
#endif

#ifndef NETLINK_TABLE_UNGRAB
#define NETLINK_TABLE_UNGRAB 0xffffffff8149e5d0
#endif

#ifndef __NETLINK_KERNEL_CREATE
#define __NETLINK_KERNEL_CREATE 0xffffffff8149e610
#endif

#ifndef NETLINK_GETSOCKBYFILP
#define NETLINK_GETSOCKBYFILP 0xffffffff8149f580
#endif

#ifndef NETLINK_ATTACHSKB
#define NETLINK_ATTACHSKB 0xffffffff8149f5c0
#endif

#ifndef NETLINK_UNICAST
#define NETLINK_UNICAST 0xffffffff8149f7b0
#endif

#ifndef NETLINK_ACK
#define NETLINK_ACK 0xffffffff8149ff70
#endif

#ifndef NETLINK_RCV_SKB
#define NETLINK_RCV_SKB 0xffffffff814a0080
#endif

#ifndef NLMSG_NOTIFY
#define NLMSG_NOTIFY 0xffffffff814a0150
#endif

#ifndef NETLINK_SENDSKB
#define NETLINK_SENDSKB 0xffffffff814a0240
#endif

#ifndef NETLINK_DETACHSKB
#define NETLINK_DETACHSKB 0xffffffff814a0280
#endif

#ifndef __NETLINK_CHANGE_NGROUPS
#define __NETLINK_CHANGE_NGROUPS 0xffffffff814a02b0
#endif

#ifndef NETLINK_CHANGE_NGROUPS
#define NETLINK_CHANGE_NGROUPS 0xffffffff814a03a0
#endif

#ifndef __NETLINK_CLEAR_MULTICAST_USERS
#define __NETLINK_CLEAR_MULTICAST_USERS 0xffffffff814a03d0
#endif

#ifndef GENL_LOCK
#define GENL_LOCK 0xffffffff814a0440
#endif

#ifndef GENL_UNLOCK
#define GENL_UNLOCK 0xffffffff814a0460
#endif

#ifndef GENLMSG_NEW_UNICAST
#define GENLMSG_NEW_UNICAST 0xffffffff814a0580
#endif

#ifndef GENLMSG_PUT
#define GENLMSG_PUT 0xffffffff814a05b0
#endif

#ifndef GENLMSG_MULTICAST_ALLNS
#define GENLMSG_MULTICAST_ALLNS 0xffffffff814a0cc0
#endif

#ifndef GENL_NOTIFY
#define GENL_NOTIFY 0xffffffff814a0e00
#endif

#ifndef __GENL_REGISTER_FAMILY
#define __GENL_REGISTER_FAMILY 0xffffffff814a1880
#endif

#ifndef GENL_UNREGISTER_FAMILY
#define GENL_UNREGISTER_FAMILY 0xffffffff814a1ee0
#endif

#ifndef NF_CT_ATTACH
#define NF_CT_ATTACH 0xffffffff814a2210
#endif

#ifndef NF_REGISTER_AFINFO
#define NF_REGISTER_AFINFO 0xffffffff814a2240
#endif

#ifndef NF_UNREGISTER_AFINFO
#define NF_UNREGISTER_AFINFO 0xffffffff814a2270
#endif

#ifndef NF_REGISTER_HOOK
#define NF_REGISTER_HOOK 0xffffffff814a22b0
#endif

#ifndef NF_UNREGISTER_HOOK
#define NF_UNREGISTER_HOOK 0xffffffff814a2350
#endif

#ifndef NF_UNREGISTER_HOOKS
#define NF_UNREGISTER_HOOKS 0xffffffff814a23c0
#endif

#ifndef NF_REGISTER_HOOKS
#define NF_REGISTER_HOOKS 0xffffffff814a2410
#endif

#ifndef SKB_MAKE_WRITABLE
#define SKB_MAKE_WRITABLE 0xffffffff814a24c0
#endif

#ifndef NF_CONNTRACK_DESTROY
#define NF_CONNTRACK_DESTROY 0xffffffff814a2580
#endif

#ifndef NF_ITERATE
#define NF_ITERATE 0xffffffff814a2610
#endif

#ifndef NF_HOOK_SLOW
#define NF_HOOK_SLOW 0xffffffff814a2690
#endif

#ifndef NF_LOG_UNREGISTER
#define NF_LOG_UNREGISTER 0xffffffff814a27d0
#endif

#ifndef NF_LOG_REGISTER
#define NF_LOG_REGISTER 0xffffffff814a2840
#endif

#ifndef NF_LOG_UNSET
#define NF_LOG_UNSET 0xffffffff814a2920
#endif

#ifndef NF_LOG_BIND_PF
#define NF_LOG_BIND_PF 0xffffffff814a2a00
#endif

#ifndef NF_LOGGER_FIND_GET
#define NF_LOGGER_FIND_GET 0xffffffff814a2a70
#endif

#ifndef NF_LOG_PACKET
#define NF_LOG_PACKET 0xffffffff814a2af0
#endif

#ifndef NF_LOG_TRACE
#define NF_LOG_TRACE 0xffffffff814a2c10
#endif

#ifndef NF_LOG_BUF_ADD
#define NF_LOG_BUF_ADD 0xffffffff814a2d10
#endif

#ifndef NF_LOG_BUF_OPEN
#define NF_LOG_BUF_OPEN 0xffffffff814a2dd0
#endif

#ifndef NF_LOG_SET
#define NF_LOG_SET 0xffffffff814a3120
#endif

#ifndef NF_LOGGER_REQUEST_MODULE
#define NF_LOGGER_REQUEST_MODULE 0xffffffff814a3370
#endif

#ifndef NF_LOGGER_PUT
#define NF_LOGGER_PUT 0xffffffff814a33c0
#endif

#ifndef NF_LOG_BUF_CLOSE
#define NF_LOG_BUF_CLOSE 0xffffffff814a3400
#endif

#ifndef NF_LOG_UNBIND_PF
#define NF_LOG_UNBIND_PF 0xffffffff814a3460
#endif

#ifndef NF_REGISTER_QUEUE_HANDLER
#define NF_REGISTER_QUEUE_HANDLER 0xffffffff814a34b0
#endif

#ifndef NF_UNREGISTER_QUEUE_HANDLER
#define NF_UNREGISTER_QUEUE_HANDLER 0xffffffff814a34f0
#endif

#ifndef NF_QUEUE_ENTRY_RELEASE_REFS
#define NF_QUEUE_ENTRY_RELEASE_REFS 0xffffffff814a3510
#endif

#ifndef NF_QUEUE_ENTRY_GET_REFS
#define NF_QUEUE_ENTRY_GET_REFS 0xffffffff814a35b0
#endif

#ifndef NF_QUEUE
#define NF_QUEUE 0xffffffff814a3640
#endif

#ifndef NF_REINJECT
#define NF_REINJECT 0xffffffff814a37b0
#endif

#ifndef NF_REGISTER_SOCKOPT
#define NF_REGISTER_SOCKOPT 0xffffffff814a3920
#endif

#ifndef NF_UNREGISTER_SOCKOPT
#define NF_UNREGISTER_SOCKOPT 0xffffffff814a39c0
#endif

#ifndef NF_SETSOCKOPT
#define NF_SETSOCKOPT 0xffffffff814a3ad0
#endif

#ifndef COMPAT_NF_SETSOCKOPT
#define COMPAT_NF_SETSOCKOPT 0xffffffff814a3b30
#endif

#ifndef NF_GETSOCKOPT
#define NF_GETSOCKOPT 0xffffffff814a3ba0
#endif

#ifndef COMPAT_NF_GETSOCKOPT
#define COMPAT_NF_GETSOCKOPT 0xffffffff814a3c00
#endif

#ifndef IP_IDENTS_RESERVE
#define IP_IDENTS_RESERVE 0xffffffff814a3e50
#endif

#ifndef __IP_SELECT_IDENT
#define __IP_SELECT_IDENT 0xffffffff814a3ec0
#endif

#ifndef __IP_ROUTE_OUTPUT_KEY
#define __IP_ROUTE_OUTPUT_KEY 0xffffffff814a5ae0
#endif

#ifndef IPV4_UPDATE_PMTU
#define IPV4_UPDATE_PMTU 0xffffffff814a63a0
#endif

#ifndef IP_ROUTE_OUTPUT_FLOW
#define IP_ROUTE_OUTPUT_FLOW 0xffffffff814a6460
#endif

#ifndef IPV4_SK_UPDATE_PMTU
#define IPV4_SK_UPDATE_PMTU 0xffffffff814a64b0
#endif

#ifndef IP_ROUTE_INPUT_NOREF
#define IP_ROUTE_INPUT_NOREF 0xffffffff814a6810
#endif

#ifndef IPV4_REDIRECT
#define IPV4_REDIRECT 0xffffffff814a7af0
#endif

#ifndef IPV4_SK_REDIRECT
#define IPV4_SK_REDIRECT 0xffffffff814a7b90
#endif

#ifndef RT_CACHE_FLUSH
#define RT_CACHE_FLUSH 0xffffffff814a7c80
#endif

#ifndef IP_RT_SEND_REDIRECT
#define IP_RT_SEND_REDIRECT 0xffffffff814a7c90
#endif

#ifndef IP_RT_GET_SOURCE
#define IP_RT_GET_SOURCE 0xffffffff814a7f20
#endif

#ifndef RT_FLUSH_DEV
#define RT_FLUSH_DEV 0xffffffff814a8110
#endif

#ifndef IPV4_BLACKHOLE_ROUTE
#define IPV4_BLACKHOLE_ROUTE 0xffffffff814a81f0
#endif

#ifndef IP_RT_MULTICAST_EVENT
#define IP_RT_MULTICAST_EVENT 0xffffffff814a8330
#endif

#ifndef INET_PEER_BASE_INIT
#define INET_PEER_BASE_INIT 0xffffffff814a8350
#endif

#ifndef INET_PUTPEER
#define INET_PUTPEER 0xffffffff814a8380
#endif

#ifndef INET_PEER_XRLIM_ALLOW
#define INET_PEER_XRLIM_ALLOW 0xffffffff814a83a0
#endif

#ifndef INETPEER_INVALIDATE_TREE
#define INETPEER_INVALIDATE_TREE 0xffffffff814a8470
#endif

#ifndef INET_GETPEER
#define INET_GETPEER 0xffffffff814a89e0
#endif

#ifndef INET_ADD_OFFLOAD
#define INET_ADD_OFFLOAD 0xffffffff814a8cf0
#endif

#ifndef INET_ADD_PROTOCOL
#define INET_ADD_PROTOCOL 0xffffffff814a8d20
#endif

#ifndef INET_DEL_PROTOCOL
#define INET_DEL_PROTOCOL 0xffffffff814a8d70
#endif

#ifndef INET_DEL_OFFLOAD
#define INET_DEL_OFFLOAD 0xffffffff814a8db0
#endif

#ifndef IP_CALL_RA_CHAIN
#define IP_CALL_RA_CHAIN 0xffffffff814a9320
#endif

#ifndef IP_LOCAL_DELIVER
#define IP_LOCAL_DELIVER 0xffffffff814a9450
#endif

#ifndef IP_RCV
#define IP_RCV 0xffffffff814a94f0
#endif

#ifndef IP_DEFRAG
#define IP_DEFRAG 0xffffffff814a9d60
#endif

#ifndef IP_CHECK_DEFRAG
#define IP_CHECK_DEFRAG 0xffffffff814aaac0
#endif

#ifndef IP_FRAG_MEM
#define IP_FRAG_MEM 0xffffffff814aacc0
#endif

#ifndef IP_FORWARD
#define IP_FORWARD 0xffffffff814aada0
#endif

#ifndef IP_OPTIONS_COMPILE
#define IP_OPTIONS_COMPILE 0xffffffff814ab240
#endif

#ifndef IP_OPTIONS_RCV_SRR
#define IP_OPTIONS_RCV_SRR 0xffffffff814aba30
#endif

#ifndef IP_OPTIONS_BUILD
#define IP_OPTIONS_BUILD 0xffffffff814abc80
#endif

#ifndef __IP_OPTIONS_ECHO
#define __IP_OPTIONS_ECHO 0xffffffff814abfc0
#endif

#ifndef IP_OPTIONS_FRAGMENT
#define IP_OPTIONS_FRAGMENT 0xffffffff814ac500
#endif

#ifndef IP_OPTIONS_UNDO
#define IP_OPTIONS_UNDO 0xffffffff814ac600
#endif

#ifndef IP_OPTIONS_GET_FROM_USER
#define IP_OPTIONS_GET_FROM_USER 0xffffffff814ac6f0
#endif

#ifndef IP_OPTIONS_GET
#define IP_OPTIONS_GET 0xffffffff814ac780
#endif

#ifndef IP_FORWARD_OPTIONS
#define IP_FORWARD_OPTIONS 0xffffffff814ac800
#endif

#ifndef IP_GENERIC_GETFRAG
#define IP_GENERIC_GETFRAG 0xffffffff814acbf0
#endif

#ifndef IP_SEND_CHECK
#define IP_SEND_CHECK 0xffffffff814acee0
#endif

#ifndef IP_FRAGMENT
#define IP_FRAGMENT 0xffffffff814acf30
#endif

#ifndef __IP_LOCAL_OUT_SK
#define __IP_LOCAL_OUT_SK 0xffffffff814af190
#endif

#ifndef IP_LOCAL_OUT_SK
#define IP_LOCAL_OUT_SK 0xffffffff814af260
#endif

#ifndef IP_BUILD_AND_SEND_PKT
#define IP_BUILD_AND_SEND_PKT 0xffffffff814af2b0
#endif

#ifndef IP_QUEUE_XMIT
#define IP_QUEUE_XMIT 0xffffffff814af4d0
#endif

#ifndef __IP_LOCAL_OUT
#define __IP_LOCAL_OUT 0xffffffff814af880
#endif

#ifndef IP_MC_OUTPUT
#define IP_MC_OUTPUT 0xffffffff814af8a0
#endif

#ifndef IP_OUTPUT
#define IP_OUTPUT 0xffffffff814afae0
#endif

#ifndef IP_APPEND_DATA
#define IP_APPEND_DATA 0xffffffff814afba0
#endif

#ifndef IP_APPEND_PAGE
#define IP_APPEND_PAGE 0xffffffff814afbd0
#endif

#ifndef __IP_MAKE_SKB
#define __IP_MAKE_SKB 0xffffffff814b01e0
#endif

#ifndef IP_SEND_SKB
#define IP_SEND_SKB 0xffffffff814b05e0
#endif

#ifndef IP_PUSH_PENDING_FRAMES
#define IP_PUSH_PENDING_FRAMES 0xffffffff814b0620
#endif

#ifndef IP_FLUSH_PENDING_FRAMES
#define IP_FLUSH_PENDING_FRAMES 0xffffffff814b0660
#endif

#ifndef IP_MAKE_SKB
#define IP_MAKE_SKB 0xffffffff814b0680
#endif

#ifndef IP_SEND_UNICAST_REPLY
#define IP_SEND_UNICAST_REPLY 0xffffffff814b07b0
#endif

#ifndef IP_CMSG_RECV_OFFSET
#define IP_CMSG_RECV_OFFSET 0xffffffff814b0a60
#endif

#ifndef IP_GETSOCKOPT
#define IP_GETSOCKOPT 0xffffffff814b1560
#endif

#ifndef COMPAT_IP_GETSOCKOPT
#define COMPAT_IP_GETSOCKOPT 0xffffffff814b1620
#endif

#ifndef IP_CMSG_SEND
#define IP_CMSG_SEND 0xffffffff814b1710
#endif

#ifndef IP_RA_CONTROL
#define IP_RA_CONTROL 0xffffffff814b1920
#endif

#ifndef IP_SETSOCKOPT
#define IP_SETSOCKOPT 0xffffffff814b2930
#endif

#ifndef COMPAT_IP_SETSOCKOPT
#define COMPAT_IP_SETSOCKOPT 0xffffffff814b29d0
#endif

#ifndef IP_ICMP_ERROR
#define IP_ICMP_ERROR 0xffffffff814b2a90
#endif

#ifndef IP_LOCAL_ERROR
#define IP_LOCAL_ERROR 0xffffffff814b2b80
#endif

#ifndef IP_RECV_ERROR
#define IP_RECV_ERROR 0xffffffff814b2cc0
#endif

#ifndef IPV4_PKTINFO_PREPARE
#define IPV4_PKTINFO_PREPARE 0xffffffff814b2f90
#endif

#ifndef INET_HASHINFO_INIT
#define INET_HASHINFO_INIT 0xffffffff814b3030
#endif

#ifndef INET_UNHASH
#define INET_UNHASH 0xffffffff814b3140
#endif

#ifndef INET_PUT_PORT
#define INET_PUT_PORT 0xffffffff814b3450
#endif

#ifndef __INET_LOOKUP_LISTENER
#define __INET_LOOKUP_LISTENER 0xffffffff814b3520
#endif

#ifndef SOCK_GEN_PUT
#define SOCK_GEN_PUT 0xffffffff814b37f0
#endif

#ifndef SOCK_EDEMUX
#define SOCK_EDEMUX 0xffffffff814b38a0
#endif

#ifndef __INET_LOOKUP_ESTABLISHED
#define __INET_LOOKUP_ESTABLISHED 0xffffffff814b38c0
#endif

#ifndef SK_EHASHFN
#define SK_EHASHFN 0xffffffff814b39f0
#endif

#ifndef __INET_HASH_NOLISTEN
#define __INET_HASH_NOLISTEN 0xffffffff814b3a50
#endif

#ifndef __INET_HASH
#define __INET_HASH 0xffffffff814b3b40
#endif

#ifndef INET_HASH
#define INET_HASH 0xffffffff814b3c00
#endif

#ifndef INET_BIND_BUCKET_CREATE
#define INET_BIND_BUCKET_CREATE 0xffffffff814b3c50
#endif

#ifndef INET_BIND_BUCKET_DESTROY
#define INET_BIND_BUCKET_DESTROY 0xffffffff814b3cc0
#endif

#ifndef INET_BIND_HASH
#define INET_BIND_HASH 0xffffffff814b3d00
#endif

#ifndef __INET_INHERIT_PORT
#define __INET_INHERIT_PORT 0xffffffff814b3d50
#endif

#ifndef __INET_HASH_CONNECT
#define __INET_HASH_CONNECT 0xffffffff814b3e40
#endif

#ifndef INET_HASH_CONNECT
#define INET_HASH_CONNECT 0xffffffff814b41b0
#endif

#ifndef __INET_TWSK_HASHDANCE
#define __INET_TWSK_HASHDANCE 0xffffffff814b41f0
#endif

#ifndef INET_TWSK_ALLOC
#define INET_TWSK_ALLOC 0xffffffff814b4320
#endif

#ifndef INET_TWSK_SCHEDULE
#define INET_TWSK_SCHEDULE 0xffffffff814b4460
#endif

#ifndef INET_TWSK_UNHASH
#define INET_TWSK_UNHASH 0xffffffff814b44b0
#endif

#ifndef INET_TWSK_BIND_UNHASH
#define INET_TWSK_BIND_UNHASH 0xffffffff814b44f0
#endif

#ifndef INET_TWSK_FREE
#define INET_TWSK_FREE 0xffffffff814b4550
#endif

#ifndef INET_TWSK_PUT
#define INET_TWSK_PUT 0xffffffff814b45d0
#endif

#ifndef TW_TIMER_HANDLER
#define TW_TIMER_HANDLER 0xffffffff814b46f0
#endif

#ifndef INET_TWSK_DESCHEDULE
#define INET_TWSK_DESCHEDULE 0xffffffff814b4730
#endif

#ifndef INET_TWSK_PURGE
#define INET_TWSK_PURGE 0xffffffff814b4760
#endif

#ifndef INET_RTX_SYN_ACK
#define INET_RTX_SYN_ACK 0xffffffff814b48a0
#endif

#ifndef INET_CSK_ADDR2SOCKADDR
#define INET_CSK_ADDR2SOCKADDR 0xffffffff814b48c0
#endif

#ifndef INET_CSK_COMPAT_GETSOCKOPT
#define INET_CSK_COMPAT_GETSOCKOPT 0xffffffff814b48e0
#endif

#ifndef INET_CSK_COMPAT_SETSOCKOPT
#define INET_CSK_COMPAT_SETSOCKOPT 0xffffffff814b4910
#endif

#ifndef INET_GET_LOCAL_PORT_RANGE
#define INET_GET_LOCAL_PORT_RANGE 0xffffffff814b4940
#endif

#ifndef INET_CSK_BIND_CONFLICT
#define INET_CSK_BIND_CONFLICT 0xffffffff814b4980
#endif

#ifndef INET_CSK_GET_PORT
#define INET_CSK_GET_PORT 0xffffffff814b4ae0
#endif

#ifndef INET_CSK_INIT_XMIT_TIMERS
#define INET_CSK_INIT_XMIT_TIMERS 0xffffffff814b5050
#endif

#ifndef INET_CSK_CLEAR_XMIT_TIMERS
#define INET_CSK_CLEAR_XMIT_TIMERS 0xffffffff814b50f0
#endif

#ifndef INET_CSK_DELETE_KEEPALIVE_TIMER
#define INET_CSK_DELETE_KEEPALIVE_TIMER 0xffffffff814b5140
#endif

#ifndef INET_CSK_RESET_KEEPALIVE_TIMER
#define INET_CSK_RESET_KEEPALIVE_TIMER 0xffffffff814b5160
#endif

#ifndef INET_CSK_ROUTE_REQ
#define INET_CSK_ROUTE_REQ 0xffffffff814b5190
#endif

#ifndef INET_CSK_ROUTE_CHILD_SOCK
#define INET_CSK_ROUTE_CHILD_SOCK 0xffffffff814b52c0
#endif

#ifndef REQSK_QUEUE_HASH_REQ
#define REQSK_QUEUE_HASH_REQ 0xffffffff814b5430
#endif

#ifndef INET_CSK_CLONE_LOCK
#define INET_CSK_CLONE_LOCK 0xffffffff814b54e0
#endif

#ifndef INET_CSK_LISTEN_START
#define INET_CSK_LISTEN_START 0xffffffff814b5700
#endif

#ifndef INET_CSK_UPDATE_PMTU
#define INET_CSK_UPDATE_PMTU 0xffffffff814b57e0
#endif

#ifndef INET_CSK_SEARCH_REQ
#define INET_CSK_SEARCH_REQ 0xffffffff814b5860
#endif

#ifndef INET_CSK_REQSK_QUEUE_HASH_ADD
#define INET_CSK_REQSK_QUEUE_HASH_ADD 0xffffffff814b5970
#endif

#ifndef INET_CSK_PREPARE_FORCED_CLOSE
#define INET_CSK_PREPARE_FORCED_CLOSE 0xffffffff814b5a10
#endif

#ifndef INET_CSK_DESTROY_SOCK
#define INET_CSK_DESTROY_SOCK 0xffffffff814b5a60
#endif

#ifndef INET_CSK_ACCEPT
#define INET_CSK_ACCEPT 0xffffffff814b5bc0
#endif

#ifndef INET_CSK_REQSK_QUEUE_DROP
#define INET_CSK_REQSK_QUEUE_DROP 0xffffffff814b5f00
#endif

#ifndef INET_CSK_LISTEN_STOP
#define INET_CSK_LISTEN_STOP 0xffffffff814b6360
#endif

#ifndef TCP_INIT_SOCK
#define TCP_INIT_SOCK 0xffffffff814b6750
#endif

#ifndef TCP_IOCTL
#define TCP_IOCTL 0xffffffff814b6900
#endif

#ifndef TCP_READ_SOCK
#define TCP_READ_SOCK 0xffffffff814b6e90
#endif

#ifndef TCP_SPLICE_READ
#define TCP_SPLICE_READ 0xffffffff814b7050
#endif

#ifndef TCP_SET_STATE
#define TCP_SET_STATE 0xffffffff814b73a0
#endif

#ifndef TCP_SOCK_DESTRUCT
#define TCP_SOCK_DESTRUCT 0xffffffff814b7470
#endif

#ifndef TCP_GET_INFO
#define TCP_GET_INFO 0xffffffff814b7490
#endif

#ifndef TCP_ALLOC_MD5SIG_POOL
#define TCP_ALLOC_MD5SIG_POOL 0xffffffff814b7700
#endif

#ifndef TCP_MD5_HASH_HEADER
#define TCP_MD5_HASH_HEADER 0xffffffff814b77f0
#endif

#ifndef TCP_MD5_HASH_KEY
#define TCP_MD5_HASH_KEY 0xffffffff814b7850
#endif

#ifndef TCP_ENTER_MEMORY_PRESSURE
#define TCP_ENTER_MEMORY_PRESSURE 0xffffffff814b7890
#endif

#ifndef TCP_GET_MD5SIG_POOL
#define TCP_GET_MD5SIG_POOL 0xffffffff814b78c0
#endif

#ifndef TCP_MD5_HASH_SKB_DATA
#define TCP_MD5_HASH_SKB_DATA 0xffffffff814b7980
#endif

#ifndef TCP_SHUTDOWN
#define TCP_SHUTDOWN 0xffffffff814b7b70
#endif

#ifndef TCP_DONE
#define TCP_DONE 0xffffffff814b7bd0
#endif

#ifndef COMPAT_TCP_GETSOCKOPT
#define COMPAT_TCP_GETSOCKOPT 0xffffffff814b80d0
#endif

#ifndef TCP_GETSOCKOPT
#define TCP_GETSOCKOPT 0xffffffff814b8100
#endif

#ifndef TCP_RECVMSG
#define TCP_RECVMSG 0xffffffff814b8140
#endif

#ifndef TCP_POLL
#define TCP_POLL 0xffffffff814b8cf0
#endif

#ifndef TCP_DISCONNECT
#define TCP_DISCONNECT 0xffffffff814b8f40
#endif

#ifndef TCP_SETSOCKOPT
#define TCP_SETSOCKOPT 0xffffffff814b9c40
#endif

#ifndef COMPAT_TCP_SETSOCKOPT
#define COMPAT_TCP_SETSOCKOPT 0xffffffff814b9c80
#endif

#ifndef SK_STREAM_ALLOC_SKB
#define SK_STREAM_ALLOC_SKB 0xffffffff814b9cb0
#endif

#ifndef TCP_SENDPAGE
#define TCP_SENDPAGE 0xffffffff814b9db0
#endif

#ifndef TCP_SENDMSG
#define TCP_SENDMSG 0xffffffff814ba350
#endif

#ifndef TCP_FREE_FASTOPEN_REQ
#define TCP_FREE_FASTOPEN_REQ 0xffffffff814bae10
#endif

#ifndef TCP_CHECK_OOM
#define TCP_CHECK_OOM 0xffffffff814bae40
#endif

#ifndef TCP_CLOSE
#define TCP_CLOSE 0xffffffff814baf50
#endif

#ifndef TCP_INITIALIZE_RCV_MSS
#define TCP_INITIALIZE_RCV_MSS 0xffffffff814bb4a0
#endif

#ifndef TCP_PARSE_MD5SIG_OPTION
#define TCP_PARSE_MD5SIG_OPTION 0xffffffff814bb800
#endif

#ifndef INET_REQSK_ALLOC
#define INET_REQSK_ALLOC 0xffffffff814bbdc0
#endif

#ifndef TCP_SIMPLE_RETRANSMIT
#define TCP_SIMPLE_RETRANSMIT 0xffffffff814bc500
#endif

#ifndef TCP_PARSE_OPTIONS
#define TCP_PARSE_OPTIONS 0xffffffff814bcbf0
#endif

#ifndef TCP_CONN_REQUEST
#define TCP_CONN_REQUEST 0xffffffff814bcf30
#endif

#ifndef TCP_INIT_BUFFER_SPACE
#define TCP_INIT_BUFFER_SPACE 0xffffffff814c0700
#endif

#ifndef TCP_RCV_SPACE_ADJUST
#define TCP_RCV_SPACE_ADJUST 0xffffffff814c0890
#endif

#ifndef TCP_INIT_CWND
#define TCP_INIT_CWND 0xffffffff814c1690
#endif

#ifndef TCP_DISABLE_FACK
#define TCP_DISABLE_FACK 0xffffffff814c16c0
#endif

#ifndef TCP_CLEAR_RETRANS
#define TCP_CLEAR_RETRANS 0xffffffff814c1700
#endif

#ifndef TCP_ENTER_LOSS
#define TCP_ENTER_LOSS 0xffffffff814c1750
#endif

#ifndef TCP_ENTER_CWR
#define TCP_ENTER_CWR 0xffffffff814c1aa0
#endif

#ifndef TCP_REARM_RTO
#define TCP_REARM_RTO 0xffffffff814c1ae0
#endif

#ifndef TCP_RESUME_EARLY_RETRANSMIT
#define TCP_RESUME_EARLY_RETRANSMIT 0xffffffff814c1be0
#endif

#ifndef TCP_OOW_RATE_LIMITED
#define TCP_OOW_RATE_LIMITED 0xffffffff814c1c20
#endif

#ifndef TCP_RESET
#define TCP_RESET 0xffffffff814c3020
#endif

#ifndef TCP_RCV_ESTABLISHED
#define TCP_RCV_ESTABLISHED 0xffffffff814c3380
#endif

#ifndef TCP_SEND_RCVQ
#define TCP_SEND_RCVQ 0xffffffff814c3a80
#endif

#ifndef TCP_FINISH_CONNECT
#define TCP_FINISH_CONNECT 0xffffffff814c3bc0
#endif

#ifndef TCP_RCV_STATE_PROCESS
#define TCP_RCV_STATE_PROCESS 0xffffffff814c3ce0
#endif

#ifndef TCP_SELECT_INITIAL_WINDOW
#define TCP_SELECT_INITIAL_WINDOW 0xffffffff814c4c10
#endif

#ifndef TCP_WFREE
#define TCP_WFREE 0xffffffff814c5320
#endif

#ifndef TCP_RTX_SYNACK
#define TCP_RTX_SYNACK 0xffffffff814c5410
#endif

#ifndef TCP_MAKE_SYNACK
#define TCP_MAKE_SYNACK 0xffffffff814c5480
#endif

#ifndef TCP_SYNC_MSS
#define TCP_SYNC_MSS 0xffffffff814c5af0
#endif

#ifndef TCP_DEFAULT_INIT_RWND
#define TCP_DEFAULT_INIT_RWND 0xffffffff814c5c30
#endif

#ifndef TCP_FRAGMENT
#define TCP_FRAGMENT 0xffffffff814c5c60
#endif

#ifndef TCP_TRIM_HEAD
#define TCP_TRIM_HEAD 0xffffffff814c5f40
#endif

#ifndef TCP_MTU_TO_MSS
#define TCP_MTU_TO_MSS 0xffffffff814c6020
#endif

#ifndef TCP_MSS_TO_MTU
#define TCP_MSS_TO_MTU 0xffffffff814c6090
#endif

#ifndef TCP_MTUP_INIT
#define TCP_MTUP_INIT 0xffffffff814c60e0
#endif

#ifndef TCP_CURRENT_MSS
#define TCP_CURRENT_MSS 0xffffffff814c6150
#endif

#ifndef TCP_MAY_SEND_NOW
#define TCP_MAY_SEND_NOW 0xffffffff814c61c0
#endif

#ifndef TCP_SCHEDULE_LOSS_PROBE
#define TCP_SCHEDULE_LOSS_PROBE 0xffffffff814c6320
#endif

#ifndef __TCP_SELECT_WINDOW
#define __TCP_SELECT_WINDOW 0xffffffff814c6510
#endif

#ifndef TCP_RELEASE_CB
#define TCP_RELEASE_CB 0xffffffff814c7f80
#endif

#ifndef __TCP_PUSH_PENDING_FRAMES
#define __TCP_PUSH_PENDING_FRAMES 0xffffffff814c8170
#endif

#ifndef TCP_PUSH_ONE
#define TCP_PUSH_ONE 0xffffffff814c8230
#endif

#ifndef TCP_CONNECT
#define TCP_CONNECT 0xffffffff814c8280
#endif

#ifndef TCP_SEND_ACK
#define TCP_SEND_ACK 0xffffffff814c8a90
#endif

#ifndef __TCP_RETRANSMIT_SKB
#define __TCP_RETRANSMIT_SKB 0xffffffff814c8cf0
#endif

#ifndef TCP_SEND_LOSS_PROBE
#define TCP_SEND_LOSS_PROBE 0xffffffff814c92b0
#endif

#ifndef TCP_RETRANSMIT_SKB
#define TCP_RETRANSMIT_SKB 0xffffffff814c95c0
#endif

#ifndef TCP_XMIT_RETRANSMIT_QUEUE
#define TCP_XMIT_RETRANSMIT_QUEUE 0xffffffff814c96b0
#endif

#ifndef TCP_SEND_FIN
#define TCP_SEND_FIN 0xffffffff814c99c0
#endif

#ifndef TCP_SEND_ACTIVE_RESET
#define TCP_SEND_ACTIVE_RESET 0xffffffff814c9bf0
#endif

#ifndef TCP_SEND_SYNACK
#define TCP_SEND_SYNACK 0xffffffff814c9d10
#endif

#ifndef TCP_SEND_DELAYED_ACK
#define TCP_SEND_DELAYED_ACK 0xffffffff814c9f20
#endif

#ifndef TCP_SEND_WINDOW_PROBE
#define TCP_SEND_WINDOW_PROBE 0xffffffff814ca030
#endif

#ifndef TCP_WRITE_WAKEUP
#define TCP_WRITE_WAKEUP 0xffffffff814ca070
#endif

#ifndef TCP_SEND_PROBE0
#define TCP_SEND_PROBE0 0xffffffff814ca1d0
#endif

#ifndef TCP_SYN_ACK_TIMEOUT
#define TCP_SYN_ACK_TIMEOUT 0xffffffff814ca290
#endif

#ifndef TCP_INIT_XMIT_TIMERS
#define TCP_INIT_XMIT_TIMERS 0xffffffff814ca3c0
#endif

#ifndef TCP_DELACK_TIMER_HANDLER
#define TCP_DELACK_TIMER_HANDLER 0xffffffff814ca6e0
#endif

#ifndef TCP_RETRANSMIT_TIMER
#define TCP_RETRANSMIT_TIMER 0xffffffff814ca930
#endif

#ifndef TCP_WRITE_TIMER_HANDLER
#define TCP_WRITE_TIMER_HANDLER 0xffffffff814cb0c0
#endif

#ifndef TCP_SET_KEEPALIVE
#define TCP_SET_KEEPALIVE 0xffffffff814cb330
#endif

#ifndef INET_SK_RX_DST_SET
#define INET_SK_RX_DST_SET 0xffffffff814cb3c0
#endif

#ifndef TCP_V4_MTU_REDUCED
#define TCP_V4_MTU_REDUCED 0xffffffff814cb430
#endif

#ifndef TCP_MD5_DO_LOOKUP
#define TCP_MD5_DO_LOOKUP 0xffffffff814cb500
#endif

#ifndef TCP_V4_MD5_LOOKUP
#define TCP_V4_MD5_LOOKUP 0xffffffff814cb590
#endif

#ifndef TCP_MD5_DO_DEL
#define TCP_MD5_DO_DEL 0xffffffff814cb5b0
#endif

#ifndef TCP_V4_MD5_HASH_SKB
#define TCP_V4_MD5_HASH_SKB 0xffffffff814cb660
#endif

#ifndef TCP_SEQ_OPEN
#define TCP_SEQ_OPEN 0xffffffff814cbca0
#endif

#ifndef TCP_PROC_REGISTER
#define TCP_PROC_REGISTER 0xffffffff814cbd00
#endif

#ifndef TCP_PROC_UNREGISTER
#define TCP_PROC_UNREGISTER 0xffffffff814cbe00
#endif

#ifndef TCP_TWSK_UNIQUE
#define TCP_TWSK_UNIQUE 0xffffffff814cc460
#endif

#ifndef TCP_MD5_DO_ADD
#define TCP_MD5_DO_ADD 0xffffffff814cc500
#endif

#ifndef TCP_V4_CONN_REQUEST
#define TCP_V4_CONN_REQUEST 0xffffffff814cc940
#endif

#ifndef TCP_V4_CONNECT
#define TCP_V4_CONNECT 0xffffffff814cd180
#endif

#ifndef TCP_V4_SYN_RECV_SOCK
#define TCP_V4_SYN_RECV_SOCK 0xffffffff814cd680
#endif

#ifndef TCP_V4_DESTROY_SOCK
#define TCP_V4_DESTROY_SOCK 0xffffffff814cd990
#endif

#ifndef TCP_REQ_ERR
#define TCP_REQ_ERR 0xffffffff814cdbe0
#endif

#ifndef TCP_V4_DO_RCV
#define TCP_V4_DO_RCV 0xffffffff814ce0d0
#endif

#ifndef TCP_PREQUEUE
#define TCP_PREQUEUE 0xffffffff814ce4a0
#endif

#ifndef TCP_V4_ERR
#define TCP_V4_ERR 0xffffffff814ce790
#endif

#ifndef __TCP_V4_SEND_CHECK
#define __TCP_V4_SEND_CHECK 0xffffffff814ceca0
#endif

#ifndef TCP_V4_SEND_CHECK
#define TCP_V4_SEND_CHECK 0xffffffff814ced90
#endif

#ifndef TCP_V4_EARLY_DEMUX
#define TCP_V4_EARLY_DEMUX 0xffffffff814cee60
#endif

#ifndef TCP_V4_RCV
#define TCP_V4_RCV 0xffffffff814cefc0
#endif

#ifndef TCP4_PROC_EXIT
#define TCP4_PROC_EXIT 0xffffffff814cf9f0
#endif

#ifndef TCP_TWSK_DESTRUCTOR
#define TCP_TWSK_DESTRUCTOR 0xffffffff814cfa10
#endif

#ifndef TCP_CREATE_OPENREQ_CHILD
#define TCP_CREATE_OPENREQ_CHILD 0xffffffff814cfa50
#endif

#ifndef TCP_CHILD_PROCESS
#define TCP_CHILD_PROCESS 0xffffffff814cfec0
#endif

#ifndef TCP_CHECK_REQ
#define TCP_CHECK_REQ 0xffffffff814cffa0
#endif

#ifndef TCP_TIMEWAIT_STATE_PROCESS
#define TCP_TIMEWAIT_STATE_PROCESS 0xffffffff814d04a0
#endif

#ifndef TCP_OPENREQ_INIT_RWIN
#define TCP_OPENREQ_INIT_RWIN 0xffffffff814d0840
#endif

#ifndef TCP_CA_OPENREQ_CHILD
#define TCP_CA_OPENREQ_CHILD 0xffffffff814d09e0
#endif

#ifndef TCP_TIME_WAIT
#define TCP_TIME_WAIT 0xffffffff814d0ab0
#endif

#ifndef TCP_SLOW_START
#define TCP_SLOW_START 0xffffffff814d0d10
#endif

#ifndef TCP_CONG_AVOID_AI
#define TCP_CONG_AVOID_AI 0xffffffff814d0d50
#endif

#ifndef TCP_RENO_CONG_AVOID
#define TCP_RENO_CONG_AVOID 0xffffffff814d0dd0
#endif

#ifndef TCP_RENO_SSTHRESH
#define TCP_RENO_SSTHRESH 0xffffffff814d0e50
#endif

#ifndef TCP_UNREGISTER_CONGESTION_CONTROL
#define TCP_UNREGISTER_CONGESTION_CONTROL 0xffffffff814d0e70
#endif

#ifndef TCP_CA_GET_NAME_BY_KEY
#define TCP_CA_GET_NAME_BY_KEY 0xffffffff814d0f20
#endif

#ifndef TCP_CA_GET_KEY_BY_NAME
#define TCP_CA_GET_KEY_BY_NAME 0xffffffff814d0ff0
#endif

#ifndef TCP_REGISTER_CONGESTION_CONTROL
#define TCP_REGISTER_CONGESTION_CONTROL 0xffffffff814d1020
#endif

#ifndef TCP_CA_FIND_KEY
#define TCP_CA_FIND_KEY 0xffffffff814d11f0
#endif

#ifndef TCP_ASSIGN_CONGESTION_CONTROL
#define TCP_ASSIGN_CONGESTION_CONTROL 0xffffffff814d1250
#endif

#ifndef TCP_INIT_CONGESTION_CONTROL
#define TCP_INIT_CONGESTION_CONTROL 0xffffffff814d12f0
#endif

#ifndef TCP_CLEANUP_CONGESTION_CONTROL
#define TCP_CLEANUP_CONGESTION_CONTROL 0xffffffff814d1320
#endif

#ifndef TCP_SET_DEFAULT_CONGESTION_CONTROL
#define TCP_SET_DEFAULT_CONGESTION_CONTROL 0xffffffff814d1360
#endif

#ifndef TCP_GET_AVAILABLE_CONGESTION_CONTROL
#define TCP_GET_AVAILABLE_CONGESTION_CONTROL 0xffffffff814d1420
#endif

#ifndef TCP_GET_DEFAULT_CONGESTION_CONTROL
#define TCP_GET_DEFAULT_CONGESTION_CONTROL 0xffffffff814d14c0
#endif

#ifndef TCP_GET_ALLOWED_CONGESTION_CONTROL
#define TCP_GET_ALLOWED_CONGESTION_CONTROL 0xffffffff814d1500
#endif

#ifndef TCP_SET_ALLOWED_CONGESTION_CONTROL
#define TCP_SET_ALLOWED_CONGESTION_CONTROL 0xffffffff814d15b0
#endif

#ifndef TCP_SET_CONGESTION_CONTROL
#define TCP_SET_CONGESTION_CONTROL 0xffffffff814d16e0
#endif

#ifndef TCP_PEER_IS_PROVEN
#define TCP_PEER_IS_PROVEN 0xffffffff814d2560
#endif

#ifndef TCP_FETCH_TIMEWAIT_STAMP
#define TCP_FETCH_TIMEWAIT_STAMP 0xffffffff814d29d0
#endif

#ifndef TCP_UPDATE_METRICS
#define TCP_UPDATE_METRICS 0xffffffff814d2a20
#endif

#ifndef TCP_INIT_METRICS
#define TCP_INIT_METRICS 0xffffffff814d2c00
#endif

#ifndef TCP_REMEMBER_STAMP
#define TCP_REMEMBER_STAMP 0xffffffff814d2db0
#endif

#ifndef TCP_TW_REMEMBER_STAMP
#define TCP_TW_REMEMBER_STAMP 0xffffffff814d2e40
#endif

#ifndef TCP_FASTOPEN_CACHE_GET
#define TCP_FASTOPEN_CACHE_GET 0xffffffff814d2fe0
#endif

#ifndef TCP_FASTOPEN_CACHE_SET
#define TCP_FASTOPEN_CACHE_SET 0xffffffff814d30b0
#endif

#ifndef TCP_TRY_FASTOPEN
#define TCP_TRY_FASTOPEN 0xffffffff814d31f0
#endif

#ifndef TCP_FASTOPEN_RESET_CIPHER
#define TCP_FASTOPEN_RESET_CIPHER 0xffffffff814d38b0
#endif

#ifndef TCP_FASTOPEN_INIT_KEY_ONCE
#define TCP_FASTOPEN_INIT_KEY_ONCE 0xffffffff814d39c0
#endif

#ifndef TCP_GRO_COMPLETE
#define TCP_GRO_COMPLETE 0xffffffff814d3a20
#endif

#ifndef TCP_GSO_SEGMENT
#define TCP_GSO_SEGMENT 0xffffffff814d3af0
#endif

#ifndef TCP_GRO_RECEIVE
#define TCP_GRO_RECEIVE 0xffffffff814d40a0
#endif

#ifndef IP4_DATAGRAM_RELEASE_CB
#define IP4_DATAGRAM_RELEASE_CB 0xffffffff814d4580
#endif

#ifndef __IP4_DATAGRAM_CONNECT
#define __IP4_DATAGRAM_CONNECT 0xffffffff814d4710
#endif

#ifndef IP4_DATAGRAM_CONNECT
#define IP4_DATAGRAM_CONNECT 0xffffffff814d49c0
#endif

#ifndef RAW_SEQ_NEXT
#define RAW_SEQ_NEXT 0xffffffff814d4b90
#endif

#ifndef RAW_SEQ_STOP
#define RAW_SEQ_STOP 0xffffffff814d4bc0
#endif

#ifndef RAW_HASH_SK
#define RAW_HASH_SK 0xffffffff814d4be0
#endif

#ifndef RAW_UNHASH_SK
#define RAW_UNHASH_SK 0xffffffff814d4c60
#endif

#ifndef RAW_SEQ_START
#define RAW_SEQ_START 0xffffffff814d4cf0
#endif

#ifndef RAW_SEQ_OPEN
#define RAW_SEQ_OPEN 0xffffffff814d5220
#endif

#ifndef RAW_ICMP_ERROR
#define RAW_ICMP_ERROR 0xffffffff814d5f80
#endif

#ifndef RAW_RCV
#define RAW_RCV 0xffffffff814d6230
#endif

#ifndef RAW_LOCAL_DELIVER
#define RAW_LOCAL_DELIVER 0xffffffff814d6330
#endif

#ifndef UDP_LIB_REHASH
#define UDP_LIB_REHASH 0xffffffff814d67a0
#endif

#ifndef UDP_FLOW_HASHRND
#define UDP_FLOW_HASHRND 0xffffffff814d68f0
#endif

#ifndef UDP4_HWCSUM
#define UDP4_HWCSUM 0xffffffff814d6940
#endif

#ifndef UDP_SET_CSUM
#define UDP_SET_CSUM 0xffffffff814d6a70
#endif

#ifndef UDP_LIB_UNHASH
#define UDP_LIB_UNHASH 0xffffffff814d6c00
#endif

#ifndef UDP_PUSH_PENDING_FRAMES
#define UDP_PUSH_PENDING_FRAMES 0xffffffff814d6fc0
#endif

#ifndef UDP_DISCONNECT
#define UDP_DISCONNECT 0xffffffff814d7050
#endif

#ifndef UDP_ENCAP_ENABLE
#define UDP_ENCAP_ENABLE 0xffffffff814d7110
#endif

#ifndef UDP_LIB_SETSOCKOPT
#define UDP_LIB_SETSOCKOPT 0xffffffff814d7140
#endif

#ifndef UDP_LIB_GETSOCKOPT
#define UDP_LIB_GETSOCKOPT 0xffffffff814d7490
#endif

#ifndef UDP_GETSOCKOPT
#define UDP_GETSOCKOPT 0xffffffff814d75a0
#endif

#ifndef COMPAT_UDP_GETSOCKOPT
#define COMPAT_UDP_GETSOCKOPT 0xffffffff814d75d0
#endif

#ifndef UDP_SEQ_OPEN
#define UDP_SEQ_OPEN 0xffffffff814d7610
#endif

#ifndef UDP_PROC_REGISTER
#define UDP_PROC_REGISTER 0xffffffff814d7670
#endif

#ifndef UDP_PROC_UNREGISTER
#define UDP_PROC_UNREGISTER 0xffffffff814d76e0
#endif

#ifndef UDP4_SEQ_SHOW
#define UDP4_SEQ_SHOW 0xffffffff814d7720
#endif

#ifndef UDP_SENDMSG
#endif

#endif


