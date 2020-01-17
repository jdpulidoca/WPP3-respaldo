/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Julian Pulido/Desktop/work03-simulacion-OV7670-master/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};



static void Always_46_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t57[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t8) != 0)
        goto LAB60;

LAB61:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (!(t33));
    t35 = *((unsigned int *)t22);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB62;

LAB63:    memcpy(t62, t30, 8);

LAB64:    t87 = (t62 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t62);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB76;

LAB77:
LAB78:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t28 = (t0 + 1664U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);

LAB21:    xsi_set_current_line(49, ng0);
    t52 = ((char*)((ng1)));
    t53 = (t0 + 2544);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t6) = 1;

LAB45:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 1, t5, 32);
    t7 = (t0 + 2704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB20;

LAB24:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(50, ng0);

LAB29:    xsi_set_current_line(51, ng0);
    t28 = (t0 + 1824U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 7);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t28) = t38;
    t32 = (t0 + 2384);
    t45 = (t0 + 2384);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t54, t52, 2, t53, 32, 1);
    t55 = (t54 + 4);
    t39 = *((unsigned int *)t55);
    t56 = (!(t39));
    if (t56 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB40;

LAB41:    goto LAB28;

LAB30:    xsi_vlogvar_assign_value(t32, t30, 0, *((unsigned int *)t54), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB41;

LAB44:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(58, ng0);

LAB49:    xsi_set_current_line(59, ng0);
    t28 = (t0 + 1824U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 4);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t31);
    t37 = (t36 >> 4);
    t38 = (t37 & 1);
    *((unsigned int *)t28) = t38;
    t32 = (t0 + 2384);
    t45 = (t0 + 2384);
    t46 = (t45 + 72U);
    t52 = *((char **)t46);
    t53 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t54, t52, 2, t53, 32, 1);
    t55 = (t54 + 4);
    t39 = *((unsigned int *)t55);
    t56 = (!(t39));
    if (t56 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t56 = (!(t15));
    if (t56 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 15, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 15, t5, 32);
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 15);
    goto LAB48;

LAB50:    xsi_vlogvar_assign_value(t32, t30, 0, *((unsigned int *)t54), 1);
    goto LAB51;

LAB52:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB53;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t30) = 1;
    goto LAB61;

LAB60:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB61;

LAB62:    t28 = (t0 + 1344U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t54, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t28);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t32);
    t48 = (t44 | t47);
    t49 = (~(t48));
    t50 = (t43 & t49);
    if (t50 != 0)
        goto LAB68;

LAB65:    if (t48 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t54) = 1;

LAB68:    memset(t57, 0, 8);
    t46 = (t54 + 4);
    t51 = *((unsigned int *)t46);
    t58 = (~(t51));
    t59 = *((unsigned int *)t54);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t46) != 0)
        goto LAB71;

LAB72:    t63 = *((unsigned int *)t30);
    t64 = *((unsigned int *)t57);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t53 = (t30 + 4);
    t55 = (t57 + 4);
    t66 = (t62 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t55);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB67:    t45 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t57) = 1;
    goto LAB72;

LAB71:    t52 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB72;

LAB73:    t72 = *((unsigned int *)t62);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t62) = (t72 | t73);
    t74 = (t30 + 4);
    t75 = (t57 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t30);
    t56 = (t78 & t77);
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t57);
    t82 = (t81 & t80);
    t83 = (~(t56));
    t84 = (~(t82));
    t85 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t85 & t83);
    t86 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t86 & t84);
    goto LAB75;

LAB76:    xsi_set_current_line(68, ng0);

LAB79:    xsi_set_current_line(69, ng0);
    t93 = ((char*)((ng1)));
    t94 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 15, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    goto LAB78;

}


extern void work_m_00000000004092150522_3927878221_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000004092150522_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_00000000004092150522_3927878221.didat");
	xsi_register_executes(pe);
}
