// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed char var_1_1 = -4;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
float var_1_4 = 24.4;
float var_1_5 = 5.7;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
float var_1_8 = 2.75;
float var_1_9 = 5.175;
float var_1_10 = 31.5;
float var_1_11 = 128.5;
float var_1_12 = 63.5;
float var_1_13 = 1.75;
unsigned short int var_1_14 = 0;
signed char var_1_15 = -8;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 8;
float var_1_18 = 99999999999.8;
signed char var_1_19 = 4;
unsigned short int var_1_20 = 56502;
unsigned short int var_1_21 = 128;
float var_1_22 = 7.25;
float var_1_23 = 50.8;
unsigned short int var_1_24 = 32;
unsigned short int var_1_25 = 16;
unsigned short int var_1_26 = 5;
signed char var_1_27 = -100;
signed char var_1_28 = 5;
unsigned short int var_1_29 = 0;
unsigned short int var_1_30 = 10;
unsigned long int var_1_31 = 25;
signed char var_1_32 = -64;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
signed char var_1_35 = -10;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 8;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 8;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 16;
unsigned char var_1_43 = 64;
signed char var_1_44 = -1;
unsigned char var_1_45 = 1;
signed char var_1_46 = 4;
signed char var_1_47 = 0;
signed char var_1_48 = 16;
signed char var_1_49 = 4;
signed char var_1_50 = -1;
unsigned char var_1_51 = 8;

// Calibration values

// Last'ed variables
float last_1_var_1_18 = 99999999999.8;
unsigned short int last_1_var_1_24 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch146Filler_PE_CN
	/* 22L, 78L, 425L, 449L, 1036L, 1086L) */ if (var_1_3) {
		/* 6L, 44L, 427L, 451L, 1020L, 1088L) */ var_1_8 = (
			/* 5L, 43L, 430L, 454L, 1019L, 1091L) */ ((
				var_1_9
			) + (
				var_1_10
			))
		);
	} else {
		/* 21L, 76L, 433L, 457L, 1035L, 1094L) */ if (/* 16L, 53L, 54L, 434L, 458L, 1030L, 1095L) */ ((last_1_var_1_18) <= (/* 15L, 52L, 56L, 436L, 460L, 1029L, 1098L) */ ((/* 11L, 48L, 57L, 437L, 461L, 1025L, 1099L) */ ((var_1_10) / (var_1_11))) / (/* 14L, 51L, 60L, 440L, 464L, 1028L, 1102L) */ (max (/* 14L, 51L, 60L, 440L, 464L, 1028L, 1102L) */ (var_1_12) , (var_1_13)))))))) {
			/* 20L, 75L, 443L, 467L, 1034L, 1105L) */ var_1_8 = (
				var_1_9
			);
		}
	}


	// From: Req3Batch146Filler_PE_CN
	/* 1113L, 102L, 523L, 536L) */ if (/* 1114L, 89L, 90L, 524L, 537L) */ ((/* 1115L, 87L, 91L, 525L, 538L) */ (- (var_1_8))) > (var_1_8))) {
		/* 1118L, 101L, 528L, 541L) */ var_1_14 = (
			5
		);
	}


	// From: Req1Batch146Filler_PE_CN
	unsigned char stepLocal_0 = var_1_3;
	/* 1081L, 30L, 356L, 373L) */ if (/* 1068L, 4L, 5L, 357L, 374L) */ ((var_1_2) && (stepLocal_0))) {
		/* 1080L, 28L, 360L, 377L) */ if (/* 1071L, 13L, 14L, 361L, 378L) */ ((var_1_4) >= (var_1_5))) {
			/* 1075L, 23L, 364L, 381L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 1079L, 27L, 368L, 385L) */ var_1_1 = (
				var_1_7
			);
		}
	}


	// From: Req7Batch146Filler_PE_CN
	unsigned short int stepLocal_1 = var_1_14;
	/* 1205L, 274L, 934L, 948L) */ if (/* 1196L, 259L, 260L, 935L, 949L) */ ((last_1_var_1_24) < (stepLocal_1))) {
		/* 1204L, 273L, 939L, 953L) */ var_1_24 = (
			/* 1203L, 272L, 942L, 956L) */ (min (
				/* 1203L, 272L, 942L, 956L) */ (
					100
				) , (
					/* 1202L, 271L, 944L, 958L) */ (max (
						/* 1202L, 271L, 944L, 958L) */ (
							32
						) , (
							var_1_21
						)
					))
				)
			))
		);
	}


	// From: Req8Batch146Filler_PE_CN
	/* 1210L, 283L, 991L, 997L) */ var_1_25 = (
		var_1_21
	);


	// From: Req6Batch146Filler_PE_CN
	/* 1157L, 249L, 795L, 830L) */ if (var_1_2) {
		/* 1159L, 192L, 797L, 832L) */ var_1_18 = (
			/* 1162L, 191L, 800L, 835L) */ (abs (
				var_1_9
			))
		);
	} else {
		/* 1164L, 247L, 802L, 837L) */ if (/* 1165L, 199L, 200L, 803L, 838L) */ ((var_1_7) <= (/* 1167L, 198L, 202L, 805L, 840L) */ ((var_1_25) * (/* 1169L, 197L, 204L, 807L, 842L) */ ((var_1_25) / (var_1_19))))))) {
			/* 1172L, 239L, 810L, 845L) */ if (/* 1173L, 220L, 221L, 811L, 846L) */ ((var_1_25) < (/* 1175L, 219L, 223L, 813L, 848L) */ ((var_1_14) / (/* 1177L, 218L, 225L, 815L, 850L) */ ((var_1_20) - (var_1_21))))))) {
				/* 1180L, 238L, 818L, 853L) */ var_1_18 = (
					var_1_9
				);
			}
		} else {
			/* 1184L, 246L, 822L, 857L) */ var_1_18 = (
				/* 1187L, 245L, 825L, 860L) */ ((
					var_1_22
				) - (
					var_1_23
				))
			);
		}
	}


	// From: Req4Batch146Filler_PE_CN
	/* 1124L, 143L, 573L, 591L) */ if (/* 1125L, 120L, 121L, 574L, 592L) */ ((/* 1126L, 118L, 122L, 575L, 593L) */ ((/* 1127L, 116L, 123L, 576L, 594L) */ (min (/* 1127L, 116L, 123L, 576L, 594L) */ (var_1_10) , (var_1_12)))) <= (var_1_18))) && (var_1_2))) {
		/* 1132L, 138L, 581L, 599L) */ var_1_15 = (
			var_1_7
		);
	} else {
		/* 1136L, 142L, 585L, 603L) */ var_1_15 = (
			var_1_6
		);
	}


	// From: Req5Batch146Filler_PE_CN
	/* 1143L, 175L, 736L, 751L) */ if (/* 1144L, 153L, 154L, 737L, 752L) */ ((var_1_12) < (var_1_9))) {
		/* 1147L, 173L, 740L, 755L) */ if (/* 1148L, 162L, 163L, 741L, 756L) */ ((var_1_14) <= (var_1_17))) {
			/* 1151L, 172L, 744L, 759L) */ var_1_16 = (
				var_1_15
			);
		}
	}


	// From: CodeObject1
	/* 67L) */ if (/* 55L, 54L) */ ((var_1_27) <= (var_1_28))) {
		/* 66L) */ var_1_26 = (
			/* 65L) */ (min (
				/* 65L) */ (
					var_1_29
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject2
	/* 101L) */ if (/* 74L, 73L) */ ((var_1_30) >= (var_1_29))) {
		/* 99L) */ if (/* 84L, 83L) */ ((var_1_27) >= (/* 86L, 82L) */ (abs (var_1_32))))) {
			/* 98L) */ var_1_31 = (
				/* 97L) */ (abs (
					/* 96L) */ ((
						var_1_26
					) + (
						var_1_29
					))
				))
			);
		}
	}


	// From: CodeObject3
	/* 130L) */ if (var_1_34) {
		/* 128L) */ if (/* 116L, 115L) */ ((/* 117L, 113L) */ (~ (var_1_35))) >= (var_1_30))) {
			/* 127L) */ var_1_33 = (
				var_1_36
			);
		}
	}


	// From: CodeObject4
	/* 137L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject5
	/* 172L) */ if (var_1_34) {
		/* 170L) */ if (/* 147L, 146L) */ (! (var_1_33))) {
			/* 156L) */ var_1_39 = (
				/* 155L) */ ((
					var_1_40
				) + (
					var_1_41
				))
			);
		} else {
			/* 169L) */ var_1_39 = (
				/* 168L) */ (min (
					/* 168L) */ (
						/* 162L) */ ((
							var_1_40
						) + (
							/* 161L) */ (abs (
								var_1_41
							))
						))
					) , (
						/* 167L) */ (min (
							/* 167L) */ (
								var_1_38
							) , (
								/* 166L) */ (max (
									/* 166L) */ (
										var_1_42
									) , (
										var_1_43
									)
								))
							)
						))
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 204L) */ if (/* 185L, 184L) */ ((var_1_26) < (var_1_38))) {
		/* 194L) */ var_1_44 = (
			var_1_46
		);
	} else {
		/* 203L) */ var_1_44 = (
			/* 202L) */ ((
				/* 200L) */ (min (
					/* 200L) */ (
						/* 198L) */ (abs (
							var_1_47
						))
					) , (
						var_1_48
					)
				))
			) - (
				var_1_49
			))
		);
	}


	// From: CodeObject7
	/* 270L) */ if (var_1_34) {
		/* 250L) */ if (/* 216L, 215L) */ ((var_1_45) < (var_1_27))) {
			/* 248L) */ if (/* 227L, 226L) */ ((var_1_38) != (/* 229L, 225L) */ (min (/* 229L, 225L) */ (var_1_31) , (var_1_51)))))) {
				/* 243L) */ var_1_50 = (
					/* 242L) */ (min (
						/* 242L) */ (
							var_1_46
						) , (
							/* 241L) */ (abs (
								var_1_49
							))
						)
					))
				);
			} else {
				/* 247L) */ var_1_50 = (
					var_1_48
				);
			}
		}
	} else {
		/* 268L) */ if (var_1_33) {
			/* 266L) */ if (var_1_36) {
				/* 261L) */ var_1_50 = (
					var_1_47
				);
			} else {
				/* 265L) */ var_1_50 = (
					var_1_46
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	assume_abort_if_not(var_1_11 != 0.0F);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65535);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65535);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 32766);
	assume_abort_if_not(var_1_21 != 32767);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -128);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -128);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -127);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -128);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -126);
	assume_abort_if_not(var_1_47 <= 126);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -1);
	assume_abort_if_not(var_1_48 <= 126);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 273L, 4L, 8L, 391L, 408L, 1216L) */ ((var_1_2) && (var_1_3))) {
		if (/* 277L, 13L, 17L, 395L, 412L, 1220L) */ ((var_1_4) >= (var_1_5))) {
		} else {
		}
	}
	if (var_1_3) {
	} else {
		if (/* 299L, 53L, 63L, 482L, 506L, 1055L, 1242L, 41L) */ ((last_1_var_1_18) <= (/* 302L, 52L, 65L, 484L, 508L, 1054L, 1245L, 40L) */ ((/* 303L, 48L, 66L, 485L, 509L, 1050L, 1246L, 36L) */ ((var_1_10) / (var_1_11))) / (/* 306L, 51L, 69L, 488L, 512L, 1053L, 1249L, 39L) */ (max (/* 306L, 51L, 69L, 488L, 512L, 1053L, 1249L, 39L) */ (var_1_12) , (var_1_13)))))))) {
		}
	}
	if (/* 318L, 89L, 94L, 550L, 563L, 1261L) */ ((/* 319L, 87L, 95L, 551L, 564L, 1262L) */ (- (var_1_8))) > (var_1_8))) {
	}
	if (/* 329L, 120L, 128L, 610L, 628L, 1272L) */ ((/* 330L, 118L, 129L, 611L, 629L, 1273L) */ ((/* 331L, 116L, 130L, 612L, 630L, 1274L) */ (min (/* 331L, 116L, 130L, 612L, 630L, 1274L) */ (var_1_10) , (var_1_12)))) <= (var_1_18))) && (var_1_2))) {
	} else {
	}
	if (/* 348L, 153L, 157L, 767L, 782L, 1291L) */ ((var_1_12) < (var_1_9))) {
		if (/* 352L, 162L, 166L, 771L, 786L, 1295L) */ ((var_1_14) <= (var_1_17))) {
		}
	}
	if (var_1_2) {
	} else {
		if (/* 369L, 199L, 207L, 873L, 908L, 1312L) */ ((var_1_7) <= (/* 371L, 198L, 209L, 875L, 910L, 1314L) */ ((var_1_25) * (/* 373L, 197L, 211L, 877L, 912L, 1316L) */ ((var_1_25) / (var_1_19))))))) {
			if (/* 377L, 220L, 228L, 881L, 916L, 1320L) */ ((var_1_25) < (/* 379L, 219L, 230L, 883L, 918L, 1322L) */ ((var_1_14) / (/* 381L, 218L, 232L, 885L, 920L, 1324L) */ ((var_1_20) - (var_1_21))))))) {
			}
		} else {
		}
	}
	if (/* 396L, 259L, 263L, 963L, 977L, 1339L) */ ((last_1_var_1_24) < (var_1_14))) {
	}
	return /* 421L) */ ((
	/* 420L) */ ((
		/* 419L) */ ((
			/* 418L) */ ((
				/* 417L) */ ((
					/* 416L) */ ((
						/* 415L) */ ((
							/* 272L, 31L, 390L, 407L, 1215L) */ ((
								/* 273L, 4L, 8L, 391L, 408L, 1216L) */ ((
									var_1_2
								) && (
									var_1_3
								))
							) ? (
								/* 276L, 29L, 394L, 411L, 1219L) */ ((
									/* 277L, 13L, 17L, 395L, 412L, 1220L) */ ((
										var_1_4
									) >= (
										var_1_5
									))
								) ? (
									/* 280L, 23L, 398L, 415L, 1223L) */ ((
										var_1_1
									) == (
										/* 280L, 23L, 398L, 415L, 1223L) */ ((signed char) (
											var_1_6
										))
									))
								) : (
									/* 284L, 27L, 402L, 419L, 1227L) */ ((
										var_1_1
									) == (
										/* 284L, 27L, 402L, 419L, 1227L) */ ((signed char) (
											var_1_7
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 290L, 79L, 473L, 497L, 1061L, 1233L, 47L) */ ((
								var_1_3
							) ? (
								/* 292L, 44L, 475L, 499L, 1045L, 1235L, 31L) */ ((
									var_1_8
								) == (
									/* 292L, 44L, 475L, 499L, 1045L, 1235L, 31L) */ ((float) (
										/* 295L, 43L, 478L, 502L, 1044L, 1238L, 30L) */ ((
											var_1_9
										) + (
											var_1_10
										))
									))
								))
							) : (
								/* 298L, 77L, 481L, 505L, 1060L, 1241L, 46L) */ ((
									/* 299L, 53L, 63L, 482L, 506L, 1055L, 1242L, 41L) */ ((
										last_1_var_1_18
									) <= (
										/* 302L, 52L, 65L, 484L, 508L, 1054L, 1245L, 40L) */ ((
											/* 303L, 48L, 66L, 485L, 509L, 1050L, 1246L, 36L) */ ((
												var_1_10
											) / (
												var_1_11
											))
										) / (
											/* 306L, 51L, 69L, 488L, 512L, 1053L, 1249L, 39L) */ (max (
												/* 306L, 51L, 69L, 488L, 512L, 1053L, 1249L, 39L) */ (
													var_1_12
												) , (
													var_1_13
												)
											))
										))
									))
								) ? (
									/* 309L, 75L, 491L, 515L, 1059L, 1252L, 45L) */ ((
										var_1_8
									) == (
										/* 309L, 75L, 491L, 515L, 1059L, 1252L, 45L) */ ((float) (
											var_1_9
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 317L, 103L, 549L, 562L, 1260L) */ ((
							/* 318L, 89L, 94L, 550L, 563L, 1261L) */ ((
								/* 319L, 87L, 95L, 551L, 564L, 1262L) */ (- (
									var_1_8
								))
							) > (
								var_1_8
							))
						) ? (
							/* 322L, 101L, 554L, 567L, 1265L) */ ((
								var_1_14
							) == (
								/* 322L, 101L, 554L, 567L, 1265L) */ ((unsigned short int) (
									5
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 328L, 144L, 609L, 627L, 1271L) */ ((
						/* 329L, 120L, 128L, 610L, 628L, 1272L) */ ((
							/* 330L, 118L, 129L, 611L, 629L, 1273L) */ ((
								/* 331L, 116L, 130L, 612L, 630L, 1274L) */ (min (
									/* 331L, 116L, 130L, 612L, 630L, 1274L) */ (
										var_1_10
									) , (
										var_1_12
									)
								))
							) <= (
								var_1_18
							))
						) && (
							var_1_2
						))
					) ? (
						/* 336L, 138L, 617L, 635L, 1279L) */ ((
							var_1_15
						) == (
							/* 336L, 138L, 617L, 635L, 1279L) */ ((signed char) (
								var_1_7
							))
						))
					) : (
						/* 340L, 142L, 621L, 639L, 1283L) */ ((
							var_1_15
						) == (
							/* 340L, 142L, 621L, 639L, 1283L) */ ((signed char) (
								var_1_6
							))
						))
					))
				))
			) && (
				/* 347L, 176L, 766L, 781L, 1290L) */ ((
					/* 348L, 153L, 157L, 767L, 782L, 1291L) */ ((
						var_1_12
					) < (
						var_1_9
					))
				) ? (
					/* 351L, 174L, 770L, 785L, 1294L) */ ((
						/* 352L, 162L, 166L, 771L, 786L, 1295L) */ ((
							var_1_14
						) <= (
							var_1_17
						))
					) ? (
						/* 355L, 172L, 774L, 789L, 1298L) */ ((
							var_1_16
						) == (
							/* 355L, 172L, 774L, 789L, 1298L) */ ((signed short int) (
								var_1_15
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			))
		) && (
			/* 361L, 250L, 865L, 900L, 1304L) */ ((
				var_1_2
			) ? (
				/* 363L, 192L, 867L, 902L, 1306L) */ ((
					var_1_18
				) == (
					/* 363L, 192L, 867L, 902L, 1306L) */ ((float) (
						/* 366L, 191L, 870L, 905L, 1309L) */ (abs (
							var_1_9
						))
					))
				))
			) : (
				/* 368L, 248L, 872L, 907L, 1311L) */ ((
					/* 369L, 199L, 207L, 873L, 908L, 1312L) */ ((
						var_1_7
					) <= (
						/* 371L, 198L, 209L, 875L, 910L, 1314L) */ ((
							var_1_25
						) * (
							/* 373L, 197L, 211L, 877L, 912L, 1316L) */ ((
								var_1_25
							) / (
								var_1_19
							))
						))
					))
				) ? (
					/* 376L, 240L, 880L, 915L, 1319L) */ ((
						/* 377L, 220L, 228L, 881L, 916L, 1320L) */ ((
							var_1_25
						) < (
							/* 379L, 219L, 230L, 883L, 918L, 1322L) */ ((
								var_1_14
							) / (
								/* 381L, 218L, 232L, 885L, 920L, 1324L) */ ((
									var_1_20
								) - (
									var_1_21
								))
							))
						))
					) ? (
						/* 384L, 238L, 888L, 923L, 1327L) */ ((
							var_1_18
						) == (
							/* 384L, 238L, 888L, 923L, 1327L) */ ((float) (
								var_1_9
							))
						))
					) : (
						1
					))
				) : (
					/* 388L, 246L, 892L, 927L, 1331L) */ ((
						var_1_18
					) == (
						/* 388L, 246L, 892L, 927L, 1331L) */ ((float) (
							/* 391L, 245L, 895L, 930L, 1334L) */ ((
								var_1_22
							) - (
								var_1_23
							))
						))
					))
				))
			))
		))
	) && (
		/* 395L, 275L, 962L, 976L, 1338L) */ ((
			/* 396L, 259L, 263L, 963L, 977L, 1339L) */ ((
				last_1_var_1_24
			) < (
				var_1_14
			))
		) ? (
			/* 400L, 273L, 967L, 981L, 1343L) */ ((
				var_1_24
			) == (
				/* 400L, 273L, 967L, 981L, 1343L) */ ((unsigned short int) (
					/* 403L, 272L, 970L, 984L, 1346L) */ (min (
						/* 403L, 272L, 970L, 984L, 1346L) */ (
							100
						) , (
							/* 405L, 271L, 972L, 986L, 1348L) */ (max (
								/* 405L, 271L, 972L, 986L, 1348L) */ (
									32
								) , (
									var_1_21
								)
							))
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 410L, 283L, 1003L, 1009L, 1353L) */ ((
		var_1_25
	) == (
		/* 410L, 283L, 1003L, 1009L, 1353L) */ ((unsigned short int) (
			var_1_21
		))
	))
))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
