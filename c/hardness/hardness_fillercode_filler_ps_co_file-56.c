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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 1;
unsigned char var_1_5 = 1;
unsigned short int var_1_6 = 8;
unsigned short int var_1_7 = 10;
unsigned short int var_1_8 = 0;
unsigned short int var_1_9 = 8;
signed long int var_1_10 = -5;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 64;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 2;
unsigned char var_1_15 = 5;
unsigned char var_1_16 = 200;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
signed char var_1_19 = -50;
signed char var_1_20 = 32;
signed char var_1_21 = 5;
signed char var_1_22 = 16;
signed char var_1_23 = 2;
signed short int var_1_24 = -10;
signed short int var_1_25 = -128;
signed short int var_1_26 = 5;
signed long int var_1_27 = 32;
signed short int var_1_28 = 2;
signed short int var_1_29 = -64;
signed short int var_1_30 = -25;
unsigned long int var_1_31 = 5;
unsigned long int var_1_32 = 1491220871;
unsigned long int var_1_33 = 16;
unsigned short int var_1_34 = 16;
unsigned long int var_1_35 = 1000;
signed short int var_1_36 = 32;
signed char var_1_37 = 32;
signed char var_1_38 = 32;
unsigned short int var_1_39 = 4;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned short int var_1_42 = 8;
signed char var_1_43 = 0;
unsigned long int var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
double var_1_49 = 1.25;
double var_1_50 = 7.5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 273L, 26L) */ if (/* 274L, 6L, 7L) */ ((/* 275L, 4L, 8L) */ ((var_1_25) ^ (var_1_26))) >= (var_1_27))) {
		/* 279L, 25L) */ var_1_24 = (
			/* 282L, 24L) */ (max (
				/* 282L, 24L) */ (
					/* 283L, 22L) */ (abs (
						/* 284L, 21L) */ ((
							var_1_28
						) + (
							var_1_29
						))
					))
				) , (
					var_1_30
				)
			))
		);
	}


	// From: CodeObject2
	/* 288L, 74L) */ if (/* 289L, 32L, 33L) */ ((1000000u) > (var_1_10))) {
		/* 292L, 46L) */ var_1_31 = (
			/* 295L, 45L) */ ((
				/* 296L, 43L) */ ((
					1831787952u
				) + (
					var_1_32
				))
			) - (
				var_1_33
			))
		);
	} else {
		/* 300L, 72L) */ if (/* 301L, 49L, 50L) */ ((var_1_33) <= (var_1_10))) {
			/* 304L, 59L) */ var_1_31 = (
				var_1_32
			);
		} else {
			/* 308L, 71L) */ var_1_31 = (
				var_1_33
			);
		}
	}


	// From: CodeObject3
	/* 313L, 81L) */ var_1_34 = (
		50
	);


	// From: CodeObject4
	/* 317L, 130L) */ if (/* 318L, 91L, 92L) */ ((var_1_28) < (/* 320L, 90L, 94L) */ ((var_1_36) - (/* 322L, 89L, 96L) */ (abs (var_1_30))))))) {
		/* 324L, 128L) */ if (/* 325L, 108L, 109L) */ ((/* 326L, 106L, 110L) */ ((var_1_37) - (var_1_38))) > (var_1_6))) {
			/* 330L, 123L) */ var_1_35 = (
				/* 333L, 122L) */ (abs (
					var_1_33
				))
			);
		} else {
			/* 335L, 127L) */ var_1_35 = (
				var_1_38
			);
		}
	}


	// From: CodeObject5
	/* 362L, 175L) */ if (/* 363L, 139L, 140L) */ (! (/* 364L, 138L, 141L) */ ((var_1_37) > (/* 366L, 137L, 143L) */ ((var_1_33) + (var_1_32))))))) {
		/* 369L, 168L) */ if (/* 370L, 154L, 155L) */ ((var_1_40) && (var_1_41))) {
			/* 373L, 167L) */ var_1_39 = (
				/* 376L, 166L) */ (abs (
					/* 377L, 165L) */ (min (
						/* 377L, 165L) */ (
							var_1_38
						) , (
							var_1_42
						)
					))
				))
			);
		}
	} else {
		/* 380L, 174L) */ var_1_39 = (
			/* 383L, 173L) */ (abs (
				var_1_42
			))
		);
	}


	// From: CodeObject6
	/* 385L, 203L) */ if (/* 386L, 191L, 192L) */ ((var_1_10) >= (var_1_33))) {
		/* 389L, 202L) */ var_1_43 = (
			/* 392L, 201L) */ (abs (
				var_1_44
			))
		);
	}


	// From: CodeObject7
	/* 394L, 233L) */ if (/* 395L, 212L, 213L) */ ((var_1_35) <= (var_1_32))) {
		/* 398L, 224L) */ var_1_45 = (
			/* 401L, 223L) */ ((
				var_1_1
			) && (
				var_1_46
			))
		);
	} else {
		/* 404L, 232L) */ var_1_45 = (
			/* 407L, 231L) */ ((
				var_1_46
			) && (
				/* 409L, 230L) */ ((
					var_1_47
				) || (
					var_1_48
				))
			))
		);
	}


	// From: CodeObject8
	/* 413L, 240L) */ var_1_49 = (
		var_1_50
	);


	// From: Req1Batch56Filler_PS_CO
	unsigned char stepLocal_0 = var_1_2;
	/* 752L, 21L, 221L, 236L) */ if (/* 741L, 4L, 5L, 222L, 237L) */ ((stepLocal_0) && (var_1_3))) {
		/* 751L, 20L, 225L, 240L) */ var_1_1 = (
			/* 750L, 19L, 228L, 243L) */ ((
				/* 745L, 14L, 229L, 244L) */ (! (
					var_1_4
				))
			) || (
				/* 749L, 18L, 231L, 246L) */ (! (
					/* 748L, 17L, 232L, 247L) */ ((
						var_1_2
					) || (
						var_1_5
					))
				))
			))
		);
	}


	// From: Req2Batch56Filler_PS_CO
	/* 756L, 38L, 281L, 292L) */ if (var_1_4) {
		/* 758L, 37L, 283L, 294L) */ var_1_6 = (
			/* 761L, 36L, 286L, 297L) */ ((
				var_1_7
			) + (
				/* 763L, 35L, 288L, 299L) */ (min (
					/* 763L, 35L, 288L, 299L) */ (
						var_1_8
					) , (
						var_1_9
					)
				))
			))
		);
	}


	// From: Req3Batch56Filler_PS_CO
	signed long int stepLocal_1 = /* 768L, 52L, 56L, 328L, 347L) */ (min (/* 768L, 52L, 56L, 328L, 347L) */ (var_1_6) , (/* 770L, 51L, 58L, 330L, 349L) */ ((var_1_8) / (256)))));
	/* 786L, 78L, 325L, 344L) */ if (/* 775L, 53L, 54L, 326L, 345L) */ ((var_1_7) >= (stepLocal_1))) {
		/* 779L, 71L, 333L, 352L) */ var_1_10 = (
			var_1_11
		);
	} else {
		/* 785L, 77L, 337L, 356L) */ var_1_10 = (
			/* 784L, 76L, 340L, 359L) */ (max (
				/* 784L, 76L, 340L, 359L) */ (
					var_1_6
				) , (
					var_1_8
				)
			))
		);
	}


	// From: Req4Batch56Filler_PS_CO
	/* 791L, 92L, 402L, 412L) */ var_1_12 = (
		/* 794L, 91L, 405L, 415L) */ ((
			/* 795L, 89L, 406L, 416L) */ ((
				64
			) + (
				var_1_13
			))
		) - (
			var_1_14
		))
	);


	// From: Req5Batch56Filler_PS_CO
	/* 801L, 106L, 442L, 452L) */ var_1_15 = (
		/* 804L, 105L, 445L, 455L) */ ((
			/* 805L, 103L, 446L, 456L) */ ((
				var_1_16
			) - (
				var_1_17
			))
		) - (
			10
		))
	);


	// From: Req6Batch56Filler_PS_CO
	/* 810L, 122L, 481L, 490L) */ if (var_1_1) {
		/* 812L, 121L, 483L, 492L) */ var_1_18 = (
			/* 815L, 120L, 486L, 495L) */ ((
				var_1_16
			) - (
				var_1_13
			))
		);
	}


	// From: Req7Batch56Filler_PS_CO
	signed long int stepLocal_2 = /* 820L, 131L, 137L, 519L, 547L) */ (- (/* 821L, 130L, 138L, 520L, 548L) */ ((var_1_10) / (var_1_13))));
	/* 847L, 170L, 517L, 545L) */ if (/* 828L, 135L, 136L, 518L, 546L) */ ((stepLocal_2) <= (/* 827L, 134L, 141L, 523L, 551L) */ ((var_1_17) + (var_1_10))))) {
		/* 836L, 159L, 526L, 554L) */ var_1_19 = (
			/* 835L, 158L, 529L, 557L) */ (min (
				/* 835L, 158L, 529L, 557L) */ (
					var_1_16
				) , (
					/* 834L, 157L, 531L, 559L) */ (abs (
						/* 833L, 156L, 532L, 560L) */ (abs (
							var_1_17
						))
					))
				)
			))
		);
	} else {
		/* 846L, 169L, 534L, 562L) */ var_1_19 = (
			/* 845L, 168L, 537L, 565L) */ (min (
				/* 845L, 168L, 537L, 565L) */ (
					var_1_17
				) , (
					/* 844L, 167L, 539L, 567L) */ ((
						/* 842L, 165L, 540L, 568L) */ ((
							var_1_20
						) + (
							var_1_21
						))
					) - (
						var_1_22
					))
				)
			))
		);
	}


	// From: Req8Batch56Filler_PS_CO
	/* 852L, 215L, 630L, 657L) */ if (/* 853L, 178L, 179L, 631L, 658L) */ ((var_1_22) >= (var_1_12))) {
		/* 856L, 190L, 634L, 661L) */ var_1_23 = (
			/* 859L, 189L, 637L, 664L) */ ((
				var_1_21
			) + (
				var_1_17
			))
		);
	} else {
		/* 862L, 213L, 640L, 667L) */ if (/* 863L, 194L, 195L, 641L, 668L) */ (! (/* 864L, 193L, 196L, 642L, 669L) */ ((var_1_6) >= (var_1_22))))) {
			/* 867L, 208L, 645L, 672L) */ var_1_23 = (
				/* 870L, 207L, 648L, 675L) */ (min (
					/* 870L, 207L, 648L, 675L) */ (
						var_1_20
					) , (
						var_1_22
					)
				))
			);
		} else {
			/* 873L, 212L, 651L, 678L) */ var_1_23 = (
				var_1_17
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 64);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 190);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32768);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -16383);
	assume_abort_if_not(var_1_28 <= 16383);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 1073741824);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 32767);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -1);
	assume_abort_if_not(var_1_37 <= 127);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 65534);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 6);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 0);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -922337.2036854766000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 418L, 4L, 8L, 252L, 267L, 879L) */ ((var_1_2) && (var_1_3))) {
	}
	if (var_1_4) {
	}
	if (/* 444L, 53L, 61L, 364L, 383L, 905L) */ ((var_1_7) >= (/* 446L, 52L, 63L, 366L, 385L, 907L) */ (min (/* 446L, 52L, 63L, 366L, 385L, 907L) */ (var_1_6) , (/* 448L, 51L, 65L, 368L, 387L, 909L) */ ((var_1_8) / (256)))))))) {
	} else {
	}
	if (var_1_1) {
	}
	if (/* 492L, 135L, 144L, 574L, 602L, 953L) */ ((/* 493L, 131L, 145L, 575L, 603L, 954L) */ (- (/* 494L, 130L, 146L, 576L, 604L, 955L) */ ((var_1_10) / (var_1_13))))) <= (/* 497L, 134L, 149L, 579L, 607L, 958L) */ ((var_1_17) + (var_1_10))))) {
	} else {
	}
	if (/* 521L, 178L, 182L, 685L, 712L, 982L) */ ((var_1_22) >= (var_1_12))) {
	} else {
		if (/* 531L, 194L, 199L, 695L, 722L, 992L) */ (! (/* 532L, 193L, 200L, 696L, 723L, 993L) */ ((var_1_6) >= (var_1_22))))) {
		} else {
		}
	}
	return /* 552L) */ ((
	/* 551L) */ ((
		/* 550L) */ ((
			/* 549L) */ ((
				/* 548L) */ ((
					/* 547L) */ ((
						/* 546L) */ ((
							/* 417L, 22L, 251L, 266L, 878L) */ ((
								/* 418L, 4L, 8L, 252L, 267L, 879L) */ ((
									var_1_2
								) && (
									var_1_3
								))
							) ? (
								/* 421L, 20L, 255L, 270L, 882L) */ ((
									var_1_1
								) == (
									/* 421L, 20L, 255L, 270L, 882L) */ ((unsigned char) (
										/* 424L, 19L, 258L, 273L, 885L) */ ((
											/* 425L, 14L, 259L, 274L, 886L) */ (! (
												var_1_4
											))
										) || (
											/* 427L, 18L, 261L, 276L, 888L) */ (! (
												/* 428L, 17L, 262L, 277L, 889L) */ ((
													var_1_2
												) || (
													var_1_5
												))
											))
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 432L, 39L, 303L, 314L, 893L) */ ((
								var_1_4
							) ? (
								/* 434L, 37L, 305L, 316L, 895L) */ ((
									var_1_6
								) == (
									/* 434L, 37L, 305L, 316L, 895L) */ ((unsigned short int) (
										/* 437L, 36L, 308L, 319L, 898L) */ ((
											var_1_7
										) + (
											/* 439L, 35L, 310L, 321L, 900L) */ (min (
												/* 439L, 35L, 310L, 321L, 900L) */ (
													var_1_8
												) , (
													var_1_9
												)
											))
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 443L, 79L, 363L, 382L, 904L) */ ((
							/* 444L, 53L, 61L, 364L, 383L, 905L) */ ((
								var_1_7
							) >= (
								/* 446L, 52L, 63L, 366L, 385L, 907L) */ (min (
									/* 446L, 52L, 63L, 366L, 385L, 907L) */ (
										var_1_6
									) , (
										/* 448L, 51L, 65L, 368L, 387L, 909L) */ ((
											var_1_8
										) / (
											256
										))
									)
								))
							))
						) ? (
							/* 451L, 71L, 371L, 390L, 912L) */ ((
								var_1_10
							) == (
								/* 451L, 71L, 371L, 390L, 912L) */ ((signed long int) (
									var_1_11
								))
							))
						) : (
							/* 455L, 77L, 375L, 394L, 916L) */ ((
								var_1_10
							) == (
								/* 455L, 77L, 375L, 394L, 916L) */ ((signed long int) (
									/* 458L, 76L, 378L, 397L, 919L) */ (max (
										/* 458L, 76L, 378L, 397L, 919L) */ (
											var_1_6
										) , (
											var_1_8
										)
									))
								))
							))
						))
					))
				) && (
					/* 463L, 92L, 422L, 432L, 924L) */ ((
						var_1_12
					) == (
						/* 463L, 92L, 422L, 432L, 924L) */ ((unsigned char) (
							/* 466L, 91L, 425L, 435L, 927L) */ ((
								/* 467L, 89L, 426L, 436L, 928L) */ ((
									64
								) + (
									var_1_13
								))
							) - (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 473L, 106L, 462L, 472L, 934L) */ ((
					var_1_15
				) == (
					/* 473L, 106L, 462L, 472L, 934L) */ ((unsigned char) (
						/* 476L, 105L, 465L, 475L, 937L) */ ((
							/* 477L, 103L, 466L, 476L, 938L) */ ((
								var_1_16
							) - (
								var_1_17
							))
						) - (
							10
						))
					))
				))
			))
		) && (
			/* 482L, 123L, 499L, 508L, 943L) */ ((
				var_1_1
			) ? (
				/* 484L, 121L, 501L, 510L, 945L) */ ((
					var_1_18
				) == (
					/* 484L, 121L, 501L, 510L, 945L) */ ((unsigned char) (
						/* 487L, 120L, 504L, 513L, 948L) */ ((
							var_1_16
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
		/* 491L, 171L, 573L, 601L, 952L) */ ((
			/* 492L, 135L, 144L, 574L, 602L, 953L) */ ((
				/* 493L, 131L, 145L, 575L, 603L, 954L) */ (- (
					/* 494L, 130L, 146L, 576L, 604L, 955L) */ ((
						var_1_10
					) / (
						var_1_13
					))
				))
			) <= (
				/* 497L, 134L, 149L, 579L, 607L, 958L) */ ((
					var_1_17
				) + (
					var_1_10
				))
			))
		) ? (
			/* 500L, 159L, 582L, 610L, 961L) */ ((
				var_1_19
			) == (
				/* 500L, 159L, 582L, 610L, 961L) */ ((signed char) (
					/* 503L, 158L, 585L, 613L, 964L) */ (min (
						/* 503L, 158L, 585L, 613L, 964L) */ (
							var_1_16
						) , (
							/* 505L, 157L, 587L, 615L, 966L) */ (abs (
								/* 506L, 156L, 588L, 616L, 967L) */ (abs (
									var_1_17
								))
							))
						)
					))
				))
			))
		) : (
			/* 508L, 169L, 590L, 618L, 969L) */ ((
				var_1_19
			) == (
				/* 508L, 169L, 590L, 618L, 969L) */ ((signed char) (
					/* 511L, 168L, 593L, 621L, 972L) */ (min (
						/* 511L, 168L, 593L, 621L, 972L) */ (
							var_1_17
						) , (
							/* 513L, 167L, 595L, 623L, 974L) */ ((
								/* 514L, 165L, 596L, 624L, 975L) */ ((
									var_1_20
								) + (
									var_1_21
								))
							) - (
								var_1_22
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 520L, 216L, 684L, 711L, 981L) */ ((
		/* 521L, 178L, 182L, 685L, 712L, 982L) */ ((
			var_1_22
		) >= (
			var_1_12
		))
	) ? (
		/* 524L, 190L, 688L, 715L, 985L) */ ((
			var_1_23
		) == (
			/* 524L, 190L, 688L, 715L, 985L) */ ((signed char) (
				/* 527L, 189L, 691L, 718L, 988L) */ ((
					var_1_21
				) + (
					var_1_17
				))
			))
		))
	) : (
		/* 530L, 214L, 694L, 721L, 991L) */ ((
			/* 531L, 194L, 199L, 695L, 722L, 992L) */ (! (
				/* 532L, 193L, 200L, 696L, 723L, 993L) */ ((
					var_1_6
				) >= (
					var_1_22
				))
			))
		) ? (
			/* 535L, 208L, 699L, 726L, 996L) */ ((
				var_1_23
			) == (
				/* 535L, 208L, 699L, 726L, 996L) */ ((signed char) (
					/* 538L, 207L, 702L, 729L, 999L) */ (min (
						/* 538L, 207L, 702L, 729L, 999L) */ (
							var_1_20
						) , (
							var_1_22
						)
					))
				))
			))
		) : (
			/* 541L, 212L, 705L, 732L, 1002L) */ ((
				var_1_23
			) == (
				/* 541L, 212L, 705L, 732L, 1002L) */ ((signed char) (
					var_1_17
				))
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
