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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 1;
double var_1_2 = 100.85;
double var_1_3 = 10000000000000.64;
unsigned long int var_1_4 = 1;
signed long int var_1_5 = 1;
signed long int var_1_7 = -1;
signed long int var_1_8 = 500;
signed char var_1_9 = 64;
signed long int var_1_10 = 5;
signed long int var_1_11 = 256;
signed char var_1_12 = 1;
unsigned long int var_1_13 = 1000000;
unsigned long int var_1_14 = 25;
unsigned long int var_1_15 = 10;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 256;
unsigned long int var_1_18 = 1000000000;
unsigned long int var_1_19 = 2;
unsigned long int var_1_20 = 4147625730;
unsigned long int var_1_21 = 1095643256;
float var_1_22 = 10000000.8;
float var_1_23 = 499.5;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed short int var_1_26 = 1;
signed short int var_1_27 = -10;
float var_1_28 = 50.2;
float var_1_32 = 64.5;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 0;
signed short int var_1_36 = -256;
float var_1_37 = 7.9;
float var_1_38 = 499.8;
float var_1_39 = 1.05;
signed long int var_1_40 = 1;
float var_1_41 = 256.4;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned short int var_1_46 = 0;
unsigned short int var_1_47 = 43299;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch142Filler_PR_CO
	/* 896L, 63L, 304L, 329L) */ if (/* 897L, 6L, 7L, 305L, 330L) */ ((var_1_2) < (/* 899L, 5L, 9L, 307L, 332L) */ (max (/* 899L, 5L, 9L, 307L, 332L) */ (63.875) , (var_1_3)))))) {
		/* 902L, 57L, 310L, 335L) */ if (/* 903L, 20L, 21L, 311L, 336L) */ (! (/* 904L, 19L, 22L, 312L, 337L) */ ((var_1_3) > (var_1_2))))) {
			/* 907L, 32L, 315L, 340L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 911L, 56L, 319L, 344L) */ var_1_1 = (
				32u
			);
		}
	} else {
		/* 915L, 62L, 323L, 348L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject4
	/* 334L, 115L) */ if (/* 335L, 56L, 57L) */ ((/* 336L, 52L, 58L) */ (abs (/* 337L, 51L, 59L) */ ((var_1_32) + (var_1_28))))) >= (/* 340L, 55L, 62L) */ (min (/* 340L, 55L, 62L) */ (var_1_37) , (var_1_38)))))) {
		/* 343L, 113L) */ if (/* 344L, 75L, 76L) */ ((var_1_35) >= (var_1_1))) {
			/* 347L, 111L) */ if (/* 348L, 90L, 91L) */ ((var_1_28) < (/* 350L, 89L, 93L) */ (- (var_1_38))))) {
				/* 352L, 104L) */ var_1_36 = (
					/* 355L, 103L) */ ((
						var_1_35
					) + (
						var_1_34
					))
				);
			} else {
				/* 358L, 110L) */ var_1_36 = (
					/* 361L, 109L) */ (max (
						/* 361L, 109L) */ (
							var_1_34
						) , (
							var_1_1
						)
					))
				);
			}
		}
	}


	// From: Req3Batch142Filler_PR_CO
	signed long int stepLocal_0 = -128;
	/* 954L, 142L, 487L, 500L) */ if (/* 949L, 123L, 124L, 488L, 501L) */ ((stepLocal_0) <= (/* 948L, 122L, 126L, 490L, 503L) */ ((var_1_10) - (/* 947L, 121L, 128L, 492L, 505L) */ ((var_1_11) + (50))))))) {
		/* 953L, 141L, 495L, 508L) */ var_1_9 = (
			var_1_12
		);
	}


	// From: CodeObject5
	/* 393L, 178L) */ if (/* 394L, 126L, 127L) */ ((/* 395L, 122L, 128L) */ (abs (var_1_17))) <= (/* 397L, 125L, 130L) */ ((var_1_35) / (var_1_40))))) {
		/* 400L, 142L) */ var_1_39 = (
			var_1_32
		);
	} else {
		/* 404L, 176L) */ if (/* 405L, 145L, 146L) */ ((var_1_38) < (var_1_28))) {
			/* 408L, 155L) */ var_1_39 = (
				var_1_32
			);
		} else {
			/* 412L, 175L) */ var_1_39 = (
				var_1_41
			);
		}
	}


	// From: CodeObject6
	/* 416L, 212L) */ if (/* 417L, 192L, 193L) */ ((var_1_1) < (/* 419L, 191L, 195L) */ ((var_1_13) & (var_1_34))))) {
		/* 422L, 211L) */ var_1_42 = (
			/* 425L, 210L) */ (! (
				/* 426L, 209L) */ ((
					var_1_43
				) || (
					/* 428L, 208L) */ ((
						var_1_44
					) || (
						var_1_45
					))
				))
			))
		);
	}


	// From: Req4Batch142Filler_PR_CO
	/* 963L, 173L, 544L, 562L) */ if (/* 964L, 154L, 155L, 545L, 563L) */ ((/* 965L, 150L, 156L, 546L, 564L) */ (max (/* 965L, 150L, 156L, 546L, 564L) */ (var_1_7) , (var_1_8)))) >= (/* 968L, 153L, 159L, 549L, 567L) */ ((var_1_11) >> (var_1_14))))) {
		/* 971L, 172L, 552L, 570L) */ var_1_13 = (
			var_1_4
		);
	}


	// From: CodeObject9
	/* 471L, 275L) */ var_1_50 = (
		0
	);


	// From: Req5Batch142Filler_PR_CO
	/* 977L, 196L, 612L, 622L) */ var_1_15 = (
		/* 980L, 195L, 615L, 625L) */ ((
			10u
		) + (
			/* 982L, 194L, 617L, 627L) */ ((
				var_1_14
			) + (
				var_1_16
			))
		))
	);


	// From: CodeObject1
	/* 279L, 5L) */ var_1_26 = (
		var_1_27
	);


	// From: CodeObject8
	/* 458L, 266L) */ if (/* 459L, 249L, 250L) */ ((/* 460L, 247L, 251L) */ ((var_1_34) >> (var_1_49))) != (var_1_35))) {
		/* 464L, 265L) */ var_1_48 = (
			/* 467L, 264L) */ (min (
				/* 467L, 264L) */ (
					var_1_34
				) , (
					var_1_49
				)
			))
		);
	}


	// From: Req6Batch142Filler_PR_CO
	/* 987L, 226L, 652L, 674L) */ if (/* 988L, 203L, 204L, 653L, 675L) */ ((-10) > (var_1_12))) {
		/* 991L, 221L, 656L, 678L) */ var_1_17 = (
			/* 994L, 220L, 659L, 681L) */ ((
				/* 995L, 216L, 660L, 682L) */ ((
					var_1_11
				) + (
					/* 997L, 215L, 662L, 684L) */ ((
						var_1_18
					) - (
						var_1_14
					))
				))
			) + (
				/* 1000L, 219L, 665L, 687L) */ ((
					10000u
				) + (
					var_1_16
				))
			))
		);
	} else {
		/* 1003L, 225L, 668L, 690L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: Req8Batch142Filler_PR_CO
	/* 1036L, 288L, 848L, 854L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject7
	/* 444L, 238L) */ if (/* 445L, 220L, 221L) */ ((var_1_32) < (/* 447L, 219L, 223L) */ (min (/* 447L, 219L, 223L) */ (var_1_28) , (var_1_38)))))) {
		/* 450L, 237L) */ var_1_46 = (
			/* 453L, 236L) */ (abs (
				/* 454L, 235L) */ ((
					var_1_47
				) - (
					var_1_19
				))
			))
		);
	}


	// From: Req9Batch142Filler_PR_CO
	/* 1042L, 298L, 872L, 878L) */ var_1_24 = (
		var_1_25
	);


	// From: CodeObject3
	/* 296L, 44L) */ var_1_33 = (
		/* 299L, 43L) */ ((
			var_1_34
		) + (
			var_1_35
		))
	);


	// From: Req2Batch142Filler_PR_CO
	/* 920L, 111L, 403L, 424L) */ if (var_1_24) {
		/* 922L, 79L, 405L, 426L) */ var_1_5 = (
			/* 925L, 78L, 408L, 429L) */ (max (
				/* 925L, 78L, 408L, 429L) */ (
					var_1_7
				) , (
					var_1_8
				)
			))
		);
	} else {
		/* 928L, 109L, 411L, 432L) */ if (/* 929L, 82L, 83L, 412L, 433L) */ ((var_1_3) != (var_1_2))) {
			/* 932L, 92L, 415L, 436L) */ var_1_5 = (
				var_1_8
			);
		} else {
			/* 936L, 108L, 419L, 440L) */ var_1_5 = (
				var_1_7
			);
		}
	}


	// From: CodeObject2
	/* 283L, 35L) */ if (/* 284L, 16L, 17L) */ ((/* 285L, 12L, 18L) */ ((var_1_17) | (var_1_15))) <= (/* 288L, 15L, 21L) */ ((32u) ^ (var_1_13))))) {
		/* 291L, 34L) */ var_1_28 = (
			var_1_32
		);
	}


	// From: Req7Batch142Filler_PR_CO
	/* 1010L, 275L, 741L, 768L) */ if (/* 1011L, 243L, 244L, 742L, 769L) */ ((/* 1012L, 240L, 245L, 743L, 770L) */ ((var_1_15) >= (/* 1014L, 239L, 247L, 745L, 772L) */ ((var_1_20) - (8u))))) || (/* 1017L, 242L, 250L, 748L, 775L) */ (! (var_1_24))))) {
		/* 1019L, 267L, 750L, 777L) */ var_1_19 = (
			/* 1022L, 266L, 753L, 780L) */ ((
				var_1_14
			) + (
				/* 1024L, 265L, 755L, 782L) */ ((
					var_1_21
				) - (
					var_1_16
				))
			))
		);
	} else {
		/* 1027L, 274L, 758L, 785L) */ var_1_19 = (
			/* 1030L, 273L, 761L, 788L) */ (abs (
				/* 1031L, 272L, 762L, 789L) */ (max (
					/* 1031L, 272L, 762L, 789L) */ (
						var_1_18
					) , (
						0u
					)
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741824);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 30);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 536870911);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 2147483647);
	assume_abort_if_not(var_1_20 <= 4294967295);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483648);
	assume_abort_if_not(var_1_40 <= 2147483647);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 7);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 477L, 6L, 12L, 355L, 380L, 1049L) */ ((var_1_2) < (/* 479L, 5L, 14L, 357L, 382L, 1051L) */ (max (/* 479L, 5L, 14L, 357L, 382L, 1051L) */ (63.875) , (var_1_3)))))) {
		if (/* 483L, 20L, 25L, 361L, 386L, 1055L) */ (! (/* 484L, 19L, 26L, 362L, 387L, 1056L) */ ((var_1_3) > (var_1_2))))) {
		} else {
		}
	} else {
	}
	if (var_1_24) {
	} else {
		if (/* 509L, 82L, 86L, 454L, 475L, 1081L) */ ((var_1_3) != (var_1_2))) {
		} else {
		}
	}
	if (/* 522L, 123L, 131L, 514L, 527L, 1094L) */ ((-128) <= (/* 524L, 122L, 133L, 516L, 529L, 1096L) */ ((var_1_10) - (/* 526L, 121L, 135L, 518L, 531L, 1098L) */ ((var_1_11) + (50))))))) {
	}
	if (/* 540L, 154L, 162L, 581L, 599L, 1112L) */ ((/* 541L, 150L, 163L, 582L, 600L, 1113L) */ (max (/* 541L, 150L, 163L, 582L, 600L, 1113L) */ (var_1_7) , (var_1_8)))) >= (/* 544L, 153L, 166L, 585L, 603L, 1116L) */ ((var_1_11) >> (var_1_14))))) {
	}
	if (/* 564L, 203L, 207L, 697L, 719L, 1136L) */ ((-10) > (var_1_12))) {
	} else {
	}
	if (/* 587L, 243L, 252L, 796L, 823L, 1159L) */ ((/* 588L, 240L, 253L, 797L, 824L, 1160L) */ ((var_1_15) >= (/* 590L, 239L, 255L, 799L, 826L, 1162L) */ ((var_1_20) - (8u))))) || (/* 593L, 242L, 258L, 802L, 829L, 1165L) */ (! (var_1_24))))) {
	} else {
	}
	return /* 630L) */ ((
	/* 629L) */ ((
		/* 628L) */ ((
			/* 627L) */ ((
				/* 626L) */ ((
					/* 625L) */ ((
						/* 624L) */ ((
							/* 623L) */ ((
								/* 476L, 64L, 354L, 379L, 1048L) */ ((
									/* 477L, 6L, 12L, 355L, 380L, 1049L) */ ((
										var_1_2
									) < (
										/* 479L, 5L, 14L, 357L, 382L, 1051L) */ (max (
											/* 479L, 5L, 14L, 357L, 382L, 1051L) */ (
												63.875
											) , (
												var_1_3
											)
										))
									))
								) ? (
									/* 482L, 58L, 360L, 385L, 1054L) */ ((
										/* 483L, 20L, 25L, 361L, 386L, 1055L) */ (! (
											/* 484L, 19L, 26L, 362L, 387L, 1056L) */ ((
												var_1_3
											) > (
												var_1_2
											))
										))
									) ? (
										/* 487L, 32L, 365L, 390L, 1059L) */ ((
											var_1_1
										) == (
											/* 487L, 32L, 365L, 390L, 1059L) */ ((unsigned long int) (
												var_1_4
											))
										))
									) : (
										/* 491L, 56L, 369L, 394L, 1063L) */ ((
											var_1_1
										) == (
											/* 491L, 56L, 369L, 394L, 1063L) */ ((unsigned long int) (
												32u
											))
										))
									))
								) : (
									/* 495L, 62L, 373L, 398L, 1067L) */ ((
										var_1_1
									) == (
										/* 495L, 62L, 373L, 398L, 1067L) */ ((unsigned long int) (
											var_1_4
										))
									))
								))
							) && (
								/* 500L, 112L, 445L, 466L, 1072L) */ ((
									var_1_24
								) ? (
									/* 502L, 79L, 447L, 468L, 1074L) */ ((
										var_1_5
									) == (
										/* 502L, 79L, 447L, 468L, 1074L) */ ((signed long int) (
											/* 505L, 78L, 450L, 471L, 1077L) */ (max (
												/* 505L, 78L, 450L, 471L, 1077L) */ (
													var_1_7
												) , (
													var_1_8
												)
											))
										))
									))
								) : (
									/* 508L, 110L, 453L, 474L, 1080L) */ ((
										/* 509L, 82L, 86L, 454L, 475L, 1081L) */ ((
											var_1_3
										) != (
											var_1_2
										))
									) ? (
										/* 512L, 92L, 457L, 478L, 1084L) */ ((
											var_1_5
										) == (
											/* 512L, 92L, 457L, 478L, 1084L) */ ((signed long int) (
												var_1_8
											))
										))
									) : (
										/* 516L, 108L, 461L, 482L, 1088L) */ ((
											var_1_5
										) == (
											/* 516L, 108L, 461L, 482L, 1088L) */ ((signed long int) (
												var_1_7
											))
										))
									))
								))
							))
						) && (
							/* 521L, 143L, 513L, 526L, 1093L) */ ((
								/* 522L, 123L, 131L, 514L, 527L, 1094L) */ ((
									-128
								) <= (
									/* 524L, 122L, 133L, 516L, 529L, 1096L) */ ((
										var_1_10
									) - (
										/* 526L, 121L, 135L, 518L, 531L, 1098L) */ ((
											var_1_11
										) + (
											50
										))
									))
								))
							) ? (
								/* 529L, 141L, 521L, 534L, 1101L) */ ((
									var_1_9
								) == (
									/* 529L, 141L, 521L, 534L, 1101L) */ ((signed char) (
										var_1_12
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 539L, 174L, 580L, 598L, 1111L) */ ((
							/* 540L, 154L, 162L, 581L, 599L, 1112L) */ ((
								/* 541L, 150L, 163L, 582L, 600L, 1113L) */ (max (
									/* 541L, 150L, 163L, 582L, 600L, 1113L) */ (
										var_1_7
									) , (
										var_1_8
									)
								))
							) >= (
								/* 544L, 153L, 166L, 585L, 603L, 1116L) */ ((
									var_1_11
								) >> (
									var_1_14
								))
							))
						) ? (
							/* 547L, 172L, 588L, 606L, 1119L) */ ((
								var_1_13
							) == (
								/* 547L, 172L, 588L, 606L, 1119L) */ ((unsigned long int) (
									var_1_4
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 553L, 196L, 632L, 642L, 1125L) */ ((
						var_1_15
					) == (
						/* 553L, 196L, 632L, 642L, 1125L) */ ((unsigned long int) (
							/* 556L, 195L, 635L, 645L, 1128L) */ ((
								10u
							) + (
								/* 558L, 194L, 637L, 647L, 1130L) */ ((
									var_1_14
								) + (
									var_1_16
								))
							))
						))
					))
				))
			) && (
				/* 563L, 227L, 696L, 718L, 1135L) */ ((
					/* 564L, 203L, 207L, 697L, 719L, 1136L) */ ((
						-10
					) > (
						var_1_12
					))
				) ? (
					/* 567L, 221L, 700L, 722L, 1139L) */ ((
						var_1_17
					) == (
						/* 567L, 221L, 700L, 722L, 1139L) */ ((unsigned long int) (
							/* 570L, 220L, 703L, 725L, 1142L) */ ((
								/* 571L, 216L, 704L, 726L, 1143L) */ ((
									var_1_11
								) + (
									/* 573L, 215L, 706L, 728L, 1145L) */ ((
										var_1_18
									) - (
										var_1_14
									))
								))
							) + (
								/* 576L, 219L, 709L, 731L, 1148L) */ ((
									10000u
								) + (
									var_1_16
								))
							))
						))
					))
				) : (
					/* 579L, 225L, 712L, 734L, 1151L) */ ((
						var_1_17
					) == (
						/* 579L, 225L, 712L, 734L, 1151L) */ ((unsigned long int) (
							var_1_18
						))
					))
				))
			))
		) && (
			/* 586L, 276L, 795L, 822L, 1158L) */ ((
				/* 587L, 243L, 252L, 796L, 823L, 1159L) */ ((
					/* 588L, 240L, 253L, 797L, 824L, 1160L) */ ((
						var_1_15
					) >= (
						/* 590L, 239L, 255L, 799L, 826L, 1162L) */ ((
							var_1_20
						) - (
							8u
						))
					))
				) || (
					/* 593L, 242L, 258L, 802L, 829L, 1165L) */ (! (
						var_1_24
					))
				))
			) ? (
				/* 595L, 267L, 804L, 831L, 1167L) */ ((
					var_1_19
				) == (
					/* 595L, 267L, 804L, 831L, 1167L) */ ((unsigned long int) (
						/* 598L, 266L, 807L, 834L, 1170L) */ ((
							var_1_14
						) + (
							/* 600L, 265L, 809L, 836L, 1172L) */ ((
								var_1_21
							) - (
								var_1_16
							))
						))
					))
				))
			) : (
				/* 603L, 274L, 812L, 839L, 1175L) */ ((
					var_1_19
				) == (
					/* 603L, 274L, 812L, 839L, 1175L) */ ((unsigned long int) (
						/* 606L, 273L, 815L, 842L, 1178L) */ (abs (
							/* 607L, 272L, 816L, 843L, 1179L) */ (max (
								/* 607L, 272L, 816L, 843L, 1179L) */ (
									var_1_18
								) , (
									0u
								)
							))
						))
					))
				))
			))
		))
	) && (
		/* 612L, 288L, 860L, 866L, 1184L) */ ((
			var_1_22
		) == (
			/* 612L, 288L, 860L, 866L, 1184L) */ ((float) (
				var_1_23
			))
		))
	))
) && (
	/* 618L, 298L, 884L, 890L, 1190L) */ ((
		var_1_24
	) == (
		/* 618L, 298L, 884L, 890L, 1190L) */ ((unsigned char) (
			var_1_25
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
