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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Filler_PE_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = -2;
signed char var_1_3 = 25;
signed char var_1_4 = 50;
signed char var_1_5 = -25;
double var_1_6 = 1.5;
double var_1_7 = 24.625;
double var_1_8 = 0.75;
unsigned char var_1_9 = 10;
unsigned char var_1_10 = 50;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 2;
unsigned short int var_1_17 = 28938;
unsigned short int var_1_18 = 23710;
unsigned short int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed char var_1_21 = 4;
unsigned long int var_1_22 = 8;
unsigned long int var_1_23 = 8;
signed char var_1_24 = 16;
signed short int var_1_25 = 100;
unsigned long int var_1_26 = 0;
float var_1_27 = 15.5;
float var_1_30 = 5.25;
float var_1_31 = 127.25;
double var_1_32 = 25.25;
double var_1_33 = 99999.76;
signed char var_1_34 = 16;
signed short int var_1_35 = 16;
signed short int var_1_36 = 4;
signed char var_1_37 = 50;
float var_1_38 = 31.2;
signed short int var_1_39 = -2;
unsigned long int var_1_40 = 3050730359;
unsigned long int var_1_41 = 2554258282;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch131Filler_PE_CO
	/* 770L, 54L, 313L, 325L) */ if (/* 771L, 37L, 38L, 314L, 326L) */ ((/* 772L, 34L, 39L, 315L, 327L) */ ((var_1_6) * (var_1_7))) < (/* 775L, 36L, 42L, 318L, 330L) */ (- (var_1_8))))) {
		/* 777L, 53L, 320L, 332L) */ var_1_5 = (
			var_1_3
		);
	}


	// From: Req3Batch131Filler_PE_CO
	/* 784L, 65L, 363L, 372L) */ var_1_9 = (
		/* 787L, 64L, 366L, 375L) */ ((
			var_1_4
		) + (
			var_1_10
		))
	);


	// From: Req5Batch131Filler_PE_CO
	/* 803L, 127L, 445L, 461L) */ if (/* 804L, 104L, 105L, 446L, 462L) */ ((/* 805L, 100L, 106L, 447L, 463L) */ ((var_1_7) * (/* 807L, 99L, 108L, 449L, 465L) */ (- (var_1_6))))) <= (/* 809L, 103L, 110L, 451L, 467L) */ ((4.25) * (var_1_8))))) {
		/* 812L, 126L, 454L, 470L) */ var_1_13 = (
			/* 815L, 125L, 457L, 473L) */ ((
				var_1_12
			) && (
				var_1_14
			))
		);
	}


	// From: Req6Batch131Filler_PE_CO
	signed long int stepLocal_1 = 500;
	/* 848L, 173L, 509L, 538L) */ if (/* 825L, 139L, 140L, 510L, 539L) */ ((stepLocal_1) != (/* 824L, 138L, 142L, 512L, 541L) */ ((var_1_10) >> (var_1_16))))) {
		/* 843L, 168L, 515L, 544L) */ var_1_15 = (
			/* 842L, 167L, 518L, 547L) */ (min (
				/* 842L, 167L, 518L, 547L) */ (
					/* 834L, 158L, 519L, 548L) */ ((
						/* 830L, 154L, 520L, 549L) */ ((
							var_1_17
						) - (
							var_1_9
						))
					) + (
						/* 833L, 157L, 523L, 552L) */ ((
							var_1_18
						) - (
							var_1_4
						))
					))
				) , (
					/* 841L, 166L, 526L, 555L) */ (max (
						/* 841L, 166L, 526L, 555L) */ (
							/* 837L, 161L, 527L, 556L) */ (min (
								/* 837L, 161L, 527L, 556L) */ (
									var_1_10
								) , (
									var_1_16
								)
							))
						) , (
							/* 840L, 165L, 530L, 559L) */ ((
								128
							) + (
								var_1_19
							))
						)
					))
				)
			))
		);
	} else {
		/* 847L, 172L, 533L, 562L) */ var_1_15 = (
			var_1_4
		);
	}


	// From: Req7Batch131Filler_PE_CO
	signed long int stepLocal_3 = /* 860L, 207L, 215L, 640L, 671L) */ ((var_1_15) / (-2));
	unsigned char stepLocal_2 = /* 853L, 184L, 188L, 628L, 659L) */ ((var_1_18) > (/* 855L, 183L, 190L, 630L, 661L) */ ((var_1_4) % (var_1_16))));
	/* 885L, 241L, 625L, 656L) */ if (/* 865L, 185L, 186L, 626L, 657L) */ ((var_1_13) && (stepLocal_2))) {
		/* 884L, 239L, 633L, 664L) */ if (/* 871L, 208L, 209L, 634L, 665L) */ ((/* 870L, 204L, 210L, 635L, 666L) */ ((/* 868L, 202L, 211L, 636L, 667L) */ ((var_1_3) - (var_1_16))) * (var_1_5))) > (stepLocal_3))) {
			/* 879L, 234L, 643L, 674L) */ var_1_20 = (
				/* 878L, 233L, 646L, 677L) */ ((
					/* 876L, 231L, 647L, 678L) */ ((
						var_1_17
					) >= (
						var_1_10
					))
				) && (
					var_1_14
				))
			);
		} else {
			/* 883L, 238L, 651L, 682L) */ var_1_20 = (
				var_1_12
			);
		}
	}


	// From: Req1Batch131Filler_PE_CO
	signed char stepLocal_0 = var_1_4;
	/* 766L, 26L, 245L, 262L) */ if (var_1_13) {
		/* 758L, 10L, 247L, 264L) */ var_1_1 = (
			/* 757L, 9L, 250L, 267L) */ ((
				var_1_3
			) - (
				var_1_4
			))
		);
	} else {
		/* 765L, 24L, 253L, 270L) */ if (/* 760L, 13L, 14L, 254L, 271L) */ ((stepLocal_0) <= (var_1_3))) {
			/* 764L, 23L, 257L, 274L) */ var_1_1 = (
				var_1_4
			);
		}
	}


	// From: Req4Batch131Filler_PE_CO
	/* 792L, 89L, 398L, 410L) */ if (/* 793L, 76L, 77L, 399L, 411L) */ ((var_1_15) > (var_1_1))) {
		/* 796L, 88L, 402L, 414L) */ var_1_11 = (
			/* 799L, 87L, 405L, 417L) */ (! (
				/* 800L, 86L, 406L, 418L) */ (! (
					var_1_12
				))
			))
		);
	}


	// From: CodeObject1
	/* 241L, 21L) */ if (/* 242L, 6L, 7L) */ ((/* 243L, 4L, 8L) */ (abs (/* 244L, 3L, 9L) */ (abs (var_1_22))))) < (var_1_23))) {
		/* 247L, 20L) */ var_1_21 = (
			var_1_24
		);
	}


	// From: CodeObject2
	/* 251L, 56L) */ if (/* 252L, 27L, 28L) */ ((var_1_22) < (var_1_23))) {
		/* 255L, 54L) */ if (/* 256L, 39L, 40L) */ ((var_1_23) < (/* 258L, 38L, 42L) */ ((var_1_22) ^ (var_1_26))))) {
			/* 261L, 53L) */ var_1_25 = (
				var_1_9
			);
		}
	}


	// From: CodeObject3
	/* 265L, 80L) */ if (/* 266L, 62L, 63L) */ ((var_1_15) <= (var_1_26))) {
		/* 269L, 78L) */ if (var_1_11) {
			/* 271L, 77L) */ var_1_27 = (
				/* 274L, 76L) */ (min (
					/* 274L, 76L) */ (
						var_1_30
					) , (
						var_1_31
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 279L, 104L) */ if (/* 280L, 87L, 88L) */ ((/* 281L, 85L, 89L) */ (~ (var_1_15))) > (var_1_26))) {
		/* 284L, 103L) */ var_1_32 = (
			/* 287L, 102L) */ (abs (
				/* 288L, 101L) */ ((
					var_1_33
				) - (
					/* 290L, 100L) */ (abs (
						var_1_31
					))
				))
			))
		);
	}


	// From: CodeObject5
	/* 292L, 174L) */ if (/* 293L, 117L, 118L) */ ((/* 294L, 114L, 119L) */ ((var_1_30) / (7.5f))) > (/* 297L, 116L, 122L) */ (- (var_1_27))))) {
		/* 299L, 172L) */ if (var_1_13) {
			/* 301L, 170L) */ if (/* 302L, 139L, 140L) */ ((var_1_23) < (/* 304L, 138L, 142L) */ ((var_1_22) >> (/* 306L, 137L, 144L) */ ((var_1_35) - (var_1_36))))))) {
				/* 309L, 161L) */ var_1_34 = (
					/* 312L, 160L) */ (min (
						/* 312L, 160L) */ (
							/* 313L, 158L) */ (min (
								/* 313L, 158L) */ (
									var_1_35
								) , (
									var_1_36
								)
							))
						) , (
							var_1_24
						)
					))
				);
			} else {
				/* 317L, 169L) */ var_1_34 = (
					/* 320L, 168L) */ ((
						var_1_35
					) - (
						/* 322L, 167L) */ (min (
							/* 322L, 167L) */ (
								var_1_36
							) , (
								var_1_37
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject6
	/* 325L, 208L) */ if (/* 326L, 190L, 191L) */ ((var_1_15) > (/* 328L, 189L, 193L) */ ((32) - (var_1_35))))) {
		/* 331L, 207L) */ var_1_38 = (
			/* 334L, 206L) */ (abs (
				/* 335L, 205L) */ (max (
					/* 335L, 205L) */ (
						var_1_33
					) , (
						var_1_30
					)
				))
			))
		);
	}


	// From: CodeObject7
	/* 338L, 239L) */ if (/* 339L, 218L, 219L) */ ((var_1_23) <= (/* 341L, 217L, 221L) */ ((/* 342L, 215L, 222L) */ (min (/* 342L, 215L, 222L) */ (var_1_40) , (var_1_41)))) - (var_1_37))))) {
		/* 346L, 238L) */ var_1_39 = (
			/* 349L, 237L) */ ((
				var_1_1
			) + (
				-8
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -1);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 7);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 16383);
	assume_abort_if_not(var_1_17 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 16);
	assume_abort_if_not(var_1_35 <= 31);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 15);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967295);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 2147483647);
	assume_abort_if_not(var_1_41 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_13) {
	} else {
		if (/* 361L, 13L, 17L, 288L, 305L, 899L) */ ((var_1_4) <= (var_1_3))) {
		}
	}
	if (/* 370L, 37L, 44L, 338L, 350L, 908L) */ ((/* 371L, 34L, 45L, 339L, 351L, 909L) */ ((var_1_6) * (var_1_7))) < (/* 374L, 36L, 48L, 342L, 354L, 912L) */ (- (var_1_8))))) {
	}
	if (/* 392L, 76L, 80L, 423L, 435L, 930L) */ ((var_1_15) > (var_1_1))) {
	}
	if (/* 403L, 104L, 113L, 478L, 494L, 941L) */ ((/* 404L, 100L, 114L, 479L, 495L, 942L) */ ((var_1_7) * (/* 406L, 99L, 116L, 481L, 497L, 944L) */ (- (var_1_6))))) <= (/* 408L, 103L, 118L, 483L, 499L, 946L) */ ((4.25) * (var_1_8))))) {
	}
	if (/* 419L, 139L, 145L, 568L, 597L, 957L) */ ((500) != (/* 421L, 138L, 147L, 570L, 599L, 959L) */ ((var_1_10) >> (var_1_16))))) {
	} else {
	}
	if (/* 448L, 185L, 193L, 688L, 719L, 986L) */ ((var_1_13) && (/* 450L, 184L, 195L, 690L, 721L, 988L) */ ((var_1_18) > (/* 452L, 183L, 197L, 692L, 723L, 990L) */ ((var_1_4) % (var_1_16))))))) {
		if (/* 456L, 208L, 218L, 696L, 727L, 994L) */ ((/* 457L, 204L, 219L, 697L, 728L, 995L) */ ((/* 458L, 202L, 220L, 698L, 729L, 996L) */ ((var_1_3) - (var_1_16))) * (var_1_5))) > (/* 462L, 207L, 224L, 702L, 733L, 1000L) */ ((var_1_15) / (-2))))) {
		} else {
		}
	}
	return /* 483L) */ ((
	/* 482L) */ ((
		/* 481L) */ ((
			/* 480L) */ ((
				/* 479L) */ ((
					/* 478L) */ ((
						/* 352L, 27L, 279L, 296L, 890L) */ ((
							var_1_13
						) ? (
							/* 354L, 10L, 281L, 298L, 892L) */ ((
								var_1_1
							) == (
								/* 354L, 10L, 281L, 298L, 892L) */ ((signed char) (
									/* 357L, 9L, 284L, 301L, 895L) */ ((
										var_1_3
									) - (
										var_1_4
									))
								))
							))
						) : (
							/* 360L, 25L, 287L, 304L, 898L) */ ((
								/* 361L, 13L, 17L, 288L, 305L, 899L) */ ((
									var_1_4
								) <= (
									var_1_3
								))
							) ? (
								/* 364L, 23L, 291L, 308L, 902L) */ ((
									var_1_1
								) == (
									/* 364L, 23L, 291L, 308L, 902L) */ ((signed char) (
										var_1_4
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 369L, 55L, 337L, 349L, 907L) */ ((
							/* 370L, 37L, 44L, 338L, 350L, 908L) */ ((
								/* 371L, 34L, 45L, 339L, 351L, 909L) */ ((
									var_1_6
								) * (
									var_1_7
								))
							) < (
								/* 374L, 36L, 48L, 342L, 354L, 912L) */ (- (
									var_1_8
								))
							))
						) ? (
							/* 376L, 53L, 344L, 356L, 914L) */ ((
								var_1_5
							) == (
								/* 376L, 53L, 344L, 356L, 914L) */ ((signed char) (
									var_1_3
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 383L, 65L, 381L, 390L, 921L) */ ((
						var_1_9
					) == (
						/* 383L, 65L, 381L, 390L, 921L) */ ((unsigned char) (
							/* 386L, 64L, 384L, 393L, 924L) */ ((
								var_1_4
							) + (
								var_1_10
							))
						))
					))
				))
			) && (
				/* 391L, 90L, 422L, 434L, 929L) */ ((
					/* 392L, 76L, 80L, 423L, 435L, 930L) */ ((
						var_1_15
					) > (
						var_1_1
					))
				) ? (
					/* 395L, 88L, 426L, 438L, 933L) */ ((
						var_1_11
					) == (
						/* 395L, 88L, 426L, 438L, 933L) */ ((unsigned char) (
							/* 398L, 87L, 429L, 441L, 936L) */ (! (
								/* 399L, 86L, 430L, 442L, 937L) */ (! (
									var_1_12
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 402L, 128L, 477L, 493L, 940L) */ ((
				/* 403L, 104L, 113L, 478L, 494L, 941L) */ ((
					/* 404L, 100L, 114L, 479L, 495L, 942L) */ ((
						var_1_7
					) * (
						/* 406L, 99L, 116L, 481L, 497L, 944L) */ (- (
							var_1_6
						))
					))
				) <= (
					/* 408L, 103L, 118L, 483L, 499L, 946L) */ ((
						4.25
					) * (
						var_1_8
					))
				))
			) ? (
				/* 411L, 126L, 486L, 502L, 949L) */ ((
					var_1_13
				) == (
					/* 411L, 126L, 486L, 502L, 949L) */ ((unsigned char) (
						/* 414L, 125L, 489L, 505L, 952L) */ ((
							var_1_12
						) && (
							var_1_14
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 418L, 174L, 567L, 596L, 956L) */ ((
			/* 419L, 139L, 145L, 568L, 597L, 957L) */ ((
				500
			) != (
				/* 421L, 138L, 147L, 570L, 599L, 959L) */ ((
					var_1_10
				) >> (
					var_1_16
				))
			))
		) ? (
			/* 424L, 168L, 573L, 602L, 962L) */ ((
				var_1_15
			) == (
				/* 424L, 168L, 573L, 602L, 962L) */ ((unsigned short int) (
					/* 427L, 167L, 576L, 605L, 965L) */ (min (
						/* 427L, 167L, 576L, 605L, 965L) */ (
							/* 428L, 158L, 577L, 606L, 966L) */ ((
								/* 429L, 154L, 578L, 607L, 967L) */ ((
									var_1_17
								) - (
									var_1_9
								))
							) + (
								/* 432L, 157L, 581L, 610L, 970L) */ ((
									var_1_18
								) - (
									var_1_4
								))
							))
						) , (
							/* 435L, 166L, 584L, 613L, 973L) */ (max (
								/* 435L, 166L, 584L, 613L, 973L) */ (
									/* 436L, 161L, 585L, 614L, 974L) */ (min (
										/* 436L, 161L, 585L, 614L, 974L) */ (
											var_1_10
										) , (
											var_1_16
										)
									))
								) , (
									/* 439L, 165L, 588L, 617L, 977L) */ ((
										128
									) + (
										var_1_19
									))
								)
							))
						)
					))
				))
			))
		) : (
			/* 442L, 172L, 591L, 620L, 980L) */ ((
				var_1_15
			) == (
				/* 442L, 172L, 591L, 620L, 980L) */ ((unsigned short int) (
					var_1_4
				))
			))
		))
	))
) && (
	/* 447L, 242L, 687L, 718L, 985L) */ ((
		/* 448L, 185L, 193L, 688L, 719L, 986L) */ ((
			var_1_13
		) && (
			/* 450L, 184L, 195L, 690L, 721L, 988L) */ ((
				var_1_18
			) > (
				/* 452L, 183L, 197L, 692L, 723L, 990L) */ ((
					var_1_4
				) % (
					var_1_16
				))
			))
		))
	) ? (
		/* 455L, 240L, 695L, 726L, 993L) */ ((
			/* 456L, 208L, 218L, 696L, 727L, 994L) */ ((
				/* 457L, 204L, 219L, 697L, 728L, 995L) */ ((
					/* 458L, 202L, 220L, 698L, 729L, 996L) */ ((
						var_1_3
					) - (
						var_1_16
					))
				) * (
					var_1_5
				))
			) > (
				/* 462L, 207L, 224L, 702L, 733L, 1000L) */ ((
					var_1_15
				) / (
					-2
				))
			))
		) ? (
			/* 465L, 234L, 705L, 736L, 1003L) */ ((
				var_1_20
			) == (
				/* 465L, 234L, 705L, 736L, 1003L) */ ((unsigned char) (
					/* 468L, 233L, 708L, 739L, 1006L) */ ((
						/* 469L, 231L, 709L, 740L, 1007L) */ ((
							var_1_17
						) >= (
							var_1_10
						))
					) && (
						var_1_14
					))
				))
			))
		) : (
			/* 473L, 238L, 713L, 744L, 1011L) */ ((
				var_1_20
			) == (
				/* 473L, 238L, 713L, 744L, 1011L) */ ((unsigned char) (
					var_1_12
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
