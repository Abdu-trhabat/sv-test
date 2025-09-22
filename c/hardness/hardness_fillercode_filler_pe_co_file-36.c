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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Filler_PE_CO.c", 13, "reach_error"); }
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
double var_1_1 = 8.75;
unsigned char var_1_2 = 1;
double var_1_3 = 9.6;
double var_1_4 = 7.625;
double var_1_5 = 1.5;
double var_1_6 = 63.17;
double var_1_7 = 15.5;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 45624;
unsigned short int var_1_10 = 39447;
unsigned short int var_1_11 = 10;
double var_1_12 = 255.5;
double var_1_13 = 0.0;
double var_1_14 = 127.5;
float var_1_15 = 8.2;
float var_1_16 = 2.8;
signed short int var_1_17 = 8;
double var_1_18 = 24.8;
signed short int var_1_19 = -256;
signed short int var_1_20 = 8;
signed short int var_1_21 = 16;
unsigned short int var_1_22 = 2;
signed long int var_1_23 = -100;
unsigned short int var_1_24 = 16;
unsigned char var_1_25 = 0;
unsigned short int var_1_26 = 1;
unsigned short int var_1_27 = 2;
double var_1_28 = 199.6;
signed long int var_1_29 = 32;
double var_1_30 = 5.5;
double var_1_31 = 32.5;
double var_1_32 = 128.75;
signed char var_1_33 = 5;
unsigned char var_1_34 = 0;
signed char var_1_35 = -1;
double var_1_36 = 0.6;
double var_1_37 = 64.6;
double var_1_38 = 100.6;
double var_1_39 = 16.5;
double var_1_40 = 0.2;
float var_1_41 = 31.45;
unsigned short int var_1_42 = 128;
signed short int var_1_43 = -10;
signed char var_1_44 = 16;
signed short int var_1_45 = 8;
signed short int var_1_46 = 10000;
signed short int var_1_47 = -4;
float var_1_49 = 4.2;
unsigned char var_1_50 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch36Filler_PE_CO
	/* 863L, 17L, 279L, 294L) */ if (var_1_2) {
		/* 865L, 16L, 281L, 296L) */ var_1_1 = (
			/* 868L, 15L, 284L, 299L) */ (min (
				/* 868L, 15L, 284L, 299L) */ (
					/* 869L, 13L, 285L, 300L) */ (max (
						/* 869L, 13L, 285L, 300L) */ (
							/* 870L, 9L, 286L, 301L) */ ((
								var_1_3
							) - (
								var_1_4
							))
						) , (
							/* 873L, 12L, 289L, 304L) */ (min (
								/* 873L, 12L, 289L, 304L) */ (
									var_1_5
								) , (
									var_1_6
								)
							))
						)
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: Req2Batch36Filler_PE_CO
	/* 883L, 30L, 344L, 358L) */ var_1_8 = (
		/* 886L, 29L, 347L, 361L) */ ((
			/* 887L, 27L, 348L, 362L) */ (min (
				/* 887L, 27L, 348L, 362L) */ (
					var_1_9
				) , (
					var_1_10
				)
			))
		) - (
			var_1_11
		))
	);


	// From: Req3Batch36Filler_PE_CO
	/* 892L, 58L, 395L, 408L) */ if (var_1_2) {
		/* 894L, 57L, 397L, 410L) */ var_1_12 = (
			/* 897L, 56L, 400L, 413L) */ (min (
				/* 897L, 56L, 400L, 413L) */ (
					/* 898L, 54L, 401L, 414L) */ ((
						var_1_3
					) - (
						/* 900L, 53L, 403L, 416L) */ ((
							var_1_13
						) - (
							128.68
						))
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: Req4Batch36Filler_PE_CO
	/* 906L, 67L, 448L, 454L) */ var_1_14 = (
		var_1_6
	);


	// From: Req6Batch36Filler_PE_CO
	/* 930L, 130L, 544L, 556L) */ if (/* 931L, 117L, 118L, 545L, 557L) */ ((var_1_3) <= (var_1_4))) {
		/* 934L, 129L, 548L, 560L) */ var_1_16 = (
			/* 937L, 128L, 551L, 563L) */ (min (
				/* 937L, 128L, 551L, 563L) */ (
					var_1_6
				) , (
					var_1_4
				)
			))
		);
	}


	// From: Req7Batch36Filler_PE_CO
	signed long int stepLocal_0 = /* 942L, 159L, 163L, 601L, 633L) */ ((var_1_10) + (var_1_9));
	/* 973L, 194L, 591L, 623L) */ if (/* 952L, 142L, 143L, 592L, 624L) */ ((var_1_7) >= (/* 951L, 141L, 145L, 594L, 626L) */ ((var_1_5) / (/* 950L, 140L, 147L, 596L, 628L) */ (min (/* 950L, 140L, 147L, 596L, 628L) */ (var_1_13) , (var_1_18)))))))) {
		/* 968L, 188L, 599L, 631L) */ if (/* 954L, 161L, 162L, 600L, 632L) */ ((stepLocal_0) <= (var_1_11))) {
			/* 960L, 179L, 605L, 637L) */ if (var_1_2) {
				/* 959L, 178L, 607L, 639L) */ var_1_17 = (
					var_1_19
				);
			}
		} else {
			/* 967L, 187L, 611L, 643L) */ var_1_17 = (
				/* 966L, 186L, 614L, 646L) */ ((
					var_1_20
				) - (
					/* 965L, 185L, 616L, 648L) */ (abs (
						var_1_21
					))
				))
			);
		}
	} else {
		/* 972L, 193L, 618L, 650L) */ var_1_17 = (
			var_1_21
		);
	}


	// From: Req8Batch36Filler_PE_CO
	/* 978L, 237L, 720L, 740L) */ if (/* 979L, 210L, 211L, 721L, 741L) */ ((/* 980L, 204L, 212L, 722L, 742L) */ ((var_1_11) + (var_1_20))) <= (/* 983L, 209L, 215L, 725L, 745L) */ ((/* 984L, 207L, 216L, 726L, 746L) */ ((var_1_21) * (var_1_23))) * (var_1_19))))) {
		/* 988L, 236L, 730L, 750L) */ var_1_22 = (
			/* 991L, 235L, 733L, 753L) */ (max (
				/* 991L, 235L, 733L, 753L) */ (
					/* 992L, 233L, 734L, 754L) */ ((
						var_1_9
					) - (
						var_1_11
					))
				) , (
					var_1_10
				)
			))
		);
	}


	// From: Req9Batch36Filler_PE_CO
	/* 1000L, 269L, 802L, 818L) */ if (/* 1001L, 247L, 248L, 803L, 819L) */ ((var_1_13) < (var_1_18))) {
		/* 1004L, 267L, 806L, 822L) */ if (/* 1005L, 256L, 257L, 807L, 823L) */ ((var_1_2) || (var_1_25))) {
			/* 1008L, 266L, 810L, 826L) */ var_1_24 = (
				128
			);
		}
	}


	// From: Req5Batch36Filler_PE_CO
	/* 914L, 103L, 474L, 492L) */ if (/* 915L, 76L, 77L, 475L, 493L) */ ((var_1_13) >= (var_1_12))) {
		/* 918L, 101L, 478L, 496L) */ if (var_1_2) {
			/* 920L, 99L, 480L, 498L) */ if (/* 921L, 88L, 89L, 481L, 499L) */ ((var_1_22) == (var_1_11))) {
				/* 924L, 98L, 484L, 502L) */ var_1_15 = (
					10.975f
				);
			}
		}
	}


	// From: CodeObject1
	/* 213L, 5L) */ var_1_26 = (
		var_1_27
	);


	// From: CodeObject2
	/* 217L, 40L) */ if (/* 218L, 16L, 17L) */ ((/* 219L, 14L, 18L) */ ((/* 220L, 12L, 19L) */ ((var_1_24) ^ (8))) * (var_1_27))) <= (var_1_29))) {
		/* 225L, 39L) */ var_1_28 = (
			/* 228L, 38L) */ (abs (
				/* 229L, 37L) */ (min (
					/* 229L, 37L) */ (
						/* 230L, 35L) */ (max (
							/* 230L, 35L) */ (
								var_1_30
							) , (
								var_1_31
							)
						))
					) , (
						var_1_32
					)
				))
			))
		);
	}


	// From: CodeObject3
	/* 234L, 51L) */ if (var_1_34) {
		/* 236L, 50L) */ var_1_33 = (
			var_1_35
		);
	}


	// From: CodeObject4
	/* 240L, 91L) */ if (/* 241L, 57L, 58L) */ ((var_1_27) > (var_1_22))) {
		/* 244L, 74L) */ var_1_36 = (
			/* 247L, 73L) */ (abs (
				/* 248L, 72L) */ (min (
					/* 248L, 72L) */ (
						/* 249L, 68L) */ ((
							var_1_37
						) - (
							var_1_38
						))
					) , (
						/* 252L, 71L) */ ((
							var_1_39
						) + (
							var_1_40
						))
					)
				))
			))
		);
	} else {
		/* 255L, 89L) */ if (/* 256L, 77L, 78L) */ ((var_1_27) != (var_1_29))) {
			/* 259L, 88L) */ var_1_36 = (
				/* 262L, 87L) */ (abs (
					99999.5
				))
			);
		}
	}


	// From: CodeObject5
	/* 264L, 127L) */ if (/* 265L, 101L, 102L) */ ((var_1_27) < (/* 267L, 100L, 104L) */ ((/* 268L, 98L, 105L) */ (min (/* 268L, 98L, 105L) */ (var_1_24) , (var_1_29)))) / (var_1_42))))) {
		/* 272L, 121L) */ var_1_41 = (
			/* 275L, 120L) */ ((
				var_1_39
			) + (
				5.5f
			))
		);
	} else {
		/* 278L, 126L) */ var_1_41 = (
			/* 281L, 125L) */ (abs (
				var_1_40
			))
		);
	}


	// From: CodeObject6
	/* 283L, 170L) */ if (/* 284L, 137L, 138L) */ ((/* 285L, 134L, 139L) */ ((/* 286L, 132L, 140L) */ (abs (var_1_27))) >> (var_1_44))) >= (/* 289L, 136L, 143L) */ (abs (var_1_42))))) {
		/* 291L, 164L) */ var_1_43 = (
			/* 294L, 163L) */ (max (
				/* 294L, 163L) */ (
					/* 295L, 157L) */ ((
						var_1_44
					) - (
						/* 297L, 156L) */ (abs (
							var_1_35
						))
					))
				) , (
					/* 299L, 162L) */ ((
						/* 300L, 160L) */ ((
							var_1_45
						) + (
							5
						))
					) - (
						var_1_46
					))
				)
			))
		);
	} else {
		/* 304L, 169L) */ var_1_43 = (
			/* 307L, 168L) */ (abs (
				var_1_24
			))
		);
	}


	// From: CodeObject7
	/* 309L, 194L) */ if (/* 310L, 178L, 179L) */ ((var_1_37) >= (/* 312L, 177L, 181L) */ ((var_1_31) * (var_1_14))))) {
		/* 315L, 193L) */ var_1_47 = (
			/* 318L, 192L) */ (abs (
				var_1_45
			))
		);
	}


	// From: CodeObject8
	/* 321L, 201L) */ var_1_49 = (
		var_1_31
	);


	// From: CodeObject9
	/* 326L, 209L) */ var_1_50 = (
		var_1_44
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32767);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -32766);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65534);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483648);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -127);
	assume_abort_if_not(var_1_35 <= 126);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65535);
	assume_abort_if_not(var_1_42 != 0);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 30);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (var_1_2) {
	}
	if (/* 382L, 76L, 80L, 511L, 529L, 1065L) */ ((var_1_13) >= (var_1_12))) {
		if (var_1_2) {
			if (/* 388L, 88L, 92L, 517L, 535L, 1071L) */ ((var_1_22) == (var_1_11))) {
			}
		}
	}
	if (/* 398L, 117L, 121L, 569L, 581L, 1081L) */ ((var_1_3) <= (var_1_4))) {
	}
	if (/* 409L, 142L, 150L, 656L, 688L, 1092L) */ ((var_1_7) >= (/* 411L, 141L, 152L, 658L, 690L, 1094L) */ ((var_1_5) / (/* 413L, 140L, 154L, 660L, 692L, 1096L) */ (min (/* 413L, 140L, 154L, 660L, 692L, 1096L) */ (var_1_13) , (var_1_18)))))))) {
		if (/* 417L, 161L, 167L, 664L, 696L, 1100L) */ ((/* 418L, 159L, 168L, 665L, 697L, 1101L) */ ((var_1_10) + (var_1_9))) <= (var_1_11))) {
			if (var_1_2) {
			}
		} else {
		}
	} else {
	}
	if (/* 442L, 210L, 220L, 761L, 781L, 1125L) */ ((/* 443L, 204L, 221L, 762L, 782L, 1126L) */ ((var_1_11) + (var_1_20))) <= (/* 446L, 209L, 224L, 765L, 785L, 1129L) */ ((/* 447L, 207L, 225L, 766L, 786L, 1130L) */ ((var_1_21) * (var_1_23))) * (var_1_19))))) {
	}
	if (/* 464L, 247L, 251L, 835L, 851L, 1147L) */ ((var_1_13) < (var_1_18))) {
		if (/* 468L, 256L, 260L, 839L, 855L, 1151L) */ ((var_1_2) || (var_1_25))) {
		}
	}
	return /* 483L) */ ((
	/* 482L) */ ((
		/* 481L) */ ((
			/* 480L) */ ((
				/* 479L) */ ((
					/* 478L) */ ((
						/* 477L) */ ((
							/* 476L) */ ((
								/* 330L, 18L, 309L, 324L, 1013L) */ ((
									var_1_2
								) ? (
									/* 332L, 16L, 311L, 326L, 1015L) */ ((
										var_1_1
									) == (
										/* 332L, 16L, 311L, 326L, 1015L) */ ((double) (
											/* 335L, 15L, 314L, 329L, 1018L) */ (min (
												/* 335L, 15L, 314L, 329L, 1018L) */ (
													/* 336L, 13L, 315L, 330L, 1019L) */ (max (
														/* 336L, 13L, 315L, 330L, 1019L) */ (
															/* 337L, 9L, 316L, 331L, 1020L) */ ((
																var_1_3
															) - (
																var_1_4
															))
														) , (
															/* 340L, 12L, 319L, 334L, 1023L) */ (min (
																/* 340L, 12L, 319L, 334L, 1023L) */ (
																	var_1_5
																) , (
																	var_1_6
																)
															))
														)
													))
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 350L, 30L, 372L, 386L, 1033L) */ ((
									var_1_8
								) == (
									/* 350L, 30L, 372L, 386L, 1033L) */ ((unsigned short int) (
										/* 353L, 29L, 375L, 389L, 1036L) */ ((
											/* 354L, 27L, 376L, 390L, 1037L) */ (min (
												/* 354L, 27L, 376L, 390L, 1037L) */ (
													var_1_9
												) , (
													var_1_10
												)
											))
										) - (
											var_1_11
										))
									))
								))
							))
						) && (
							/* 359L, 59L, 421L, 434L, 1042L) */ ((
								var_1_2
							) ? (
								/* 361L, 57L, 423L, 436L, 1044L) */ ((
									var_1_12
								) == (
									/* 361L, 57L, 423L, 436L, 1044L) */ ((double) (
										/* 364L, 56L, 426L, 439L, 1047L) */ (min (
											/* 364L, 56L, 426L, 439L, 1047L) */ (
												/* 365L, 54L, 427L, 440L, 1048L) */ ((
													var_1_3
												) - (
													/* 367L, 53L, 429L, 442L, 1050L) */ ((
														var_1_13
													) - (
														128.68
													))
												))
											) , (
												var_1_7
											)
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 373L, 67L, 460L, 466L, 1056L) */ ((
							var_1_14
						) == (
							/* 373L, 67L, 460L, 466L, 1056L) */ ((double) (
								var_1_6
							))
						))
					))
				) && (
					/* 381L, 104L, 510L, 528L, 1064L) */ ((
						/* 382L, 76L, 80L, 511L, 529L, 1065L) */ ((
							var_1_13
						) >= (
							var_1_12
						))
					) ? (
						/* 385L, 102L, 514L, 532L, 1068L) */ ((
							var_1_2
						) ? (
							/* 387L, 100L, 516L, 534L, 1070L) */ ((
								/* 388L, 88L, 92L, 517L, 535L, 1071L) */ ((
									var_1_22
								) == (
									var_1_11
								))
							) ? (
								/* 391L, 98L, 520L, 538L, 1074L) */ ((
									var_1_15
								) == (
									/* 391L, 98L, 520L, 538L, 1074L) */ ((float) (
										10.975f
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					) : (
						1
					))
				))
			) && (
				/* 397L, 131L, 568L, 580L, 1080L) */ ((
					/* 398L, 117L, 121L, 569L, 581L, 1081L) */ ((
						var_1_3
					) <= (
						var_1_4
					))
				) ? (
					/* 401L, 129L, 572L, 584L, 1084L) */ ((
						var_1_16
					) == (
						/* 401L, 129L, 572L, 584L, 1084L) */ ((float) (
							/* 404L, 128L, 575L, 587L, 1087L) */ (min (
								/* 404L, 128L, 575L, 587L, 1087L) */ (
									var_1_6
								) , (
									var_1_4
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 408L, 195L, 655L, 687L, 1091L) */ ((
				/* 409L, 142L, 150L, 656L, 688L, 1092L) */ ((
					var_1_7
				) >= (
					/* 411L, 141L, 152L, 658L, 690L, 1094L) */ ((
						var_1_5
					) / (
						/* 413L, 140L, 154L, 660L, 692L, 1096L) */ (min (
							/* 413L, 140L, 154L, 660L, 692L, 1096L) */ (
								var_1_13
							) , (
								var_1_18
							)
						))
					))
				))
			) ? (
				/* 416L, 189L, 663L, 695L, 1099L) */ ((
					/* 417L, 161L, 167L, 664L, 696L, 1100L) */ ((
						/* 418L, 159L, 168L, 665L, 697L, 1101L) */ ((
							var_1_10
						) + (
							var_1_9
						))
					) <= (
						var_1_11
					))
				) ? (
					/* 422L, 180L, 669L, 701L, 1105L) */ ((
						var_1_2
					) ? (
						/* 424L, 178L, 671L, 703L, 1107L) */ ((
							var_1_17
						) == (
							/* 424L, 178L, 671L, 703L, 1107L) */ ((signed short int) (
								var_1_19
							))
						))
					) : (
						1
					))
				) : (
					/* 428L, 187L, 675L, 707L, 1111L) */ ((
						var_1_17
					) == (
						/* 428L, 187L, 675L, 707L, 1111L) */ ((signed short int) (
							/* 431L, 186L, 678L, 710L, 1114L) */ ((
								var_1_20
							) - (
								/* 433L, 185L, 680L, 712L, 1116L) */ (abs (
									var_1_21
								))
							))
						))
					))
				))
			) : (
				/* 435L, 193L, 682L, 714L, 1118L) */ ((
					var_1_17
				) == (
					/* 435L, 193L, 682L, 714L, 1118L) */ ((signed short int) (
						var_1_21
					))
				))
			))
		))
	) && (
		/* 441L, 238L, 760L, 780L, 1124L) */ ((
			/* 442L, 210L, 220L, 761L, 781L, 1125L) */ ((
				/* 443L, 204L, 221L, 762L, 782L, 1126L) */ ((
					var_1_11
				) + (
					var_1_20
				))
			) <= (
				/* 446L, 209L, 224L, 765L, 785L, 1129L) */ ((
					/* 447L, 207L, 225L, 766L, 786L, 1130L) */ ((
						var_1_21
					) * (
						var_1_23
					))
				) * (
					var_1_19
				))
			))
		) ? (
			/* 451L, 236L, 770L, 790L, 1134L) */ ((
				var_1_22
			) == (
				/* 451L, 236L, 770L, 790L, 1134L) */ ((unsigned short int) (
					/* 454L, 235L, 773L, 793L, 1137L) */ (max (
						/* 454L, 235L, 773L, 793L, 1137L) */ (
							/* 455L, 233L, 774L, 794L, 1138L) */ ((
								var_1_9
							) - (
								var_1_11
							))
						) , (
							var_1_10
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 463L, 270L, 834L, 850L, 1146L) */ ((
		/* 464L, 247L, 251L, 835L, 851L, 1147L) */ ((
			var_1_13
		) < (
			var_1_18
		))
	) ? (
		/* 467L, 268L, 838L, 854L, 1150L) */ ((
			/* 468L, 256L, 260L, 839L, 855L, 1151L) */ ((
				var_1_2
			) || (
				var_1_25
			))
		) ? (
			/* 471L, 266L, 842L, 858L, 1154L) */ ((
				var_1_24
			) == (
				/* 471L, 266L, 842L, 858L, 1154L) */ ((unsigned short int) (
					128
				))
			))
		) : (
			1
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
