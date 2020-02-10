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
static const char *ng0 = "C:/Users/Julian Pulido/Documents/GitHub/WPP3-respaldo/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {6, 0};
static int ng5[] = {5, 0};
static int ng6[] = {4, 0};
static int ng7[] = {3, 0};
static int ng8[] = {2, 0};
static int ng9[] = {160, 0};



static void Always_51_0(char *t0)
{
    char t11[8];
    char t35[8];
    char t36[8];
    char t38[8];
    char t67[8];
    char t82[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
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
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    int t130;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3664);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(53, ng0);

LAB14:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 1344U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t11) = 1;

LAB18:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t5) == 0)
        goto LAB23;

LAB25:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB26:    memset(t35, 0, 8);
    t9 = (t11 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t9) != 0)
        goto LAB29;

LAB30:    t12 = (t35 + 4);
    t24 = *((unsigned int *)t35);
    t25 = *((unsigned int *)t12);
    t28 = (t24 || t25);
    if (t28 > 0)
        goto LAB31;

LAB32:    memcpy(t38, t35, 8);

LAB33:    memset(t67, 0, 8);
    t68 = (t38 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t68) != 0)
        goto LAB43;

LAB44:    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB45;

LAB46:    memcpy(t90, t67, 8);

LAB47:    t122 = (t90 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t90);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(63, ng0);

LAB59:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB63;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;

LAB63:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB64;

LAB65:
LAB66:    goto LAB13;

LAB11:    xsi_set_current_line(88, ng0);

LAB109:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 3664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB113;

LAB111:    if (*((unsigned int *)t7) == 0)
        goto LAB110;

LAB112:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;

LAB113:    memset(t35, 0, 8);
    t10 = (t11 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t10) != 0)
        goto LAB116;

LAB117:    t13 = (t35 + 4);
    t24 = *((unsigned int *)t35);
    t25 = *((unsigned int *)t13);
    t28 = (t24 || t25);
    if (t28 > 0)
        goto LAB118;

LAB119:    memcpy(t38, t35, 8);

LAB120:    memset(t67, 0, 8);
    t74 = (t38 + 4);
    t69 = *((unsigned int *)t74);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t74) != 0)
        goto LAB130;

LAB131:    t79 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t79);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB132;

LAB133:    memcpy(t90, t67, 8);

LAB134:    t105 = (t90 + 4);
    t123 = *((unsigned int *)t105);
    t124 = (~(t123));
    t125 = *((unsigned int *)t90);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB142;

LAB143:
LAB144:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB149;

LAB147:    if (*((unsigned int *)t5) == 0)
        goto LAB146;

LAB148:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB149:    memset(t35, 0, 8);
    t9 = (t11 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t9) != 0)
        goto LAB152;

LAB153:    t12 = (t35 + 4);
    t24 = *((unsigned int *)t35);
    t25 = *((unsigned int *)t12);
    t28 = (t24 || t25);
    if (t28 > 0)
        goto LAB154;

LAB155:    memcpy(t38, t35, 8);

LAB156:    t68 = (t38 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB164;

LAB165:
LAB166:    goto LAB13;

LAB17:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(54, ng0);

LAB22:    xsi_set_current_line(55, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 3024);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB21;

LAB23:    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t35) = 1;
    goto LAB30;

LAB29:    t10 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB30;

LAB31:    t13 = (t0 + 1504U);
    t26 = *((char **)t13);
    memset(t36, 0, 8);
    t13 = (t26 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t37 = (t32 & 1U);
    if (t37 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB37:    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t33 = (t35 + 4);
    t34 = (t36 + 4);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t34);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB33;

LAB34:    *((unsigned int *)t36) = 1;
    goto LAB37;

LAB36:    t27 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB37;

LAB38:    t48 = *((unsigned int *)t38);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t48 | t49);
    t50 = (t35 + 4);
    t51 = (t36 + 4);
    t52 = *((unsigned int *)t35);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t8 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t8));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    t66 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t66 & t62);
    goto LAB40;

LAB41:    *((unsigned int *)t67) = 1;
    goto LAB44;

LAB43:    t74 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB44;

LAB45:    t79 = (t0 + 3024);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t81);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t83) != 0)
        goto LAB50;

LAB51:    t91 = *((unsigned int *)t67);
    t92 = *((unsigned int *)t82);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t67 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t82) = 1;
    goto LAB51;

LAB50:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB51;

LAB52:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t67 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t67);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB54;

LAB55:    xsi_set_current_line(57, ng0);

LAB58:    xsi_set_current_line(58, ng0);
    t128 = ((char*)((ng2)));
    t129 = (t0 + 3184);
    xsi_vlogvar_assign_value(t129, t128, 0, 0, 2);
    goto LAB57;

LAB62:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(64, ng0);

LAB67:    xsi_set_current_line(65, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2544);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB71;

LAB68:    if (t23 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t11) = 1;

LAB71:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB91;

LAB88:    if (t23 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t11) = 1;

LAB91:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 1, t5, 32);
    t7 = (t0 + 2704);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB101;

LAB100:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB101;

LAB104:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB102;

LAB103:    t12 = (t11 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB105;

LAB106:
LAB107:    goto LAB66;

LAB70:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(66, ng0);

LAB75:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 1824U);
    t26 = *((char **)t13);
    memset(t35, 0, 8);
    t13 = (t35 + 4);
    t27 = (t26 + 4);
    t37 = *((unsigned int *)t26);
    t39 = (t37 >> 7);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t27);
    t43 = (t41 >> 7);
    t44 = (t43 & 1);
    *((unsigned int *)t13) = t44;
    t33 = (t0 + 2384);
    t34 = (t0 + 2384);
    t42 = (t34 + 72U);
    t50 = *((char **)t42);
    t51 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t36, t50, 2, t51, 32, 1);
    t68 = (t36 + 4);
    t45 = *((unsigned int *)t68);
    t8 = (!(t45));
    if (t8 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 6);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 5);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 2);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB86;

LAB87:    goto LAB74;

LAB76:    xsi_vlogvar_assign_value(t33, t35, 0, *((unsigned int *)t36), 1);
    goto LAB77;

LAB78:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB79;

LAB80:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB81;

LAB82:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB83;

LAB84:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB85;

LAB86:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB87;

LAB90:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(74, ng0);

LAB95:    xsi_set_current_line(75, ng0);
    t13 = (t0 + 1824U);
    t26 = *((char **)t13);
    memset(t35, 0, 8);
    t13 = (t35 + 4);
    t27 = (t26 + 4);
    t37 = *((unsigned int *)t26);
    t39 = (t37 >> 4);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t27);
    t43 = (t41 >> 4);
    t44 = (t43 & 1);
    *((unsigned int *)t13) = t44;
    t33 = (t0 + 2384);
    t34 = (t0 + 2384);
    t42 = (t34 + 72U);
    t50 = *((char **)t42);
    t51 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t36, t50, 2, t51, 32, 1);
    t68 = (t36 + 4);
    t45 = *((unsigned int *)t68);
    t8 = (!(t45));
    if (t8 == 1)
        goto LAB96;

LAB97:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 3);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t35, t10, 2, t12, 32, 1);
    t13 = (t35 + 4);
    t20 = *((unsigned int *)t13);
    t8 = (!(t20));
    if (t8 == 1)
        goto LAB98;

LAB99:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 15, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 15, t5, 32);
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 15);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 3344);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    goto LAB94;

LAB96:    xsi_vlogvar_assign_value(t33, t35, 0, *((unsigned int *)t36), 1);
    goto LAB97;

LAB98:    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t35), 1);
    goto LAB99;

LAB101:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB103;

LAB102:    *((unsigned int *)t11) = 1;
    goto LAB103;

LAB105:    xsi_set_current_line(83, ng0);

LAB108:    xsi_set_current_line(84, ng0);
    t13 = ((char*)((ng8)));
    t26 = (t0 + 3184);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 2);
    goto LAB107;

LAB110:    *((unsigned int *)t11) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t35) = 1;
    goto LAB117;

LAB116:    t12 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB117;

LAB118:    t26 = (t0 + 1664U);
    t27 = *((char **)t26);
    memset(t36, 0, 8);
    t26 = (t27 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t31 & t30);
    t37 = (t32 & 1U);
    if (t37 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t26) != 0)
        goto LAB123;

LAB124:    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t34 = (t35 + 4);
    t42 = (t36 + 4);
    t50 = (t38 + 4);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t42);
    t45 = (t43 | t44);
    *((unsigned int *)t50) = t45;
    t46 = *((unsigned int *)t50);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB125;

LAB126:
LAB127:    goto LAB120;

LAB121:    *((unsigned int *)t36) = 1;
    goto LAB124;

LAB123:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB124;

LAB125:    t48 = *((unsigned int *)t38);
    t49 = *((unsigned int *)t50);
    *((unsigned int *)t38) = (t48 | t49);
    t51 = (t35 + 4);
    t68 = (t36 + 4);
    t52 = *((unsigned int *)t35);
    t53 = (~(t52));
    t54 = *((unsigned int *)t51);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (~(t56));
    t58 = *((unsigned int *)t68);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t114 = (t57 & t59);
    t61 = (~(t60));
    t62 = (~(t114));
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t61);
    t64 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t64 & t62);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    t66 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t66 & t62);
    goto LAB127;

LAB128:    *((unsigned int *)t67) = 1;
    goto LAB131;

LAB130:    t75 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB131;

LAB132:    t80 = (t0 + 1504U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t80 = (t81 + 4);
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t81);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t80) != 0)
        goto LAB137;

LAB138:    t91 = *((unsigned int *)t67);
    t92 = *((unsigned int *)t82);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t89 = (t67 + 4);
    t94 = (t82 + 4);
    t95 = (t90 + 4);
    t97 = *((unsigned int *)t89);
    t98 = *((unsigned int *)t94);
    t99 = (t97 | t98);
    *((unsigned int *)t95) = t99;
    t100 = *((unsigned int *)t95);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB139;

LAB140:
LAB141:    goto LAB134;

LAB135:    *((unsigned int *)t82) = 1;
    goto LAB138;

LAB137:    t83 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB138;

LAB139:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t95);
    *((unsigned int *)t90) = (t102 | t103);
    t96 = (t67 + 4);
    t104 = (t82 + 4);
    t106 = *((unsigned int *)t67);
    t107 = (~(t106));
    t108 = *((unsigned int *)t96);
    t109 = (~(t108));
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t104);
    t113 = (~(t112));
    t115 = (t107 & t109);
    t130 = (t111 & t113);
    t116 = (~(t115));
    t117 = (~(t130));
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB141;

LAB142:    xsi_set_current_line(89, ng0);

LAB145:    xsi_set_current_line(90, ng0);
    t122 = ((char*)((ng2)));
    t128 = (t0 + 3184);
    xsi_vlogvar_assign_value(t128, t122, 0, 0, 2);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB144;

LAB146:    *((unsigned int *)t11) = 1;
    goto LAB149;

LAB150:    *((unsigned int *)t35) = 1;
    goto LAB153;

LAB152:    t10 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB153;

LAB154:    t13 = (t0 + 1504U);
    t26 = *((char **)t13);
    memset(t36, 0, 8);
    t13 = (t26 + 4);
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t37 = (t32 & 1U);
    if (t37 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t13) != 0)
        goto LAB159;

LAB160:    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t33 = (t35 + 4);
    t34 = (t36 + 4);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t34);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB156;

LAB157:    *((unsigned int *)t36) = 1;
    goto LAB160;

LAB159:    t27 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB160;

LAB161:    t48 = *((unsigned int *)t38);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t48 | t49);
    t50 = (t35 + 4);
    t51 = (t36 + 4);
    t52 = *((unsigned int *)t35);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t8 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t8));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    t66 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t66 & t62);
    goto LAB163;

LAB164:    xsi_set_current_line(93, ng0);

LAB167:    xsi_set_current_line(94, ng0);
    t74 = ((char*)((ng1)));
    t75 = (t0 + 3184);
    xsi_vlogvar_assign_value(t75, t74, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB166;

}


extern void work_m_00000000000836158710_3927878221_init()
{
	static char *pe[] = {(void *)Always_51_0};
	xsi_register_didat("work_m_00000000000836158710_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_00000000000836158710_3927878221.didat");
	xsi_register_executes(pe);
}
