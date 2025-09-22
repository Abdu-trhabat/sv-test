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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
signed long int var_1_6 = -100000;
signed long int var_1_7 = 0;
signed long int var_1_8 = 256;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
unsigned long int var_1_14 = 64;
double var_1_15 = 255.5;
double var_1_16 = 127.5;
unsigned long int var_1_17 = 1259086625;
unsigned long int var_1_18 = 1670092463;
signed long int var_1_19 = 2;
signed long int var_1_20 = -64;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 10;
signed char var_1_26 = 4;
float var_1_27 = 3.5;
float var_1_28 = 0.94;
float var_1_29 = 32.5;
signed long int var_1_34 = -128;
signed char var_1_36 = 5;
signed char var_1_37 = -4;
signed char var_1_38 = 4;
signed long int var_1_39 = 2;
unsigned short int var_1_40 = 8;
unsigned char var_1_41 = 0;
signed long int var_1_42 = 25;
signed short int var_1_43 = 128;
double var_1_44 = 32.75;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
signed char var_1_48 = -1;
signed char var_1_49 = 25;
signed char var_1_50 = 25;
unsigned long int var_1_51 = 5;
signed char var_1_52 = 25;
signed char var_1_53 = -5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_20 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch71Filler_PR_CO
	/* 1031L, 63L, 554L, 560L) */ var_1_10 = (
		var_1_11
	);


	// From: CodeObject3
	/* 311L, 128L) */ var_1_43 = (
		-100
	);


	// From: Req6Batch71Filler_PR_CO
	/* 1115L, 224L, 855L, 871L) */ if (/* 1116L, 209L, 210L, 856L, 872L) */ ((var_1_9) == (var_1_5))) {
		/* 1119L, 223L, 859L, 875L) */ var_1_20 = (
			/* 1122L, 222L, 862L, 878L) */ (max (
				/* 1122L, 222L, 862L, 878L) */ (
					var_1_4
				) , (
					/* 1124L, 221L, 864L, 880L) */ ((
						last_1_var_1_20
					) + (
						-8
					))
				)
			))
		);
	}


	// From: Req7Batch71Filler_PR_CO
	/* 1133L, 242L, 921L, 935L) */ var_1_21 = (
		/* 1136L, 241L, 924L, 938L) */ (! (
			/* 1137L, 240L, 925L, 939L) */ ((
				var_1_22
			) || (
				/* 1139L, 239L, 927L, 941L) */ ((
					var_1_23
				) || (
					var_1_24
				))
			))
		))
	);


	// From: CodeObject6
	/* 349L, 189L) */ if (var_1_21) {
		/* 351L, 180L) */ var_1_48 = (
			/* 354L, 179L) */ (abs (
				/* 355L, 178L) */ ((
					var_1_38
				) - (
					var_1_49
				))
			))
		);
	} else {
		/* 358L, 188L) */ var_1_48 = (
			/* 361L, 187L) */ ((
				var_1_49
			) - (
				/* 363L, 186L) */ (min (
					/* 363L, 186L) */ (
						var_1_38
					) , (
						var_1_50
					)
				))
			))
		);
	}


	// From: CodeObject8
	/* 392L, 249L) */ if (/* 393L, 229L, 230L) */ ((var_1_14) < (/* 395L, 228L, 232L) */ (min (/* 395L, 228L, 232L) */ (var_1_49) , (var_1_36)))))) {
		/* 398L, 247L) */ if (var_1_21) {
			/* 400L, 246L) */ var_1_52 = (
				var_1_53
			);
		}
	}


	// From: Req8Batch71Filler_PR_CO
	/* 1144L, 258L, 974L, 980L) */ var_1_25 = (
		16
	);


	// From: Req1Batch71Filler_PR_CO
	signed long int stepLocal_0 = /* 998L, 13L, 19L, 444L, 473L) */ ((/* 999L, 11L, 20L, 445L, 474L) */ ((var_1_6) + (var_1_7))) * (var_1_8));
	/* 1026L, 54L, 437L, 466L) */ if (var_1_21) {
		/* 1015L, 39L, 439L, 468L) */ if (/* 1008L, 14L, 15L, 440L, 469L) */ ((/* 1007L, 8L, 16L, 441L, 470L) */ ((var_1_4) - (var_1_5))) > (stepLocal_0))) {
			/* 1014L, 38L, 449L, 478L) */ var_1_1 = (
				/* 1013L, 37L, 452L, 481L) */ ((
					var_1_9
				) - (
					var_1_5
				))
			);
		}
	} else {
		/* 1025L, 52L, 455L, 484L) */ if (var_1_21) {
			/* 1020L, 47L, 457L, 486L) */ var_1_1 = (
				32
			);
		} else {
			/* 1024L, 51L, 461L, 490L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: CodeObject4
	/* 316L, 136L) */ var_1_44 = (
		8.25
	);


	// From: Req5Batch71Filler_PR_CO
	/* 1103L, 201L, 813L, 823L) */ if (/* 1104L, 190L, 191L, 814L, 824L) */ (! (var_1_21))) {
		/* 1106L, 200L, 816L, 826L) */ var_1_19 = (
			/* 1109L, 199L, 819L, 829L) */ ((
				var_1_5
			) + (
				256
			))
		);
	}


	// From: CodeObject1
	/* 251L, 71L) */ if (/* 252L, 10L, 11L) */ ((/* 253L, 6L, 12L) */ ((/* 254L, 4L, 13L) */ (min (/* 254L, 4L, 13L) */ (var_1_27) , (var_1_28)))) - (var_1_29))) <= (/* 258L, 9L, 17L) */ ((var_1_12) + (var_1_10))))) {
		/* 261L, 61L) */ if (/* 262L, 35L, 36L) */ ((/* 263L, 33L, 37L) */ (max (/* 263L, 33L, 37L) */ (var_1_14) , (/* 265L, 32L, 39L) */ ((var_1_19) / (var_1_34)))))) < (var_1_20))) {
			/* 269L, 60L) */ var_1_26 = (
				/* 272L, 59L) */ ((
					/* 273L, 54L) */ ((
						var_1_36
					) + (
						var_1_37
					))
				) + (
					/* 276L, 58L) */ (abs (
						/* 277L, 57L) */ ((
							var_1_38
						) - (
							50
						))
					))
				))
			);
		}
	} else {
		/* 280L, 70L) */ var_1_26 = (
			/* 283L, 69L) */ ((
				/* 284L, 66L) */ (abs (
					var_1_37
				))
			) - (
				/* 286L, 68L) */ (abs (
					var_1_38
				))
			))
		);
	}


	// From: CodeObject2
	/* 288L, 121L) */ if (/* 289L, 81L, 82L) */ ((/* 290L, 79L, 83L) */ ((var_1_14) % (/* 292L, 78L, 85L) */ (min (/* 292L, 78L, 85L) */ (var_1_34) , (var_1_40)))))) <= (var_1_37))) {
		/* 296L, 119L) */ if (/* 297L, 100L, 101L) */ ((/* 298L, 98L, 102L) */ ((var_1_36) <= (var_1_34))) || (var_1_21))) {
			/* 302L, 114L) */ var_1_39 = (
				var_1_42
			);
		} else {
			/* 306L, 118L) */ var_1_39 = (
				var_1_40
			);
		}
	}


	// From: CodeObject7
	/* 379L, 221L) */ if (/* 380L, 201L, 202L) */ ((/* 381L, 199L, 203L) */ ((var_1_34) * (/* 383L, 198L, 205L) */ (min (/* 383L, 198L, 205L) */ (var_1_19) , (var_1_20)))))) < (var_1_42))) {
		/* 387L, 220L) */ var_1_51 = (
			/* 390L, 219L) */ (abs (
				var_1_50
			))
		);
	}


	// From: Req4Batch71Filler_PR_CO
	signed long int stepLocal_2 = /* 1062L, 137L, 144L, 669L, 707L) */ (min (/* 1062L, 137L, 144L, 669L, 707L) */ (var_1_20) , (var_1_9)));
	/* 1099L, 183L, 661L, 699L) */ if (/* 1070L, 124L, 125L, 662L, 700L) */ ((/* 1068L, 122L, 126L, 663L, 701L) */ ((var_1_15) - (var_1_16))) > (var_1_13))) {
		/* 1088L, 171L, 667L, 705L) */ if (/* 1075L, 142L, 143L, 668L, 706L) */ ((stepLocal_2) <= (/* 1074L, 141L, 147L, 672L, 710L) */ (max (/* 1074L, 141L, 147L, 672L, 710L) */ (var_1_19) , (/* 1073L, 140L, 149L, 674L, 712L) */ (abs (var_1_4)))))))) {
			/* 1081L, 164L, 676L, 714L) */ var_1_14 = (
				/* 1080L, 163L, 679L, 717L) */ ((
					var_1_20
				) + (
					var_1_9
				))
			);
		} else {
			/* 1087L, 170L, 682L, 720L) */ var_1_14 = (
				/* 1086L, 169L, 685L, 723L) */ ((
					var_1_5
				) + (
					var_1_9
				))
			);
		}
	} else {
		/* 1098L, 182L, 688L, 726L) */ var_1_14 = (
			/* 1097L, 181L, 691L, 729L) */ ((
				3919152995u
			) - (
				/* 1096L, 180L, 693L, 731L) */ ((
					/* 1094L, 178L, 694L, 732L) */ (min (
						/* 1094L, 178L, 694L, 732L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				) - (
					var_1_20
				))
			))
		);
	}


	// From: Req3Batch71Filler_PR_CO
	unsigned long int stepLocal_1 = var_1_14;
	/* 1057L, 114L, 577L, 598L) */ if (/* 1045L, 76L, 77L, 578L, 599L) */ ((var_1_10) >= (/* 1044L, 75L, 79L, 580L, 601L) */ ((/* 1042L, 73L, 80L, 581L, 602L) */ ((var_1_11) / (var_1_13))) / (31.9f))))) {
		/* 1056L, 112L, 585L, 606L) */ if (/* 1047L, 93L, 94L, 586L, 607L) */ ((stepLocal_1) > (var_1_4))) {
			/* 1051L, 103L, 589L, 610L) */ var_1_12 = (
				var_1_11
			);
		} else {
			/* 1055L, 111L, 593L, 614L) */ var_1_12 = (
				3.125f
			);
		}
	}


	// From: CodeObject5
	/* 338L, 159L) */ if (/* 339L, 143L, 144L) */ ((var_1_41) || (var_1_46))) {
		/* 342L, 157L) */ if (var_1_46) {
			/* 344L, 156L) */ var_1_45 = (
				var_1_47
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1073741823);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	assume_abort_if_not(var_1_34 != 0);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -31);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -31);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65535);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483647);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 126);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= -127);
	assume_abort_if_not(var_1_53 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (var_1_21) {
		if (/* 407L, 14L, 24L, 498L, 527L, 1152L) */ ((/* 408L, 8L, 25L, 499L, 528L, 1153L) */ ((var_1_4) - (var_1_5))) > (/* 411L, 13L, 28L, 502L, 531L, 1156L) */ ((/* 412L, 11L, 29L, 503L, 532L, 1157L) */ ((var_1_6) + (var_1_7))) * (var_1_8))))) {
		}
	} else {
		if (var_1_21) {
		} else {
		}
	}
	if (/* 440L, 76L, 84L, 620L, 641L, 1185L) */ ((var_1_10) >= (/* 442L, 75L, 86L, 622L, 643L, 1187L) */ ((/* 443L, 73L, 87L, 623L, 644L, 1188L) */ ((var_1_11) / (var_1_13))) / (31.9f))))) {
		if (/* 448L, 93L, 97L, 628L, 649L, 1193L) */ ((var_1_14) > (var_1_4))) {
		} else {
		}
	}
	if (/* 461L, 124L, 130L, 738L, 776L, 1206L) */ ((/* 462L, 122L, 131L, 739L, 777L, 1207L) */ ((var_1_15) - (var_1_16))) > (var_1_13))) {
		if (/* 467L, 142L, 151L, 744L, 782L, 1212L) */ ((/* 468L, 137L, 152L, 745L, 783L, 1213L) */ (min (/* 468L, 137L, 152L, 745L, 783L, 1213L) */ (var_1_20) , (var_1_9)))) <= (/* 471L, 141L, 155L, 748L, 786L, 1216L) */ (max (/* 471L, 141L, 155L, 748L, 786L, 1216L) */ (var_1_19) , (/* 473L, 140L, 157L, 750L, 788L, 1218L) */ (abs (var_1_4)))))))) {
		} else {
		}
	} else {
	}
	if (/* 499L, 190L, 193L, 834L, 844L, 1244L) */ (! (var_1_21))) {
	}
	if (/* 511L, 209L, 213L, 888L, 904L, 1256L) */ ((var_1_9) == (var_1_5))) {
	}
	return /* 550L) */ ((
	/* 549L) */ ((
		/* 548L) */ ((
			/* 547L) */ ((
				/* 546L) */ ((
					/* 545L) */ ((
						/* 544L) */ ((
							/* 404L, 55L, 495L, 524L, 1149L) */ ((
								var_1_21
							) ? (
								/* 406L, 40L, 497L, 526L, 1151L) */ ((
									/* 407L, 14L, 24L, 498L, 527L, 1152L) */ ((
										/* 408L, 8L, 25L, 499L, 528L, 1153L) */ ((
											var_1_4
										) - (
											var_1_5
										))
									) > (
										/* 411L, 13L, 28L, 502L, 531L, 1156L) */ ((
											/* 412L, 11L, 29L, 503L, 532L, 1157L) */ ((
												var_1_6
											) + (
												var_1_7
											))
										) * (
											var_1_8
										))
									))
								) ? (
									/* 416L, 38L, 507L, 536L, 1161L) */ ((
										var_1_1
									) == (
										/* 416L, 38L, 507L, 536L, 1161L) */ ((unsigned short int) (
											/* 419L, 37L, 510L, 539L, 1164L) */ ((
												var_1_9
											) - (
												var_1_5
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 422L, 53L, 513L, 542L, 1167L) */ ((
									var_1_21
								) ? (
									/* 424L, 47L, 515L, 544L, 1169L) */ ((
										var_1_1
									) == (
										/* 424L, 47L, 515L, 544L, 1169L) */ ((unsigned short int) (
											32
										))
									))
								) : (
									/* 428L, 51L, 519L, 548L, 1173L) */ ((
										var_1_1
									) == (
										/* 428L, 51L, 519L, 548L, 1173L) */ ((unsigned short int) (
											var_1_5
										))
									))
								))
							))
						) && (
							/* 434L, 63L, 566L, 572L, 1179L) */ ((
								var_1_10
							) == (
								/* 434L, 63L, 566L, 572L, 1179L) */ ((float) (
									var_1_11
								))
							))
						))
					) && (
						/* 439L, 115L, 619L, 640L, 1184L) */ ((
							/* 440L, 76L, 84L, 620L, 641L, 1185L) */ ((
								var_1_10
							) >= (
								/* 442L, 75L, 86L, 622L, 643L, 1187L) */ ((
									/* 443L, 73L, 87L, 623L, 644L, 1188L) */ ((
										var_1_11
									) / (
										var_1_13
									))
								) / (
									31.9f
								))
							))
						) ? (
							/* 447L, 113L, 627L, 648L, 1192L) */ ((
								/* 448L, 93L, 97L, 628L, 649L, 1193L) */ ((
									var_1_14
								) > (
									var_1_4
								))
							) ? (
								/* 451L, 103L, 631L, 652L, 1196L) */ ((
									var_1_12
								) == (
									/* 451L, 103L, 631L, 652L, 1196L) */ ((float) (
										var_1_11
									))
								))
							) : (
								/* 455L, 111L, 635L, 656L, 1200L) */ ((
									var_1_12
								) == (
									/* 455L, 111L, 635L, 656L, 1200L) */ ((float) (
										3.125f
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 460L, 184L, 737L, 775L, 1205L) */ ((
						/* 461L, 124L, 130L, 738L, 776L, 1206L) */ ((
							/* 462L, 122L, 131L, 739L, 777L, 1207L) */ ((
								var_1_15
							) - (
								var_1_16
							))
						) > (
							var_1_13
						))
					) ? (
						/* 466L, 172L, 743L, 781L, 1211L) */ ((
							/* 467L, 142L, 151L, 744L, 782L, 1212L) */ ((
								/* 468L, 137L, 152L, 745L, 783L, 1213L) */ (min (
									/* 468L, 137L, 152L, 745L, 783L, 1213L) */ (
										var_1_20
									) , (
										var_1_9
									)
								))
							) <= (
								/* 471L, 141L, 155L, 748L, 786L, 1216L) */ (max (
									/* 471L, 141L, 155L, 748L, 786L, 1216L) */ (
										var_1_19
									) , (
										/* 473L, 140L, 157L, 750L, 788L, 1218L) */ (abs (
											var_1_4
										))
									)
								))
							))
						) ? (
							/* 475L, 164L, 752L, 790L, 1220L) */ ((
								var_1_14
							) == (
								/* 475L, 164L, 752L, 790L, 1220L) */ ((unsigned long int) (
									/* 478L, 163L, 755L, 793L, 1223L) */ ((
										var_1_20
									) + (
										var_1_9
									))
								))
							))
						) : (
							/* 481L, 170L, 758L, 796L, 1226L) */ ((
								var_1_14
							) == (
								/* 481L, 170L, 758L, 796L, 1226L) */ ((unsigned long int) (
									/* 484L, 169L, 761L, 799L, 1229L) */ ((
										var_1_5
									) + (
										var_1_9
									))
								))
							))
						))
					) : (
						/* 487L, 182L, 764L, 802L, 1232L) */ ((
							var_1_14
						) == (
							/* 487L, 182L, 764L, 802L, 1232L) */ ((unsigned long int) (
								/* 490L, 181L, 767L, 805L, 1235L) */ ((
									3919152995u
								) - (
									/* 492L, 180L, 769L, 807L, 1237L) */ ((
										/* 493L, 178L, 770L, 808L, 1238L) */ (min (
											/* 493L, 178L, 770L, 808L, 1238L) */ (
												var_1_17
											) , (
												var_1_18
											)
										))
									) - (
										var_1_20
									))
								))
							))
						))
					))
				))
			) && (
				/* 498L, 202L, 833L, 843L, 1243L) */ ((
					/* 499L, 190L, 193L, 834L, 844L, 1244L) */ (! (
						var_1_21
					))
				) ? (
					/* 501L, 200L, 836L, 846L, 1246L) */ ((
						var_1_19
					) == (
						/* 501L, 200L, 836L, 846L, 1246L) */ ((signed long int) (
							/* 504L, 199L, 839L, 849L, 1249L) */ ((
								var_1_5
							) + (
								256
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 510L, 225L, 887L, 903L, 1255L) */ ((
				/* 511L, 209L, 213L, 888L, 904L, 1256L) */ ((
					var_1_9
				) == (
					var_1_5
				))
			) ? (
				/* 514L, 223L, 891L, 907L, 1259L) */ ((
					var_1_20
				) == (
					/* 514L, 223L, 891L, 907L, 1259L) */ ((signed long int) (
						/* 517L, 222L, 894L, 910L, 1262L) */ (max (
							/* 517L, 222L, 894L, 910L, 1262L) */ (
								var_1_4
							) , (
								/* 519L, 221L, 896L, 912L, 1264L) */ ((
									last_1_var_1_20
								) + (
									-8
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
		/* 528L, 242L, 949L, 963L, 1273L) */ ((
			var_1_21
		) == (
			/* 528L, 242L, 949L, 963L, 1273L) */ ((unsigned char) (
				/* 531L, 241L, 952L, 966L, 1276L) */ (! (
					/* 532L, 240L, 953L, 967L, 1277L) */ ((
						var_1_22
					) || (
						/* 534L, 239L, 955L, 969L, 1279L) */ ((
							var_1_23
						) || (
							var_1_24
						))
					))
				))
			))
		))
	))
) && (
	/* 539L, 258L, 986L, 992L, 1284L) */ ((
		var_1_25
	) == (
		/* 539L, 258L, 986L, 992L, 1284L) */ ((unsigned short int) (
			16
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
