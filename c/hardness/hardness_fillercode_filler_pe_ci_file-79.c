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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Filler_PE_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed short int var_1_4 = -2;
signed short int var_1_5 = 50;
signed short int var_1_6 = 2;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 4;
unsigned short int var_1_10 = 5;
signed long int var_1_11 = -5;
unsigned char var_1_12 = 1;
double var_1_13 = 255.375;
double var_1_14 = 64.25;
double var_1_15 = 64.8;
signed char var_1_16 = 2;
signed char var_1_17 = 16;
signed char var_1_18 = -50;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
signed char var_1_21 = -100;
unsigned long int var_1_22 = 3689088955;
unsigned long int var_1_23 = 1113264439;
unsigned long int var_1_24 = 256;
signed short int var_1_26 = 64;
double var_1_28 = 255.5;
double var_1_29 = 16.5;
double var_1_30 = 9.25;
double var_1_31 = 8.8;
signed long int var_1_32 = 4;
signed long int var_1_33 = 64;
double var_1_34 = 63.6;
unsigned char var_1_35 = 1;
signed char var_1_37 = 4;
double var_1_38 = 99.25;
double var_1_39 = 128.5;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
double var_1_43 = 16.75;
double var_1_44 = 8.8;
signed long int var_1_45 = -16;
signed long int var_1_46 = 10;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch79Filler_PE_CI
	/* 999L, 238L, 689L, 702L) */ if (/* 1000L, 219L, 220L, 690L, 703L) */ ((/* 1001L, 217L, 221L, 691L, 704L) */ (min (/* 1001L, 217L, 221L, 691L, 704L) */ (/* 1002L, 215L, 222L, 692L, 705L) */ (max (/* 1002L, 215L, 222L, 692L, 705L) */ (var_1_13) , (9.999999999999025E12)))) , (var_1_14)))) > (var_1_15))) {
		/* 1007L, 237L, 697L, 710L) */ var_1_12 = (
			0
		);
	}


	// From: Req5Batch79Filler_PE_CI
	/* 1013L, 284L, 742L, 771L) */ if (/* 1014L, 250L, 251L, 743L, 772L) */ ((var_1_12) && (/* 1016L, 249L, 253L, 745L, 774L) */ ((50.5) <= (/* 1018L, 248L, 255L, 747L, 776L) */ ((var_1_15) / (99999.24))))))) {
		/* 1021L, 273L, 750L, 779L) */ var_1_16 = (
			/* 1024L, 272L, 753L, 782L) */ ((
				var_1_17
			) - (
				/* 1026L, 271L, 755L, 784L) */ (abs (
					/* 1027L, 270L, 756L, 785L) */ ((
						-50
					) + (
						var_1_18
					))
				))
			))
		);
	} else {
		/* 1030L, 283L, 759L, 788L) */ var_1_16 = (
			/* 1033L, 282L, 762L, 791L) */ (max (
				/* 1033L, 282L, 762L, 791L) */ (
					/* 1034L, 278L, 763L, 792L) */ ((
						var_1_17
					) - (
						var_1_19
					))
				) , (
					/* 1037L, 281L, 766L, 795L) */ ((
						var_1_18
					) + (
						var_1_20
					))
				)
			))
		);
	}


	// From: Req1Batch79Filler_PE_CI
	/* 913L, 29L, 323L, 345L) */ if (var_1_12) {
		/* 915L, 23L, 325L, 347L) */ if (/* 916L, 6L, 7L, 326L, 348L) */ (! (var_1_12))) {
			/* 918L, 16L, 328L, 350L) */ var_1_1 = (
				/* 921L, 15L, 331L, 353L) */ ((
					var_1_4
				) + (
					5
				))
			);
		} else {
			/* 924L, 22L, 334L, 356L) */ var_1_1 = (
				/* 927L, 21L, 337L, 359L) */ ((
					var_1_5
				) - (
					var_1_6
				))
			);
		}
	} else {
		/* 930L, 28L, 340L, 362L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req2Batch79Filler_PE_CI
	signed long int stepLocal_1 = /* 939L, 48L, 52L, 467L, 492L) */ (min (/* 939L, 48L, 52L, 467L, 492L) */ (var_1_5) , (/* 941L, 47L, 54L, 469L, 494L) */ ((var_1_6) * (var_1_4)))));
	unsigned char stepLocal_0 = var_1_3;
	/* 962L, 143L, 461L, 486L) */ if (/* 946L, 37L, 38L, 462L, 487L) */ ((stepLocal_0) && (var_1_2))) {
		/* 957L, 137L, 465L, 490L) */ if (/* 948L, 50L, 51L, 466L, 491L) */ ((stepLocal_1) > (var_1_1))) {
			/* 952L, 68L, 473L, 498L) */ var_1_7 = (
				var_1_8
			);
		} else {
			/* 956L, 136L, 477L, 502L) */ var_1_7 = (
				200
			);
		}
	} else {
		/* 961L, 142L, 481L, 506L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req3Batch79Filler_PE_CI
	/* 970L, 201L, 564L, 596L) */ if (/* 971L, 151L, 152L, 565L, 597L) */ ((var_1_7) <= (var_1_4))) {
		/* 974L, 195L, 568L, 600L) */ if (/* 975L, 166L, 167L, 569L, 601L) */ ((/* 976L, 160L, 168L, 570L, 602L) */ ((var_1_8) / (var_1_10))) == (/* 979L, 165L, 171L, 573L, 605L) */ ((/* 980L, 163L, 172L, 574L, 606L) */ ((var_1_5) * (var_1_7))) % (var_1_11))))) {
			/* 984L, 188L, 578L, 610L) */ var_1_9 = (
				var_1_10
			);
		} else {
			/* 988L, 194L, 582L, 614L) */ var_1_9 = (
				/* 991L, 193L, 585L, 617L) */ ((
					5u
				) + (
					var_1_8
				))
			);
		}
	} else {
		/* 994L, 200L, 588L, 620L) */ var_1_9 = (
			var_1_8
		);
	}


	// From: Req6Batch79Filler_PE_CI
	/* 1042L, 317L, 858L, 872L) */ if (/* 1043L, 298L, 299L, 859L, 873L) */ ((var_1_9) <= (/* 1045L, 297L, 301L, 861L, 875L) */ ((var_1_22) - (/* 1047L, 296L, 303L, 863L, 877L) */ ((var_1_23) - (32u))))))) {
		/* 1050L, 316L, 866L, 880L) */ var_1_21 = (
			32
		);
	}


	// From: CodeObject1
	/* 270L, 21L) */ if (/* 271L, 6L, 7L) */ ((/* 272L, 4L, 8L) */ ((var_1_5) - (var_1_6))) <= (var_1_23))) {
		/* 276L, 20L) */ var_1_24 = (
			var_1_6
		);
	}


	// From: CodeObject2
	/* 281L, 32L) */ var_1_28 = (
		/* 284L, 31L) */ (max (
			/* 284L, 31L) */ (
				/* 285L, 29L) */ (min (
					/* 285L, 29L) */ (
						var_1_29
					) , (
						var_1_30
					)
				))
			) , (
				var_1_31
			)
		))
	);


	// From: CodeObject3
	/* 290L, 45L) */ var_1_32 = (
		/* 293L, 44L) */ ((
			/* 294L, 42L) */ (max (
				/* 294L, 42L) */ (
					var_1_6
				) , (
					/* 296L, 41L) */ (abs (
						var_1_6
					))
				)
			))
		) + (
			var_1_33
		))
	);


	// From: CodeObject4
	/* 299L, 140L) */ if (/* 300L, 61L, 62L) */ ((256) > (/* 302L, 60L, 64L) */ (max (/* 302L, 60L, 64L) */ (/* 303L, 58L, 65L) */ ((var_1_9) * (var_1_6))) , (var_1_11)))))) {
		/* 307L, 134L) */ if (/* 308L, 86L, 87L) */ ((var_1_11) <= (/* 310L, 85L, 89L) */ (min (/* 310L, 85L, 89L) */ (var_1_6) , (/* 312L, 84L, 91L) */ ((var_1_6) >> (var_1_37)))))))) {
			/* 315L, 128L) */ if (/* 316L, 107L, 108L) */ ((var_1_15) >= (/* 318L, 106L, 110L) */ (min (/* 318L, 106L, 110L) */ (var_1_30) , (/* 320L, 105L, 112L) */ (min (/* 320L, 105L, 112L) */ (var_1_31) , (49.5))))))))) {
				/* 323L, 127L) */ var_1_34 = (
					/* 326L, 126L) */ ((
						var_1_38
					) - (
						var_1_39
					))
				);
			}
		} else {
			/* 329L, 133L) */ var_1_34 = (
				var_1_39
			);
		}
	} else {
		/* 333L, 139L) */ var_1_34 = (
			var_1_38
		);
	}


	// From: CodeObject5
	/* 337L, 191L) */ if (/* 338L, 150L, 151L) */ ((var_1_23) < (/* 340L, 149L, 153L) */ ((var_1_6) % (/* 342L, 148L, 155L) */ (max (/* 342L, 148L, 155L) */ (var_1_23) , (var_1_37)))))))) {
		/* 345L, 185L) */ if (/* 346L, 169L, 170L) */ ((var_1_23) <= (/* 348L, 168L, 172L) */ ((var_1_23) / (var_1_37))))) {
			/* 351L, 184L) */ var_1_40 = (
				/* 354L, 183L) */ (abs (
					5
				))
			);
		}
	} else {
		/* 356L, 190L) */ var_1_40 = (
			var_1_37
		);
	}


	// From: CodeObject6
	/* 374L, 221L) */ if (/* 375L, 202L, 203L) */ ((/* 376L, 197L, 204L) */ ((var_1_11) ^ (var_1_8))) == (/* 379L, 201L, 207L) */ ((var_1_5) - (var_1_26))))) {
		/* 382L, 220L) */ var_1_41 = (
			var_1_42
		);
	}


	// From: CodeObject7
	/* 386L, 234L) */ if (var_1_35) {
		/* 388L, 233L) */ var_1_43 = (
			var_1_31
		);
	}


	// From: CodeObject8
	/* 392L, 252L) */ if (/* 393L, 240L, 241L) */ ((var_1_11) >= (-32))) {
		/* 396L, 251L) */ var_1_44 = (
			/* 399L, 250L) */ (abs (
				var_1_38
			))
		);
	}


	// From: CodeObject9
	/* 402L, 259L) */ var_1_45 = (
		var_1_6
	);


	// From: CodeObject10
	/* 407L, 267L) */ var_1_46 = (
		var_1_6
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 65535);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	assume_abort_if_not(var_1_11 != 0);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -63);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 2147483647);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 1073741823);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -1073741823);
	assume_abort_if_not(var_1_33 <= 1073741823);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 14);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_12) {
		if (/* 414L, 6L, 9L, 370L, 392L, 1058L) */ (! (var_1_12))) {
		} else {
		}
	} else {
	}
	if (/* 434L, 37L, 41L, 512L, 537L, 1078L) */ ((var_1_3) && (var_1_2))) {
		if (/* 438L, 50L, 58L, 516L, 541L, 1082L) */ ((/* 439L, 48L, 59L, 517L, 542L, 1083L) */ (min (/* 439L, 48L, 59L, 517L, 542L, 1083L) */ (var_1_5) , (/* 441L, 47L, 61L, 519L, 544L, 1085L) */ ((var_1_6) * (var_1_4)))))) > (var_1_1))) {
		} else {
		}
	} else {
	}
	if (/* 462L, 151L, 155L, 629L, 661L, 1106L) */ ((var_1_7) <= (var_1_4))) {
		if (/* 466L, 166L, 176L, 633L, 665L, 1110L) */ ((/* 467L, 160L, 177L, 634L, 666L, 1111L) */ ((var_1_8) / (var_1_10))) == (/* 470L, 165L, 180L, 637L, 669L, 1114L) */ ((/* 471L, 163L, 181L, 638L, 670L, 1115L) */ ((var_1_5) * (var_1_7))) % (var_1_11))))) {
		} else {
		}
	} else {
	}
	if (/* 491L, 219L, 227L, 716L, 729L, 1135L) */ ((/* 492L, 217L, 228L, 717L, 730L, 1136L) */ (min (/* 492L, 217L, 228L, 717L, 730L, 1136L) */ (/* 493L, 215L, 229L, 718L, 731L, 1137L) */ (max (/* 493L, 215L, 229L, 718L, 731L, 1137L) */ (var_1_13) , (9.999999999999025E12)))) , (var_1_14)))) > (var_1_15))) {
	}
	if (/* 505L, 250L, 258L, 801L, 830L, 1149L) */ ((var_1_12) && (/* 507L, 249L, 260L, 803L, 832L, 1151L) */ ((50.5) <= (/* 509L, 248L, 262L, 805L, 834L, 1153L) */ ((var_1_15) / (99999.24))))))) {
	} else {
	}
	if (/* 534L, 298L, 306L, 887L, 901L, 1178L) */ ((var_1_9) <= (/* 536L, 297L, 308L, 889L, 903L, 1180L) */ ((var_1_22) - (/* 538L, 296L, 310L, 891L, 905L, 1182L) */ ((var_1_23) - (32u))))))) {
	}
	return /* 550L) */ ((
	/* 549L) */ ((
		/* 548L) */ ((
			/* 547L) */ ((
				/* 546L) */ ((
					/* 411L, 30L, 367L, 389L, 1055L) */ ((
						var_1_12
					) ? (
						/* 413L, 24L, 369L, 391L, 1057L) */ ((
							/* 414L, 6L, 9L, 370L, 392L, 1058L) */ (! (
								var_1_12
							))
						) ? (
							/* 416L, 16L, 372L, 394L, 1060L) */ ((
								var_1_1
							) == (
								/* 416L, 16L, 372L, 394L, 1060L) */ ((signed short int) (
									/* 419L, 15L, 375L, 397L, 1063L) */ ((
										var_1_4
									) + (
										5
									))
								))
							))
						) : (
							/* 422L, 22L, 378L, 400L, 1066L) */ ((
								var_1_1
							) == (
								/* 422L, 22L, 378L, 400L, 1066L) */ ((signed short int) (
									/* 425L, 21L, 381L, 403L, 1069L) */ ((
										var_1_5
									) - (
										var_1_6
									))
								))
							))
						))
					) : (
						/* 428L, 28L, 384L, 406L, 1072L) */ ((
							var_1_1
						) == (
							/* 428L, 28L, 384L, 406L, 1072L) */ ((signed short int) (
								var_1_5
							))
						))
					))
				) && (
					/* 433L, 144L, 511L, 536L, 1077L) */ ((
						/* 434L, 37L, 41L, 512L, 537L, 1078L) */ ((
							var_1_3
						) && (
							var_1_2
						))
					) ? (
						/* 437L, 138L, 515L, 540L, 1081L) */ ((
							/* 438L, 50L, 58L, 516L, 541L, 1082L) */ ((
								/* 439L, 48L, 59L, 517L, 542L, 1083L) */ (min (
									/* 439L, 48L, 59L, 517L, 542L, 1083L) */ (
										var_1_5
									) , (
										/* 441L, 47L, 61L, 519L, 544L, 1085L) */ ((
											var_1_6
										) * (
											var_1_4
										))
									)
								))
							) > (
								var_1_1
							))
						) ? (
							/* 445L, 68L, 523L, 548L, 1089L) */ ((
								var_1_7
							) == (
								/* 445L, 68L, 523L, 548L, 1089L) */ ((unsigned char) (
									var_1_8
								))
							))
						) : (
							/* 449L, 136L, 527L, 552L, 1093L) */ ((
								var_1_7
							) == (
								/* 449L, 136L, 527L, 552L, 1093L) */ ((unsigned char) (
									200
								))
							))
						))
					) : (
						/* 453L, 142L, 531L, 556L, 1097L) */ ((
							var_1_7
						) == (
							/* 453L, 142L, 531L, 556L, 1097L) */ ((unsigned char) (
								var_1_8
							))
						))
					))
				))
			) && (
				/* 461L, 202L, 628L, 660L, 1105L) */ ((
					/* 462L, 151L, 155L, 629L, 661L, 1106L) */ ((
						var_1_7
					) <= (
						var_1_4
					))
				) ? (
					/* 465L, 196L, 632L, 664L, 1109L) */ ((
						/* 466L, 166L, 176L, 633L, 665L, 1110L) */ ((
							/* 467L, 160L, 177L, 634L, 666L, 1111L) */ ((
								var_1_8
							) / (
								var_1_10
							))
						) == (
							/* 470L, 165L, 180L, 637L, 669L, 1114L) */ ((
								/* 471L, 163L, 181L, 638L, 670L, 1115L) */ ((
									var_1_5
								) * (
									var_1_7
								))
							) % (
								var_1_11
							))
						))
					) ? (
						/* 475L, 188L, 642L, 674L, 1119L) */ ((
							var_1_9
						) == (
							/* 475L, 188L, 642L, 674L, 1119L) */ ((unsigned long int) (
								var_1_10
							))
						))
					) : (
						/* 479L, 194L, 646L, 678L, 1123L) */ ((
							var_1_9
						) == (
							/* 479L, 194L, 646L, 678L, 1123L) */ ((unsigned long int) (
								/* 482L, 193L, 649L, 681L, 1126L) */ ((
									5u
								) + (
									var_1_8
								))
							))
						))
					))
				) : (
					/* 485L, 200L, 652L, 684L, 1129L) */ ((
						var_1_9
					) == (
						/* 485L, 200L, 652L, 684L, 1129L) */ ((unsigned long int) (
							var_1_8
						))
					))
				))
			))
		) && (
			/* 490L, 239L, 715L, 728L, 1134L) */ ((
				/* 491L, 219L, 227L, 716L, 729L, 1135L) */ ((
					/* 492L, 217L, 228L, 717L, 730L, 1136L) */ (min (
						/* 492L, 217L, 228L, 717L, 730L, 1136L) */ (
							/* 493L, 215L, 229L, 718L, 731L, 1137L) */ (max (
								/* 493L, 215L, 229L, 718L, 731L, 1137L) */ (
									var_1_13
								) , (
									9.999999999999025E12
								)
							))
						) , (
							var_1_14
						)
					))
				) > (
					var_1_15
				))
			) ? (
				/* 498L, 237L, 723L, 736L, 1142L) */ ((
					var_1_12
				) == (
					/* 498L, 237L, 723L, 736L, 1142L) */ ((unsigned char) (
						0
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 504L, 285L, 800L, 829L, 1148L) */ ((
			/* 505L, 250L, 258L, 801L, 830L, 1149L) */ ((
				var_1_12
			) && (
				/* 507L, 249L, 260L, 803L, 832L, 1151L) */ ((
					50.5
				) <= (
					/* 509L, 248L, 262L, 805L, 834L, 1153L) */ ((
						var_1_15
					) / (
						99999.24
					))
				))
			))
		) ? (
			/* 512L, 273L, 808L, 837L, 1156L) */ ((
				var_1_16
			) == (
				/* 512L, 273L, 808L, 837L, 1156L) */ ((signed char) (
					/* 515L, 272L, 811L, 840L, 1159L) */ ((
						var_1_17
					) - (
						/* 517L, 271L, 813L, 842L, 1161L) */ (abs (
							/* 518L, 270L, 814L, 843L, 1162L) */ ((
								-50
							) + (
								var_1_18
							))
						))
					))
				))
			))
		) : (
			/* 521L, 283L, 817L, 846L, 1165L) */ ((
				var_1_16
			) == (
				/* 521L, 283L, 817L, 846L, 1165L) */ ((signed char) (
					/* 524L, 282L, 820L, 849L, 1168L) */ (max (
						/* 524L, 282L, 820L, 849L, 1168L) */ (
							/* 525L, 278L, 821L, 850L, 1169L) */ ((
								var_1_17
							) - (
								var_1_19
							))
						) , (
							/* 528L, 281L, 824L, 853L, 1172L) */ ((
								var_1_18
							) + (
								var_1_20
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 533L, 318L, 886L, 900L, 1177L) */ ((
		/* 534L, 298L, 306L, 887L, 901L, 1178L) */ ((
			var_1_9
		) <= (
			/* 536L, 297L, 308L, 889L, 903L, 1180L) */ ((
				var_1_22
			) - (
				/* 538L, 296L, 310L, 891L, 905L, 1182L) */ ((
					var_1_23
				) - (
					32u
				))
			))
		))
	) ? (
		/* 541L, 316L, 894L, 908L, 1185L) */ ((
			var_1_21
		) == (
			/* 541L, 316L, 894L, 908L, 1185L) */ ((signed char) (
				32
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
