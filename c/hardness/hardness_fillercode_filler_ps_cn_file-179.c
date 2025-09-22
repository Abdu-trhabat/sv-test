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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Filler_PS_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 256;
unsigned short int var_1_2 = 5;
unsigned short int var_1_3 = 64;
signed short int var_1_4 = -128;
signed short int var_1_5 = 10000;
signed short int var_1_6 = 64;
signed short int var_1_7 = 16;
float var_1_8 = 10000000000000.6;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
float var_1_11 = 63.8;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 50;
unsigned char var_1_18 = 16;
signed char var_1_19 = 4;
signed char var_1_20 = 32;
unsigned char var_1_21 = 8;
signed char var_1_22 = 2;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 8;
unsigned long int var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 128;
unsigned long int var_1_30 = 5;
signed long int var_1_31 = 5;
signed long int var_1_32 = 1000;
signed long int var_1_33 = 64;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
double var_1_40 = 128.65;
double var_1_41 = 15.95;
double var_1_42 = 4.25;
signed char var_1_43 = 8;
signed char var_1_44 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 26L) */ if (/* 6L, 5L) */ (! (/* 7L, 4L) */ ((var_1_27) && (var_1_28))))) {
		/* 21L) */ var_1_26 = (
			/* 20L) */ ((
				/* 18L) */ (abs (
					/* 17L) */ (abs (
						var_1_29
					))
				))
			) + (
				var_1_30
			))
		);
	} else {
		/* 25L) */ var_1_26 = (
			var_1_29
		);
	}


	// From: CodeObject2
	/* 77L) */ if (/* 40L, 39L) */ ((/* 41L, 37L) */ ((var_1_30) % (/* 43L, 36L) */ (abs (-32))))) >= (var_1_29))) {
		/* 69L) */ if (/* 55L, 54L) */ ((var_1_30) > (var_1_26))) {
			/* 68L) */ var_1_31 = (
				/* 67L) */ ((
					var_1_32
				) + (
					/* 66L) */ (abs (
						/* 65L) */ (abs (
							var_1_33
						))
					))
				))
			);
		}
	} else {
		/* 76L) */ var_1_31 = (
			/* 75L) */ (max (
				/* 75L) */ (
					-50
				) , (
					var_1_32
				)
			))
		);
	}


	// From: CodeObject3
	/* 117L) */ if (/* 88L, 87L) */ ((var_1_26) > (/* 90L, 86L) */ (min (/* 90L, 86L) */ (/* 91L, 84L) */ ((var_1_30) << (var_1_32))) , (var_1_31)))))) {
		/* 107L) */ var_1_34 = (
			/* 106L) */ ((
				var_1_35
			) - (
				var_1_36
			))
		);
	} else {
		/* 116L) */ var_1_34 = (
			/* 115L) */ ((
				/* 111L) */ (abs (
					200
				))
			) - (
				/* 114L) */ (max (
					/* 114L) */ (
						var_1_36
					) , (
						var_1_37
					)
				))
			))
		);
	}


	// From: CodeObject4
	/* 151L) */ if (/* 126L, 125L) */ ((/* 127L, 123L) */ ((var_1_32) ^ (var_1_26))) < (var_1_37))) {
		/* 149L) */ if (/* 139L, 138L) */ ((var_1_31) <= (var_1_37))) {
			/* 148L) */ var_1_38 = (
				var_1_39
			);
		}
	}


	// From: CodeObject5
	/* 175L) */ if (/* 158L, 157L) */ ((var_1_30) < (var_1_34))) {
		/* 174L) */ var_1_40 = (
			/* 173L) */ ((
				/* 169L) */ (abs (
					/* 168L) */ ((
						-0.125
					) + (
						100.25
					))
				))
			) - (
				/* 172L) */ ((
					var_1_41
				) + (
					var_1_42
				))
			))
		);
	}


	// From: CodeObject6
	/* 213L) */ if (/* 188L, 187L) */ ((/* 189L, 185L) */ ((var_1_36) / (var_1_35))) < (var_1_31))) {
		/* 203L) */ var_1_43 = (
			/* 202L) */ (abs (
				/* 201L) */ (abs (
					var_1_44
				))
			))
		);
	} else {
		/* 211L) */ if (var_1_27) {
			/* 210L) */ var_1_43 = (
				var_1_44
			);
		}
	}


	// From: Req1Batch179Filler_PS_CN
	/* 958L, 48L, 354L, 386L) */ if (/* 959L, 4L, 5L, 355L, 387L) */ ((var_1_2) > (var_1_3))) {
		/* 962L, 20L, 358L, 390L) */ var_1_1 = (
			/* 965L, 19L, 361L, 393L) */ ((
				var_1_4
			) + (
				/* 967L, 18L, 363L, 395L) */ ((
					/* 968L, 16L, 364L, 396L) */ ((
						var_1_5
					) - (
						var_1_6
					))
				) - (
					var_1_7
				))
			))
		);
	} else {
		/* 972L, 46L, 368L, 400L) */ if (/* 973L, 25L, 26L, 369L, 401L) */ ((var_1_7) == (/* 975L, 24L, 28L, 371L, 403L) */ (min (/* 975L, 24L, 28L, 371L, 403L) */ (var_1_2) , (-16)))))) {
			/* 978L, 41L, 374L, 406L) */ var_1_1 = (
				/* 981L, 40L, 377L, 409L) */ ((
					var_1_6
				) - (
					var_1_5
				))
			);
		} else {
			/* 984L, 45L, 380L, 412L) */ var_1_1 = (
				var_1_6
			);
		}
	}


	// From: Req4Batch179Filler_PS_CN
	unsigned char stepLocal_0 = var_1_9;
	/* 1028L, 132L, 637L, 647L) */ if (/* 1022L, 120L, 121L, 638L, 648L) */ ((var_1_10) || (stepLocal_0))) {
		/* 1027L, 131L, 641L, 651L) */ var_1_13 = (
			/* 1026L, 130L, 644L, 654L) */ (! (
				var_1_14
			))
		);
	}


	// From: Req7Batch179Filler_PS_CN
	/* 1089L, 281L, 871L, 893L) */ if (/* 1090L, 256L, 257L, 872L, 894L) */ ((/* 1091L, 254L, 258L, 873L, 895L) */ ((var_1_1) / (/* 1093L, 253L, 260L, 875L, 897L) */ (abs (var_1_22))))) != (var_1_5))) {
		/* 1096L, 276L, 878L, 900L) */ var_1_21 = (
			/* 1099L, 275L, 881L, 903L) */ ((
				var_1_23
			) - (
				/* 1101L, 274L, 883L, 905L) */ ((
					var_1_24
				) - (
					var_1_25
				))
			))
		);
	} else {
		/* 1104L, 280L, 886L, 908L) */ var_1_21 = (
			var_1_18
		);
	}


	// From: Req3Batch179Filler_PS_CN
	/* 1009L, 112L, 601L, 610L) */ if (var_1_13) {
		/* 1011L, 111L, 603L, 612L) */ var_1_12 = (
			/* 1014L, 110L, 606L, 615L) */ ((
				64
			) - (
				var_1_7
			))
		);
	}


	// From: Req2Batch179Filler_PS_CN
	/* 994L, 87L, 526L, 546L) */ if (/* 995L, 61L, 62L, 527L, 547L) */ ((var_1_12) >= (/* 997L, 60L, 64L, 529L, 549L) */ ((var_1_6) + (var_1_7))))) {
		/* 1000L, 85L, 532L, 552L) */ if (/* 1001L, 74L, 75L, 533L, 553L) */ ((var_1_9) || (var_1_10))) {
			/* 1004L, 84L, 536L, 556L) */ var_1_8 = (
				var_1_11
			);
		}
	}


	// From: Req5Batch179Filler_PS_CN
	/* 1033L, 200L, 678L, 706L) */ if (/* 1034L, 144L, 145L, 679L, 707L) */ ((var_1_8) != (/* 1036L, 143L, 147L, 681L, 709L) */ (max (/* 1036L, 143L, 147L, 681L, 709L) */ (var_1_8) , (/* 1038L, 142L, 149L, 683L, 711L) */ ((var_1_11) + (var_1_8)))))))) {
		/* 1041L, 194L, 686L, 714L) */ if (/* 1042L, 163L, 164L, 687L, 715L) */ ((-2) > (/* 1044L, 162L, 166L, 689L, 717L) */ ((var_1_4) + (var_1_12))))) {
			/* 1047L, 177L, 692L, 720L) */ var_1_15 = (
				var_1_18
			);
		} else {
			/* 1051L, 193L, 696L, 724L) */ var_1_15 = (
				32
			);
		}
	} else {
		/* 1055L, 199L, 700L, 728L) */ var_1_15 = (
			var_1_18
		);
	}


	// From: Req6Batch179Filler_PS_CN
	signed long int stepLocal_2 = /* 1064L, 211L, 215L, 792L, 812L) */ ((var_1_5) & (var_1_15));
	unsigned char stepLocal_1 = var_1_13;
	/* 1082L, 245L, 789L, 809L) */ if (/* 1069L, 212L, 213L, 790L, 810L) */ ((var_1_6) >= (stepLocal_2))) {
		/* 1073L, 226L, 795L, 815L) */ var_1_19 = (
			var_1_20
		);
	} else {
		/* 1081L, 243L, 799L, 819L) */ if (/* 1076L, 230L, 231L, 800L, 820L) */ ((stepLocal_1) && (/* 1075L, 229L, 233L, 802L, 822L) */ (! (var_1_14))))) {
			/* 1080L, 242L, 804L, 824L) */ var_1_19 = (
				32
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 8191);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8191);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 127);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 63);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -1073741823);
	assume_abort_if_not(var_1_32 <= 1073741823);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 127);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -126);
	assume_abort_if_not(var_1_44 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 217L, 4L, 8L, 419L, 451L, 1111L) */ ((var_1_2) > (var_1_3))) {
	} else {
		if (/* 231L, 25L, 31L, 433L, 465L, 1125L) */ ((var_1_7) == (/* 233L, 24L, 33L, 435L, 467L, 1127L) */ (min (/* 233L, 24L, 33L, 435L, 467L, 1127L) */ (var_1_2) , (-16)))))) {
		} else {
		}
	}
	if (/* 253L, 61L, 67L, 567L, 587L, 1147L) */ ((var_1_12) >= (/* 255L, 60L, 69L, 569L, 589L, 1149L) */ ((var_1_6) + (var_1_7))))) {
		if (/* 259L, 74L, 78L, 573L, 593L, 1153L) */ ((var_1_9) || (var_1_10))) {
		}
	}
	if (var_1_13) {
	}
	if (/* 277L, 120L, 124L, 658L, 668L, 1171L) */ ((var_1_10) || (var_1_9))) {
	}
	if (/* 288L, 144L, 152L, 735L, 763L, 1182L) */ ((var_1_8) != (/* 290L, 143L, 154L, 737L, 765L, 1184L) */ (max (/* 290L, 143L, 154L, 737L, 765L, 1184L) */ (var_1_8) , (/* 292L, 142L, 156L, 739L, 767L, 1186L) */ ((var_1_11) + (var_1_8)))))))) {
		if (/* 296L, 163L, 169L, 743L, 771L, 1190L) */ ((-2) > (/* 298L, 162L, 171L, 745L, 773L, 1192L) */ ((var_1_4) + (var_1_12))))) {
		} else {
		}
	} else {
	}
	if (/* 315L, 212L, 218L, 830L, 850L, 1209L) */ ((var_1_6) >= (/* 317L, 211L, 220L, 832L, 852L, 1211L) */ ((var_1_5) & (var_1_15))))) {
	} else {
		if (/* 325L, 230L, 235L, 840L, 860L, 1219L) */ ((var_1_13) && (/* 327L, 229L, 237L, 842L, 862L, 1221L) */ (! (var_1_14))))) {
		}
	}
	if (/* 337L, 256L, 263L, 916L, 938L, 1231L) */ ((/* 338L, 254L, 264L, 917L, 939L, 1232L) */ ((var_1_1) / (/* 340L, 253L, 266L, 919L, 941L, 1234L) */ (abs (var_1_22))))) != (var_1_5))) {
	} else {
	}
	return /* 361L) */ ((
	/* 360L) */ ((
		/* 359L) */ ((
			/* 358L) */ ((
				/* 357L) */ ((
					/* 356L) */ ((
						/* 216L, 49L, 418L, 450L, 1110L) */ ((
							/* 217L, 4L, 8L, 419L, 451L, 1111L) */ ((
								var_1_2
							) > (
								var_1_3
							))
						) ? (
							/* 220L, 20L, 422L, 454L, 1114L) */ ((
								var_1_1
							) == (
								/* 220L, 20L, 422L, 454L, 1114L) */ ((signed short int) (
									/* 223L, 19L, 425L, 457L, 1117L) */ ((
										var_1_4
									) + (
										/* 225L, 18L, 427L, 459L, 1119L) */ ((
											/* 226L, 16L, 428L, 460L, 1120L) */ ((
												var_1_5
											) - (
												var_1_6
											))
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 230L, 47L, 432L, 464L, 1124L) */ ((
								/* 231L, 25L, 31L, 433L, 465L, 1125L) */ ((
									var_1_7
								) == (
									/* 233L, 24L, 33L, 435L, 467L, 1127L) */ (min (
										/* 233L, 24L, 33L, 435L, 467L, 1127L) */ (
											var_1_2
										) , (
											-16
										)
									))
								))
							) ? (
								/* 236L, 41L, 438L, 470L, 1130L) */ ((
									var_1_1
								) == (
									/* 236L, 41L, 438L, 470L, 1130L) */ ((signed short int) (
										/* 239L, 40L, 441L, 473L, 1133L) */ ((
											var_1_6
										) - (
											var_1_5
										))
									))
								))
							) : (
								/* 242L, 45L, 444L, 476L, 1136L) */ ((
									var_1_1
								) == (
									/* 242L, 45L, 444L, 476L, 1136L) */ ((signed short int) (
										var_1_6
									))
								))
							))
						))
					) && (
						/* 252L, 88L, 566L, 586L, 1146L) */ ((
							/* 253L, 61L, 67L, 567L, 587L, 1147L) */ ((
								var_1_12
							) >= (
								/* 255L, 60L, 69L, 569L, 589L, 1149L) */ ((
									var_1_6
								) + (
									var_1_7
								))
							))
						) ? (
							/* 258L, 86L, 572L, 592L, 1152L) */ ((
								/* 259L, 74L, 78L, 573L, 593L, 1153L) */ ((
									var_1_9
								) || (
									var_1_10
								))
							) ? (
								/* 262L, 84L, 576L, 596L, 1156L) */ ((
									var_1_8
								) == (
									/* 262L, 84L, 576L, 596L, 1156L) */ ((float) (
										var_1_11
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
					/* 267L, 113L, 619L, 628L, 1161L) */ ((
						var_1_13
					) ? (
						/* 269L, 111L, 621L, 630L, 1163L) */ ((
							var_1_12
						) == (
							/* 269L, 111L, 621L, 630L, 1163L) */ ((signed long int) (
								/* 272L, 110L, 624L, 633L, 1166L) */ ((
									64
								) - (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 276L, 133L, 657L, 667L, 1170L) */ ((
					/* 277L, 120L, 124L, 658L, 668L, 1171L) */ ((
						var_1_10
					) || (
						var_1_9
					))
				) ? (
					/* 280L, 131L, 661L, 671L, 1174L) */ ((
						var_1_13
					) == (
						/* 280L, 131L, 661L, 671L, 1174L) */ ((unsigned char) (
							/* 283L, 130L, 664L, 674L, 1177L) */ (! (
								var_1_14
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 287L, 201L, 734L, 762L, 1181L) */ ((
				/* 288L, 144L, 152L, 735L, 763L, 1182L) */ ((
					var_1_8
				) != (
					/* 290L, 143L, 154L, 737L, 765L, 1184L) */ (max (
						/* 290L, 143L, 154L, 737L, 765L, 1184L) */ (
							var_1_8
						) , (
							/* 292L, 142L, 156L, 739L, 767L, 1186L) */ ((
								var_1_11
							) + (
								var_1_8
							))
						)
					))
				))
			) ? (
				/* 295L, 195L, 742L, 770L, 1189L) */ ((
					/* 296L, 163L, 169L, 743L, 771L, 1190L) */ ((
						-2
					) > (
						/* 298L, 162L, 171L, 745L, 773L, 1192L) */ ((
							var_1_4
						) + (
							var_1_12
						))
					))
				) ? (
					/* 301L, 177L, 748L, 776L, 1195L) */ ((
						var_1_15
					) == (
						/* 301L, 177L, 748L, 776L, 1195L) */ ((unsigned char) (
							var_1_18
						))
					))
				) : (
					/* 305L, 193L, 752L, 780L, 1199L) */ ((
						var_1_15
					) == (
						/* 305L, 193L, 752L, 780L, 1199L) */ ((unsigned char) (
							32
						))
					))
				))
			) : (
				/* 309L, 199L, 756L, 784L, 1203L) */ ((
					var_1_15
				) == (
					/* 309L, 199L, 756L, 784L, 1203L) */ ((unsigned char) (
						var_1_18
					))
				))
			))
		))
	) && (
		/* 314L, 246L, 829L, 849L, 1208L) */ ((
			/* 315L, 212L, 218L, 830L, 850L, 1209L) */ ((
				var_1_6
			) >= (
				/* 317L, 211L, 220L, 832L, 852L, 1211L) */ ((
					var_1_5
				) & (
					var_1_15
				))
			))
		) ? (
			/* 320L, 226L, 835L, 855L, 1214L) */ ((
				var_1_19
			) == (
				/* 320L, 226L, 835L, 855L, 1214L) */ ((signed char) (
					var_1_20
				))
			))
		) : (
			/* 324L, 244L, 839L, 859L, 1218L) */ ((
				/* 325L, 230L, 235L, 840L, 860L, 1219L) */ ((
					var_1_13
				) && (
					/* 327L, 229L, 237L, 842L, 862L, 1221L) */ (! (
						var_1_14
					))
				))
			) ? (
				/* 329L, 242L, 844L, 864L, 1223L) */ ((
					var_1_19
				) == (
					/* 329L, 242L, 844L, 864L, 1223L) */ ((signed char) (
						32
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 336L, 282L, 915L, 937L, 1230L) */ ((
		/* 337L, 256L, 263L, 916L, 938L, 1231L) */ ((
			/* 338L, 254L, 264L, 917L, 939L, 1232L) */ ((
				var_1_1
			) / (
				/* 340L, 253L, 266L, 919L, 941L, 1234L) */ (abs (
					var_1_22
				))
			))
		) != (
			var_1_5
		))
	) ? (
		/* 343L, 276L, 922L, 944L, 1237L) */ ((
			var_1_21
		) == (
			/* 343L, 276L, 922L, 944L, 1237L) */ ((unsigned char) (
				/* 346L, 275L, 925L, 947L, 1240L) */ ((
					var_1_23
				) - (
					/* 348L, 274L, 927L, 949L, 1242L) */ ((
						var_1_24
					) - (
						var_1_25
					))
				))
			))
		))
	) : (
		/* 351L, 280L, 930L, 952L, 1245L) */ ((
			var_1_21
		) == (
			/* 351L, 280L, 930L, 952L, 1245L) */ ((unsigned char) (
				var_1_18
			))
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
