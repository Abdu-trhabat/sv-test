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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch104Filler_PE_CI.c", 13, "reach_error"); }
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
	// From: Req5Batch104Filler_PE_CI
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


	// From: Req6Batch104Filler_PE_CI
	signed long int stepLocal_3 = var_1_22;
	/* 1067L, 214L, 733L, 746L) */ if (/* 1062L, 195L, 196L, 734L, 747L) */ ((stepLocal_3) >= (/* 1061L, 194L, 198L, 736L, 749L) */ ((/* 1059L, 192L, 199L, 737L, 750L) */ ((var_1_25) + (32))) - (var_1_3))))) {
		/* 1066L, 213L, 741L, 754L) */ var_1_24 = (
			var_1_5
		);
	}


	// From: Req2Batch104Filler_PE_CI
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


	// From: Req7Batch104Filler_PE_CI
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


	// From: Req1Batch104Filler_PE_CI
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


	// From: Req3Batch104Filler_PE_CI
	/* 993L, 99L, 529L, 538L) */ if (var_1_26) {
		/* 995L, 97L, 531L, 540L) */ if (var_1_26) {
			/* 997L, 96L, 533L, 542L) */ var_1_18 = (
				var_1_3
			);
		}
	}


	// From: Req4Batch104Filler_PE_CI
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


	// From: CodeObject1
	/* 382L, 89L) */ if (/* 383L, 70L, 71L) */ ((/* 384L, 66L, 72L) */ ((var_1_29) - (var_1_30))) < (/* 387L, 69L, 75L) */ ((var_1_23) | (var_1_25))))) {
		/* 390L, 88L) */ var_1_28 = (
			var_1_27
		);
	}


	// From: CodeObject2
	/* 394L, 185L) */ if (/* 395L, 103L, 104L) */ ((/* 396L, 101L, 105L) */ ((128) * (/* 398L, 100L, 107L) */ ((var_1_30) | (-10))))) <= (5))) {
		/* 402L, 122L) */ var_1_34 = (
			/* 405L, 121L) */ (abs (
				var_1_35
			))
		);
	} else {
		/* 407L, 183L) */ if (/* 408L, 129L, 130L) */ ((/* 409L, 127L, 131L) */ (min (/* 409L, 127L, 131L) */ (/* 410L, 125L, 132L) */ ((var_1_29) ^ (-5))) , (var_1_25)))) <= (var_1_30))) {
			/* 415L, 181L) */ if (/* 416L, 146L, 147L) */ ((var_1_25) >= (-128))) {
				/* 419L, 156L) */ var_1_34 = (
					var_1_35
				);
			} else {
				/* 423L, 180L) */ var_1_34 = (
					-1
				);
			}
		}
	}


	// From: CodeObject3
	/* 429L, 197L) */ var_1_36 = (
		/* 432L, 196L) */ (abs (
			/* 433L, 195L) */ ((
				/* 434L, 193L) */ (max (
					/* 434L, 193L) */ (
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


	// From: CodeObject4
	/* 438L, 230L) */ if (/* 439L, 210L, 211L) */ ((/* 440L, 206L, 212L) */ ((var_1_37) * (var_1_30))) >= (/* 443L, 209L, 215L) */ ((8) - (var_1_29))))) {
		/* 446L, 229L) */ var_1_40 = (
			/* 449L, 228L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject5
	/* 451L, 270L) */ if (/* 452L, 237L, 238L) */ ((var_1_38) != (var_1_24))) {
		/* 455L, 268L) */ if (/* 456L, 249L, 250L) */ ((var_1_38) < (/* 458L, 248L, 252L) */ ((/* 459L, 246L, 253L) */ (abs (var_1_35))) | (var_1_22))))) {
			/* 462L, 267L) */ var_1_41 = (
				/* 465L, 266L) */ (min (
					/* 465L, 266L) */ (
						0u
					) , (
						var_1_30
					)
				))
			);
		}
	}


	// From: CodeObject6
	/* 474L, 352L) */ if (/* 475L, 278L, 279L) */ ((var_1_23) > (/* 477L, 277L, 281L) */ ((var_1_38) ^ (var_1_35))))) {
		/* 480L, 350L) */ if (/* 481L, 297L, 298L) */ ((1000) > (var_1_24))) {
			/* 484L, 329L) */ if (/* 485L, 310L, 311L) */ ((/* 486L, 308L, 312L) */ (min (/* 486L, 308L, 312L) */ (var_1_29) , (/* 488L, 307L, 314L) */ ((var_1_24) + (var_1_30)))))) >= (var_1_25))) {
				/* 492L, 328L) */ var_1_42 = (
					var_1_27
				);
			}
		} else {
			/* 496L, 348L) */ if (/* 497L, 333L, 334L) */ ((var_1_25) < (var_1_24))) {
				/* 500L, 343L) */ var_1_42 = (
					var_1_27
				);
			} else {
				/* 504L, 347L) */ var_1_42 = (
					0
				);
			}
		}
	}
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
	if (/* 526L, 31L, 39L, 464L, 497L, 1117L) */ ((var_1_8) > (/* 528L, 30L, 41L, 466L, 499L, 1119L) */ ((/* 529L, 28L, 42L, 467L, 500L, 1120L) */ (max (/* 529L, 28L, 42L, 467L, 500L, 1120L) */ (var_1_9) , (var_1_10)))) + (var_1_11))))) {
		if (/* 534L, 50L, 56L, 472L, 505L, 1125L) */ ((/* 535L, 48L, 57L, 473L, 506L, 1126L) */ ((var_1_2) && (var_1_12))) && (var_1_13))) {
		} else {
		}
	} else {
	}
	if (var_1_26) {
		if (var_1_26) {
		}
	}
	if (var_1_26) {
		if (/* 570L, 112L, 118L, 598L, 613L, 1161L) */ ((/* 571L, 110L, 119L, 599L, 614L, 1162L) */ ((var_1_20) - (var_1_21))) > (var_1_4))) {
		}
	}
	if (/* 583L, 143L, 151L, 680L, 707L, 917L, 1174L, 40L) */ ((/* 584L, 141L, 152L, 681L, 708L, 914L, 1175L, 37L) */ ((/* 585L, 139L, 153L, 682L, 709L, 912L, 1176L, 35L) */ ((var_1_4) + (-10))) * (var_1_20))) == (last_1_var_1_24))) {
		if (/* 592L, 160L, 164L, 688L, 715L, 921L, 1183L, 44L) */ ((var_1_17) > (last_1_var_1_19))) {
		} else {
		}
	} else {
	}
	if (/* 612L, 195L, 203L, 760L, 773L, 1203L) */ ((var_1_22) >= (/* 614L, 194L, 205L, 762L, 775L, 1205L) */ ((/* 615L, 192L, 206L, 763L, 776L, 1206L) */ ((var_1_25) + (32))) - (var_1_3))))) {
	}
	if (/* 625L, 224L, 230L, 834L, 858L, 1216L) */ ((var_1_4) > (/* 627L, 223L, 232L, 836L, 860L, 1218L) */ (min (/* 627L, 223L, 232L, 836L, 860L, 1218L) */ (var_1_5) , (var_1_25)))))) {
		if (/* 631L, 237L, 241L, 840L, 864L, 1222L) */ ((var_1_10) >= (var_1_9))) {
		} else {
		}
	} else {
	}
	return /* 653L) */ ((
	/* 652L) */ ((
		/* 651L) */ ((
			/* 650L) */ ((
				/* 649L) */ ((
					/* 648L) */ ((
						/* 508L, 20L, 297L, 314L, 1099L) */ ((
							var_1_26
						) ? (
							/* 510L, 12L, 299L, 316L, 1101L) */ ((
								var_1_1
							) == (
								/* 510L, 12L, 299L, 316L, 1101L) */ ((unsigned short int) (
									/* 513L, 11L, 302L, 319L, 1104L) */ ((
										/* 514L, 9L, 303L, 320L, 1105L) */ (max (
											/* 514L, 9L, 303L, 320L, 1105L) */ (
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
							/* 518L, 18L, 307L, 324L, 1109L) */ ((
								var_1_1
							) == (
								/* 518L, 18L, 307L, 324L, 1109L) */ ((unsigned short int) (
									/* 521L, 17L, 310L, 327L, 1112L) */ ((
										var_1_6
									) - (
										var_1_3
									))
								))
							))
						))
					) && (
						/* 525L, 82L, 463L, 496L, 1116L) */ ((
							/* 526L, 31L, 39L, 464L, 497L, 1117L) */ ((
								var_1_8
							) > (
								/* 528L, 30L, 41L, 466L, 499L, 1119L) */ ((
									/* 529L, 28L, 42L, 467L, 500L, 1120L) */ (max (
										/* 529L, 28L, 42L, 467L, 500L, 1120L) */ (
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
							/* 533L, 72L, 471L, 504L, 1124L) */ ((
								/* 534L, 50L, 56L, 472L, 505L, 1125L) */ ((
									/* 535L, 48L, 57L, 473L, 506L, 1126L) */ ((
										var_1_2
									) && (
										var_1_12
									))
								) && (
									var_1_13
								))
							) ? (
								/* 539L, 66L, 477L, 510L, 1130L) */ ((
									var_1_7
								) == (
									/* 539L, 66L, 477L, 510L, 1130L) */ ((float) (
										/* 542L, 65L, 480L, 513L, 1133L) */ ((
											var_1_14
										) + (
											var_1_15
										))
									))
								))
							) : (
								/* 545L, 70L, 483L, 516L, 1136L) */ ((
									var_1_7
								) == (
									/* 545L, 70L, 483L, 516L, 1136L) */ ((float) (
										7.5f
									))
								))
							))
						) : (
							/* 549L, 80L, 487L, 520L, 1140L) */ ((
								var_1_7
							) == (
								/* 549L, 80L, 487L, 520L, 1140L) */ ((float) (
									/* 552L, 79L, 490L, 523L, 1143L) */ ((
										/* 553L, 77L, 491L, 524L, 1144L) */ (max (
											/* 553L, 77L, 491L, 524L, 1144L) */ (
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
					/* 558L, 100L, 547L, 556L, 1149L) */ ((
						var_1_26
					) ? (
						/* 560L, 98L, 549L, 558L, 1151L) */ ((
							var_1_26
						) ? (
							/* 562L, 96L, 551L, 560L, 1153L) */ ((
								var_1_18
							) == (
								/* 562L, 96L, 551L, 560L, 1153L) */ ((unsigned short int) (
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
				/* 567L, 132L, 595L, 610L, 1158L) */ ((
					var_1_26
				) ? (
					/* 569L, 130L, 597L, 612L, 1160L) */ ((
						/* 570L, 112L, 118L, 598L, 613L, 1161L) */ ((
							/* 571L, 110L, 119L, 599L, 614L, 1162L) */ ((
								var_1_20
							) - (
								var_1_21
							))
						) > (
							var_1_4
						))
					) ? (
						/* 575L, 128L, 603L, 618L, 1166L) */ ((
							var_1_19
						) == (
							/* 575L, 128L, 603L, 618L, 1166L) */ ((float) (
								/* 578L, 127L, 606L, 621L, 1169L) */ (max (
									/* 578L, 127L, 606L, 621L, 1169L) */ (
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
			/* 582L, 184L, 679L, 706L, 937L, 1173L, 60L) */ ((
				/* 583L, 143L, 151L, 680L, 707L, 917L, 1174L, 40L) */ ((
					/* 584L, 141L, 152L, 681L, 708L, 914L, 1175L, 37L) */ ((
						/* 585L, 139L, 153L, 682L, 709L, 912L, 1176L, 35L) */ ((
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
				/* 591L, 178L, 687L, 714L, 932L, 1182L, 55L) */ ((
					/* 592L, 160L, 164L, 688L, 715L, 921L, 1183L, 44L) */ ((
						var_1_17
					) > (
						last_1_var_1_19
					))
				) ? (
					/* 596L, 172L, 691L, 718L, 927L, 1187L, 50L) */ ((
						var_1_22
					) == (
						/* 596L, 172L, 691L, 718L, 927L, 1187L, 50L) */ ((signed long int) (
							/* 599L, 171L, 694L, 721L, 926L, 1190L, 49L) */ ((
								var_1_4
							) + (
								var_1_3
							))
						))
					))
				) : (
					/* 602L, 176L, 697L, 724L, 931L, 1193L, 54L) */ ((
						var_1_22
					) == (
						/* 602L, 176L, 697L, 724L, 931L, 1193L, 54L) */ ((signed long int) (
							-10
						))
					))
				))
			) : (
				/* 606L, 182L, 701L, 728L, 936L, 1197L, 59L) */ ((
					var_1_22
				) == (
					/* 606L, 182L, 701L, 728L, 936L, 1197L, 59L) */ ((signed long int) (
						var_1_23
					))
				))
			))
		))
	) && (
		/* 611L, 215L, 759L, 772L, 1202L) */ ((
			/* 612L, 195L, 203L, 760L, 773L, 1203L) */ ((
				var_1_22
			) >= (
				/* 614L, 194L, 205L, 762L, 775L, 1205L) */ ((
					/* 615L, 192L, 206L, 763L, 776L, 1206L) */ ((
						var_1_25
					) + (
						32
					))
				) - (
					var_1_3
				))
			))
		) ? (
			/* 619L, 213L, 767L, 780L, 1210L) */ ((
				var_1_24
			) == (
				/* 619L, 213L, 767L, 780L, 1210L) */ ((unsigned long int) (
					var_1_5
				))
			))
		) : (
			1
		))
	))
) && (
	/* 624L, 260L, 833L, 857L, 1215L) */ ((
		/* 625L, 224L, 230L, 834L, 858L, 1216L) */ ((
			var_1_4
		) > (
			/* 627L, 223L, 232L, 836L, 860L, 1218L) */ (min (
				/* 627L, 223L, 232L, 836L, 860L, 1218L) */ (
					var_1_5
				) , (
					var_1_25
				)
			))
		))
	) ? (
		/* 630L, 254L, 839L, 863L, 1221L) */ ((
			/* 631L, 237L, 241L, 840L, 864L, 1222L) */ ((
				var_1_10
			) >= (
				var_1_9
			))
		) ? (
			/* 634L, 248L, 843L, 867L, 1225L) */ ((
				var_1_26
			) == (
				/* 634L, 248L, 843L, 867L, 1225L) */ ((unsigned char) (
					/* 637L, 247L, 846L, 870L, 1228L) */ (! (
						var_1_27
					))
				))
			))
		) : (
			/* 639L, 252L, 848L, 872L, 1230L) */ ((
				var_1_26
			) == (
				/* 639L, 252L, 848L, 872L, 1230L) */ ((unsigned char) (
					var_1_27
				))
			))
		))
	) : (
		/* 643L, 258L, 852L, 876L, 1234L) */ ((
			var_1_26
		) == (
			/* 643L, 258L, 852L, 876L, 1234L) */ ((unsigned char) (
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
