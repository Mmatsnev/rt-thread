#ifndef __RASPI4_H__
#define __RASPI4_H__

#define ARM_GIC_NR_IRQS     512
#define INTC_BASE   0xff800000
#define GIC_V2_DISTRIBUTOR_BASE     (INTC_BASE + 0x00041000)
#define GIC_V2_CPU_INTERFACE_BASE   (INTC_BASE + 0x00042000)
#define GIC_V2_HYPERVISOR_BASE      (INTC_BASE + 0x00044000)
#define GIC_V2_VIRTUAL_CPU_BASE     (INTC_BASE + 0x00046000)

#define GIC_PL400_DISTRIBUTOR_PPTR  GIC_V2_DISTRIBUTOR_BASE
#define GIC_PL400_CONTROLLER_PPTR   GIC_V2_CPU_INTERFACE_BASE

#endif