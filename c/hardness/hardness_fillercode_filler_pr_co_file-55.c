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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Filler_PR_CO.c", 13, "reach_error"); }
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
double var_1_1 = 8.8;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -2;
float var_1_33 = 255.5;
float var_1_34 = 127.5;
float var_1_35 = 10.5;
float var_1_36 = -0.5;
float var_1_37 = 256.3;
signed long int var_1_38 = 8;
double var_1_39 = 2.45;
double var_1_40 = 63.5;
unsigned short int var_1_41 = 200;
signed long int var_1_42 = 10;
unsigned short int var_1_43 = 28186;
unsigned short int var_1_44 = 10;
signed char var_1_45 = 10;
signed short int var_1_46 = 4;
unsigned char var_1_48 = 1;
unsigned short int var_1_49 = 25;
signed long int var_1_50 = -32;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_15 = 5;
signed short int last_1_var_1_27 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch55Filler_PR_CO
	/* 33L, 50L, 225L, 255L, 821L, 861L) */ if (/* 10L, 8L, 9L, 226L, 256L, 798L, 862L) */ ((last_1_var_1_27) <= (/* 9L, 7L, 11L, 228L, 258L, 797L, 865L) */ ((last_1_var_1_27) * (/* 8L, 6L, 13L, 230L, 260L, 796L, 868L) */ ((last_1_var_1_27) * (last_1_var_1_15))))))) {
		/* 28L, 44L, 233L, 263L, 816L, 873L) */ if (/* 15L, 25L, 26L, 234L, 264L, 803L, 874L) */ ((last_1_var_1_15) > (last_1_var_1_27))) {
			/* 23L, 39L, 237L, 267L, 811L, 879L) */ var_1_1 = (
				/* 22L, 38L, 240L, 270L, 810L, 882L) */ ((
					/* 20L, 36L, 241L, 271L, 808L, 883L) */ (min (
						/* 20L, 36L, 241L, 271L, 808L, 883L) */ (
							var_1_6
						) , (
							var_1_7
						)
					))
				) + (
					var_1_8
				))
			);
		} else {
			/* 27L, 43L, 245L, 275L, 815L, 887L) */ var_1_1 = (
				var_1_8
			);
		}
	} else {
		/* 32L, 49L, 249L, 279L, 820L, 891L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req2Batch55Filler_PR_CO
	/* 897L, 69L, 345L, 359L) */ var_1_9 = (
		/* 900L, 68L, 348L, 362L) */ (min (
			/* 900L, 68L, 348L, 362L) */ (
				/* 901L, 62L, 349L, 363L) */ ((
					var_1_10
				) - (
					var_1_11
				))
			) , (
				/* 904L, 67L, 352L, 366L) */ ((
					/* 905L, 65L, 353L, 367L) */ ((
						var_1_12
					) + (
						var_1_13
					))
				) - (
					var_1_14
				))
			)
		))
	);


	// From: CodeObject4
	/* 405L, 218L) */ var_1_45 = (
		var_1_42
	);


	// From: Req4Batch55Filler_PR_CO
	/* 921L, 100L, 441L, 451L) */ var_1_17 = (
		/* 924L, 99L, 444L, 454L) */ ((
			var_1_18
		) + (
			/* 926L, 98L, 446L, 456L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		))
	);


	// From: CodeObject2
	/* 364L, 159L) */ if (/* 365L, 146L, 147L) */ ((var_1_15) < (4))) {
		/* 368L, 158L) */ var_1_39 = (
			/* 371L, 157L) */ ((
				var_1_40
			) + (
				9.625
			))
		);
	}


	// From: Req8Batch55Filler_PR_CO
	/* 993L, 209L, 729L, 738L) */ var_1_29 = (
		/* 996L, 208L, 732L, 741L) */ ((
			/* 997L, 206L, 733L, 742L) */ (abs (
				var_1_30
			))
		) - (
			var_1_20
		))
	);


	// From: Req9Batch55Filler_PR_CO
	/* 1002L, 219L, 765L, 771L) */ var_1_31 = (
		var_1_26
	);


	// From: CodeObject6
	/* 497L, 308L) */ if (/* 498L, 246L, 247L) */ ((var_1_43) < (/* 500L, 245L, 249L) */ ((/* 501L, 241L, 250L) */ ((var_1_41) / (128))) % (/* 504L, 244L, 253L) */ ((var_1_42) + (var_1_49))))))) {
		/* 507L, 287L) */ if (/* 508L, 267L, 268L) */ ((var_1_32) <= (var_1_50))) {
			/* 511L, 280L) */ var_1_48 = (
				/* 514L, 279L) */ (! (
					/* 515L, 278L) */ ((
						var_1_51
					) && (
						var_1_52
					))
				))
			);
		} else {
			/* 518L, 286L) */ var_1_48 = (
				/* 521L, 285L) */ ((
					var_1_51
				) && (
					var_1_52
				))
			);
		}
	} else {
		/* 524L, 306L) */ if (/* 525L, 291L, 292L) */ ((var_1_1) > (var_1_37))) {
			/* 528L, 301L) */ var_1_48 = (
				var_1_53
			);
		} else {
			/* 532L, 305L) */ var_1_48 = (
				var_1_51
			);
		}
	}


	// From: Req6Batch55Filler_PR_CO
	/* 943L, 143L, 532L, 549L) */ if (var_1_31) {
		/* 945L, 134L, 534L, 551L) */ var_1_23 = (
			/* 948L, 133L, 537L, 554L) */ ((
				var_1_24
			) && (
				var_1_25
			))
		);
	} else {
		/* 951L, 142L, 540L, 557L) */ var_1_23 = (
			/* 954L, 141L, 543L, 560L) */ ((
				var_1_24
			) && (
				/* 956L, 140L, 545L, 562L) */ ((
					var_1_25
				) && (
					var_1_26
				))
			))
		);
	}


	// From: CodeObject1
	/* 337L, 137L) */ if (/* 338L, 76L, 77L) */ ((var_1_33) > (var_1_34))) {
		/* 341L, 130L) */ if (/* 342L, 91L, 92L) */ ((/* 343L, 87L, 93L) */ ((var_1_34) * (/* 345L, 86L, 95L) */ (max (/* 345L, 86L, 95L) */ (var_1_33) , (var_1_35)))))) < (/* 348L, 90L, 98L) */ (min (/* 348L, 90L, 98L) */ (var_1_36) , (32.55f)))))) {
			/* 351L, 128L) */ if (/* 352L, 117L, 118L) */ ((var_1_36) > (24.443f))) {
				/* 355L, 127L) */ var_1_32 = (
					var_1_38
				);
			}
		}
	} else {
		/* 359L, 136L) */ var_1_32 = (
			/* 362L, 135L) */ (abs (
				32
			))
		);
	}


	// From: CodeObject3
	/* 374L, 211L) */ if (/* 375L, 165L, 166L) */ ((var_1_1) >= (127.5f))) {
		/* 378L, 205L) */ if (/* 379L, 177L, 178L) */ ((/* 380L, 174L, 179L) */ ((var_1_15) >> (var_1_42))) < (/* 383L, 176L, 182L) */ (abs (var_1_38))))) {
			/* 385L, 200L) */ var_1_41 = (
				/* 388L, 199L) */ ((
					/* 389L, 193L) */ (abs (
						var_1_42
					))
				) + (
					/* 391L, 198L) */ ((
						var_1_43
					) - (
						/* 393L, 197L) */ ((
							2
						) + (
							var_1_44
						))
					))
				))
			);
		} else {
			/* 396L, 204L) */ var_1_41 = (
				var_1_42
			);
		}
	} else {
		/* 400L, 210L) */ var_1_41 = (
			var_1_42
		);
	}


	// From: Req3Batch55Filler_PR_CO
	/* 911L, 85L, 401L, 411L) */ if (var_1_23) {
		/* 913L, 84L, 403L, 413L) */ var_1_15 = (
			/* 916L, 83L, 406L, 416L) */ ((
				var_1_14
			) - (
				var_1_13
			))
		);
	}


	// From: Req5Batch55Filler_PR_CO
	/* 930L, 120L, 480L, 493L) */ if (var_1_23) {
		/* 932L, 119L, 482L, 495L) */ var_1_21 = (
			/* 935L, 118L, 485L, 498L) */ ((
				/* 936L, 116L, 486L, 499L) */ ((
					var_1_22
				) - (
					/* 938L, 115L, 488L, 501L) */ ((
						1000000000u
					) - (
						var_1_13
					))
				))
			) - (
				var_1_14
			))
		);
	}


	// From: CodeObject5
	/* 409L, 234L) */ if (var_1_31) {
		/* 411L, 233L) */ var_1_46 = (
			/* 414L, 232L) */ ((
				var_1_29
			) + (
				/* 416L, 231L) */ (max (
					/* 416L, 231L) */ (
						var_1_42
					) , (
						var_1_44
					)
				))
			))
		);
	}


	// From: Req7Batch55Filler_PR_CO
	/* 960L, 197L, 600L, 632L) */ if (/* 961L, 154L, 155L, 601L, 633L) */ ((/* 962L, 152L, 156L, 602L, 634L) */ (- (/* 963L, 151L, 157L, 603L, 635L) */ (min (/* 963L, 151L, 157L, 603L, 635L) */ (var_1_1) , (var_1_8)))))) >= (-0.875))) {
		/* 967L, 189L, 607L, 639L) */ if (var_1_31) {
			/* 969L, 178L, 609L, 641L) */ var_1_27 = (
				/* 972L, 177L, 612L, 644L) */ ((
					var_1_19
				) - (
					var_1_12
				))
			);
		} else {
			/* 975L, 188L, 615L, 647L) */ var_1_27 = (
				/* 978L, 187L, 618L, 650L) */ ((
					var_1_13
				) - (
					/* 980L, 186L, 620L, 652L) */ ((
						var_1_28
					) - (
						/* 982L, 185L, 622L, 654L) */ ((
							var_1_20
						) + (
							var_1_19
						))
					))
				))
			);
		}
	} else {
		/* 985L, 196L, 625L, 657L) */ var_1_27 = (
			/* 988L, 195L, 628L, 660L) */ (min (
				/* 988L, 195L, 628L, 660L) */ (
					var_1_29
				) , (
					var_1_28
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 3221225470);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 0);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 30);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 16383);
	assume_abort_if_not(var_1_43 <= 32767);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 8191);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 32767);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= -2147483648);
	assume_abort_if_not(var_1_50 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 1);
	assume_abort_if_not(var_1_52 <= 1);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_15 = var_1_15;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	if (/* 538L, 8L, 16L, 286L, 316L, 834L, 1009L, 46L) */ ((last_1_var_1_27) <= (/* 541L, 7L, 18L, 288L, 318L, 833L, 1012L, 45L) */ ((last_1_var_1_27) * (/* 544L, 6L, 20L, 290L, 320L, 832L, 1015L, 44L) */ ((last_1_var_1_27) * (last_1_var_1_15))))))) {
		if (/* 550L, 25L, 29L, 294L, 324L, 839L, 1021L, 51L) */ ((last_1_var_1_15) > (last_1_var_1_27))) {
		} else {
		}
	} else {
	}
	if (var_1_23) {
	}
	if (var_1_23) {
	}
	if (var_1_31) {
	} else {
	}
	if (/* 637L, 154L, 161L, 665L, 697L, 1108L) */ ((/* 638L, 152L, 162L, 666L, 698L, 1109L) */ (- (/* 639L, 151L, 163L, 667L, 699L, 1110L) */ (min (/* 639L, 151L, 163L, 667L, 699L, 1110L) */ (var_1_1) , (var_1_8)))))) >= (-0.875))) {
		if (var_1_31) {
		} else {
		}
	} else {
	}
	return /* 690L) */ ((
	/* 689L) */ ((
		/* 688L) */ ((
			/* 687L) */ ((
				/* 686L) */ ((
					/* 685L) */ ((
						/* 684L) */ ((
							/* 683L) */ ((
								/* 537L, 51L, 285L, 315L, 857L, 1008L, 69L) */ ((
									/* 538L, 8L, 16L, 286L, 316L, 834L, 1009L, 46L) */ ((
										last_1_var_1_27
									) <= (
										/* 541L, 7L, 18L, 288L, 318L, 833L, 1012L, 45L) */ ((
											last_1_var_1_27
										) * (
											/* 544L, 6L, 20L, 290L, 320L, 832L, 1015L, 44L) */ ((
												last_1_var_1_27
											) * (
												last_1_var_1_15
											))
										))
									))
								) ? (
									/* 549L, 45L, 293L, 323L, 852L, 1020L, 64L) */ ((
										/* 550L, 25L, 29L, 294L, 324L, 839L, 1021L, 51L) */ ((
											last_1_var_1_15
										) > (
											last_1_var_1_27
										))
									) ? (
										/* 555L, 39L, 297L, 327L, 847L, 1026L, 59L) */ ((
											var_1_1
										) == (
											/* 555L, 39L, 297L, 327L, 847L, 1026L, 59L) */ ((double) (
												/* 558L, 38L, 300L, 330L, 846L, 1029L, 58L) */ ((
													/* 559L, 36L, 301L, 331L, 844L, 1030L, 56L) */ (min (
														/* 559L, 36L, 301L, 331L, 844L, 1030L, 56L) */ (
															var_1_6
														) , (
															var_1_7
														)
													))
												) + (
													var_1_8
												))
											))
										))
									) : (
										/* 563L, 43L, 305L, 335L, 851L, 1034L, 63L) */ ((
											var_1_1
										) == (
											/* 563L, 43L, 305L, 335L, 851L, 1034L, 63L) */ ((double) (
												var_1_8
											))
										))
									))
								) : (
									/* 567L, 49L, 309L, 339L, 856L, 1038L, 68L) */ ((
										var_1_1
									) == (
										/* 567L, 49L, 309L, 339L, 856L, 1038L, 68L) */ ((double) (
											var_1_7
										))
									))
								))
							) && (
								/* 573L, 69L, 373L, 387L, 1044L) */ ((
									var_1_9
								) == (
									/* 573L, 69L, 373L, 387L, 1044L) */ ((signed short int) (
										/* 576L, 68L, 376L, 390L, 1047L) */ (min (
											/* 576L, 68L, 376L, 390L, 1047L) */ (
												/* 577L, 62L, 377L, 391L, 1048L) */ ((
													var_1_10
												) - (
													var_1_11
												))
											) , (
												/* 580L, 67L, 380L, 394L, 1051L) */ ((
													/* 581L, 65L, 381L, 395L, 1052L) */ ((
														var_1_12
													) + (
														var_1_13
													))
												) - (
													var_1_14
												))
											)
										))
									))
								))
							))
						) && (
							/* 587L, 86L, 421L, 431L, 1058L) */ ((
								var_1_23
							) ? (
								/* 589L, 84L, 423L, 433L, 1060L) */ ((
									var_1_15
								) == (
									/* 589L, 84L, 423L, 433L, 1060L) */ ((signed long int) (
										/* 592L, 83L, 426L, 436L, 1063L) */ ((
											var_1_14
										) - (
											var_1_13
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 597L, 100L, 461L, 471L, 1068L) */ ((
							var_1_17
						) == (
							/* 597L, 100L, 461L, 471L, 1068L) */ ((signed char) (
								/* 600L, 99L, 464L, 474L, 1071L) */ ((
									var_1_18
								) + (
									/* 602L, 98L, 466L, 476L, 1073L) */ ((
										var_1_19
									) - (
										var_1_20
									))
								))
							))
						))
					))
				) && (
					/* 606L, 121L, 506L, 519L, 1077L) */ ((
						var_1_23
					) ? (
						/* 608L, 119L, 508L, 521L, 1079L) */ ((
							var_1_21
						) == (
							/* 608L, 119L, 508L, 521L, 1079L) */ ((unsigned long int) (
								/* 611L, 118L, 511L, 524L, 1082L) */ ((
									/* 612L, 116L, 512L, 525L, 1083L) */ ((
										var_1_22
									) - (
										/* 614L, 115L, 514L, 527L, 1085L) */ ((
											1000000000u
										) - (
											var_1_13
										))
									))
								) - (
									var_1_14
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 619L, 144L, 566L, 583L, 1090L) */ ((
					var_1_31
				) ? (
					/* 621L, 134L, 568L, 585L, 1092L) */ ((
						var_1_23
					) == (
						/* 621L, 134L, 568L, 585L, 1092L) */ ((unsigned char) (
							/* 624L, 133L, 571L, 588L, 1095L) */ ((
								var_1_24
							) && (
								var_1_25
							))
						))
					))
				) : (
					/* 627L, 142L, 574L, 591L, 1098L) */ ((
						var_1_23
					) == (
						/* 627L, 142L, 574L, 591L, 1098L) */ ((unsigned char) (
							/* 630L, 141L, 577L, 594L, 1101L) */ ((
								var_1_24
							) && (
								/* 632L, 140L, 579L, 596L, 1103L) */ ((
									var_1_25
								) && (
									var_1_26
								))
							))
						))
					))
				))
			))
		) && (
			/* 636L, 198L, 664L, 696L, 1107L) */ ((
				/* 637L, 154L, 161L, 665L, 697L, 1108L) */ ((
					/* 638L, 152L, 162L, 666L, 698L, 1109L) */ (- (
						/* 639L, 151L, 163L, 667L, 699L, 1110L) */ (min (
							/* 639L, 151L, 163L, 667L, 699L, 1110L) */ (
								var_1_1
							) , (
								var_1_8
							)
						))
					))
				) >= (
					-0.875
				))
			) ? (
				/* 643L, 190L, 671L, 703L, 1114L) */ ((
					var_1_31
				) ? (
					/* 645L, 178L, 673L, 705L, 1116L) */ ((
						var_1_27
					) == (
						/* 645L, 178L, 673L, 705L, 1116L) */ ((signed short int) (
							/* 648L, 177L, 676L, 708L, 1119L) */ ((
								var_1_19
							) - (
								var_1_12
							))
						))
					))
				) : (
					/* 651L, 188L, 679L, 711L, 1122L) */ ((
						var_1_27
					) == (
						/* 651L, 188L, 679L, 711L, 1122L) */ ((signed short int) (
							/* 654L, 187L, 682L, 714L, 1125L) */ ((
								var_1_13
							) - (
								/* 656L, 186L, 684L, 716L, 1127L) */ ((
									var_1_28
								) - (
									/* 658L, 185L, 686L, 718L, 1129L) */ ((
										var_1_20
									) + (
										var_1_19
									))
								))
							))
						))
					))
				))
			) : (
				/* 661L, 196L, 689L, 721L, 1132L) */ ((
					var_1_27
				) == (
					/* 661L, 196L, 689L, 721L, 1132L) */ ((signed short int) (
						/* 664L, 195L, 692L, 724L, 1135L) */ (min (
							/* 664L, 195L, 692L, 724L, 1135L) */ (
								var_1_29
							) , (
								var_1_28
							)
						))
					))
				))
			))
		))
	) && (
		/* 669L, 209L, 747L, 756L, 1140L) */ ((
			var_1_29
		) == (
			/* 669L, 209L, 747L, 756L, 1140L) */ ((signed char) (
				/* 672L, 208L, 750L, 759L, 1143L) */ ((
					/* 673L, 206L, 751L, 760L, 1144L) */ (abs (
						var_1_30
					))
				) - (
					var_1_20
				))
			))
		))
	))
) && (
	/* 678L, 219L, 777L, 783L, 1149L) */ ((
		var_1_31
	) == (
		/* 678L, 219L, 777L, 783L, 1149L) */ ((unsigned char) (
			var_1_26
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
