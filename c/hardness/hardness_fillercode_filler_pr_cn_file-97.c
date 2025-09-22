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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 2;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 32;
signed char var_1_5 = 8;
signed char var_1_6 = 25;
float var_1_7 = 128.375;
double var_1_8 = -0.2;
float var_1_9 = 5.8;
float var_1_10 = 2.2640000000000002;
float var_1_11 = 5.4;
unsigned char var_1_12 = 1;
signed short int var_1_14 = -64;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 0;
unsigned char var_1_17 = 50;
unsigned long int var_1_18 = 1189571775;
float var_1_19 = 10000.4;
float var_1_20 = 255.6;
float var_1_21 = 64.25;
signed short int var_1_22 = -4;
unsigned char var_1_23 = 1;
signed char var_1_24 = 50;
signed char var_1_25 = 64;
signed short int var_1_26 = 4;
unsigned short int var_1_27 = 8;
unsigned char var_1_28 = 16;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 48416;
unsigned short int var_1_32 = 8;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 25;
unsigned long int var_1_35 = 32;
unsigned char var_1_36 = 8;
double var_1_37 = -0.75;
double var_1_38 = 31.75;
double var_1_39 = 5.5;
double var_1_40 = 32.5;
signed short int var_1_41 = -2;
signed short int var_1_42 = -100;
unsigned char var_1_43 = 16;
unsigned short int var_1_44 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_12 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch97Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_2;
	signed long int stepLocal_0 = /* 6L, 4L, 8L, 339L, 369L, 1043L, 1104L) */ ((var_1_2) + (var_1_3));
	/* 36L, 64L, 337L, 367L, 1070L, 1136L) */ if (/* 11L, 6L, 7L, 338L, 368L, 1045L, 1112L) */ ((stepLocal_0) < (-200))) {
		/* 31L, 58L, 343L, 373L, 1065L, 1131L) */ if (last_1_var_1_12) {
			/* 26L, 52L, 345L, 375L, 1060L, 1126L) */ if (/* 17L, 23L, 24L, 346L, 376L, 1051L, 1117L) */ ((stepLocal_1) > (/* 16L, 22L, 26L, 348L, 378L, 1050L, 1116L) */ (- (var_1_3))))) {
				/* 21L, 35L, 350L, 380L, 1055L, 1121L) */ var_1_1 = (
					var_1_2
				);
			} else {
				/* 25L, 51L, 354L, 384L, 1059L, 1125L) */ var_1_1 = (
					var_1_3
				);
			}
		} else {
			/* 30L, 57L, 358L, 388L, 1064L, 1130L) */ var_1_1 = (
				10u
			);
		}
	} else {
		/* 35L, 63L, 362L, 392L, 1069L, 1135L) */ var_1_1 = (
			0u
		);
	}


	// From: CodeObject2
	/* 141L) */ if (/* 115L, 114L) */ ((/* 116L, 112L) */ ((var_1_26) / (var_1_28))) < (var_1_22))) {
		/* 128L) */ var_1_27 = (
			var_1_28
		);
	} else {
		/* 140L) */ var_1_27 = (
			/* 139L) */ (max (
				/* 139L) */ (
					/* 135L) */ (max (
						/* 135L) */ (
							/* 133L) */ (min (
								/* 133L) */ (
									var_1_28
								) , (
									var_1_29
								)
							))
						) , (
							var_1_30
						)
					))
				) , (
					/* 138L) */ ((
						var_1_31
					) - (
						var_1_32
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 179L) */ if (/* 165L, 164L) */ ((/* 166L, 162L) */ (min (/* 166L, 162L) */ (var_1_33) , (var_1_24)))) >= (var_1_26))) {
		/* 178L) */ var_1_35 = (
			var_1_29
		);
	}


	// From: Req2Batch97Filler_PR_CN
	/* 1142L, 133L, 578L, 608L) */ if (/* 1143L, 76L, 77L, 579L, 609L) */ ((/* 1144L, 72L, 78L, 580L, 610L) */ (max (/* 1144L, 72L, 78L, 580L, 610L) */ (var_1_2) , (var_1_1)))) > (/* 1147L, 75L, 81L, 583L, 613L) */ ((var_1_3) * (2u))))) {
		/* 1150L, 127L, 586L, 616L) */ if (/* 1151L, 97L, 98L, 587L, 617L) */ ((/* 1152L, 95L, 99L, 588L, 618L) */ ((/* 1153L, 93L, 100L, 589L, 619L) */ ((32) * (-25))) | (var_1_2))) >= (var_1_1))) {
			/* 1158L, 125L, 594L, 624L) */ if (/* 1159L, 114L, 115L, 595L, 625L) */ ((var_1_3) > (var_1_1))) {
				/* 1162L, 124L, 598L, 628L) */ var_1_5 = (
					var_1_6
				);
			}
		}
	} else {
		/* 1166L, 132L, 602L, 632L) */ var_1_5 = (
			var_1_6
		);
	}


	// From: CodeObject8
	/* 322L) */ var_1_43 = (
		var_1_34
	);


	// From: Req5Batch97Filler_PR_CN
	/* 1208L, 233L, 854L, 876L) */ if (/* 1209L, 210L, 211L, 855L, 877L) */ ((var_1_17) <= (var_1_5))) {
		/* 1212L, 224L, 858L, 880L) */ var_1_16 = (
			/* 1215L, 223L, 861L, 883L) */ ((
				/* 1216L, 221L, 862L, 884L) */ ((
					var_1_18
				) - (
					var_1_3
				))
			) + (
				var_1_17
			))
		);
	} else {
		/* 1220L, 232L, 866L, 888L) */ var_1_16 = (
			/* 1223L, 231L, 869L, 891L) */ (min (
				/* 1223L, 231L, 869L, 891L) */ (
					var_1_17
				) , (
					/* 1225L, 230L, 871L, 893L) */ ((
						var_1_3
					) + (
						var_1_2
					))
				)
			))
		);
	}


	// From: Req4Batch97Filler_PR_CN
	unsigned long int stepLocal_3 = /* 1191L, 179L, 185L, 759L, 772L) */ ((var_1_16) / (var_1_14));
	/* 1203L, 202L, 757L, 770L) */ if (/* 1198L, 183L, 184L, 758L, 771L) */ ((stepLocal_3) <= (/* 1197L, 182L, 188L, 762L, 775L) */ ((var_1_6) * (var_1_1))))) {
		/* 1202L, 201L, 765L, 778L) */ var_1_12 = (
			var_1_15
		);
	}


	// From: CodeObject3
	/* 152L) */ if (var_1_23) {
		/* 151L) */ var_1_33 = (
			var_1_34
		);
	}


	// From: CodeObject5
	/* 251L) */ if (/* 190L, 189L) */ ((/* 191L, 187L) */ ((var_1_37) * (/* 193L, 186L) */ ((var_1_38) - (var_1_39))))) >= (var_1_40))) {
		/* 245L) */ if (/* 211L, 210L) */ ((/* 212L, 205L) */ (~ (var_1_27))) <= (/* 214L, 209L) */ (abs (/* 215L, 208L) */ (min (/* 215L, 208L) */ (var_1_33) , (var_1_29)))))))) {
			/* 228L) */ var_1_36 = (
				var_1_34
			);
		} else {
			/* 244L) */ var_1_36 = (
				5
			);
		}
	} else {
		/* 250L) */ var_1_36 = (
			var_1_34
		);
	}


	// From: CodeObject6
	/* 303L) */ if (/* 263L, 262L) */ ((/* 264L, 259L) */ ((var_1_27) | (1000))) >= (/* 267L, 261L) */ (abs (var_1_25))))) {
		/* 301L) */ if (/* 282L, 281L) */ ((/* 283L, 278L) */ ((/* 284L, 276L) */ (~ (8u))) * (100u))) > (/* 287L, 280L) */ (abs (var_1_31))))) {
			/* 300L) */ var_1_41 = (
				/* 299L) */ (abs (
					var_1_26
				))
			);
		}
	}


	// From: CodeObject7
	/* 314L) */ var_1_42 = (
		var_1_36
	);


	// From: CodeObject9
	/* 330L) */ var_1_44 = (
		var_1_29
	);


	// From: Req6Batch97Filler_PR_CN
	unsigned long int stepLocal_4 = var_1_1;
	/* 1254L, 273L, 941L, 966L) */ if (var_1_15) {
		/* 1249L, 267L, 943L, 968L) */ if (/* 1234L, 246L, 247L, 944L, 969L) */ ((var_1_16) < (stepLocal_4))) {
			/* 1242L, 260L, 947L, 972L) */ var_1_19 = (
				/* 1241L, 259L, 950L, 975L) */ ((
					/* 1239L, 257L, 951L, 976L) */ ((
						var_1_20
					) + (
						var_1_21
					))
				) - (
					9.125f
				))
			);
		} else {
			/* 1248L, 266L, 955L, 980L) */ var_1_19 = (
				/* 1247L, 265L, 958L, 983L) */ ((
					0.19999999999999996f
				) - (
					var_1_20
				))
			);
		}
	} else {
		/* 1253L, 272L, 961L, 986L) */ var_1_19 = (
			var_1_20
		);
	}


	// From: CodeObject1
	/* 105L) */ if (var_1_23) {
		/* 98L) */ if (/* 82L, 81L) */ ((var_1_24) <= (var_1_25))) {
			/* 97L) */ var_1_22 = (
				/* 96L) */ ((
					/* 94L) */ (max (
						/* 94L) */ (
							var_1_24
						) , (
							/* 93L) */ (min (
								/* 93L) */ (
									-128
								) , (
									var_1_25
								)
							))
						)
					))
				) + (
					var_1_26
				))
			);
		}
	} else {
		/* 104L) */ var_1_22 = (
			/* 103L) */ (abs (
				var_1_26
			))
		);
	}


	// From: Req3Batch97Filler_PR_CN
	unsigned char stepLocal_2 = var_1_12;
	/* 1186L, 164L, 697L, 712L) */ if (/* 1177L, 145L, 146L, 698L, 713L) */ ((/* 1176L, 143L, 147L, 699L, 714L) */ ((127.75) <= (var_1_8))) && (stepLocal_2))) {
		/* 1185L, 163L, 703L, 718L) */ var_1_7 = (
			/* 1184L, 162L, 706L, 721L) */ (max (
				/* 1184L, 162L, 706L, 721L) */ (
					/* 1182L, 160L, 707L, 722L) */ ((
						var_1_9
					) + (
						var_1_10
					))
				) , (
					var_1_11
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -32768);
	assume_abort_if_not(var_1_14 <= 32767);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 255);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -16383);
	assume_abort_if_not(var_1_26 <= 16383);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 255);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 65534);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	if (/* 334L, 6L, 12L, 398L, 428L, 1076L, 1259L, 43L) */ ((/* 335L, 4L, 13L, 399L, 429L, 1074L, 1260L, 41L) */ ((var_1_2) + (var_1_3))) < (-200))) {
		if (last_1_var_1_12) {
			if (/* 343L, 23L, 28L, 406L, 436L, 1082L, 1268L, 49L) */ ((var_1_2) > (/* 345L, 22L, 30L, 408L, 438L, 1081L, 1270L, 48L) */ (- (var_1_3))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 366L, 76L, 84L, 639L, 669L, 1291L) */ ((/* 367L, 72L, 85L, 640L, 670L, 1292L) */ (max (/* 367L, 72L, 85L, 640L, 670L, 1292L) */ (var_1_2) , (var_1_1)))) > (/* 370L, 75L, 88L, 643L, 673L, 1295L) */ ((var_1_3) * (2u))))) {
		if (/* 374L, 97L, 105L, 647L, 677L, 1299L) */ ((/* 375L, 95L, 106L, 648L, 678L, 1300L) */ ((/* 376L, 93L, 107L, 649L, 679L, 1301L) */ ((32) * (-25))) | (var_1_2))) >= (var_1_1))) {
			if (/* 382L, 114L, 118L, 655L, 685L, 1307L) */ ((var_1_3) > (var_1_1))) {
			}
		}
	} else {
	}
	if (/* 395L, 145L, 151L, 728L, 743L, 1320L) */ ((/* 396L, 143L, 152L, 729L, 744L, 1321L) */ ((127.75) <= (var_1_8))) && (var_1_12))) {
	}
	if (/* 410L, 183L, 191L, 784L, 797L, 1335L) */ ((/* 411L, 179L, 192L, 785L, 798L, 1336L) */ ((var_1_16) / (var_1_14))) <= (/* 414L, 182L, 195L, 788L, 801L, 1339L) */ ((var_1_6) * (var_1_1))))) {
	}
	if (/* 424L, 210L, 214L, 899L, 921L, 1349L) */ ((var_1_17) <= (var_1_5))) {
	} else {
	}
	if (var_1_15) {
		if (/* 447L, 246L, 250L, 994L, 1019L, 1372L) */ ((var_1_16) < (var_1_1))) {
		} else {
		}
	} else {
	}
	return /* 473L) */ ((
	/* 472L) */ ((
		/* 471L) */ ((
			/* 470L) */ ((
				/* 469L) */ ((
					/* 333L, 65L, 397L, 427L, 1101L, 1258L, 68L) */ ((
						/* 334L, 6L, 12L, 398L, 428L, 1076L, 1259L, 43L) */ ((
							/* 335L, 4L, 13L, 399L, 429L, 1074L, 1260L, 41L) */ ((
								var_1_2
							) + (
								var_1_3
							))
						) < (
							-200
						))
					) ? (
						/* 339L, 59L, 403L, 433L, 1096L, 1264L, 63L) */ ((
							last_1_var_1_12
						) ? (
							/* 342L, 53L, 405L, 435L, 1091L, 1267L, 58L) */ ((
								/* 343L, 23L, 28L, 406L, 436L, 1082L, 1268L, 49L) */ ((
									var_1_2
								) > (
									/* 345L, 22L, 30L, 408L, 438L, 1081L, 1270L, 48L) */ (- (
										var_1_3
									))
								))
							) ? (
								/* 347L, 35L, 410L, 440L, 1086L, 1272L, 53L) */ ((
									var_1_1
								) == (
									/* 347L, 35L, 410L, 440L, 1086L, 1272L, 53L) */ ((unsigned long int) (
										var_1_2
									))
								))
							) : (
								/* 351L, 51L, 414L, 444L, 1090L, 1276L, 57L) */ ((
									var_1_1
								) == (
									/* 351L, 51L, 414L, 444L, 1090L, 1276L, 57L) */ ((unsigned long int) (
										var_1_3
									))
								))
							))
						) : (
							/* 355L, 57L, 418L, 448L, 1095L, 1280L, 62L) */ ((
								var_1_1
							) == (
								/* 355L, 57L, 418L, 448L, 1095L, 1280L, 62L) */ ((unsigned long int) (
									10u
								))
							))
						))
					) : (
						/* 359L, 63L, 422L, 452L, 1100L, 1284L, 67L) */ ((
							var_1_1
						) == (
							/* 359L, 63L, 422L, 452L, 1100L, 1284L, 67L) */ ((unsigned long int) (
								0u
							))
						))
					))
				) && (
					/* 365L, 134L, 638L, 668L, 1290L) */ ((
						/* 366L, 76L, 84L, 639L, 669L, 1291L) */ ((
							/* 367L, 72L, 85L, 640L, 670L, 1292L) */ (max (
								/* 367L, 72L, 85L, 640L, 670L, 1292L) */ (
									var_1_2
								) , (
									var_1_1
								)
							))
						) > (
							/* 370L, 75L, 88L, 643L, 673L, 1295L) */ ((
								var_1_3
							) * (
								2u
							))
						))
					) ? (
						/* 373L, 128L, 646L, 676L, 1298L) */ ((
							/* 374L, 97L, 105L, 647L, 677L, 1299L) */ ((
								/* 375L, 95L, 106L, 648L, 678L, 1300L) */ ((
									/* 376L, 93L, 107L, 649L, 679L, 1301L) */ ((
										32
									) * (
										-25
									))
								) | (
									var_1_2
								))
							) >= (
								var_1_1
							))
						) ? (
							/* 381L, 126L, 654L, 684L, 1306L) */ ((
								/* 382L, 114L, 118L, 655L, 685L, 1307L) */ ((
									var_1_3
								) > (
									var_1_1
								))
							) ? (
								/* 385L, 124L, 658L, 688L, 1310L) */ ((
									var_1_5
								) == (
									/* 385L, 124L, 658L, 688L, 1310L) */ ((signed char) (
										var_1_6
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) : (
						/* 389L, 132L, 662L, 692L, 1314L) */ ((
							var_1_5
						) == (
							/* 389L, 132L, 662L, 692L, 1314L) */ ((signed char) (
								var_1_6
							))
						))
					))
				))
			) && (
				/* 394L, 165L, 727L, 742L, 1319L) */ ((
					/* 395L, 145L, 151L, 728L, 743L, 1320L) */ ((
						/* 396L, 143L, 152L, 729L, 744L, 1321L) */ ((
							127.75
						) <= (
							var_1_8
						))
					) && (
						var_1_12
					))
				) ? (
					/* 400L, 163L, 733L, 748L, 1325L) */ ((
						var_1_7
					) == (
						/* 400L, 163L, 733L, 748L, 1325L) */ ((float) (
							/* 403L, 162L, 736L, 751L, 1328L) */ (max (
								/* 403L, 162L, 736L, 751L, 1328L) */ (
									/* 404L, 160L, 737L, 752L, 1329L) */ ((
										var_1_9
									) + (
										var_1_10
									))
								) , (
									var_1_11
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 409L, 203L, 783L, 796L, 1334L) */ ((
				/* 410L, 183L, 191L, 784L, 797L, 1335L) */ ((
					/* 411L, 179L, 192L, 785L, 798L, 1336L) */ ((
						var_1_16
					) / (
						var_1_14
					))
				) <= (
					/* 414L, 182L, 195L, 788L, 801L, 1339L) */ ((
						var_1_6
					) * (
						var_1_1
					))
				))
			) ? (
				/* 417L, 201L, 791L, 804L, 1342L) */ ((
					var_1_12
				) == (
					/* 417L, 201L, 791L, 804L, 1342L) */ ((unsigned char) (
						var_1_15
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 423L, 234L, 898L, 920L, 1348L) */ ((
			/* 424L, 210L, 214L, 899L, 921L, 1349L) */ ((
				var_1_17
			) <= (
				var_1_5
			))
		) ? (
			/* 427L, 224L, 902L, 924L, 1352L) */ ((
				var_1_16
			) == (
				/* 427L, 224L, 902L, 924L, 1352L) */ ((unsigned long int) (
					/* 430L, 223L, 905L, 927L, 1355L) */ ((
						/* 431L, 221L, 906L, 928L, 1356L) */ ((
							var_1_18
						) - (
							var_1_3
						))
					) + (
						var_1_17
					))
				))
			))
		) : (
			/* 435L, 232L, 910L, 932L, 1360L) */ ((
				var_1_16
			) == (
				/* 435L, 232L, 910L, 932L, 1360L) */ ((unsigned long int) (
					/* 438L, 231L, 913L, 935L, 1363L) */ (min (
						/* 438L, 231L, 913L, 935L, 1363L) */ (
							var_1_17
						) , (
							/* 440L, 230L, 915L, 937L, 1365L) */ ((
								var_1_3
							) + (
								var_1_2
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 444L, 274L, 991L, 1016L, 1369L) */ ((
		var_1_15
	) ? (
		/* 446L, 268L, 993L, 1018L, 1371L) */ ((
			/* 447L, 246L, 250L, 994L, 1019L, 1372L) */ ((
				var_1_16
			) < (
				var_1_1
			))
		) ? (
			/* 450L, 260L, 997L, 1022L, 1375L) */ ((
				var_1_19
			) == (
				/* 450L, 260L, 997L, 1022L, 1375L) */ ((float) (
					/* 453L, 259L, 1000L, 1025L, 1378L) */ ((
						/* 454L, 257L, 1001L, 1026L, 1379L) */ ((
							var_1_20
						) + (
							var_1_21
						))
					) - (
						9.125f
					))
				))
			))
		) : (
			/* 458L, 266L, 1005L, 1030L, 1383L) */ ((
				var_1_19
			) == (
				/* 458L, 266L, 1005L, 1030L, 1383L) */ ((float) (
					/* 461L, 265L, 1008L, 1033L, 1386L) */ ((
						0.19999999999999996f
					) - (
						var_1_20
					))
				))
			))
		))
	) : (
		/* 464L, 272L, 1011L, 1036L, 1389L) */ ((
			var_1_19
		) == (
			/* 464L, 272L, 1011L, 1036L, 1389L) */ ((float) (
				var_1_20
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
