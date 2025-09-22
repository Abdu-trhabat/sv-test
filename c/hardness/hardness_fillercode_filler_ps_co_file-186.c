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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Filler_PS_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = -8;
signed short int var_1_2 = 10;
double var_1_3 = 7.7;
unsigned char var_1_4 = 0;
double var_1_5 = 128.125;
double var_1_6 = 3.75;
double var_1_7 = 10.2;
double var_1_8 = 10.022;
signed char var_1_9 = 32;
signed char var_1_10 = -32;
signed short int var_1_11 = 10000;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 16;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned long int var_1_17 = 32;
signed short int var_1_18 = 100;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 3943582589;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 5;
double var_1_23 = 15.5;
unsigned char var_1_24 = 0;
signed long int var_1_25 = 8;
double var_1_27 = 127.5;
double var_1_28 = 2.4;
float var_1_29 = 10000.5;
signed short int var_1_30 = -1;
double var_1_31 = 8.75;
signed long int var_1_32 = -64;
double var_1_33 = 9999999999999.25;
float var_1_34 = 9.375;
signed short int var_1_35 = -128;
signed short int var_1_36 = 32;
signed short int var_1_37 = 128;
signed short int var_1_38 = 1;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 37936;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 245L, 5L) */ var_1_21 = (
		var_1_22
	);


	// From: CodeObject2
	/* 249L, 47L) */ if (/* 250L, 22L, 23L) */ ((/* 251L, 12L, 24L) */ (max (/* 251L, 12L, 24L) */ (var_1_17) , (var_1_22)))) < (/* 254L, 21L, 27L) */ ((/* 255L, 19L, 28L) */ ((var_1_25) & (-1000000))) & (var_1_17))))) {
		/* 259L, 46L) */ var_1_23 = (
			/* 262L, 45L) */ (min (
				/* 262L, 45L) */ (
					8.125
				) , (
					var_1_27
				)
			))
		);
	}


	// From: CodeObject3
	/* 266L, 54L) */ var_1_28 = (
		var_1_27
	);


	// From: CodeObject4
	/* 270L, 81L) */ if (/* 271L, 64L, 65L) */ ((/* 272L, 62L, 66L) */ ((/* 273L, 60L, 67L) */ (abs (var_1_30))) * (var_1_17))) <= (var_1_17))) {
		/* 277L, 80L) */ var_1_29 = (
			var_1_27
		);
	}


	// From: CodeObject5
	/* 282L, 128L) */ if (/* 283L, 91L, 92L) */ ((/* 284L, 87L, 93L) */ (~ (/* 285L, 86L, 94L) */ (- (var_1_17))))) >= (/* 287L, 90L, 96L) */ ((5) % (var_1_32))))) {
		/* 290L, 126L) */ if (/* 291L, 108L, 109L) */ ((var_1_30) >= (var_1_17))) {
			/* 294L, 119L) */ var_1_31 = (
				/* 297L, 118L) */ (abs (
					var_1_27
				))
			);
		} else {
			/* 299L, 125L) */ var_1_31 = (
				/* 302L, 124L) */ (max (
					/* 302L, 124L) */ (
						var_1_27
					) , (
						var_1_33
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 305L, 149L) */ if (/* 306L, 136L, 137L) */ ((var_1_32) >= (var_1_25))) {
		/* 309L, 148L) */ var_1_34 = (
			/* 312L, 147L) */ (min (
				/* 312L, 147L) */ (
					var_1_27
				) , (
					var_1_33
				)
			))
		);
	}


	// From: CodeObject7
	/* 315L, 215L) */ if (/* 316L, 155L, 156L) */ ((var_1_33) < (var_1_3))) {
		/* 319L, 204L) */ if (/* 320L, 171L, 172L) */ ((/* 321L, 167L, 173L) */ ((var_1_32) | (/* 323L, 166L, 175L) */ ((var_1_22) * (50u))))) > (/* 326L, 170L, 178L) */ (abs (/* 327L, 169L, 179L) */ (abs (var_1_17))))))) {
			/* 329L, 197L) */ var_1_35 = (
				/* 332L, 196L) */ ((
					var_1_36
				) - (
					/* 334L, 195L) */ ((
						var_1_37
					) + (
						var_1_38
					))
				))
			);
		} else {
			/* 337L, 203L) */ var_1_35 = (
				/* 340L, 202L) */ (min (
					/* 340L, 202L) */ (
						var_1_36
					) , (
						-8
					)
				))
			);
		}
	} else {
		/* 343L, 213L) */ if (var_1_24) {
			/* 345L, 212L) */ var_1_35 = (
				var_1_36
			);
		}
	}


	// From: CodeObject8
	/* 367L, 238L) */ if (/* 368L, 221L, 222L) */ ((var_1_31) == (var_1_28))) {
		/* 371L, 237L) */ var_1_39 = (
			/* 374L, 236L) */ (min (
				/* 374L, 236L) */ (
					var_1_22
				) , (
					/* 376L, 235L) */ ((
						var_1_40
					) - (
						/* 378L, 234L) */ (min (
							/* 378L, 234L) */ (
								var_1_37
							) , (
								var_1_38
							)
						))
					))
				)
			))
		);
	}


	// From: Req1Batch186Filler_PS_CO
	/* 866L, 5L, 298L, 304L) */ var_1_1 = (
		var_1_2
	);


	// From: Req2Batch186Filler_PS_CO
	unsigned char stepLocal_0 = /* 872L, 17L, 21L, 324L, 347L) */ ((var_1_1) != (/* 874L, 16L, 23L, 326L, 349L) */ (min (/* 874L, 16L, 23L, 326L, 349L) */ (-10) , (var_1_2)))));
	/* 894L, 47L, 321L, 344L) */ if (/* 879L, 18L, 19L, 322L, 345L) */ ((var_1_4) || (stepLocal_0))) {
		/* 885L, 38L, 329L, 352L) */ var_1_3 = (
			/* 884L, 37L, 332L, 355L) */ (min (
				/* 884L, 37L, 332L, 355L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	} else {
		/* 893L, 46L, 335L, 358L) */ var_1_3 = (
			/* 892L, 45L, 338L, 361L) */ ((
				var_1_7
			) + (
				/* 891L, 44L, 340L, 363L) */ ((
					128.6
				) + (
					var_1_8
				))
			))
		);
	}


	// From: Req3Batch186Filler_PS_CO
	/* 899L, 84L, 414L, 430L) */ if (/* 900L, 61L, 62L, 415L, 431L) */ ((/* 901L, 57L, 63L, 416L, 432L) */ ((var_1_7) > (/* 903L, 56L, 65L, 418L, 434L) */ (max (/* 903L, 56L, 65L, 418L, 434L) */ (9.6) , (var_1_6)))))) || (/* 906L, 60L, 68L, 421L, 437L) */ ((var_1_5) < (var_1_3))))) {
		/* 909L, 83L, 424L, 440L) */ var_1_9 = (
			var_1_10
		);
	}


	// From: Req5Batch186Filler_PS_CO
	signed short int stepLocal_1 = var_1_2;
	/* 955L, 162L, 541L, 566L) */ if (var_1_4) {
		/* 941L, 140L, 543L, 568L) */ var_1_12 = (
			/* 940L, 139L, 546L, 571L) */ (min (
				/* 940L, 139L, 546L, 571L) */ (
					var_1_13
				) , (
					/* 939L, 138L, 548L, 573L) */ (max (
						/* 939L, 138L, 548L, 573L) */ (
							var_1_14
						) , (
							var_1_15
						)
					))
				)
			))
		);
	} else {
		/* 954L, 160L, 551L, 576L) */ if (/* 943L, 143L, 144L, 552L, 577L) */ ((var_1_14) != (stepLocal_1))) {
			/* 949L, 155L, 555L, 580L) */ var_1_12 = (
				/* 948L, 154L, 558L, 583L) */ ((
					var_1_16
				) - (
					2
				))
			);
		} else {
			/* 953L, 159L, 561L, 586L) */ var_1_12 = (
				4
			);
		}
	}


	// From: Req6Batch186Filler_PS_CO
	unsigned char stepLocal_2 = var_1_12;
	/* 968L, 186L, 641L, 650L) */ if (/* 963L, 175L, 176L, 642L, 651L) */ ((var_1_14) >= (stepLocal_2))) {
		/* 967L, 185L, 645L, 654L) */ var_1_17 = (
			var_1_13
		);
	}


	// From: Req7Batch186Filler_PS_CO
	unsigned long int stepLocal_5 = /* 989L, 244L, 252L, 697L, 744L) */ (min (/* 989L, 244L, 252L, 697L, 744L) */ (/* 990L, 242L, 253L, 698L, 745L) */ ((var_1_15) + (var_1_17))) , (var_1_9)));
	unsigned long int stepLocal_4 = /* 980L, 219L, 223L, 687L, 734L) */ ((/* 981L, 215L, 224L, 688L, 735L) */ ((var_1_20) - (var_1_12))) / (/* 984L, 218L, 227L, 691L, 738L) */ ((3761303906u) - (var_1_16))));
	unsigned char stepLocal_3 = /* 973L, 197L, 201L, 680L, 727L) */ ((/* 974L, 195L, 202L, 681L, 728L) */ ((var_1_10) > (var_1_17))) && (var_1_19));
	/* 1023L, 293L, 677L, 724L) */ if (/* 996L, 198L, 199L, 678L, 725L) */ ((var_1_4) && (stepLocal_3))) {
		/* 1018L, 287L, 685L, 732L) */ if (/* 998L, 221L, 222L, 686L, 733L) */ ((stepLocal_4) == (var_1_13))) {
			/* 1013L, 281L, 695L, 742L) */ if (/* 1004L, 250L, 251L, 696L, 743L) */ ((stepLocal_5) >= (/* 1003L, 249L, 257L, 702L, 749L) */ ((/* 1001L, 247L, 258L, 703L, 750L) */ ((var_1_12) ^ (var_1_17))) * (var_1_14))))) {
				/* 1008L, 276L, 707L, 754L) */ var_1_18 = (
					var_1_12
				);
			} else {
				/* 1012L, 280L, 711L, 758L) */ var_1_18 = (
					var_1_2
				);
			}
		} else {
			/* 1017L, 286L, 715L, 762L) */ var_1_18 = (
				var_1_16
			);
		}
	} else {
		/* 1022L, 292L, 719L, 766L) */ var_1_18 = (
			var_1_2
		);
	}


	// From: Req4Batch186Filler_PS_CO
	/* 915L, 122L, 478L, 494L) */ if (/* 916L, 96L, 97L, 479L, 495L) */ ((/* 917L, 94L, 98L, 480L, 496L) */ ((var_1_17) & (var_1_2))) <= (var_1_17))) {
		/* 921L, 120L, 484L, 500L) */ if (/* 922L, 109L, 110L, 485L, 501L) */ ((var_1_17) <= (var_1_2))) {
			/* 925L, 119L, 488L, 504L) */ var_1_11 = (
				var_1_2
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32767);
	assume_abort_if_not(var_1_2 <= 32766);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	assume_abort_if_not(var_1_32 != 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 388L, 18L, 26L, 368L, 391L, 1036L) */ ((var_1_4) || (/* 390L, 17L, 28L, 370L, 393L, 1038L) */ ((var_1_1) != (/* 392L, 16L, 30L, 372L, 395L, 1040L) */ (min (/* 392L, 16L, 30L, 372L, 395L, 1040L) */ (-10) , (var_1_2)))))))) {
	} else {
	}
	if (/* 412L, 61L, 71L, 447L, 463L, 1060L) */ ((/* 413L, 57L, 72L, 448L, 464L, 1061L) */ ((var_1_7) > (/* 415L, 56L, 74L, 450L, 466L, 1063L) */ (max (/* 415L, 56L, 74L, 450L, 466L, 1063L) */ (9.6) , (var_1_6)))))) || (/* 418L, 60L, 77L, 453L, 469L, 1066L) */ ((var_1_5) < (var_1_3))))) {
	}
	if (/* 428L, 96L, 102L, 511L, 527L, 1076L) */ ((/* 429L, 94L, 103L, 512L, 528L, 1077L) */ ((var_1_17) & (var_1_2))) <= (var_1_17))) {
		if (/* 434L, 109L, 113L, 517L, 533L, 1082L) */ ((var_1_17) <= (var_1_2))) {
		}
	}
	if (var_1_4) {
	} else {
		if (/* 453L, 143L, 147L, 602L, 627L, 1101L) */ ((var_1_14) != (var_1_2))) {
		} else {
		}
	}
	if (/* 468L, 175L, 179L, 660L, 669L, 1116L) */ ((var_1_14) >= (var_1_12))) {
	}
	if (/* 477L, 198L, 206L, 772L, 819L, 1125L) */ ((var_1_4) && (/* 479L, 197L, 208L, 774L, 821L, 1127L) */ ((/* 480L, 195L, 209L, 775L, 822L, 1128L) */ ((var_1_10) > (var_1_17))) && (var_1_19))))) {
		if (/* 485L, 221L, 231L, 780L, 827L, 1133L) */ ((/* 486L, 219L, 232L, 781L, 828L, 1134L) */ ((/* 487L, 215L, 233L, 782L, 829L, 1135L) */ ((var_1_20) - (var_1_12))) / (/* 490L, 218L, 236L, 785L, 832L, 1138L) */ ((3761303906u) - (var_1_16))))) == (var_1_13))) {
			if (/* 495L, 250L, 262L, 790L, 837L, 1143L) */ ((/* 496L, 244L, 263L, 791L, 838L, 1144L) */ (min (/* 496L, 244L, 263L, 791L, 838L, 1144L) */ (/* 497L, 242L, 264L, 792L, 839L, 1145L) */ ((var_1_15) + (var_1_17))) , (var_1_9)))) >= (/* 501L, 249L, 268L, 796L, 843L, 1149L) */ ((/* 502L, 247L, 269L, 797L, 844L, 1150L) */ ((var_1_12) ^ (var_1_17))) * (var_1_14))))) {
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 528L) */ ((
	/* 527L) */ ((
		/* 526L) */ ((
			/* 525L) */ ((
				/* 524L) */ ((
					/* 523L) */ ((
						/* 382L, 5L, 310L, 316L, 1030L) */ ((
							var_1_1
						) == (
							/* 382L, 5L, 310L, 316L, 1030L) */ ((signed short int) (
								var_1_2
							))
						))
					) && (
						/* 387L, 48L, 367L, 390L, 1035L) */ ((
							/* 388L, 18L, 26L, 368L, 391L, 1036L) */ ((
								var_1_4
							) || (
								/* 390L, 17L, 28L, 370L, 393L, 1038L) */ ((
									var_1_1
								) != (
									/* 392L, 16L, 30L, 372L, 395L, 1040L) */ (min (
										/* 392L, 16L, 30L, 372L, 395L, 1040L) */ (
											-10
										) , (
											var_1_2
										)
									))
								))
							))
						) ? (
							/* 395L, 38L, 375L, 398L, 1043L) */ ((
								var_1_3
							) == (
								/* 395L, 38L, 375L, 398L, 1043L) */ ((double) (
									/* 398L, 37L, 378L, 401L, 1046L) */ (min (
										/* 398L, 37L, 378L, 401L, 1046L) */ (
											var_1_5
										) , (
											var_1_6
										)
									))
								))
							))
						) : (
							/* 401L, 46L, 381L, 404L, 1049L) */ ((
								var_1_3
							) == (
								/* 401L, 46L, 381L, 404L, 1049L) */ ((double) (
									/* 404L, 45L, 384L, 407L, 1052L) */ ((
										var_1_7
									) + (
										/* 406L, 44L, 386L, 409L, 1054L) */ ((
											128.6
										) + (
											var_1_8
										))
									))
								))
							))
						))
					))
				) && (
					/* 411L, 85L, 446L, 462L, 1059L) */ ((
						/* 412L, 61L, 71L, 447L, 463L, 1060L) */ ((
							/* 413L, 57L, 72L, 448L, 464L, 1061L) */ ((
								var_1_7
							) > (
								/* 415L, 56L, 74L, 450L, 466L, 1063L) */ (max (
									/* 415L, 56L, 74L, 450L, 466L, 1063L) */ (
										9.6
									) , (
										var_1_6
									)
								))
							))
						) || (
							/* 418L, 60L, 77L, 453L, 469L, 1066L) */ ((
								var_1_5
							) < (
								var_1_3
							))
						))
					) ? (
						/* 421L, 83L, 456L, 472L, 1069L) */ ((
							var_1_9
						) == (
							/* 421L, 83L, 456L, 472L, 1069L) */ ((signed char) (
								var_1_10
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 427L, 123L, 510L, 526L, 1075L) */ ((
					/* 428L, 96L, 102L, 511L, 527L, 1076L) */ ((
						/* 429L, 94L, 103L, 512L, 528L, 1077L) */ ((
							var_1_17
						) & (
							var_1_2
						))
					) <= (
						var_1_17
					))
				) ? (
					/* 433L, 121L, 516L, 532L, 1081L) */ ((
						/* 434L, 109L, 113L, 517L, 533L, 1082L) */ ((
							var_1_17
						) <= (
							var_1_2
						))
					) ? (
						/* 437L, 119L, 520L, 536L, 1085L) */ ((
							var_1_11
						) == (
							/* 437L, 119L, 520L, 536L, 1085L) */ ((signed short int) (
								var_1_2
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
			/* 442L, 163L, 591L, 616L, 1090L) */ ((
				var_1_4
			) ? (
				/* 444L, 140L, 593L, 618L, 1092L) */ ((
					var_1_12
				) == (
					/* 444L, 140L, 593L, 618L, 1092L) */ ((unsigned char) (
						/* 447L, 139L, 596L, 621L, 1095L) */ (min (
							/* 447L, 139L, 596L, 621L, 1095L) */ (
								var_1_13
							) , (
								/* 449L, 138L, 598L, 623L, 1097L) */ (max (
									/* 449L, 138L, 598L, 623L, 1097L) */ (
										var_1_14
									) , (
										var_1_15
									)
								))
							)
						))
					))
				))
			) : (
				/* 452L, 161L, 601L, 626L, 1100L) */ ((
					/* 453L, 143L, 147L, 602L, 627L, 1101L) */ ((
						var_1_14
					) != (
						var_1_2
					))
				) ? (
					/* 456L, 155L, 605L, 630L, 1104L) */ ((
						var_1_12
					) == (
						/* 456L, 155L, 605L, 630L, 1104L) */ ((unsigned char) (
							/* 459L, 154L, 608L, 633L, 1107L) */ ((
								var_1_16
							) - (
								2
							))
						))
					))
				) : (
					/* 462L, 159L, 611L, 636L, 1110L) */ ((
						var_1_12
					) == (
						/* 462L, 159L, 611L, 636L, 1110L) */ ((unsigned char) (
							4
						))
					))
				))
			))
		))
	) && (
		/* 467L, 187L, 659L, 668L, 1115L) */ ((
			/* 468L, 175L, 179L, 660L, 669L, 1116L) */ ((
				var_1_14
			) >= (
				var_1_12
			))
		) ? (
			/* 471L, 185L, 663L, 672L, 1119L) */ ((
				var_1_17
			) == (
				/* 471L, 185L, 663L, 672L, 1119L) */ ((unsigned long int) (
					var_1_13
				))
			))
		) : (
			1
		))
	))
) && (
	/* 476L, 294L, 771L, 818L, 1124L) */ ((
		/* 477L, 198L, 206L, 772L, 819L, 1125L) */ ((
			var_1_4
		) && (
			/* 479L, 197L, 208L, 774L, 821L, 1127L) */ ((
				/* 480L, 195L, 209L, 775L, 822L, 1128L) */ ((
					var_1_10
				) > (
					var_1_17
				))
			) && (
				var_1_19
			))
		))
	) ? (
		/* 484L, 288L, 779L, 826L, 1132L) */ ((
			/* 485L, 221L, 231L, 780L, 827L, 1133L) */ ((
				/* 486L, 219L, 232L, 781L, 828L, 1134L) */ ((
					/* 487L, 215L, 233L, 782L, 829L, 1135L) */ ((
						var_1_20
					) - (
						var_1_12
					))
				) / (
					/* 490L, 218L, 236L, 785L, 832L, 1138L) */ ((
						3761303906u
					) - (
						var_1_16
					))
				))
			) == (
				var_1_13
			))
		) ? (
			/* 494L, 282L, 789L, 836L, 1142L) */ ((
				/* 495L, 250L, 262L, 790L, 837L, 1143L) */ ((
					/* 496L, 244L, 263L, 791L, 838L, 1144L) */ (min (
						/* 496L, 244L, 263L, 791L, 838L, 1144L) */ (
							/* 497L, 242L, 264L, 792L, 839L, 1145L) */ ((
								var_1_15
							) + (
								var_1_17
							))
						) , (
							var_1_9
						)
					))
				) >= (
					/* 501L, 249L, 268L, 796L, 843L, 1149L) */ ((
						/* 502L, 247L, 269L, 797L, 844L, 1150L) */ ((
							var_1_12
						) ^ (
							var_1_17
						))
					) * (
						var_1_14
					))
				))
			) ? (
				/* 506L, 276L, 801L, 848L, 1154L) */ ((
					var_1_18
				) == (
					/* 506L, 276L, 801L, 848L, 1154L) */ ((signed short int) (
						var_1_12
					))
				))
			) : (
				/* 510L, 280L, 805L, 852L, 1158L) */ ((
					var_1_18
				) == (
					/* 510L, 280L, 805L, 852L, 1158L) */ ((signed short int) (
						var_1_2
					))
				))
			))
		) : (
			/* 514L, 286L, 809L, 856L, 1162L) */ ((
				var_1_18
			) == (
				/* 514L, 286L, 809L, 856L, 1162L) */ ((signed short int) (
					var_1_16
				))
			))
		))
	) : (
		/* 518L, 292L, 813L, 860L, 1166L) */ ((
			var_1_18
		) == (
			/* 518L, 292L, 813L, 860L, 1166L) */ ((signed short int) (
				var_1_2
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
