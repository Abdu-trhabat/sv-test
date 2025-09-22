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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Filler_PS_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
double var_1_2 = 50.5;
double var_1_3 = 0.875;
unsigned short int var_1_4 = 49926;
unsigned short int var_1_5 = 500;
unsigned short int var_1_6 = 10;
unsigned short int var_1_7 = 2;
unsigned char var_1_8 = 64;
unsigned short int var_1_9 = 5;
unsigned char var_1_11 = 10;
float var_1_12 = 0.19999999999999996;
float var_1_13 = 9.2;
float var_1_14 = 5.8;
float var_1_15 = 31.25;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 1;
unsigned short int var_1_20 = 256;
unsigned short int var_1_21 = 23544;
unsigned long int var_1_22 = 64;
double var_1_23 = 100.75;
double var_1_24 = -0.5;
double var_1_25 = 128.5;
unsigned char var_1_26 = 2;
signed long int var_1_27 = -4;
unsigned char var_1_28 = 0;
double var_1_29 = 15.75;
double var_1_30 = 10.3;
signed long int var_1_31 = -16;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 1;
unsigned long int var_1_34 = 64;
unsigned long int var_1_35 = 2280229334;
unsigned short int var_1_36 = 4;
unsigned short int var_1_37 = 37841;
double var_1_38 = 9.5;
signed char var_1_39 = -5;
signed char var_1_40 = 8;
signed char var_1_41 = 8;
signed char var_1_42 = -10;
unsigned char var_1_43 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 8;
unsigned char last_1_var_1_8 = 64;
unsigned char last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 84L) */ if (/* 55L, 54L) */ ((var_1_24) <= (var_1_25))) {
		/* 82L) */ if (/* 65L, 64L) */ ((/* 66L, 62L) */ (- (var_1_26))) < (var_1_27))) {
			/* 80L) */ if (var_1_28) {
				/* 79L) */ var_1_23 = (
					var_1_29
				);
			}
		}
	}


	// From: CodeObject2
	/* 91L) */ var_1_30 = (
		var_1_29
	);


	// From: CodeObject3
	/* 99L) */ var_1_31 = (
		var_1_26
	);


	// From: CodeObject4
	/* 107L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject5
	/* 129L) */ if (/* 115L, 114L) */ ((var_1_30) > (32.8))) {
		/* 128L) */ var_1_34 = (
			/* 127L) */ (max (
				/* 127L) */ (
					/* 125L) */ ((
						var_1_35
					) - (
						var_1_26
					))
				) , (
					var_1_32
				)
			))
		);
	}


	// From: CodeObject6
	/* 198L) */ if (/* 139L, 138L) */ ((/* 140L, 136L) */ ((var_1_34) & (var_1_33))) <= (var_1_26))) {
		/* 152L) */ var_1_36 = (
			10
		);
	} else {
		/* 196L) */ if (/* 156L, 155L) */ ((var_1_30) > (var_1_25))) {
			/* 194L) */ if (/* 169L, 168L) */ ((/* 170L, 163L) */ (~ (var_1_26))) > (/* 172L, 167L) */ ((var_1_32) & (var_1_31))))) {
				/* 187L) */ var_1_36 = (
					/* 186L) */ ((
						/* 184L) */ (abs (
							var_1_26
						))
					) + (
						var_1_32
					))
				);
			} else {
				/* 193L) */ var_1_36 = (
					/* 192L) */ ((
						var_1_37
					) - (
						var_1_33
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 227L) */ if (/* 209L, 208L) */ ((var_1_33) == (/* 211L, 207L) */ ((var_1_32) | (/* 213L, 206L) */ ((var_1_27) + (var_1_31))))))) {
		/* 226L) */ var_1_38 = (
			var_1_29
		);
	}


	// From: CodeObject8
	/* 253L) */ if (/* 234L, 233L) */ ((var_1_24) >= (var_1_23))) {
		/* 245L) */ var_1_39 = (
			/* 244L) */ (min (
				/* 244L) */ (
					var_1_40
				) , (
					var_1_41
				)
			))
		);
	} else {
		/* 252L) */ var_1_39 = (
			/* 251L) */ (abs (
				/* 250L) */ (max (
					/* 250L) */ (
						var_1_42
					) , (
						-8
					)
				))
			))
		);
	}


	// From: CodeObject9
	/* 350L) */ if (/* 266L, 265L) */ ((/* 267L, 261L) */ ((/* 268L, 259L) */ (abs (var_1_31))) / (var_1_37))) > (/* 271L, 264L) */ ((var_1_34) * (10))))) {
		/* 348L) */ if (/* 284L, 283L) */ (! (var_1_28))) {
			/* 291L) */ var_1_43 = (
				var_1_33
			);
		} else {
			/* 347L) */ var_1_43 = (
				10
			);
		}
	}


	// From: Req4Batch47Filler_PS_CN
	/* 21L, 147L, 497L, 519L, 824L, 917L) */ if (/* 9L, 120L, 121L, 498L, 520L, 812L, 918L) */ ((/* 3L, 115L, 122L, 499L, 521L, 806L, 919L) */ ((var_1_6) + (last_1_var_1_8))) > (/* 8L, 119L, 125L, 502L, 524L, 811L, 923L) */ ((/* 5L, 117L, 126L, 503L, 525L, 808L, 924L) */ (abs (var_1_7))) + (last_1_var_1_1))))) {
		/* 16L, 142L, 506L, 528L, 819L, 928L) */ var_1_16 = (
			/* 15L, 141L, 509L, 531L, 818L, 931L) */ ((
				last_1_var_1_19
			) || (
				var_1_17
			))
		);
	} else {
		/* 20L, 146L, 512L, 534L, 823L, 935L) */ var_1_16 = (
			var_1_18
		);
	}


	// From: Req2Batch47Filler_PS_CN
	unsigned short int stepLocal_0 = var_1_5;
	/* 889L, 67L, 347L, 362L) */ if (/* 882L, 43L, 44L, 348L, 363L) */ ((stepLocal_0) >= (/* 881L, 42L, 46L, 350L, 365L) */ ((32796) - (/* 880L, 41L, 48L, 352L, 367L) */ (min (/* 880L, 41L, 48L, 352L, 367L) */ (var_1_6) , (var_1_9)))))))) {
		/* 888L, 65L, 355L, 370L) */ if (var_1_16) {
			/* 887L, 64L, 357L, 372L) */ var_1_8 = (
				var_1_11
			);
		}
	}


	// From: Req1Batch47Filler_PS_CN
	/* 853L, 31L, 263L, 284L) */ if (/* 854L, 6L, 7L, 264L, 285L) */ ((var_1_2) >= (/* 856L, 5L, 9L, 266L, 287L) */ ((1.3) / (var_1_3))))) {
		/* 859L, 24L, 269L, 290L) */ var_1_1 = (
			/* 862L, 23L, 272L, 293L) */ ((
				/* 863L, 21L, 273L, 294L) */ ((
					var_1_4
				) - (
					var_1_5
				))
			) - (
				var_1_6
			))
		);
	} else {
		/* 867L, 30L, 277L, 298L) */ var_1_1 = (
			/* 870L, 29L, 280L, 301L) */ (min (
				/* 870L, 29L, 280L, 301L) */ (
					var_1_7
				) , (
					var_1_4
				)
			))
		);
	}


	// From: Req7Batch47Filler_PS_CN
	/* 988L, 257L, 740L, 756L) */ if (/* 989L, 234L, 235L, 741L, 757L) */ ((var_1_1) >= (/* 991L, 233L, 237L, 743L, 759L) */ (max (/* 991L, 233L, 237L, 743L, 759L) */ (/* 992L, 229L, 238L, 744L, 760L) */ ((var_1_4) * (var_1_6))) , (/* 995L, 232L, 241L, 747L, 763L) */ ((2) ^ (var_1_1)))))))) {
		/* 998L, 256L, 750L, 766L) */ var_1_22 = (
			var_1_1
		);
	}


	// From: Req6Batch47Filler_PS_CN
	unsigned short int stepLocal_2 = var_1_4;
	/* 983L, 220L, 635L, 661L) */ if (/* 961L, 189L, 190L, 636L, 662L) */ ((var_1_6) <= (stepLocal_2))) {
		/* 976L, 212L, 639L, 665L) */ if (var_1_16) {
			/* 971L, 207L, 641L, 667L) */ var_1_20 = (
				/* 970L, 206L, 644L, 670L) */ ((
					var_1_4
				) - (
					/* 969L, 205L, 646L, 672L) */ (abs (
						/* 968L, 204L, 647L, 673L) */ ((
							var_1_21
						) - (
							var_1_22
						))
					))
				))
			);
		} else {
			/* 975L, 211L, 650L, 676L) */ var_1_20 = (
				16
			);
		}
	} else {
		/* 982L, 219L, 654L, 680L) */ var_1_20 = (
			/* 981L, 218L, 657L, 683L) */ ((
				var_1_4
			) - (
				var_1_5
			))
		);
	}


	// From: Req5Batch47Filler_PS_CN
	unsigned char stepLocal_1 = /* 941L, 162L, 166L, 587L, 600L) */ ((var_1_1) < (64));
	/* 953L, 181L, 583L, 596L) */ if (var_1_16) {
		/* 952L, 179L, 585L, 598L) */ if (/* 947L, 164L, 165L, 586L, 599L) */ ((stepLocal_1) || (var_1_16))) {
			/* 951L, 178L, 591L, 604L) */ var_1_19 = (
				var_1_17
			);
		}
	}


	// From: Req3Batch47Filler_PS_CN
	/* 894L, 105L, 408L, 430L) */ if (var_1_19) {
		/* 896L, 99L, 410L, 432L) */ if (/* 897L, 80L, 81L, 411L, 433L) */ ((/* 898L, 78L, 82L, 412L, 434L) */ ((var_1_1) * (var_1_7))) < (var_1_11))) {
			/* 902L, 98L, 416L, 438L) */ var_1_12 = (
				/* 905L, 97L, 419L, 441L) */ (max (
					/* 905L, 97L, 419L, 441L) */ (
						/* 906L, 95L, 420L, 442L) */ (min (
							/* 906L, 95L, 420L, 442L) */ (
								var_1_13
							) , (
								var_1_14
							)
						))
					) , (
						var_1_15
					)
				))
			);
		}
	} else {
		/* 910L, 104L, 424L, 446L) */ var_1_12 = (
			var_1_14
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 49150);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 255);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -127);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 353L, 6L, 12L, 306L, 327L, 1004L) */ ((var_1_2) >= (/* 355L, 5L, 14L, 308L, 329L, 1006L) */ ((1.3) / (var_1_3))))) {
	} else {
	}
	if (/* 374L, 43L, 51L, 378L, 393L, 1025L) */ ((var_1_5) >= (/* 376L, 42L, 53L, 380L, 395L, 1027L) */ ((32796) - (/* 378L, 41L, 55L, 382L, 397L, 1029L) */ (min (/* 378L, 41L, 55L, 382L, 397L, 1029L) */ (var_1_6) , (var_1_9)))))))) {
		if (var_1_16) {
		}
	}
	if (var_1_19) {
		if (/* 392L, 80L, 86L, 455L, 477L, 1043L) */ ((/* 393L, 78L, 87L, 456L, 478L, 1044L) */ ((var_1_1) * (var_1_7))) < (var_1_11))) {
		}
	} else {
	}
	if (/* 413L, 120L, 129L, 542L, 564L, 837L, 1064L, 34L) */ ((/* 414L, 115L, 130L, 543L, 565L, 831L, 1065L, 28L) */ ((var_1_6) + (last_1_var_1_8))) > (/* 418L, 119L, 133L, 546L, 568L, 836L, 1069L, 33L) */ ((/* 419L, 117L, 134L, 547L, 569L, 833L, 1070L, 30L) */ (abs (var_1_7))) + (last_1_var_1_1))))) {
	} else {
	}
	if (var_1_16) {
		if (/* 438L, 164L, 170L, 612L, 625L, 1089L) */ ((/* 439L, 162L, 171L, 613L, 626L, 1090L) */ ((var_1_1) < (64))) || (var_1_16))) {
		}
	}
	if (/* 449L, 189L, 193L, 688L, 714L, 1100L) */ ((var_1_6) <= (var_1_4))) {
		if (var_1_16) {
		} else {
		}
	} else {
	}
	if (/* 476L, 234L, 244L, 773L, 789L, 1127L) */ ((var_1_1) >= (/* 478L, 233L, 246L, 775L, 791L, 1129L) */ (max (/* 478L, 233L, 246L, 775L, 791L, 1129L) */ (/* 479L, 229L, 247L, 776L, 792L, 1130L) */ ((var_1_4) * (var_1_6))) , (/* 482L, 232L, 250L, 779L, 795L, 1133L) */ ((2) ^ (var_1_1)))))))) {
	}
	return /* 495L) */ ((
	/* 494L) */ ((
		/* 493L) */ ((
			/* 492L) */ ((
				/* 491L) */ ((
					/* 490L) */ ((
						/* 352L, 32L, 305L, 326L, 1003L) */ ((
							/* 353L, 6L, 12L, 306L, 327L, 1004L) */ ((
								var_1_2
							) >= (
								/* 355L, 5L, 14L, 308L, 329L, 1006L) */ ((
									1.3
								) / (
									var_1_3
								))
							))
						) ? (
							/* 358L, 24L, 311L, 332L, 1009L) */ ((
								var_1_1
							) == (
								/* 358L, 24L, 311L, 332L, 1009L) */ ((unsigned short int) (
									/* 361L, 23L, 314L, 335L, 1012L) */ ((
										/* 362L, 21L, 315L, 336L, 1013L) */ ((
											var_1_4
										) - (
											var_1_5
										))
									) - (
										var_1_6
									))
								))
							))
						) : (
							/* 366L, 30L, 319L, 340L, 1017L) */ ((
								var_1_1
							) == (
								/* 366L, 30L, 319L, 340L, 1017L) */ ((unsigned short int) (
									/* 369L, 29L, 322L, 343L, 1020L) */ (min (
										/* 369L, 29L, 322L, 343L, 1020L) */ (
											var_1_7
										) , (
											var_1_4
										)
									))
								))
							))
						))
					) && (
						/* 373L, 68L, 377L, 392L, 1024L) */ ((
							/* 374L, 43L, 51L, 378L, 393L, 1025L) */ ((
								var_1_5
							) >= (
								/* 376L, 42L, 53L, 380L, 395L, 1027L) */ ((
									32796
								) - (
									/* 378L, 41L, 55L, 382L, 397L, 1029L) */ (min (
										/* 378L, 41L, 55L, 382L, 397L, 1029L) */ (
											var_1_6
										) , (
											var_1_9
										)
									))
								))
							))
						) ? (
							/* 381L, 66L, 385L, 400L, 1032L) */ ((
								var_1_16
							) ? (
								/* 383L, 64L, 387L, 402L, 1034L) */ ((
									var_1_8
								) == (
									/* 383L, 64L, 387L, 402L, 1034L) */ ((unsigned char) (
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
					/* 389L, 106L, 452L, 474L, 1040L) */ ((
						var_1_19
					) ? (
						/* 391L, 100L, 454L, 476L, 1042L) */ ((
							/* 392L, 80L, 86L, 455L, 477L, 1043L) */ ((
								/* 393L, 78L, 87L, 456L, 478L, 1044L) */ ((
									var_1_1
								) * (
									var_1_7
								))
							) < (
								var_1_11
							))
						) ? (
							/* 397L, 98L, 460L, 482L, 1048L) */ ((
								var_1_12
							) == (
								/* 397L, 98L, 460L, 482L, 1048L) */ ((float) (
									/* 400L, 97L, 463L, 485L, 1051L) */ (max (
										/* 400L, 97L, 463L, 485L, 1051L) */ (
											/* 401L, 95L, 464L, 486L, 1052L) */ (min (
												/* 401L, 95L, 464L, 486L, 1052L) */ (
													var_1_13
												) , (
													var_1_14
												)
											))
										) , (
											var_1_15
										)
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 405L, 104L, 468L, 490L, 1056L) */ ((
							var_1_12
						) == (
							/* 405L, 104L, 468L, 490L, 1056L) */ ((float) (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 412L, 148L, 541L, 563L, 849L, 1063L, 46L) */ ((
					/* 413L, 120L, 129L, 542L, 564L, 837L, 1064L, 34L) */ ((
						/* 414L, 115L, 130L, 543L, 565L, 831L, 1065L, 28L) */ ((
							var_1_6
						) + (
							last_1_var_1_8
						))
					) > (
						/* 418L, 119L, 133L, 546L, 568L, 836L, 1069L, 33L) */ ((
							/* 419L, 117L, 134L, 547L, 569L, 833L, 1070L, 30L) */ (abs (
								var_1_7
							))
						) + (
							last_1_var_1_1
						))
					))
				) ? (
					/* 423L, 142L, 550L, 572L, 844L, 1074L, 41L) */ ((
						var_1_16
					) == (
						/* 423L, 142L, 550L, 572L, 844L, 1074L, 41L) */ ((unsigned char) (
							/* 426L, 141L, 553L, 575L, 843L, 1077L, 40L) */ ((
								last_1_var_1_19
							) || (
								var_1_17
							))
						))
					))
				) : (
					/* 430L, 146L, 556L, 578L, 848L, 1081L, 45L) */ ((
						var_1_16
					) == (
						/* 430L, 146L, 556L, 578L, 848L, 1081L, 45L) */ ((unsigned char) (
							var_1_18
						))
					))
				))
			))
		) && (
			/* 435L, 182L, 609L, 622L, 1086L) */ ((
				var_1_16
			) ? (
				/* 437L, 180L, 611L, 624L, 1088L) */ ((
					/* 438L, 164L, 170L, 612L, 625L, 1089L) */ ((
						/* 439L, 162L, 171L, 613L, 626L, 1090L) */ ((
							var_1_1
						) < (
							64
						))
					) || (
						var_1_16
					))
				) ? (
					/* 443L, 178L, 617L, 630L, 1094L) */ ((
						var_1_19
					) == (
						/* 443L, 178L, 617L, 630L, 1094L) */ ((unsigned char) (
							var_1_17
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
		/* 448L, 221L, 687L, 713L, 1099L) */ ((
			/* 449L, 189L, 193L, 688L, 714L, 1100L) */ ((
				var_1_6
			) <= (
				var_1_4
			))
		) ? (
			/* 452L, 213L, 691L, 717L, 1103L) */ ((
				var_1_16
			) ? (
				/* 454L, 207L, 693L, 719L, 1105L) */ ((
					var_1_20
				) == (
					/* 454L, 207L, 693L, 719L, 1105L) */ ((unsigned short int) (
						/* 457L, 206L, 696L, 722L, 1108L) */ ((
							var_1_4
						) - (
							/* 459L, 205L, 698L, 724L, 1110L) */ (abs (
								/* 460L, 204L, 699L, 725L, 1111L) */ ((
									var_1_21
								) - (
									var_1_22
								))
							))
						))
					))
				))
			) : (
				/* 463L, 211L, 702L, 728L, 1114L) */ ((
					var_1_20
				) == (
					/* 463L, 211L, 702L, 728L, 1114L) */ ((unsigned short int) (
						16
					))
				))
			))
		) : (
			/* 467L, 219L, 706L, 732L, 1118L) */ ((
				var_1_20
			) == (
				/* 467L, 219L, 706L, 732L, 1118L) */ ((unsigned short int) (
					/* 470L, 218L, 709L, 735L, 1121L) */ ((
						var_1_4
					) - (
						var_1_5
					))
				))
			))
		))
	))
) && (
	/* 475L, 258L, 772L, 788L, 1126L) */ ((
		/* 476L, 234L, 244L, 773L, 789L, 1127L) */ ((
			var_1_1
		) >= (
			/* 478L, 233L, 246L, 775L, 791L, 1129L) */ (max (
				/* 478L, 233L, 246L, 775L, 791L, 1129L) */ (
					/* 479L, 229L, 247L, 776L, 792L, 1130L) */ ((
						var_1_4
					) * (
						var_1_6
					))
				) , (
					/* 482L, 232L, 250L, 779L, 795L, 1133L) */ ((
						2
					) ^ (
						var_1_1
					))
				)
			))
		))
	) ? (
		/* 485L, 256L, 782L, 798L, 1136L) */ ((
			var_1_22
		) == (
			/* 485L, 256L, 782L, 798L, 1136L) */ ((unsigned long int) (
				var_1_1
			))
		))
	) : (
		1
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
