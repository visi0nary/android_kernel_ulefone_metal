
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          1800

typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 68237},
	{-15, 53650},
	{-10, 42506},
	{ -5, 33892},
	{  0, 27219},
	{  5, 22021},
	{ 10, 17926},
	{ 15, 14674},
	{ 20, 12081},
	{ 25, 10000},
	{ 30, 8315},
	{ 35, 6948},
	{ 40, 5834},
	{ 45, 4917},
	{ 50, 4161},
	{ 55, 3535},
	{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954},
	{-15, 360850},
	{-10, 271697},
	{ -5, 206463},
	{  0, 158214},
	{  5, 122259},
	{ 10, 95227},
	{ 15, 74730},
	{ 20, 59065},
	{ 25, 47000},
	{ 30, 37643},
	{ 35, 30334},
	{ 40, 24591},
	{ 45, 20048},
	{ 50, 16433},
	{ 55, 13539},
	{ 60, 11210}
	};
#endif

// T0 -10C
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
	{0    ,4147 },
	{2    ,4147 },
	{4    ,4113 },
	{6    ,4091 },
	{8    ,4068 },
	{10  ,4039 },
	{12  ,3989 },
	{14  ,3857 },
	{16  ,3805 },
	{18  ,3774 },
	{20  ,3743 },
	{22  ,3719 },
	{24  ,3698 },
	{26  ,3682 },
	{28  ,3666 },
	{30  ,3652 },
	{32  ,3641 },
	{35  ,3630 },
	{37  ,3620 },
	{39  ,3606 },
	{41  ,3597 },
	{43  ,3588 },
	{45  ,3584 },
	{47  ,3570 },
	{49  ,3560 },
	{51  ,3555 },
	{53  ,3544 },
	{55  ,3540 },
	{57  ,3535 },
	{59  ,3528 },
	{61  ,3521 },
	{63  ,3516 },
	{65  ,3512 },
	{67  ,3509 },
	{69  ,3504 },
	{71  ,3498 },
	{73  ,3493 },
	{75  ,3488 },
	{77  ,3482 },
	{79  ,3479 },
	{81  ,3473 },
	{83  ,3465 },
	{85  ,3467 },
	{87  ,3452 },
	{89  ,3444 },
	{91  ,3436 },
	{93  ,3432 },
	{95  ,3422 },
	{97  ,3419 },
	{99  ,3403 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 }
};            
              
// T1 0C      
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
	{0    ,4306 },
	{2    ,4306 },
	{4    ,4280 },
	{5    ,4245 },
	{7    ,4183 },
	{9    ,4136 },
	{11  ,4110 },
	{12  ,4089 },
	{14  ,4071 },
	{16  ,4052 },
	{18  ,4035 },
	{19  ,4018 },
	{21  ,4003 },
	{23  ,3992 },
	{25  ,3984 },
	{26  ,3969 },
	{28  ,3936 },
	{30  ,3903 },
	{32  ,3882 },
	{33  ,3867 },
	{35  ,3856 },
	{37  ,3846 },
	{39  ,3838 },
	{40  ,3829 },
	{42  ,3819 },
	{44  ,3808 },
	{46  ,3797 },
	{48  ,3786 },
	{49  ,3775 },
	{51  ,3765 },
	{53  ,3756 },
	{55  ,3746 },
	{56  ,3737 },
	{58  ,3729 },
	{60  ,3721 },
	{62  ,3712 },
	{63  ,3705 },
	{65  ,3698 },
	{67  ,3691 },
	{69  ,3684 },
	{70  ,3677 },
	{72  ,3670 },
	{74  ,3664 },
	{76  ,3659 },
	{77  ,3654 },
	{79  ,3649 },
	{81  ,3644 },
	{83  ,3639 },
	{84  ,3633 },
	{86  ,3627 },
	{88  ,3619 },
	{90  ,3611 },
	{91  ,3601 },
	{93  ,3588 },
	{95  ,3568 },
	{97  ,3537 },
	{99  ,3483 },
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400},
	{100,3400}
}; 
  
/*T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] ={
	{0    ,4322},
	{1    ,4322},
	{3    ,4289},
	{4    ,4265},
	{6    ,4246},
	{7    ,4228},
	{8    ,4211},
	{10  ,4195 },
	{11  ,4179 },
	{12  ,4164 },
	{14  ,4150 },
	{15  ,4135 },
	{17  ,4120 },
	{18  ,4106 },
	{19  ,4092 },
	{21  ,4078 },
	{22  ,4064 },
	{23  ,4054 },
	{25  ,4050 },
	{26  ,4041 },
	{28  ,4018 },
	{29  ,3992 },
	{30  ,3971 },
	{32  ,3957 },
	{33  ,3946 },
	{35  ,3939 },
	{36  ,3935 },
	{37  ,3929 },
	{39  ,3919 },
	{40  ,3909 },
	{41  ,3899 },
	{43  ,3888 },
	{44  ,3877 },
	{46  ,3865 },
	{47  ,3853 },
	{48  ,3841 },
	{50  ,3830 },
	{51  ,3820 },
	{53  ,3812 },
	{54  ,3805 },
	{55  ,3798 },
	{57  ,3792 },
	{58  ,3786 },
	{59  ,3781 },
	{61  ,3776 },
	{62  ,3771 },
	{64  ,3767 },
	{65  ,3763 },
	{66  ,3759 },
	{68  ,3755 },
	{69  ,3753 },
	{70  ,3749 },
	{72  ,3746 },
	{73  ,3743 },
	{75  ,3741 },
	{76  ,3740 },
	{77  ,3737 },
	{79  ,3733 },
	{80  ,3728 },
	{82  ,3722 },
	{83  ,3717 },
	{84  ,3710 },
	{86  ,3699 },
	{87  ,3688 },
	{88  ,3672 },
	{90  ,3664 },
	{91  ,3662 },
	{93  ,3660 },
	{94  ,3659 },
	{95  ,3656 },
	{97  ,3643 },
	{98  ,3584 },
	{100,3400 },
	{100,3400 },
	{100,3400 },
	{100,3400 }
};
  
/* T3 50C */
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
	{0    ,4333 },
	{1    ,4333 },
	{3    ,4303 },
	{4    ,4279 },
	{5    ,4258 },
	{7    ,4239 },
	{8    ,4222 },
	{10  ,4205 },
	{11  ,4188 },
	{12  ,4172 },
	{14  ,4157 },
	{15  ,4142 },
	{16  ,4127 },
	{18  ,4112 },
	{19  ,4097 },
	{20  ,4083 },
	{22  ,4069 },
	{23  ,4055 },
	{24  ,4042 },
	{26  ,4032 },
	{27  ,4021 },
	{29  ,4005 },
	{30  ,3991 },
	{31  ,3982 },
	{33  ,3973 },
	{34  ,3962 },
	{35  ,3951 },
	{37  ,3940 },
	{38  ,3930 },
	{39  ,3919 },
	{41  ,3910 },
	{42  ,3899 },
	{44  ,3890 },
	{45  ,3880 },
	{46  ,3870 },
	{48  ,3859 },
	{49  ,3848 },
	{50  ,3836 },
	{52  ,3826 },
	{53  ,3817 },
	{54  ,3809 },
	{56  ,3803 },
	{57  ,3797 },
	{58  ,3791 },
	{60  ,3786 },
	{61  ,3781 },
	{63  ,3776 },
	{64  ,3771 },
	{65  ,3767 },
	{67  ,3763 },
	{68  ,3759 },
	{69  ,3755 },
	{71  ,3751 },
	{72  ,3747 },
	{73  ,3743 },
	{75  ,3738 },
	{76  ,3732 },
	{78  ,3728 },
	{79  ,3724 },
	{80  ,3720 },
	{82  ,3713 },
	{83  ,3708 },
	{84  ,3701 },
	{86  ,3693 },
	{87  ,3680 },
	{88  ,3667 },
	{90  ,3656 },
	{91  ,3655 },
	{92  ,3654 },
	{94  ,3652 },
	{95  ,3649 },
	{97  ,3638 },
	{98  ,3585 },
	{99  ,3492 },
	{100,3400 },
	{100,3400 }
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3 */
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};

/* T0 -10C */
R_PROFILE_STRUCT r_profile_t0[] = {
	{122,4147},
	{122,4147},
	{116,4113},
	{121,4091},
	{131,4068},
	{163,4039},
	{355,3989},
	{263,3857},
	{234,3805},
	{225,3774},
	{209,3743},
	{200,3719},
	{192,3698},
	{190,3682},
	{186,3666},
	{182,3652},
	{182,3641},
	{182,3630},
	{180,3620},
	{173,3606},
	{175,3597},
	{173,3588},
	{181,3584},
	{174,3570},
	{172,3560},
	{177,3555},
	{171,3544},
	{178,3540},
	{181,3535},
	{181,3528},
	{180,3521},
	{181,3516},
	{186,3512},
	{192,3509},
	{196,3504},
	{200,3498},
	{207,3493},
	{214,3488},
	{222,3482},
	{236,3479},
	{249,3473},
	{259,3465},
	{291,3467},
	{296,3452},
	{316,3444},
	{341,3436},
	{375,3432},
	{402,3422},
	{445,3419},
	{464,3403},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{100,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400},
	{464,3400}
};

/* T1 0C */
R_PROFILE_STRUCT r_profile_t1[] = {
	{106 ,4306 },
	{106 ,4306 },
	{124 ,4280 },
	{180  ,4245 },
	{179  ,4183 },
	{150  ,4136 },
	{143 ,4110 },
	{143 ,4089 },
	{143 ,4071 },
	{143 ,4052 },
	{144 ,4035 },
	{143 ,4018 },
	{135 ,4003 },
	{134 ,3992 },
	{151  ,3984 },
	{180  ,3969 },
	{176  ,3936 },
	{157  ,3903 },
	{146 ,3882 },
	{139 ,3867 },
	{136 ,3856 },
	{134 ,3846 },
	{134 ,3838 },
	{135 ,3829 },
	{135 ,3819 },
	{134 ,3808 },
	{133 ,3797 },
	{131 ,3786 },
	{129 ,3775 },
	{128 ,3765 },
	{128 ,3756 },
	{125 ,3746 },
	{124 ,3737 },
	{122 ,3729 },
	{122 ,3721 },
	{120 ,3712 },
	{119 ,3705 },
	{117 ,3698 },
	{116 ,3691 },
	{114 ,3684 },
	{113 ,3677 },
	{111 ,3670 },
	{111 ,3664 },
	{112 ,3659 },
	{113 ,3654 },
	{118 ,3649 },
	{123 ,3644 },
	{130 ,3639 },
	{136 ,3633 },
	{143 ,3627 },
	{148 ,3619 },
	{155  ,3611 },
	{165  ,3601 },
	{183  ,3588 },
	{208  ,3568 },
	{253  ,3537 },
	{343  ,3483 },
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400},
	{696  ,3400}
	};

/* T2 25C */
R_PROFILE_STRUCT r_profile_t2[] = {
	{131 ,4322},
	{131 ,4322},
	{114 ,4289},
	{106 ,4265},
	{104 ,4246},
	{102 ,4228},
	{102 ,4211},
	{101 ,4195 },
	{101 ,4179 },
	{102 ,4164 },
	{103 ,4150 },
	{103 ,4135 },
	{105 ,4120 },
	{106 ,4106 },
	{107 ,4092 },
	{108 ,4078 },
	{105 ,4064 },
	{97  ,4054 },
	{109 ,4050 },
	{133 ,4041 },
	{142 ,4018 },
	{132 ,3992 },
	{123 ,3971 },
	{118 ,3957 },
	{114 ,3946 },
	{112 ,3939 },
	{115 ,3935 },
	{122 ,3929 },
	{122 ,3919 },
	{122 ,3909 },
	{122 ,3899 },
	{119 ,3888 },
	{116 ,3877 },
	{112 ,3865 },
	{105 ,3853 },
	{100 ,3841 },
	{94  ,3830 },
	{90  ,3820 },
	{87  ,3812 },
	{86  ,3805 },
	{85  ,3798 },
	{84  ,3792 },
	{84  ,3786 },
	{84  ,3781 },
	{85  ,3776 },
	{85  ,3771 },
	{86  ,3767 },
	{86  ,3763 },
	{86  ,3759 },
	{87  ,3755 },
	{88  ,3753 },
	{87  ,3749 },
	{87  ,3746 },
	{85  ,3743 },
	{85  ,3741 },
	{87  ,3740 },
	{87  ,3737 },
	{87  ,3733 },
	{86  ,3728 },
	{87  ,3722 },
	{89  ,3717 },
	{96  ,3710 },
	{96  ,3699 },
	{100 ,3688 },
	{85  ,3672 },
	{76  ,3664 },
	{80  ,3662 },
	{86  ,3660 },
	{98  ,3659 },
	{123 ,3656 },
	{191,3643 },
	{278,3584 },
	{490,3400 },
	{490,3400 },
	{490,3400 },
	{490,3400 }
};   
     
/* T3 50C */
R_PROFILE_STRUCT r_profile_t3[] = {
	{113,4333 },
	{113,4333 },
	{103,4303 },
	{98 ,4279 },
	{94 ,4258 },
	{91 ,4239 },
	{90 ,4222 },
	{90 ,4205 },
	{88 ,4188 },
	{88 ,4172 },
	{88 ,4157 },
	{89 ,4142 },
	{89 ,4127 },
	{89 ,4112 },
	{90 ,4097 },
	{89 ,4083 },
	{90 ,4069 },
	{88 ,4055 },
	{85 ,4042 },
	{88 ,4032 },
	{96 ,4021 },
	{95 ,4005 },
	{86 ,3991 },
	{87 ,3982 },
	{91 ,3973 },
	{91 ,3962 },
	{92 ,3951 },
	{93 ,3940 },
	{94 ,3930 },
	{93 ,3919 },
	{94 ,3910 },
	{93 ,3899 },
	{93 ,3890 },
	{93 ,3880 },
	{92 ,3870 },
	{91 ,3859 },
	{88 ,3848 },
	{82 ,3836 },
	{78 ,3826 },
	{75 ,3817 },
	{73 ,3809 },
	{72 ,3803 },
	{71 ,3797 },
	{72 ,3791 },
	{73 ,3786 },
	{72 ,3781 },
	{73 ,3776 },
	{73 ,3771 },
	{73 ,3767 },
	{74 ,3763 },
	{74 ,3759 },
	{74 ,3755 },
	{74 ,3751 },
	{74 ,3747 },
	{74 ,3743 },
	{72 ,3738 },
	{70 ,3732 },
	{70 ,3728 },
	{72 ,3724 },
	{73 ,3720 },
	{73 ,3713 },
	{74 ,3708 },
	{79 ,3701 },
	{83 ,3693 },
	{85 ,3680 },
	{78 ,3667 },
	{64 ,3656 },
	{66 ,3655 },
	{70 ,3654 },
	{76 ,3652 },
	{93 ,3649 },
	{154,3638 },
	{227,3585 },
	{354,3492 },
	{354,3400 },
	{354,3400 }
};
  
/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3 */
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};       
         
/* ============================================================
// function prototype
// ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);
         
int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         