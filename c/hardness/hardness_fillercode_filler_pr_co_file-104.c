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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
unsigned char var_1_2 = 1;
unsigned short int var_1_3 = 1;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 56288;
float var_1_7 = 32.75;
double var_1_8 = 1000000000.5;
double var_1_9 = 8.8;
double var_1_10 = 500.34;
double var_1_11 = 99.25;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
float var_1_14 = 49.8;
float var_1_15 = 8.8;
float var_1_16 = 5.25;
float var_1_17 = 2.875;
unsigned short int var_1_18 = 32;
float var_1_19 = 63.125;
signed char var_1_20 = -1;
signed char var_1_21 = 64;
signed long int var_1_22 = 256;
signed long int var_1_23 = 64;
unsigned long int var_1_24 = 100;
signed long int var_1_25 = 4;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 10;
unsigned char var_1_33 = 0;
signed char var_1_34 = -8;
signed char var_1_35 = -64;
signed char var_1_36 = -50;
signed char var_1_37 = -2;
signed char var_1_38 = -25;
signed char var_1_39 = -1;
unsigned long int var_1_40 = 8;
unsigned long int var_1_41 = 5;
unsigned char var_1_42 = 1;

// Calibration values

// Last'ed variables
float last_1_var_1_19 = 63.125;
unsigned long int last_1_var_1_24 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch104Filler_PR_CO
	signed long int stepLocal_2 = /* 5L, 141L, 145L, 627L, 654L, 885L, 1022L) */ ((/* 3L, 139L, 146L, 628L, 655L, 883L, 1023L) */ ((var_1_4) + (-10))) * (var_1_20));
	/* 30L, 183L, 625L, 652L, 908L, 1050L) */ if (/* 10L, 143L, 144L, 626L, 653L, 888L, 1030L) */ ((stepLocal_2) == (last_1_var_1_24))) {
		/* 25L, 177L, 633L, 660L, 903L, 1045L) */ if (/* 14L, 160L, 161L, 634L, 661L, 892L, 1034L) */ ((var_1_17) > (last_1_var_1_19))) {
			/* 20L, 172L, 637L, 664L, 898L, 1040L) */ var_1_22 = (
				/* 19L, 171L, 640L, 667L, 897L, 1039L) */ ((
					var_1_4
				) + (
					var_1_3
				))
			);
		} else {
			/* 24L, 176L, 643L, 670L, 902L, 1044L) */ var_1_22 = (
				-10
			);
		}
	} else {
		/* 29L, 182L, 647L, 674L, 907L, 1049L) */ var_1_22 = (
			var_1_23
		);
	}


	// From: CodeObject6
	/* 460L, 352L) */ if (/* 461L, 278L, 279L) */ ((var_1_22) > (/* 463L, 277L, 281L) */ ((var_1_38) ^ (var_1_35))))) {
		/* 466L, 350L) */ if (/* 467L, 297L, 298L) */ ((1000) > (var_1_24))) {
			/* 470L, 329L) */ if (/* 471L, 310L, 311L) */ ((/* 472L, 308L, 312L) */ (min (/* 472L, 308L, 312L) */ (var_1_29) , (/* 474L, 307L, 314L) */ ((var_1_24) + (var_1_30)))))) >= (var_1_22))) {
				/* 478L, 328L) */ var_1_42 = (
					var_1_33
				);
			}
		} else {
			/* 482L, 348L) */ if (/* 483L, 333L, 334L) */ ((var_1_22) < (var_1_24))) {
				/* 486L, 343L) */ var_1_42 = (
					var_1_33
				);
			} else {
				/* 490L, 347L) */ var_1_42 = (
					0
				);
			}
		}
	}


	// From: Req6Batch104Filler_PR_CO
	signed long int stepLocal_3 = var_1_22;
	/* 1067L, 214L, 733L, 746L) */ if (/* 1062L, 195L, 196L, 734L, 747L) */ ((stepLocal_3) >= (/* 1061L, 194L, 198L, 736L, 749L) */ ((/* 1059L, 192L, 199L, 737L, 750L) */ ((var_1_25) + (32))) - (var_1_3))))) {
		/* 1066L, 213L, 741L, 754L) */ var_1_24 = (
			var_1_5
		);
	}


	// From: Req2Batch104Filler_PR_CO
	unsigned char stepLocal_0 = var_1_13;
	/* 989L, 81L, 397L, 430L) */ if (/* 965L, 31L, 32L, 398L, 431L) */ ((var_1_8) > (/* 964L, 30L, 34L, 400L, 433L) */ ((/* 962L, 28L, 35L, 401L, 434L) */ (max (/* 962L, 28L, 35L, 401L, 434L) */ (var_1_9) , (var_1_10)))) + (var_1_11))))) {
		/* 980L, 71L, 405L, 438L) */ if (/* 969L, 50L, 51L, 406L, 439L) */ ((/* 968L, 48L, 52L, 407L, 440L) */ ((var_1_2) && (var_1_12))) && (stepLocal_0))) {
			/* 975L, 66L, 411L, 444L) */ var_1_7 = (
				/* 974L, 65L, 414L, 447L) */ ((
					var_1_14
				) + (
					var_1_15
				))
			);
		} else {
			/* 979L, 70L, 417L, 450L) */ var_1_7 = (
				7.5f
			);
		}
	} else {
		/* 988L, 80L, 421L, 454L) */ var_1_7 = (
			/* 987L, 79L, 424L, 457L) */ ((
				/* 985L, 77L, 425L, 458L) */ (max (
					/* 985L, 77L, 425L, 458L) */ (
						var_1_16
					) , (
						var_1_17
					)
				))
			) - (
				256.4f
			))
		);
	}


	// From: Req7Batch104Filler_PR_CO
	signed long int stepLocal_4 = /* 1072L, 223L, 227L, 788L, 812L) */ (min (/* 1072L, 223L, 227L, 788L, 812L) */ (var_1_5) , (var_1_25)));
	/* 1095L, 259L, 785L, 809L) */ if (/* 1077L, 224L, 225L, 786L, 810L) */ ((var_1_4) > (stepLocal_4))) {
		/* 1090L, 253L, 791L, 815L) */ if (/* 1080L, 237L, 238L, 792L, 816L) */ ((var_1_10) >= (var_1_9))) {
			/* 1085L, 248L, 795L, 819L) */ var_1_26 = (
				/* 1084L, 247L, 798L, 822L) */ (! (
					var_1_27
				))
			);
		} else {
			/* 1089L, 252L, 800L, 824L) */ var_1_26 = (
				var_1_27
			);
		}
	} else {
		/* 1094L, 258L, 804L, 828L) */ var_1_26 = (
			0
		);
	}


	// From: Req1Batch104Filler_PR_CO
	/* 939L, 19L, 263L, 280L) */ if (var_1_26) {
		/* 941L, 12L, 265L, 282L) */ var_1_1 = (
			/* 944L, 11L, 268L, 285L) */ ((
				/* 945L, 9L, 269L, 286L) */ (max (
					/* 945L, 9L, 269L, 286L) */ (
						var_1_3
					) , (
						var_1_4
					)
				))
			) + (
				var_1_5
			))
		);
	} else {
		/* 949L, 18L, 273L, 290L) */ var_1_1 = (
			/* 952L, 17L, 276L, 293L) */ ((
				var_1_6
			) - (
				var_1_3
			))
		);
	}


	// From: CodeObject1
	/* 368L, 89L) */ if (/* 369L, 70L, 71L) */ ((/* 370L, 66L, 72L) */ ((var_1_29) - (var_1_30))) < (/* 373L, 69L, 75L) */ ((var_1_22) | (var_1_24))))) {
		/* 376L, 88L) */ var_1_28 = (
			var_1_33
		);
	}


	// From: CodeObject2
	/* 380L, 185L) */ if (/* 381L, 103L, 104L) */ ((/* 382L, 101L, 105L) */ ((128) * (/* 384L, 100L, 107L) */ ((var_1_30) | (-10))))) <= (5))) {
		/* 388L, 122L) */ var_1_34 = (
			/* 391L, 121L) */ (abs (
				var_1_35
			))
		);
	} else {
		/* 393L, 183L) */ if (/* 394L, 129L, 130L) */ ((/* 395L, 127L, 131L) */ (min (/* 395L, 127L, 131L) */ (/* 396L, 125L, 132L) */ ((var_1_29) ^ (-5))) , (var_1_22)))) <= (var_1_30))) {
			/* 401L, 181L) */ if (/* 402L, 146L, 147L) */ ((var_1_22) >= (-128))) {
				/* 405L, 156L) */ var_1_34 = (
					var_1_35
				);
			} else {
				/* 409L, 180L) */ var_1_34 = (
					-1
				);
			}
		}
	}


	// From: CodeObject4
	/* 424L, 230L) */ if (/* 425L, 210L, 211L) */ ((/* 426L, 206L, 212L) */ ((var_1_37) * (var_1_30))) >= (/* 429L, 209L, 215L) */ ((8) - (var_1_29))))) {
		/* 432L, 229L) */ var_1_40 = (
			/* 435L, 228L) */ (abs (
				var_1_29
			))
		);
	}


	// From: Req3Batch104Filler_PR_CO
	/* 993L, 99L, 529L, 538L) */ if (var_1_26) {
		/* 995L, 97L, 531L, 540L) */ if (var_1_26) {
			/* 997L, 96L, 533L, 542L) */ var_1_18 = (
				var_1_3
			);
		}
	}


	// From: CodeObject5
	/* 437L, 270L) */ if (/* 438L, 237L, 238L) */ ((var_1_38) != (var_1_24))) {
		/* 441L, 268L) */ if (/* 442L, 249L, 250L) */ ((var_1_38) < (/* 444L, 248L, 252L) */ ((/* 445L, 246L, 253L) */ (abs (var_1_35))) | (var_1_22))))) {
			/* 448L, 267L) */ var_1_41 = (
				/* 451L, 266L) */ (min (
					/* 451L, 266L) */ (
						0u
					) , (
						var_1_30
					)
				))
			);
		}
	}


	// From: Req4Batch104Filler_PR_CO
	signed long int stepLocal_1 = /* 1003L, 110L, 114L, 569L, 584L) */ ((var_1_20) - (var_1_21));
	/* 1017L, 131L, 565L, 580L) */ if (var_1_26) {
		/* 1016L, 129L, 567L, 582L) */ if (/* 1009L, 112L, 113L, 568L, 583L) */ ((stepLocal_1) > (var_1_4))) {
			/* 1015L, 128L, 573L, 588L) */ var_1_19 = (
				/* 1014L, 127L, 576L, 591L) */ (max (
					/* 1014L, 127L, 576L, 591L) */ (
						var_1_16
					) , (
						var_1_17
					)
				))
			);
		}
	}


	// From: CodeObject3
	/* 415L, 197L) */ var_1_36 = (
		/* 418L, 196L) */ (abs (
			/* 419L, 195L) */ ((
				/* 420L, 193L) */ (max (
					/* 420L, 193L) */ (
						var_1_37
					) , (
						var_1_38
					)
				))
			) + (
				var_1_39
			))
		))
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32767);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483647);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1073741824);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 255);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -126);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
}



void updateLastVariables(void) {
	last_1_var_1_19 = var_1_19;
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (var_1_26) {
	} else {
	}
	if (/* 512L, 31L, 39L, 464L, 497L, 1117L) */ ((var_1_8) > (/* 514L, 30L, 41L, 466L, 499L, 1119L) */ ((/* 515L, 28L, 42L, 467L, 500L, 1120L) */ (max (/* 515L, 28L, 42L, 467L, 500L, 1120L) */ (var_1_9) , (var_1_10)))) + (var_1_11))))) {
		if (/* 520L, 50L, 56L, 472L, 505L, 1125L) */ ((/* 521L, 48L, 57L, 473L, 506L, 1126L) */ ((var_1_2) && (var_1_12))) && (var_1_13))) {
		} else {
		}
	} else {
	}
	if (var_1_26) {
		if (var_1_26) {
		}
	}
	if (var_1_26) {
		if (/* 556L, 112L, 118L, 598L, 613L, 1161L) */ ((/* 557L, 110L, 119L, 599L, 614L, 1162L) */ ((var_1_20) - (var_1_21))) > (var_1_4))) {
		}
	}
	if (/* 569L, 143L, 151L, 680L, 707L, 917L, 1174L, 40L) */ ((/* 570L, 141L, 152L, 681L, 708L, 914L, 1175L, 37L) */ ((/* 571L, 139L, 153L, 682L, 709L, 912L, 1176L, 35L) */ ((var_1_4) + (-10))) * (var_1_20))) == (last_1_var_1_24))) {
		if (/* 578L, 160L, 164L, 688L, 715L, 921L, 1183L, 44L) */ ((var_1_17) > (last_1_var_1_19))) {
		} else {
		}
	} else {
	}
	if (/* 598L, 195L, 203L, 760L, 773L, 1203L) */ ((var_1_22) >= (/* 600L, 194L, 205L, 762L, 775L, 1205L) */ ((/* 601L, 192L, 206L, 763L, 776L, 1206L) */ ((var_1_25) + (32))) - (var_1_3))))) {
	}
	if (/* 611L, 224L, 230L, 834L, 858L, 1216L) */ ((var_1_4) > (/* 613L, 223L, 232L, 836L, 860L, 1218L) */ (min (/* 613L, 223L, 232L, 836L, 860L, 1218L) */ (var_1_5) , (var_1_25)))))) {
		if (/* 617L, 237L, 241L, 840L, 864L, 1222L) */ ((var_1_10) >= (var_1_9))) {
		} else {
		}
	} else {
	}
	return /* 639L) */ ((
	/* 638L) */ ((
		/* 637L) */ ((
			/* 636L) */ ((
				/* 635L) */ ((
					/* 634L) */ ((
						/* 494L, 20L, 297L, 314L, 1099L) */ ((
							var_1_26
						) ? (
							/* 496L, 12L, 299L, 316L, 1101L) */ ((
								var_1_1
							) == (
								/* 496L, 12L, 299L, 316L, 1101L) */ ((unsigned short int) (
									/* 499L, 11L, 302L, 319L, 1104L) */ ((
										/* 500L, 9L, 303L, 320L, 1105L) */ (max (
											/* 500L, 9L, 303L, 320L, 1105L) */ (
												var_1_3
											) , (
												var_1_4
											)
										))
									) + (
										var_1_5
									))
								))
							))
						) : (
							/* 504L, 18L, 307L, 324L, 1109L) */ ((
								var_1_1
							) == (
								/* 504L, 18L, 307L, 324L, 1109L) */ ((unsigned short int) (
									/* 507L, 17L, 310L, 327L, 1112L) */ ((
										var_1_6
									) - (
										var_1_3
									))
								))
							))
						))
					) && (
						/* 511L, 82L, 463L, 496L, 1116L) */ ((
							/* 512L, 31L, 39L, 464L, 497L, 1117L) */ ((
								var_1_8
							) > (
								/* 514L, 30L, 41L, 466L, 499L, 1119L) */ ((
									/* 515L, 28L, 42L, 467L, 500L, 1120L) */ (max (
										/* 515L, 28L, 42L, 467L, 500L, 1120L) */ (
											var_1_9
										) , (
											var_1_10
										)
									))
								) + (
									var_1_11
								))
							))
						) ? (
							/* 519L, 72L, 471L, 504L, 1124L) */ ((
								/* 520L, 50L, 56L, 472L, 505L, 1125L) */ ((
									/* 521L, 48L, 57L, 473L, 506L, 1126L) */ ((
										var_1_2
									) && (
										var_1_12
									))
								) && (
									var_1_13
								))
							) ? (
								/* 525L, 66L, 477L, 510L, 1130L) */ ((
									var_1_7
								) == (
									/* 525L, 66L, 477L, 510L, 1130L) */ ((float) (
										/* 528L, 65L, 480L, 513L, 1133L) */ ((
											var_1_14
										) + (
											var_1_15
										))
									))
								))
							) : (
								/* 531L, 70L, 483L, 516L, 1136L) */ ((
									var_1_7
								) == (
									/* 531L, 70L, 483L, 516L, 1136L) */ ((float) (
										7.5f
									))
								))
							))
						) : (
							/* 535L, 80L, 487L, 520L, 1140L) */ ((
								var_1_7
							) == (
								/* 535L, 80L, 487L, 520L, 1140L) */ ((float) (
									/* 538L, 79L, 490L, 523L, 1143L) */ ((
										/* 539L, 77L, 491L, 524L, 1144L) */ (max (
											/* 539L, 77L, 491L, 524L, 1144L) */ (
												var_1_16
											) , (
												var_1_17
											)
										))
									) - (
										256.4f
									))
								))
							))
						))
					))
				) && (
					/* 544L, 100L, 547L, 556L, 1149L) */ ((
						var_1_26
					) ? (
						/* 546L, 98L, 549L, 558L, 1151L) */ ((
							var_1_26
						) ? (
							/* 548L, 96L, 551L, 560L, 1153L) */ ((
								var_1_18
							) == (
								/* 548L, 96L, 551L, 560L, 1153L) */ ((unsigned short int) (
									var_1_3
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
				/* 553L, 132L, 595L, 610L, 1158L) */ ((
					var_1_26
				) ? (
					/* 555L, 130L, 597L, 612L, 1160L) */ ((
						/* 556L, 112L, 118L, 598L, 613L, 1161L) */ ((
							/* 557L, 110L, 119L, 599L, 614L, 1162L) */ ((
								var_1_20
							) - (
								var_1_21
							))
						) > (
							var_1_4
						))
					) ? (
						/* 561L, 128L, 603L, 618L, 1166L) */ ((
							var_1_19
						) == (
							/* 561L, 128L, 603L, 618L, 1166L) */ ((float) (
								/* 564L, 127L, 606L, 621L, 1169L) */ (max (
									/* 564L, 127L, 606L, 621L, 1169L) */ (
										var_1_16
									) , (
										var_1_17
									)
								))
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
			/* 568L, 184L, 679L, 706L, 937L, 1173L, 60L) */ ((
				/* 569L, 143L, 151L, 680L, 707L, 917L, 1174L, 40L) */ ((
					/* 570L, 141L, 152L, 681L, 708L, 914L, 1175L, 37L) */ ((
						/* 571L, 139L, 153L, 682L, 709L, 912L, 1176L, 35L) */ ((
							var_1_4
						) + (
							-10
						))
					) * (
						var_1_20
					))
				) == (
					last_1_var_1_24
				))
			) ? (
				/* 577L, 178L, 687L, 714L, 932L, 1182L, 55L) */ ((
					/* 578L, 160L, 164L, 688L, 715L, 921L, 1183L, 44L) */ ((
						var_1_17
					) > (
						last_1_var_1_19
					))
				) ? (
					/* 582L, 172L, 691L, 718L, 927L, 1187L, 50L) */ ((
						var_1_22
					) == (
						/* 582L, 172L, 691L, 718L, 927L, 1187L, 50L) */ ((signed long int) (
							/* 585L, 171L, 694L, 721L, 926L, 1190L, 49L) */ ((
								var_1_4
							) + (
								var_1_3
							))
						))
					))
				) : (
					/* 588L, 176L, 697L, 724L, 931L, 1193L, 54L) */ ((
						var_1_22
					) == (
						/* 588L, 176L, 697L, 724L, 931L, 1193L, 54L) */ ((signed long int) (
							-10
						))
					))
				))
			) : (
				/* 592L, 182L, 701L, 728L, 936L, 1197L, 59L) */ ((
					var_1_22
				) == (
					/* 592L, 182L, 701L, 728L, 936L, 1197L, 59L) */ ((signed long int) (
						var_1_23
					))
				))
			))
		))
	) && (
		/* 597L, 215L, 759L, 772L, 1202L) */ ((
			/* 598L, 195L, 203L, 760L, 773L, 1203L) */ ((
				var_1_22
			) >= (
				/* 600L, 194L, 205L, 762L, 775L, 1205L) */ ((
					/* 601L, 192L, 206L, 763L, 776L, 1206L) */ ((
						var_1_25
					) + (
						32
					))
				) - (
					var_1_3
				))
			))
		) ? (
			/* 605L, 213L, 767L, 780L, 1210L) */ ((
				var_1_24
			) == (
				/* 605L, 213L, 767L, 780L, 1210L) */ ((unsigned long int) (
					var_1_5
				))
			))
		) : (
			1
		))
	))
) && (
	/* 610L, 260L, 833L, 857L, 1215L) */ ((
		/* 611L, 224L, 230L, 834L, 858L, 1216L) */ ((
			var_1_4
		) > (
			/* 613L, 223L, 232L, 836L, 860L, 1218L) */ (min (
				/* 613L, 223L, 232L, 836L, 860L, 1218L) */ (
					var_1_5
				) , (
					var_1_25
				)
			))
		))
	) ? (
		/* 616L, 254L, 839L, 863L, 1221L) */ ((
			/* 617L, 237L, 241L, 840L, 864L, 1222L) */ ((
				var_1_10
			) >= (
				var_1_9
			))
		) ? (
			/* 620L, 248L, 843L, 867L, 1225L) */ ((
				var_1_26
			) == (
				/* 620L, 248L, 843L, 867L, 1225L) */ ((unsigned char) (
					/* 623L, 247L, 846L, 870L, 1228L) */ (! (
						var_1_27
					))
				))
			))
		) : (
			/* 625L, 252L, 848L, 872L, 1230L) */ ((
				var_1_26
			) == (
				/* 625L, 252L, 848L, 872L, 1230L) */ ((unsigned char) (
					var_1_27
				))
			))
		))
	) : (
		/* 629L, 258L, 852L, 876L, 1234L) */ ((
			var_1_26
		) == (
			/* 629L, 258L, 852L, 876L, 1234L) */ ((unsigned char) (
				0
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
