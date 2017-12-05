/*----------------------------------------------------------------------------*/
/*

	WiringPi ODROID-C2 Board Header file

 */
/*----------------------------------------------------------------------------*/
#ifndef	__ODROID_C2_H__
#define	__ODROID_C2_H__

/*----------------------------------------------------------------------------*/
#define ODROIDC2_GPIO_MASK		(0xFFFFFF00)
#define ODROIDC2_GPIO_BASE		0xC8834000

#define C2_GPIO_PIN_BASE		136
#define C2_GPIOY_PIN_START		(C2_GPIO_PIN_BASE + 75)
#define C2_GPIOY_PIN_END		(C2_GPIO_PIN_BASE + 91)
#define C2_GPIOX_PIN_START		(C2_GPIO_PIN_BASE + 92)
#define C2_GPIOX_PIN_END		(C2_GPIO_PIN_BASE + 114)

#define C2_GPIOX_FSEL_REG_OFFSET	0x118
#define C2_GPIOX_OUTP_REG_OFFSET	0x119
#define C2_GPIOX_INP_REG_OFFSET		0x11A
#define C2_GPIOX_PUPD_REG_OFFSET	0x13E
#define C2_GPIOX_PUEN_REG_OFFSET	0x14C

#define C2_GPIOY_FSEL_REG_OFFSET	0x10F
#define C2_GPIOY_OUTP_REG_OFFSET	0x110
#define C2_GPIOY_INP_REG_OFFSET		0x111
#define C2_GPIOY_PUPD_REG_OFFSET	0x13B
#define C2_GPIOY_PUEN_REG_OFFSET	0x149

#ifdef __cplusplus
extern "C" {
#endif

extern void init_odroidc2 (struct libodroid *libwiring);

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------*/
#endif	/* __ODROID_C2_H__ */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
