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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 10.5;
double var_1_6 = 9999999.2;
double var_1_7 = 0.0;
double var_1_8 = 50.5;
double var_1_9 = 4.75;
unsigned long int var_1_10 = 8;
unsigned long int var_1_14 = 128;
unsigned long int var_1_15 = 5;
unsigned char var_1_16 = 50;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 32;
unsigned char var_1_20 = 32;
unsigned char var_1_21 = 5;
double var_1_23 = -0.625;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -50;
double var_1_27 = 49.625;
signed long int var_1_28 = 128;
signed short int var_1_29 = -2;
double var_1_30 = 3.75;
signed char var_1_31 = -25;
signed char var_1_32 = 100;
signed long int var_1_33 = -16;
unsigned char var_1_34 = 1;
double var_1_35 = 63.8;
unsigned char var_1_36 = 5;
double var_1_37 = 0.25;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 1;
unsigned long int var_1_40 = 256;
double var_1_41 = 31.6;
double var_1_42 = 10000000000000.65;
signed char var_1_43 = -10;
signed char var_1_44 = -32;
signed char var_1_45 = 50;
signed char var_1_46 = -32;
signed long int var_1_47 = -2;

// Calibration values

// Last'ed variables
double last_1_var_1_23 = -0.625;
double last_1_var_1_27 = 49.625;
signed short int last_1_var_1_29 = -2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 117L) */ if (/* 80L, 79L) */ ((/* 81L, 74L) */ ((var_1_31) * (var_1_32))) > (/* 84L, 78L) */ (max (/* 84L, 78L) */ (/* 85L, 76L) */ (abs (var_1_33))) , (5)))))) {
		/* 115L) */ if (/* 101L, 100L) */ ((/* 102L, 98L) */ ((var_1_32) >= (var_1_33))) || (var_1_34))) {
			/* 114L) */ var_1_30 = (
				var_1_35
			);
		}
	}


	// From: CodeObject2
	/* 166L) */ if (/* 125L, 124L) */ ((var_1_33) >= (/* 127L, 123L) */ (~ (var_1_32))))) {
		/* 160L) */ if (/* 140L, 139L) */ ((/* 141L, 137L) */ (min (/* 141L, 137L) */ (499.8f) , (/* 143L, 136L) */ ((var_1_35) * (var_1_30)))))) <= (var_1_37))) {
			/* 159L) */ var_1_36 = (
				/* 158L) */ ((
					var_1_38
				) - (
					var_1_39
				))
			);
		}
	} else {
		/* 165L) */ var_1_36 = (
			var_1_38
		);
	}


	// From: CodeObject3
	/* 181L) */ if (var_1_34) {
		/* 180L) */ var_1_40 = (
			var_1_36
		);
	}


	// From: CodeObject4
	/* 231L) */ if (/* 189L, 188L) */ ((/* 190L, 186L) */ (~ (var_1_32))) < (var_1_40))) {
		/* 202L) */ var_1_41 = (
			/* 201L) */ (min (
				/* 201L) */ (
					var_1_35
				) , (
					var_1_42
				)
			))
		);
	} else {
		/* 229L) */ if (/* 210L, 209L) */ ((/* 211L, 207L) */ ((var_1_36) * (/* 213L, 206L) */ ((5) >> (25))))) < (var_1_31))) {
			/* 228L) */ var_1_41 = (
				/* 227L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: CodeObject5
	/* 259L) */ if (/* 239L, 238L) */ ((/* 240L, 236L) */ (abs (var_1_37))) < (var_1_41))) {
		/* 250L) */ var_1_43 = (
			var_1_44
		);
	} else {
		/* 258L) */ var_1_43 = (
			/* 257L) */ (max (
				/* 257L) */ (
					var_1_44
				) , (
					/* 256L) */ (max (
						/* 256L) */ (
							var_1_45
						) , (
							var_1_46
						)
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 312L) */ if (/* 274L, 273L) */ ((/* 275L, 270L) */ ((var_1_41) + (/* 277L, 269L) */ (abs (var_1_35))))) < (/* 279L, 272L) */ (abs (var_1_37))))) {
		/* 306L) */ if (/* 291L, 290L) */ ((var_1_38) <= (var_1_39))) {
			/* 301L) */ var_1_47 = (
				/* 300L) */ (abs (
					var_1_39
				))
			);
		} else {
			/* 305L) */ var_1_47 = (
				var_1_32
			);
		}
	} else {
		/* 311L) */ var_1_47 = (
			var_1_45
		);
	}


	// From: Req1Batch107Filler_PS_CN
	/* 40L, 40L, 268L, 292L, 846L, 890L) */ if (/* 25L, 9L, 10L, 269L, 293L, 831L, 891L) */ ((/* 18L, 4L, 11L, 270L, 294L, 824L, 892L) */ (max (/* 18L, 4L, 11L, 270L, 294L, 824L, 892L) */ (last_1_var_1_23) , (last_1_var_1_27)))) > (/* 24L, 8L, 14L, 273L, 297L, 830L, 897L) */ ((last_1_var_1_23) + (/* 23L, 7L, 16L, 275L, 299L, 829L, 900L) */ (- (last_1_var_1_23))))))) {
		/* 35L, 35L, 277L, 301L, 841L, 903L) */ var_1_1 = (
			/* 34L, 34L, 280L, 304L, 840L, 906L) */ ((
				var_1_6
			) - (
				/* 33L, 33L, 282L, 306L, 839L, 908L) */ ((
					/* 31L, 31L, 283L, 307L, 837L, 909L) */ ((
						var_1_7
					) - (
						var_1_8
					))
				) + (
					var_1_9
				))
			))
		);
	} else {
		/* 39L, 39L, 287L, 311L, 845L, 913L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req8Batch107Filler_PS_CN
	/* 4L, 253L, 773L, 779L, 880L, 1036L) */ var_1_28 = (
		last_1_var_1_29
	);


	// From: Req9Batch107Filler_PS_CN
	/* 1043L, 263L, 797L, 803L) */ var_1_29 = (
		var_1_28
	);


	// From: Req4Batch107Filler_PS_CN
	/* 976L, 137L, 543L, 553L) */ var_1_23 = (
		/* 979L, 136L, 546L, 556L) */ ((
			var_1_8
		) - (
			var_1_6
		))
	);


	// From: Req5Batch107Filler_PS_CN
	unsigned long int stepLocal_3 = /* 984L, 152L, 156L, 582L, 595L) */ ((/* 985L, 150L, 157L, 583L, 596L) */ ((var_1_15) ^ (16u))) * (64u));
	/* 996L, 173L, 580L, 593L) */ if (/* 991L, 154L, 155L, 581L, 594L) */ ((stepLocal_3) > (var_1_18))) {
		/* 995L, 172L, 588L, 601L) */ var_1_24 = (
			var_1_25
		);
	}


	// From: Req6Batch107Filler_PS_CN
	/* 1000L, 211L, 632L, 652L) */ if (/* 1001L, 185L, 186L, 633L, 653L) */ ((var_1_6) < (/* 1003L, 184L, 188L, 635L, 655L) */ ((var_1_1) * (/* 1005L, 183L, 190L, 637L, 657L) */ ((var_1_8) - (9.99999998E7))))))) {
		/* 1008L, 206L, 640L, 660L) */ var_1_26 = (
			/* 1011L, 205L, 643L, 663L) */ (abs (
				/* 1012L, 204L, 644L, 664L) */ (min (
					/* 1012L, 204L, 644L, 664L) */ (
						var_1_20
					) , (
						var_1_19
					)
				))
			))
		);
	} else {
		/* 1015L, 210L, 647L, 667L) */ var_1_26 = (
			var_1_20
		);
	}


	// From: Req3Batch107Filler_PS_CN
	unsigned char stepLocal_2 = /* 947L, 108L, 112L, 463L, 486L) */ ((var_1_23) > (16.75f));
	/* 969L, 126L, 448L, 471L) */ if (var_1_24) {
		/* 961L, 104L, 450L, 473L) */ var_1_16 = (
			/* 960L, 103L, 453L, 476L) */ ((
				/* 958L, 101L, 454L, 477L) */ ((
					var_1_18
				) + (
					/* 957L, 100L, 456L, 479L) */ ((
						var_1_19
					) + (
						var_1_20
					))
				))
			) - (
				var_1_21
			))
		);
	} else {
		/* 968L, 124L, 460L, 483L) */ if (/* 963L, 109L, 110L, 461L, 484L) */ ((var_1_24) && (stepLocal_2))) {
			/* 967L, 123L, 466L, 489L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: Req2Batch107Filler_PS_CN
	signed long int stepLocal_1 = /* 924L, 48L, 52L, 366L, 387L) */ (min (/* 924L, 48L, 52L, 366L, 387L) */ (var_1_16) , (var_1_28)));
	unsigned long int stepLocal_0 = /* 919L, 63L, 67L, 372L, 393L) */ ((var_1_28) + (var_1_14));
	/* 941L, 86L, 364L, 385L) */ if (/* 929L, 50L, 51L, 365L, 386L) */ ((stepLocal_1) < (var_1_28))) {
		/* 936L, 80L, 370L, 391L) */ if (/* 931L, 65L, 66L, 371L, 392L) */ ((stepLocal_0) == (5u))) {
			/* 935L, 79L, 376L, 397L) */ var_1_10 = (
				var_1_15
			);
		}
	} else {
		/* 940L, 85L, 380L, 401L) */ var_1_10 = (
			var_1_15
		);
	}


	// From: Req7Batch107Filler_PS_CN
	/* 1020L, 244L, 712L, 727L) */ if (/* 1021L, 223L, 224L, 713L, 728L) */ ((/* 1022L, 219L, 225L, 714L, 729L) */ (max (/* 1022L, 219L, 225L, 714L, 729L) */ (var_1_23) , (var_1_8)))) < (/* 1025L, 222L, 228L, 717L, 732L) */ ((var_1_7) + (var_1_1))))) {
		/* 1028L, 243L, 720L, 735L) */ var_1_27 = (
			/* 1031L, 242L, 723L, 738L) */ ((
				var_1_8
			) - (
				var_1_6
			))
		);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 2305843.009213691400e+12F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 63);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 127);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -127);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_29 = var_1_29;
}

int property(void) {
	if (/* 315L, 9L, 18L, 317L, 341L, 859L, 1049L, 53L) */ ((/* 316L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (max (/* 316L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (last_1_var_1_23) , (last_1_var_1_27)))) > (/* 321L, 8L, 22L, 321L, 345L, 858L, 1055L, 52L) */ ((last_1_var_1_23) + (/* 324L, 7L, 24L, 323L, 347L, 857L, 1058L, 51L) */ (- (last_1_var_1_23))))))) {
	} else {
	}
	if (/* 343L, 50L, 56L, 407L, 428L, 1077L) */ ((/* 344L, 48L, 57L, 408L, 429L, 1078L) */ (min (/* 344L, 48L, 57L, 408L, 429L, 1078L) */ (var_1_16) , (var_1_28)))) < (var_1_28))) {
		if (/* 349L, 65L, 71L, 413L, 434L, 1083L) */ ((/* 350L, 63L, 72L, 414L, 435L, 1084L) */ ((var_1_28) + (var_1_14))) == (5u))) {
		}
	} else {
	}
	if (var_1_24) {
	} else {
		if (/* 376L, 109L, 115L, 507L, 530L, 1110L) */ ((var_1_24) && (/* 378L, 108L, 117L, 509L, 532L, 1112L) */ ((var_1_23) > (16.75f))))) {
		}
	}
	if (/* 397L, 154L, 162L, 607L, 620L, 1131L) */ ((/* 398L, 152L, 163L, 608L, 621L, 1132L) */ ((/* 399L, 150L, 164L, 609L, 622L, 1133L) */ ((var_1_15) ^ (16u))) * (64u))) > (var_1_18))) {
	}
	if (/* 410L, 185L, 193L, 673L, 693L, 1144L) */ ((var_1_6) < (/* 412L, 184L, 195L, 675L, 695L, 1146L) */ ((var_1_1) * (/* 414L, 183L, 197L, 677L, 697L, 1148L) */ ((var_1_8) - (9.99999998E7))))))) {
	} else {
	}
	if (/* 430L, 223L, 231L, 743L, 758L, 1164L) */ ((/* 431L, 219L, 232L, 744L, 759L, 1165L) */ (max (/* 431L, 219L, 232L, 744L, 759L, 1165L) */ (var_1_23) , (var_1_8)))) < (/* 434L, 222L, 235L, 747L, 762L, 1168L) */ ((var_1_7) + (var_1_1))))) {
	}
	return /* 464L) */ ((
	/* 463L) */ ((
		/* 462L) */ ((
			/* 461L) */ ((
				/* 460L) */ ((
					/* 459L) */ ((
						/* 458L) */ ((
							/* 457L) */ ((
								/* 314L, 41L, 316L, 340L, 874L, 1048L, 68L) */ ((
									/* 315L, 9L, 18L, 317L, 341L, 859L, 1049L, 53L) */ ((
										/* 316L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (max (
											/* 316L, 4L, 19L, 318L, 342L, 852L, 1050L, 46L) */ (
												last_1_var_1_23
											) , (
												last_1_var_1_27
											)
										))
									) > (
										/* 321L, 8L, 22L, 321L, 345L, 858L, 1055L, 52L) */ ((
											last_1_var_1_23
										) + (
											/* 324L, 7L, 24L, 323L, 347L, 857L, 1058L, 51L) */ (- (
												last_1_var_1_23
											))
										))
									))
								) ? (
									/* 327L, 35L, 325L, 349L, 869L, 1061L, 63L) */ ((
										var_1_1
									) == (
										/* 327L, 35L, 325L, 349L, 869L, 1061L, 63L) */ ((double) (
											/* 330L, 34L, 328L, 352L, 868L, 1064L, 62L) */ ((
												var_1_6
											) - (
												/* 332L, 33L, 330L, 354L, 867L, 1066L, 61L) */ ((
													/* 333L, 31L, 331L, 355L, 865L, 1067L, 59L) */ ((
														var_1_7
													) - (
														var_1_8
													))
												) + (
													var_1_9
												))
											))
										))
									))
								) : (
									/* 337L, 39L, 335L, 359L, 873L, 1071L, 67L) */ ((
										var_1_1
									) == (
										/* 337L, 39L, 335L, 359L, 873L, 1071L, 67L) */ ((double) (
											var_1_6
										))
									))
								))
							) && (
								/* 342L, 87L, 406L, 427L, 1076L) */ ((
									/* 343L, 50L, 56L, 407L, 428L, 1077L) */ ((
										/* 344L, 48L, 57L, 408L, 429L, 1078L) */ (min (
											/* 344L, 48L, 57L, 408L, 429L, 1078L) */ (
												var_1_16
											) , (
												var_1_28
											)
										))
									) < (
										var_1_28
									))
								) ? (
									/* 348L, 81L, 412L, 433L, 1082L) */ ((
										/* 349L, 65L, 71L, 413L, 434L, 1083L) */ ((
											/* 350L, 63L, 72L, 414L, 435L, 1084L) */ ((
												var_1_28
											) + (
												var_1_14
											))
										) == (
											5u
										))
									) ? (
										/* 354L, 79L, 418L, 439L, 1088L) */ ((
											var_1_10
										) == (
											/* 354L, 79L, 418L, 439L, 1088L) */ ((unsigned long int) (
												var_1_15
											))
										))
									) : (
										1
									))
								) : (
									/* 358L, 85L, 422L, 443L, 1092L) */ ((
										var_1_10
									) == (
										/* 358L, 85L, 422L, 443L, 1092L) */ ((unsigned long int) (
											var_1_15
										))
									))
								))
							))
						) && (
							/* 363L, 127L, 494L, 517L, 1097L) */ ((
								var_1_24
							) ? (
								/* 365L, 104L, 496L, 519L, 1099L) */ ((
									var_1_16
								) == (
									/* 365L, 104L, 496L, 519L, 1099L) */ ((unsigned char) (
										/* 368L, 103L, 499L, 522L, 1102L) */ ((
											/* 369L, 101L, 500L, 523L, 1103L) */ ((
												var_1_18
											) + (
												/* 371L, 100L, 502L, 525L, 1105L) */ ((
													var_1_19
												) + (
													var_1_20
												))
											))
										) - (
											var_1_21
										))
									))
								))
							) : (
								/* 375L, 125L, 506L, 529L, 1109L) */ ((
									/* 376L, 109L, 115L, 507L, 530L, 1110L) */ ((
										var_1_24
									) && (
										/* 378L, 108L, 117L, 509L, 532L, 1112L) */ ((
											var_1_23
										) > (
											16.75f
										))
									))
								) ? (
									/* 381L, 123L, 512L, 535L, 1115L) */ ((
										var_1_16
									) == (
										/* 381L, 123L, 512L, 535L, 1115L) */ ((unsigned char) (
											var_1_19
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 389L, 137L, 563L, 573L, 1123L) */ ((
							var_1_23
						) == (
							/* 389L, 137L, 563L, 573L, 1123L) */ ((double) (
								/* 392L, 136L, 566L, 576L, 1126L) */ ((
									var_1_8
								) - (
									var_1_6
								))
							))
						))
					))
				) && (
					/* 396L, 174L, 606L, 619L, 1130L) */ ((
						/* 397L, 154L, 162L, 607L, 620L, 1131L) */ ((
							/* 398L, 152L, 163L, 608L, 621L, 1132L) */ ((
								/* 399L, 150L, 164L, 609L, 622L, 1133L) */ ((
									var_1_15
								) ^ (
									16u
								))
							) * (
								64u
							))
						) > (
							var_1_18
						))
					) ? (
						/* 404L, 172L, 614L, 627L, 1138L) */ ((
							var_1_24
						) == (
							/* 404L, 172L, 614L, 627L, 1138L) */ ((unsigned char) (
								var_1_25
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 409L, 212L, 672L, 692L, 1143L) */ ((
					/* 410L, 185L, 193L, 673L, 693L, 1144L) */ ((
						var_1_6
					) < (
						/* 412L, 184L, 195L, 675L, 695L, 1146L) */ ((
							var_1_1
						) * (
							/* 414L, 183L, 197L, 677L, 697L, 1148L) */ ((
								var_1_8
							) - (
								9.99999998E7
							))
						))
					))
				) ? (
					/* 417L, 206L, 680L, 700L, 1151L) */ ((
						var_1_26
					) == (
						/* 417L, 206L, 680L, 700L, 1151L) */ ((signed char) (
							/* 420L, 205L, 683L, 703L, 1154L) */ (abs (
								/* 421L, 204L, 684L, 704L, 1155L) */ (min (
									/* 421L, 204L, 684L, 704L, 1155L) */ (
										var_1_20
									) , (
										var_1_19
									)
								))
							))
						))
					))
				) : (
					/* 424L, 210L, 687L, 707L, 1158L) */ ((
						var_1_26
					) == (
						/* 424L, 210L, 687L, 707L, 1158L) */ ((signed char) (
							var_1_20
						))
					))
				))
			))
		) && (
			/* 429L, 245L, 742L, 757L, 1163L) */ ((
				/* 430L, 223L, 231L, 743L, 758L, 1164L) */ ((
					/* 431L, 219L, 232L, 744L, 759L, 1165L) */ (max (
						/* 431L, 219L, 232L, 744L, 759L, 1165L) */ (
							var_1_23
						) , (
							var_1_8
						)
					))
				) < (
					/* 434L, 222L, 235L, 747L, 762L, 1168L) */ ((
						var_1_7
					) + (
						var_1_1
					))
				))
			) ? (
				/* 437L, 243L, 750L, 765L, 1171L) */ ((
					var_1_27
				) == (
					/* 437L, 243L, 750L, 765L, 1171L) */ ((double) (
						/* 440L, 242L, 753L, 768L, 1174L) */ ((
							var_1_8
						) - (
							var_1_6
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 445L, 253L, 785L, 791L, 887L, 1179L, 11L) */ ((
			var_1_28
		) == (
			/* 445L, 253L, 785L, 791L, 887L, 1179L, 11L) */ ((signed long int) (
				last_1_var_1_29
			))
		))
	))
) && (
	/* 452L, 263L, 809L, 815L, 1186L) */ ((
		var_1_29
	) == (
		/* 452L, 263L, 809L, 815L, 1186L) */ ((signed short int) (
			var_1_28
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
