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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73Filler_PE_CN.c", 13, "reach_error"); }
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
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
double var_1_9 = 5.6;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 5;
double var_1_13 = 9999999.62;
double var_1_14 = 49.125;
signed long int var_1_15 = 25;
float var_1_16 = 128.8;
float var_1_17 = 0.0;
float var_1_18 = 255.75;
float var_1_19 = 4.75;
float var_1_20 = 256.375;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 32;
double var_1_25 = 31.6;
unsigned char var_1_26 = 0;
signed short int var_1_27 = 16;
signed short int var_1_28 = 10;
double var_1_29 = 99.25;
double var_1_30 = 255.5;
signed long int var_1_31 = 8;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 50;
double var_1_35 = 63.4;
double var_1_36 = 7.8;
unsigned char var_1_37 = 50;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 2;
unsigned short int var_1_40 = 8;
signed short int var_1_41 = -64;
signed long int var_1_42 = -5;
float var_1_43 = 15.25;
signed long int var_1_44 = 100;
unsigned short int var_1_45 = 256;
signed short int var_1_46 = 5;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 7.325;
unsigned char last_1_var_1_22 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch73Filler_PE_CN
	/* 21L, 149L, 479L, 503L, 939L, 1018L) */ if (/* 11L, 114L, 115L, 480L, 504L, 929L, 1019L) */ ((/* 5L, 108L, 116L, 481L, 505L, 923L, 1020L) */ ((/* 3L, 106L, 117L, 482L, 506L, 921L, 1021L) */ ((var_1_8) + (last_1_var_1_1))) / (63.75f))) < (/* 10L, 113L, 121L, 486L, 510L, 928L, 1026L) */ (min (/* 10L, 113L, 121L, 486L, 510L, 928L, 1026L) */ (var_1_5) , (/* 9L, 112L, 123L, 488L, 512L, 927L, 1028L) */ ((var_1_3) - (var_1_4)))))))) {
		/* 16L, 140L, 491L, 515L, 934L, 1031L) */ var_1_15 = (
			last_1_var_1_22
		);
	} else {
		/* 20L, 148L, 495L, 519L, 938L, 1036L) */ var_1_15 = (
			var_1_11
		);
	}


	// From: Req2Batch73Filler_PE_CN
	/* 995L, 84L, 396L, 406L) */ if (/* 996L, 73L, 74L, 397L, 407L) */ (! (var_1_7))) {
		/* 998L, 83L, 399L, 409L) */ var_1_10 = (
			/* 1001L, 82L, 402L, 412L) */ (max (
				/* 1001L, 82L, 402L, 412L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	}


	// From: Req3Batch73Filler_PE_CN
	/* 1006L, 97L, 437L, 447L) */ var_1_13 = (
		/* 1009L, 96L, 440L, 450L) */ (min (
			/* 1009L, 96L, 440L, 450L) */ (
				var_1_8
			) , (
				/* 1011L, 95L, 442L, 452L) */ (min (
					/* 1011L, 95L, 442L, 452L) */ (
						var_1_9
					) , (
						var_1_14
					)
				))
			)
		))
	);


	// From: Req5Batch73Filler_PE_CN
	unsigned char stepLocal_0 = /* 1042L, 166L, 172L, 577L, 606L) */ ((var_1_12) > (var_1_11));
	/* 1070L, 209L, 572L, 601L) */ if (/* 1049L, 167L, 168L, 573L, 602L) */ ((/* 1048L, 163L, 169L, 574L, 603L) */ ((var_1_8) >= (var_1_4))) || (stepLocal_0))) {
		/* 1063L, 201L, 580L, 609L) */ if (/* 1052L, 184L, 185L, 581L, 610L) */ ((var_1_13) != (var_1_8))) {
			/* 1062L, 200L, 584L, 613L) */ var_1_16 = (
				/* 1061L, 199L, 587L, 616L) */ ((
					1.975f
				) + (
					/* 1060L, 198L, 589L, 618L) */ ((
						/* 1058L, 196L, 590L, 619L) */ ((
							var_1_17
						) - (
							var_1_18
						))
					) - (
						var_1_19
					))
				))
			);
		}
	} else {
		/* 1069L, 208L, 594L, 623L) */ var_1_16 = (
			/* 1068L, 207L, 597L, 626L) */ ((
				var_1_19
			) - (
				var_1_18
			))
		);
	}


	// From: Req1Batch73Filler_PE_CN
	/* 970L, 66L, 296L, 321L) */ if (/* 971L, 10L, 11L, 297L, 322L) */ ((var_1_13) > (/* 973L, 9L, 13L, 299L, 324L) */ ((/* 974L, 5L, 14L, 300L, 325L) */ ((var_1_3) - (var_1_4))) / (/* 977L, 8L, 17L, 303L, 328L) */ (max (/* 977L, 8L, 17L, 303L, 328L) */ (var_1_5) , (var_1_6)))))))) {
		/* 980L, 60L, 306L, 331L) */ if (var_1_7) {
			/* 982L, 35L, 308L, 333L) */ var_1_1 = (
				var_1_8
			);
		} else {
			/* 986L, 59L, 312L, 337L) */ var_1_1 = (
				var_1_9
			);
		}
	} else {
		/* 990L, 65L, 316L, 341L) */ var_1_1 = (
			var_1_9
		);
	}


	// From: Req6Batch73Filler_PE_CN
	/* 1075L, 236L, 689L, 703L) */ if (/* 1076L, 219L, 220L, 690L, 704L) */ ((var_1_6) <= (/* 1078L, 218L, 222L, 692L, 706L) */ (max (/* 1078L, 218L, 222L, 692L, 706L) */ (var_1_5) , (var_1_1)))))) {
		/* 1081L, 235L, 695L, 709L) */ var_1_20 = (
			/* 1084L, 234L, 698L, 712L) */ ((
				var_1_18
			) + (
				var_1_19
			))
		);
	}


	// From: Req7Batch73Filler_PE_CN
	unsigned char stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = var_1_7;
	/* 1119L, 292L, 802L, 831L) */ if (/* 1097L, 248L, 249L, 803L, 832L) */ ((/* 1096L, 246L, 250L, 804L, 833L) */ ((var_1_15) == (var_1_10))) && (stepLocal_1))) {
		/* 1114L, 286L, 808L, 837L) */ if (/* 1101L, 263L, 264L, 809L, 838L) */ ((stepLocal_2) || (/* 1100L, 262L, 266L, 811L, 840L) */ ((var_1_1) <= (var_1_13))))) {
			/* 1109L, 281L, 814L, 843L) */ var_1_22 = (
				/* 1108L, 280L, 817L, 846L) */ (min (
					/* 1108L, 280L, 817L, 846L) */ (
						/* 1106L, 278L, 818L, 847L) */ ((
							var_1_23
						) + (
							var_1_24
						))
					) , (
						var_1_11
					)
				))
			);
		} else {
			/* 1113L, 285L, 822L, 851L) */ var_1_22 = (
				var_1_23
			);
		}
	} else {
		/* 1118L, 291L, 826L, 855L) */ var_1_22 = (
			var_1_12
		);
	}


	// From: CodeObject1
	/* 135L) */ if (/* 59L, 58L) */ ((var_1_26) && (/* 61L, 57L) */ ((var_1_27) > (var_1_28))))) {
		/* 72L) */ var_1_25 = (
			var_1_29
		);
	} else {
		/* 133L) */ if (/* 76L, 75L) */ ((var_1_29) == (var_1_30))) {
			/* 131L) */ if (/* 85L, 84L) */ ((var_1_29) >= (var_1_30))) {
				/* 94L) */ var_1_25 = (
					var_1_29
				);
			} else {
				/* 130L) */ var_1_25 = (
					64.6
				);
			}
		}
	}


	// From: CodeObject2
	/* 142L) */ var_1_31 = (
		var_1_28
	);


	// From: CodeObject3
	/* 150L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject4
	/* 183L) */ if (/* 161L, 160L) */ ((/* 162L, 156L) */ (abs (9.25))) <= (/* 164L, 159L) */ ((var_1_35) - (var_1_36))))) {
		/* 182L) */ var_1_34 = (
			/* 181L) */ (max (
				/* 181L) */ (
					/* 179L) */ ((
						128
					) - (
						/* 178L) */ ((
							var_1_37
						) + (
							var_1_38
						))
					))
				) , (
					var_1_39
				)
			))
		);
	}


	// From: CodeObject5
	/* 217L) */ if (/* 207L, 206L) */ ((var_1_29) <= (var_1_36))) {
		/* 216L) */ var_1_40 = (
			var_1_34
		);
	}


	// From: CodeObject6
	/* 226L) */ var_1_41 = (
		/* 225L) */ (max (
			/* 225L) */ (
				var_1_34
			) , (
				var_1_37
			)
		))
	);


	// From: CodeObject7
	/* 274L) */ if (/* 238L, 237L) */ ((/* 239L, 235L) */ ((var_1_31) ^ (var_1_41))) < (var_1_37))) {
		/* 272L) */ if (/* 256L, 255L) */ ((var_1_35) <= (var_1_30))) {
			/* 267L) */ var_1_42 = (
				/* 266L) */ ((
					var_1_38
				) - (
					var_1_34
				))
			);
		} else {
			/* 271L) */ var_1_42 = (
				var_1_39
			);
		}
	}


	// From: CodeObject8
	/* 281L) */ var_1_43 = (
		var_1_29
	);


	// From: CodeObject9
	/* 310L) */ if (/* 291L, 290L) */ ((/* 292L, 288L) */ ((var_1_38) << (var_1_31))) > (var_1_34))) {
		/* 309L) */ var_1_44 = (
			/* 308L) */ (min (
				/* 308L) */ (
					var_1_27
				) , (
					/* 307L) */ (max (
						/* 307L) */ (
							var_1_41
						) , (
							/* 306L) */ (abs (
								var_1_28
							))
						)
					))
				)
			))
		);
	}


	// From: CodeObject10
	/* 322L) */ if (var_1_33) {
		/* 321L) */ var_1_45 = (
			/* 320L) */ (abs (
				var_1_37
			))
		);
	}


	// From: CodeObject11
	/* 360L) */ if (/* 329L, 328L) */ ((var_1_37) <= (var_1_44))) {
		/* 340L) */ var_1_46 = (
			/* 339L) */ ((
				10
			) - (
				var_1_39
			))
		);
	} else {
		/* 358L) */ if (/* 344L, 343L) */ ((var_1_25) <= (var_1_35))) {
			/* 353L) */ var_1_46 = (
				var_1_34
			);
		} else {
			/* 357L) */ var_1_46 = (
				var_1_37
			);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(var_1_5 != 0.0F);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 127);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32768);
	assume_abort_if_not(var_1_27 <= 32767);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 64);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 363L, 10L, 20L, 347L, 372L, 1125L) */ ((var_1_13) > (/* 365L, 9L, 22L, 349L, 374L, 1127L) */ ((/* 366L, 5L, 23L, 350L, 375L, 1128L) */ ((var_1_3) - (var_1_4))) / (/* 369L, 8L, 26L, 353L, 378L, 1131L) */ (max (/* 369L, 8L, 26L, 353L, 378L, 1131L) */ (var_1_5) , (var_1_6)))))))) {
		if (var_1_7) {
		} else {
		}
	} else {
	}
	if (/* 388L, 73L, 76L, 417L, 427L, 1150L) */ (! (var_1_7))) {
	}
	if (/* 411L, 114L, 126L, 528L, 552L, 955L, 1173L, 37L) */ ((/* 412L, 108L, 127L, 529L, 553L, 949L, 1174L, 31L) */ ((/* 413L, 106L, 128L, 530L, 554L, 947L, 1175L, 29L) */ ((var_1_8) + (last_1_var_1_1))) / (63.75f))) < (/* 418L, 113L, 132L, 534L, 558L, 954L, 1180L, 36L) */ (min (/* 418L, 113L, 132L, 534L, 558L, 954L, 1180L, 36L) */ (var_1_5) , (/* 420L, 112L, 134L, 536L, 560L, 953L, 1182L, 35L) */ ((var_1_3) - (var_1_4)))))))) {
	} else {
	}
	if (/* 434L, 167L, 175L, 631L, 660L, 1196L) */ ((/* 435L, 163L, 176L, 632L, 661L, 1197L) */ ((var_1_8) >= (var_1_4))) || (/* 438L, 166L, 179L, 635L, 664L, 1200L) */ ((var_1_12) > (var_1_11))))) {
		if (/* 442L, 184L, 188L, 639L, 668L, 1204L) */ ((var_1_13) != (var_1_8))) {
		}
	} else {
	}
	if (/* 464L, 219L, 225L, 718L, 732L, 1226L) */ ((var_1_6) <= (/* 466L, 218L, 227L, 720L, 734L, 1228L) */ (max (/* 466L, 218L, 227L, 720L, 734L, 1228L) */ (var_1_5) , (var_1_1)))))) {
	}
	if (/* 477L, 248L, 254L, 861L, 890L, 1239L) */ ((/* 478L, 246L, 255L, 862L, 891L, 1240L) */ ((var_1_15) == (var_1_10))) && (var_1_7))) {
		if (/* 483L, 263L, 269L, 867L, 896L, 1245L) */ ((var_1_7) || (/* 485L, 262L, 271L, 869L, 898L, 1247L) */ ((var_1_1) <= (var_1_13))))) {
		} else {
		}
	} else {
	}
	return /* 510L) */ ((
	/* 509L) */ ((
		/* 508L) */ ((
			/* 507L) */ ((
				/* 506L) */ ((
					/* 505L) */ ((
						/* 362L, 67L, 346L, 371L, 1124L) */ ((
							/* 363L, 10L, 20L, 347L, 372L, 1125L) */ ((
								var_1_13
							) > (
								/* 365L, 9L, 22L, 349L, 374L, 1127L) */ ((
									/* 366L, 5L, 23L, 350L, 375L, 1128L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								) / (
									/* 369L, 8L, 26L, 353L, 378L, 1131L) */ (max (
										/* 369L, 8L, 26L, 353L, 378L, 1131L) */ (
											var_1_5
										) , (
											var_1_6
										)
									))
								))
							))
						) ? (
							/* 372L, 61L, 356L, 381L, 1134L) */ ((
								var_1_7
							) ? (
								/* 374L, 35L, 358L, 383L, 1136L) */ ((
									var_1_1
								) == (
									/* 374L, 35L, 358L, 383L, 1136L) */ ((double) (
										var_1_8
									))
								))
							) : (
								/* 378L, 59L, 362L, 387L, 1140L) */ ((
									var_1_1
								) == (
									/* 378L, 59L, 362L, 387L, 1140L) */ ((double) (
										var_1_9
									))
								))
							))
						) : (
							/* 382L, 65L, 366L, 391L, 1144L) */ ((
								var_1_1
							) == (
								/* 382L, 65L, 366L, 391L, 1144L) */ ((double) (
									var_1_9
								))
							))
						))
					) && (
						/* 387L, 85L, 416L, 426L, 1149L) */ ((
							/* 388L, 73L, 76L, 417L, 427L, 1150L) */ (! (
								var_1_7
							))
						) ? (
							/* 390L, 83L, 419L, 429L, 1152L) */ ((
								var_1_10
							) == (
								/* 390L, 83L, 419L, 429L, 1152L) */ ((unsigned char) (
									/* 393L, 82L, 422L, 432L, 1155L) */ (max (
										/* 393L, 82L, 422L, 432L, 1155L) */ (
											var_1_11
										) , (
											var_1_12
										)
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 398L, 97L, 457L, 467L, 1160L) */ ((
						var_1_13
					) == (
						/* 398L, 97L, 457L, 467L, 1160L) */ ((double) (
							/* 401L, 96L, 460L, 470L, 1163L) */ (min (
								/* 401L, 96L, 460L, 470L, 1163L) */ (
									var_1_8
								) , (
									/* 403L, 95L, 462L, 472L, 1165L) */ (min (
										/* 403L, 95L, 462L, 472L, 1165L) */ (
											var_1_9
										) , (
											var_1_14
										)
									))
								)
							))
						))
					))
				))
			) && (
				/* 410L, 150L, 527L, 551L, 965L, 1172L, 47L) */ ((
					/* 411L, 114L, 126L, 528L, 552L, 955L, 1173L, 37L) */ ((
						/* 412L, 108L, 127L, 529L, 553L, 949L, 1174L, 31L) */ ((
							/* 413L, 106L, 128L, 530L, 554L, 947L, 1175L, 29L) */ ((
								var_1_8
							) + (
								last_1_var_1_1
							))
						) / (
							63.75f
						))
					) < (
						/* 418L, 113L, 132L, 534L, 558L, 954L, 1180L, 36L) */ (min (
							/* 418L, 113L, 132L, 534L, 558L, 954L, 1180L, 36L) */ (
								var_1_5
							) , (
								/* 420L, 112L, 134L, 536L, 560L, 953L, 1182L, 35L) */ ((
									var_1_3
								) - (
									var_1_4
								))
							)
						))
					))
				) ? (
					/* 423L, 140L, 539L, 563L, 960L, 1185L, 42L) */ ((
						var_1_15
					) == (
						/* 423L, 140L, 539L, 563L, 960L, 1185L, 42L) */ ((signed long int) (
							last_1_var_1_22
						))
					))
				) : (
					/* 428L, 148L, 543L, 567L, 964L, 1190L, 46L) */ ((
						var_1_15
					) == (
						/* 428L, 148L, 543L, 567L, 964L, 1190L, 46L) */ ((signed long int) (
							var_1_11
						))
					))
				))
			))
		) && (
			/* 433L, 210L, 630L, 659L, 1195L) */ ((
				/* 434L, 167L, 175L, 631L, 660L, 1196L) */ ((
					/* 435L, 163L, 176L, 632L, 661L, 1197L) */ ((
						var_1_8
					) >= (
						var_1_4
					))
				) || (
					/* 438L, 166L, 179L, 635L, 664L, 1200L) */ ((
						var_1_12
					) > (
						var_1_11
					))
				))
			) ? (
				/* 441L, 202L, 638L, 667L, 1203L) */ ((
					/* 442L, 184L, 188L, 639L, 668L, 1204L) */ ((
						var_1_13
					) != (
						var_1_8
					))
				) ? (
					/* 445L, 200L, 642L, 671L, 1207L) */ ((
						var_1_16
					) == (
						/* 445L, 200L, 642L, 671L, 1207L) */ ((float) (
							/* 448L, 199L, 645L, 674L, 1210L) */ ((
								1.975f
							) + (
								/* 450L, 198L, 647L, 676L, 1212L) */ ((
									/* 451L, 196L, 648L, 677L, 1213L) */ ((
										var_1_17
									) - (
										var_1_18
									))
								) - (
									var_1_19
								))
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 455L, 208L, 652L, 681L, 1217L) */ ((
					var_1_16
				) == (
					/* 455L, 208L, 652L, 681L, 1217L) */ ((float) (
						/* 458L, 207L, 655L, 684L, 1220L) */ ((
							var_1_19
						) - (
							var_1_18
						))
					))
				))
			))
		))
	) && (
		/* 463L, 237L, 717L, 731L, 1225L) */ ((
			/* 464L, 219L, 225L, 718L, 732L, 1226L) */ ((
				var_1_6
			) <= (
				/* 466L, 218L, 227L, 720L, 734L, 1228L) */ (max (
					/* 466L, 218L, 227L, 720L, 734L, 1228L) */ (
						var_1_5
					) , (
						var_1_1
					)
				))
			))
		) ? (
			/* 469L, 235L, 723L, 737L, 1231L) */ ((
				var_1_20
			) == (
				/* 469L, 235L, 723L, 737L, 1231L) */ ((float) (
					/* 472L, 234L, 726L, 740L, 1234L) */ ((
						var_1_18
					) + (
						var_1_19
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 476L, 293L, 860L, 889L, 1238L) */ ((
		/* 477L, 248L, 254L, 861L, 890L, 1239L) */ ((
			/* 478L, 246L, 255L, 862L, 891L, 1240L) */ ((
				var_1_15
			) == (
				var_1_10
			))
		) && (
			var_1_7
		))
	) ? (
		/* 482L, 287L, 866L, 895L, 1244L) */ ((
			/* 483L, 263L, 269L, 867L, 896L, 1245L) */ ((
				var_1_7
			) || (
				/* 485L, 262L, 271L, 869L, 898L, 1247L) */ ((
					var_1_1
				) <= (
					var_1_13
				))
			))
		) ? (
			/* 488L, 281L, 872L, 901L, 1250L) */ ((
				var_1_22
			) == (
				/* 488L, 281L, 872L, 901L, 1250L) */ ((unsigned char) (
					/* 491L, 280L, 875L, 904L, 1253L) */ (min (
						/* 491L, 280L, 875L, 904L, 1253L) */ (
							/* 492L, 278L, 876L, 905L, 1254L) */ ((
								var_1_23
							) + (
								var_1_24
							))
						) , (
							var_1_11
						)
					))
				))
			))
		) : (
			/* 496L, 285L, 880L, 909L, 1258L) */ ((
				var_1_22
			) == (
				/* 496L, 285L, 880L, 909L, 1258L) */ ((unsigned char) (
					var_1_23
				))
			))
		))
	) : (
		/* 500L, 291L, 884L, 913L, 1262L) */ ((
			var_1_22
		) == (
			/* 500L, 291L, 884L, 913L, 1262L) */ ((unsigned char) (
				var_1_12
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
