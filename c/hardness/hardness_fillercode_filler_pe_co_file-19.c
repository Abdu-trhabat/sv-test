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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch19Filler_PE_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
unsigned char var_1_2 = 128;
unsigned char var_1_3 = 64;
signed long int var_1_5 = -8;
signed short int var_1_6 = -16;
unsigned short int var_1_7 = 56838;
unsigned short int var_1_8 = 24612;
signed short int var_1_9 = 20013;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed short int var_1_14 = 50;
unsigned char var_1_15 = 0;
double var_1_16 = 9.5;
double var_1_17 = 25.5;
double var_1_18 = 31.8;
signed short int var_1_19 = 100;
double var_1_20 = 32.6;
double var_1_21 = 3.5;
signed short int var_1_23 = -128;
float var_1_24 = 10.2;
float var_1_25 = 8.6;
float var_1_26 = 32.7;
float var_1_27 = 16.25;
float var_1_28 = 8.875;
unsigned short int var_1_29 = 256;
double var_1_30 = 2.75;
double var_1_31 = 0.0;
unsigned char var_1_32 = 8;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 64;
float var_1_35 = 1.15;
float var_1_36 = 63.76;
float var_1_37 = 5.375;
float var_1_38 = 1000000.4;
float var_1_39 = 32.25;
float var_1_41 = 1.5;
signed char var_1_42 = -25;
signed long int var_1_44 = -100;
signed long int var_1_45 = -1;
signed char var_1_46 = -1;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch19Filler_PE_CO
	signed long int stepLocal_0 = /* 768L, 4L, 10L, 241L, 261L) */ ((var_1_2) - (var_1_3));
	/* 787L, 33L, 239L, 259L) */ if (/* 776L, 8L, 9L, 240L, 260L) */ ((stepLocal_0) <= (/* 775L, 7L, 13L, 244L, 264L) */ (max (/* 775L, 7L, 13L, 244L, 264L) */ (last_1_var_1_1) , (var_1_5)))))) {
		/* 782L, 28L, 248L, 268L) */ var_1_1 = (
			/* 781L, 27L, 251L, 271L) */ (max (
				/* 781L, 27L, 251L, 271L) */ (
					var_1_2
				) , (
					var_1_3
				)
			))
		);
	} else {
		/* 786L, 32L, 254L, 274L) */ var_1_1 = (
			var_1_2
		);
	}


	// From: Req2Batch19Filler_PE_CO
	signed long int stepLocal_1 = /* 792L, 43L, 47L, 321L, 338L) */ ((var_1_7) - (/* 794L, 42L, 49L, 323L, 340L) */ ((var_1_8) - (var_1_2))));
	/* 808L, 68L, 319L, 336L) */ if (/* 799L, 45L, 46L, 320L, 337L) */ ((stepLocal_1) >= (var_1_1))) {
		/* 807L, 67L, 327L, 344L) */ var_1_6 = (
			/* 806L, 66L, 330L, 347L) */ ((
				var_1_3
			) - (
				/* 805L, 65L, 332L, 349L) */ ((
					var_1_9
				) - (
					var_1_2
				))
			))
		);
	}


	// From: Req5Batch19Filler_PE_CO
	/* 835L, 131L, 476L, 489L) */ if (/* 836L, 114L, 115L, 477L, 490L) */ ((/* 837L, 110L, 116L, 478L, 491L) */ (- (var_1_16))) == (/* 839L, 113L, 118L, 480L, 493L) */ ((var_1_17) + (var_1_18))))) {
		/* 842L, 130L, 483L, 496L) */ var_1_15 = (
			var_1_12
		);
	}


	// From: Req6Batch19Filler_PE_CO
	/* 847L, 189L, 527L, 558L) */ if (/* 848L, 147L, 148L, 528L, 559L) */ ((var_1_18) == (/* 850L, 146L, 150L, 530L, 561L) */ (max (/* 850L, 146L, 150L, 530L, 561L) */ (/* 851L, 142L, 151L, 531L, 562L) */ (max (/* 851L, 142L, 151L, 531L, 562L) */ (3.3) , (var_1_16)))) , (/* 854L, 145L, 154L, 534L, 565L) */ ((var_1_20) / (var_1_21)))))))) {
		/* 857L, 183L, 537L, 568L) */ if (var_1_15) {
			/* 859L, 176L, 539L, 570L) */ var_1_19 = (
				/* 862L, 175L, 542L, 573L) */ ((
					var_1_3
				) + (
					/* 864L, 174L, 544L, 575L) */ (min (
						/* 864L, 174L, 544L, 575L) */ (
							var_1_2
						) , (
							var_1_23
						)
					))
				))
			);
		} else {
			/* 867L, 182L, 547L, 578L) */ var_1_19 = (
				/* 870L, 181L, 550L, 581L) */ ((
					var_1_3
				) - (
					8
				))
			);
		}
	} else {
		/* 873L, 188L, 553L, 584L) */ var_1_19 = (
			var_1_2
		);
	}


	// From: Req8Batch19Filler_PE_CO
	/* 896L, 235L, 723L, 734L) */ if (/* 897L, 222L, 223L, 724L, 735L) */ ((var_1_20) != (var_1_16))) {
		/* 900L, 234L, 727L, 738L) */ var_1_29 = (
			/* 903L, 233L, 730L, 741L) */ (max (
				/* 903L, 233L, 730L, 741L) */ (
					var_1_2
				) , (
					var_1_3
				)
			))
		);
	}


	// From: Req3Batch19Filler_PE_CO
	/* 812L, 83L, 387L, 396L) */ if (var_1_15) {
		/* 814L, 82L, 389L, 398L) */ var_1_10 = (
			/* 817L, 81L, 392L, 401L) */ ((
				var_1_12
			) || (
				var_1_13
			))
		);
	}


	// From: Req4Batch19Filler_PE_CO
	/* 822L, 101L, 424L, 437L) */ if (var_1_15) {
		/* 824L, 100L, 426L, 439L) */ var_1_14 = (
			/* 827L, 99L, 429L, 442L) */ (min (
				/* 827L, 99L, 429L, 442L) */ (
					/* 828L, 97L, 430L, 443L) */ (abs (
						/* 829L, 96L, 431L, 444L) */ (max (
							/* 829L, 96L, 431L, 444L) */ (
								var_1_3
							) , (
								var_1_2
							)
						))
					))
				) , (
					var_1_9
				)
			))
		);
	}


	// From: Req7Batch19Filler_PE_CO
	/* 879L, 212L, 652L, 670L) */ if (var_1_10) {
		/* 881L, 204L, 654L, 672L) */ var_1_24 = (
			/* 884L, 203L, 657L, 675L) */ (max (
				/* 884L, 203L, 657L, 675L) */ (
					var_1_25
				) , (
					/* 886L, 202L, 659L, 677L) */ (abs (
						var_1_26
					))
				)
			))
		);
	} else {
		/* 888L, 211L, 661L, 679L) */ var_1_24 = (
			/* 891L, 210L, 664L, 682L) */ (abs (
				/* 892L, 209L, 665L, 683L) */ ((
					var_1_27
				) - (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject1
	/* 226L, 6L) */ var_1_30 = (
		/* 229L, 5L) */ (abs (
			var_1_31
		))
	);


	// From: CodeObject2
	/* 232L, 17L) */ var_1_32 = (
		/* 235L, 16L) */ ((
			/* 236L, 14L) */ (abs (
				var_1_33
			))
		) + (
			var_1_34
		))
	);


	// From: CodeObject3
	/* 240L, 31L) */ var_1_35 = (
		/* 243L, 30L) */ (max (
			/* 243L, 30L) */ (
				var_1_31
			) , (
				/* 245L, 29L) */ (max (
					/* 245L, 29L) */ (
						8.9f
					) , (
						/* 247L, 28L) */ ((
							var_1_36
						) - (
							var_1_37
						))
					)
				))
			)
		))
	);


	// From: CodeObject4
	/* 251L, 40L) */ var_1_38 = (
		/* 254L, 39L) */ (abs (
			50.8f
		))
	);


	// From: CodeObject5
	/* 257L, 104L) */ if (/* 258L, 50L, 51L) */ ((/* 259L, 46L, 52L) */ (~ (var_1_33))) < (/* 261L, 49L, 54L) */ ((var_1_34) * (var_1_6))))) {
		/* 264L, 98L) */ if (var_1_10) {
			/* 266L, 76L) */ var_1_39 = (
				/* 269L, 75L) */ (min (
					/* 269L, 75L) */ (
						/* 270L, 71L) */ ((
							var_1_37
						) - (
							/* 272L, 70L) */ (abs (
								var_1_36
							))
						))
					) , (
						/* 274L, 74L) */ (min (
							/* 274L, 74L) */ (
								var_1_31
							) , (
								var_1_41
							)
						))
					)
				))
			);
		} else {
			/* 277L, 96L) */ if (/* 278L, 81L, 82L) */ ((/* 279L, 79L, 83L) */ ((var_1_33) | (var_1_6))) >= (var_1_34))) {
				/* 283L, 95L) */ var_1_39 = (
					var_1_36
				);
			}
		}
	} else {
		/* 287L, 103L) */ var_1_39 = (
			var_1_37
		);
	}


	// From: CodeObject6
	/* 292L, 165L) */ if (var_1_15) {
		/* 294L, 163L) */ if (/* 295L, 125L, 126L) */ ((/* 296L, 117L, 127L) */ ((/* 297L, 115L, 128L) */ (~ (var_1_34))) ^ (var_1_33))) < (/* 300L, 124L, 131L) */ ((/* 301L, 120L, 132L) */ ((var_1_29) | (var_1_1))) % (/* 304L, 123L, 135L) */ (min (/* 304L, 123L, 135L) */ (var_1_44) , (var_1_45)))))))) {
			/* 307L, 157L) */ var_1_42 = (
				/* 310L, 156L) */ (min (
					/* 310L, 156L) */ (
						/* 311L, 154L) */ ((
							8
						) + (
							var_1_46
						))
					) , (
						-25
					)
				))
			);
		} else {
			/* 315L, 162L) */ var_1_42 = (
				/* 318L, 161L) */ (abs (
					var_1_46
				))
			);
		}
	}


	// From: CodeObject7
	/* 320L, 215L) */ if (/* 321L, 174L, 175L) */ ((var_1_37) >= (/* 323L, 173L, 177L) */ (abs (var_1_24))))) {
		/* 325L, 186L) */ var_1_47 = (
			var_1_48
		);
	} else {
		/* 329L, 213L) */ if (/* 330L, 192L, 193L) */ ((2) >= (/* 332L, 191L, 195L) */ ((var_1_45) * (/* 334L, 190L, 197L) */ (abs (var_1_14))))))) {
			/* 336L, 208L) */ var_1_47 = (
				0
			);
		} else {
			/* 340L, 212L) */ var_1_47 = (
				var_1_49
			);
		}
	}


	// From: CodeObject8
	/* 345L, 222L) */ var_1_50 = (
		var_1_48
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 127);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65535);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 16383);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 16383);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	assume_abort_if_not(var_1_21 != 0.0F);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -16383);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_44 >= -2147483648);
	assume_abort_if_not(var_1_44 <= 2147483647);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -63);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	if (/* 350L, 8L, 16L, 280L, 300L, 908L) */ ((/* 351L, 4L, 17L, 281L, 301L, 909L) */ ((var_1_2) - (var_1_3))) <= (/* 354L, 7L, 20L, 284L, 304L, 912L) */ (max (/* 354L, 7L, 20L, 284L, 304L, 912L) */ (last_1_var_1_1) , (var_1_5)))))) {
	} else {
	}
	if (/* 370L, 45L, 53L, 354L, 371L, 928L) */ ((/* 371L, 43L, 54L, 355L, 372L, 929L) */ ((var_1_7) - (/* 373L, 42L, 56L, 357L, 374L, 931L) */ ((var_1_8) - (var_1_2))))) >= (var_1_1))) {
	}
	if (var_1_15) {
	}
	if (var_1_15) {
	}
	if (/* 410L, 114L, 121L, 503L, 516L, 968L) */ ((/* 411L, 110L, 122L, 504L, 517L, 969L) */ (- (var_1_16))) == (/* 413L, 113L, 124L, 506L, 519L, 971L) */ ((var_1_17) + (var_1_18))))) {
	}
	if (/* 422L, 147L, 157L, 590L, 621L, 980L) */ ((var_1_18) == (/* 424L, 146L, 159L, 592L, 623L, 982L) */ (max (/* 424L, 146L, 159L, 592L, 623L, 982L) */ (/* 425L, 142L, 160L, 593L, 624L, 983L) */ (max (/* 425L, 142L, 160L, 593L, 624L, 983L) */ (3.3) , (var_1_16)))) , (/* 428L, 145L, 163L, 596L, 627L, 986L) */ ((var_1_20) / (var_1_21)))))))) {
		if (var_1_15) {
		} else {
		}
	} else {
	}
	if (var_1_10) {
	} else {
	}
	if (/* 471L, 222L, 226L, 746L, 757L, 1029L) */ ((var_1_20) != (var_1_16))) {
	}
	return /* 487L) */ ((
	/* 486L) */ ((
		/* 485L) */ ((
			/* 484L) */ ((
				/* 483L) */ ((
					/* 482L) */ ((
						/* 481L) */ ((
							/* 349L, 34L, 279L, 299L, 907L) */ ((
								/* 350L, 8L, 16L, 280L, 300L, 908L) */ ((
									/* 351L, 4L, 17L, 281L, 301L, 909L) */ ((
										var_1_2
									) - (
										var_1_3
									))
								) <= (
									/* 354L, 7L, 20L, 284L, 304L, 912L) */ (max (
										/* 354L, 7L, 20L, 284L, 304L, 912L) */ (
											last_1_var_1_1
										) , (
											var_1_5
										)
									))
								))
							) ? (
								/* 358L, 28L, 288L, 308L, 916L) */ ((
									var_1_1
								) == (
									/* 358L, 28L, 288L, 308L, 916L) */ ((signed long int) (
										/* 361L, 27L, 291L, 311L, 919L) */ (max (
											/* 361L, 27L, 291L, 311L, 919L) */ (
												var_1_2
											) , (
												var_1_3
											)
										))
									))
								))
							) : (
								/* 364L, 32L, 294L, 314L, 922L) */ ((
									var_1_1
								) == (
									/* 364L, 32L, 294L, 314L, 922L) */ ((signed long int) (
										var_1_2
									))
								))
							))
						) && (
							/* 369L, 69L, 353L, 370L, 927L) */ ((
								/* 370L, 45L, 53L, 354L, 371L, 928L) */ ((
									/* 371L, 43L, 54L, 355L, 372L, 929L) */ ((
										var_1_7
									) - (
										/* 373L, 42L, 56L, 357L, 374L, 931L) */ ((
											var_1_8
										) - (
											var_1_2
										))
									))
								) >= (
									var_1_1
								))
							) ? (
								/* 377L, 67L, 361L, 378L, 935L) */ ((
									var_1_6
								) == (
									/* 377L, 67L, 361L, 378L, 935L) */ ((signed short int) (
										/* 380L, 66L, 364L, 381L, 938L) */ ((
											var_1_3
										) - (
											/* 382L, 65L, 366L, 383L, 940L) */ ((
												var_1_9
											) - (
												var_1_2
											))
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 386L, 84L, 405L, 414L, 944L) */ ((
							var_1_15
						) ? (
							/* 388L, 82L, 407L, 416L, 946L) */ ((
								var_1_10
							) == (
								/* 388L, 82L, 407L, 416L, 946L) */ ((unsigned char) (
									/* 391L, 81L, 410L, 419L, 949L) */ ((
										var_1_12
									) || (
										var_1_13
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 396L, 102L, 450L, 463L, 954L) */ ((
						var_1_15
					) ? (
						/* 398L, 100L, 452L, 465L, 956L) */ ((
							var_1_14
						) == (
							/* 398L, 100L, 452L, 465L, 956L) */ ((signed short int) (
								/* 401L, 99L, 455L, 468L, 959L) */ (min (
									/* 401L, 99L, 455L, 468L, 959L) */ (
										/* 402L, 97L, 456L, 469L, 960L) */ (abs (
											/* 403L, 96L, 457L, 470L, 961L) */ (max (
												/* 403L, 96L, 457L, 470L, 961L) */ (
													var_1_3
												) , (
													var_1_2
												)
											))
										))
									) , (
										var_1_9
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 409L, 132L, 502L, 515L, 967L) */ ((
					/* 410L, 114L, 121L, 503L, 516L, 968L) */ ((
						/* 411L, 110L, 122L, 504L, 517L, 969L) */ (- (
							var_1_16
						))
					) == (
						/* 413L, 113L, 124L, 506L, 519L, 971L) */ ((
							var_1_17
						) + (
							var_1_18
						))
					))
				) ? (
					/* 416L, 130L, 509L, 522L, 974L) */ ((
						var_1_15
					) == (
						/* 416L, 130L, 509L, 522L, 974L) */ ((unsigned char) (
							var_1_12
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 421L, 190L, 589L, 620L, 979L) */ ((
				/* 422L, 147L, 157L, 590L, 621L, 980L) */ ((
					var_1_18
				) == (
					/* 424L, 146L, 159L, 592L, 623L, 982L) */ (max (
						/* 424L, 146L, 159L, 592L, 623L, 982L) */ (
							/* 425L, 142L, 160L, 593L, 624L, 983L) */ (max (
								/* 425L, 142L, 160L, 593L, 624L, 983L) */ (
									3.3
								) , (
									var_1_16
								)
							))
						) , (
							/* 428L, 145L, 163L, 596L, 627L, 986L) */ ((
								var_1_20
							) / (
								var_1_21
							))
						)
					))
				))
			) ? (
				/* 431L, 184L, 599L, 630L, 989L) */ ((
					var_1_15
				) ? (
					/* 433L, 176L, 601L, 632L, 991L) */ ((
						var_1_19
					) == (
						/* 433L, 176L, 601L, 632L, 991L) */ ((signed short int) (
							/* 436L, 175L, 604L, 635L, 994L) */ ((
								var_1_3
							) + (
								/* 438L, 174L, 606L, 637L, 996L) */ (min (
									/* 438L, 174L, 606L, 637L, 996L) */ (
										var_1_2
									) , (
										var_1_23
									)
								))
							))
						))
					))
				) : (
					/* 441L, 182L, 609L, 640L, 999L) */ ((
						var_1_19
					) == (
						/* 441L, 182L, 609L, 640L, 999L) */ ((signed short int) (
							/* 444L, 181L, 612L, 643L, 1002L) */ ((
								var_1_3
							) - (
								8
							))
						))
					))
				))
			) : (
				/* 447L, 188L, 615L, 646L, 1005L) */ ((
					var_1_19
				) == (
					/* 447L, 188L, 615L, 646L, 1005L) */ ((signed short int) (
						var_1_2
					))
				))
			))
		))
	) && (
		/* 453L, 213L, 688L, 706L, 1011L) */ ((
			var_1_10
		) ? (
			/* 455L, 204L, 690L, 708L, 1013L) */ ((
				var_1_24
			) == (
				/* 455L, 204L, 690L, 708L, 1013L) */ ((float) (
					/* 458L, 203L, 693L, 711L, 1016L) */ (max (
						/* 458L, 203L, 693L, 711L, 1016L) */ (
							var_1_25
						) , (
							/* 460L, 202L, 695L, 713L, 1018L) */ (abs (
								var_1_26
							))
						)
					))
				))
			))
		) : (
			/* 462L, 211L, 697L, 715L, 1020L) */ ((
				var_1_24
			) == (
				/* 462L, 211L, 697L, 715L, 1020L) */ ((float) (
					/* 465L, 210L, 700L, 718L, 1023L) */ (abs (
						/* 466L, 209L, 701L, 719L, 1024L) */ ((
							var_1_27
						) - (
							var_1_28
						))
					))
				))
			))
		))
	))
) && (
	/* 470L, 236L, 745L, 756L, 1028L) */ ((
		/* 471L, 222L, 226L, 746L, 757L, 1029L) */ ((
			var_1_20
		) != (
			var_1_16
		))
	) ? (
		/* 474L, 234L, 749L, 760L, 1032L) */ ((
			var_1_29
		) == (
			/* 474L, 234L, 749L, 760L, 1032L) */ ((unsigned short int) (
				/* 477L, 233L, 752L, 763L, 1035L) */ (max (
					/* 477L, 233L, 752L, 763L, 1035L) */ (
						var_1_2
					) , (
						var_1_3
					)
				))
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
