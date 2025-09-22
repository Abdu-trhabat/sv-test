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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
double var_1_2 = 500.25;
double var_1_3 = 15.55;
double var_1_4 = 127.5;
double var_1_5 = 2.25;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
float var_1_9 = 15.4;
unsigned long int var_1_10 = 2457580018;
unsigned long int var_1_11 = 25;
unsigned long int var_1_12 = 2510016289;
unsigned long int var_1_13 = 32;
float var_1_14 = 1.75;
float var_1_15 = 15.6;
float var_1_16 = 256.081;
signed short int var_1_17 = -2;
signed short int var_1_18 = 4;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 60766;
unsigned short int var_1_21 = 17186;
signed long int var_1_22 = 5;
signed char var_1_23 = -16;
signed char var_1_24 = 16;
signed short int var_1_25 = 2;
signed long int var_1_26 = 16;
float var_1_27 = 999.05;
unsigned short int var_1_28 = 16;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
unsigned short int var_1_31 = 64;
unsigned short int var_1_32 = 8;
unsigned short int var_1_34 = 16521;
unsigned short int var_1_35 = 25;
signed char var_1_36 = -32;
unsigned long int var_1_37 = 1;
unsigned long int var_1_38 = 3907449526;
unsigned long int var_1_39 = 3941914626;
signed short int var_1_40 = 25;
signed short int var_1_41 = -10;
double var_1_42 = 1.9;
double var_1_43 = 256.9;
double var_1_44 = 999999.1;
double var_1_45 = 31.5;
unsigned long int var_1_46 = 32;
double var_1_47 = 4.375;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 238L, 49L) */ if (var_1_1) {
		/* 240L, 22L) */ if (/* 241L, 6L, 7L) */ (! (var_1_1))) {
			/* 243L, 16L) */ var_1_28 = (
				/* 246L, 15L) */ (max (
					/* 246L, 15L) */ (
						var_1_31
					) , (
						var_1_32
					)
				))
			);
		} else {
			/* 249L, 21L) */ var_1_28 = (
				/* 252L, 20L) */ (abs (
					var_1_32
				))
			);
		}
	} else {
		/* 254L, 47L) */ if (/* 255L, 28L, 29L) */ ((/* 256L, 26L, 30L) */ ((var_1_32) * (var_1_31))) >= (var_1_26))) {
			/* 260L, 46L) */ var_1_28 = (
				/* 263L, 45L) */ ((
					/* 264L, 43L) */ ((
						var_1_34
					) - (
						25
					))
				) + (
					var_1_35
				))
			);
		}
	}


	// From: CodeObject2
	/* 269L, 56L) */ var_1_36 = (
		-4
	);


	// From: CodeObject3
	/* 274L, 78L) */ if (/* 275L, 63L, 64L) */ ((var_1_34) >= (var_1_26))) {
		/* 278L, 77L) */ var_1_37 = (
			/* 281L, 76L) */ ((
				/* 282L, 74L) */ (min (
					/* 282L, 74L) */ (
						var_1_38
					) , (
						var_1_39
					)
				))
			) - (
				var_1_32
			))
		);
	}


	// From: CodeObject4
	/* 286L, 108L) */ if (/* 287L, 92L, 93L) */ (! (/* 288L, 91L, 94L) */ ((var_1_32) > (var_1_35))))) {
		/* 291L, 107L) */ var_1_40 = (
			/* 294L, 106L) */ (abs (
				/* 295L, 105L) */ ((
					var_1_26
				) + (
					var_1_41
				))
			))
		);
	}


	// From: CodeObject5
	/* 314L, 136L) */ if (/* 315L, 114L, 115L) */ ((var_1_30) || (var_1_29))) {
		/* 318L, 134L) */ if (var_1_30) {
			/* 320L, 127L) */ var_1_42 = (
				var_1_43
			);
		} else {
			/* 324L, 133L) */ var_1_42 = (
				/* 327L, 132L) */ ((
					var_1_44
				) - (
					var_1_45
				))
			);
		}
	}


	// From: CodeObject6
	/* 330L, 169L) */ if (/* 331L, 146L, 147L) */ ((/* 332L, 144L, 148L) */ ((var_1_22) + (/* 334L, 143L, 150L) */ ((var_1_32) - (var_1_31))))) > (var_1_35))) {
		/* 338L, 168L) */ var_1_46 = (
			/* 341L, 167L) */ (max (
				/* 341L, 167L) */ (
					var_1_34
				) , (
					/* 343L, 166L) */ (max (
						/* 343L, 166L) */ (
							200u
						) , (
							var_1_22
						)
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 378L, 236L) */ if (/* 379L, 179L, 180L) */ ((4) > (/* 381L, 178L, 182L) */ ((/* 382L, 176L, 183L) */ ((var_1_35) / (var_1_34))) | (var_1_22))))) {
		/* 386L, 199L) */ var_1_47 = (
			/* 389L, 198L) */ (min (
				/* 389L, 198L) */ (
					var_1_43
				) , (
					var_1_44
				)
			))
		);
	} else {
		/* 392L, 234L) */ if (/* 393L, 204L, 205L) */ ((var_1_44) <= (/* 395L, 203L, 207L) */ (max (/* 395L, 203L, 207L) */ (var_1_43) , (var_1_45)))))) {
			/* 398L, 232L) */ if (/* 399L, 217L, 218L) */ ((var_1_29) && (var_1_30))) {
				/* 402L, 227L) */ var_1_47 = (
					var_1_45
				);
			} else {
				/* 406L, 231L) */ var_1_47 = (
					var_1_43
				);
			}
		}
	}


	// From: Req1Batch196Filler_PS_CO
	/* 850L, 37L, 278L, 297L) */ if (/* 851L, 10L, 11L, 279L, 298L) */ ((/* 852L, 4L, 12L, 280L, 299L) */ ((var_1_2) + (3.25))) >= (/* 855L, 9L, 15L, 283L, 302L) */ ((/* 856L, 7L, 16L, 284L, 303L) */ (min (/* 856L, 7L, 16L, 284L, 303L) */ (var_1_3) , (var_1_4)))) - (var_1_5))))) {
		/* 860L, 36L, 288L, 307L) */ var_1_1 = (
			/* 863L, 35L, 291L, 310L) */ ((
				var_1_6
			) || (
				/* 865L, 34L, 293L, 312L) */ ((
					var_1_7
				) && (
					var_1_8
				))
			))
		);
	}


	// From: Req2Batch196Filler_PS_CO
	unsigned long int stepLocal_1 = var_1_12;
	unsigned long int stepLocal_0 = /* 870L, 47L, 55L, 356L, 386L) */ (~ (var_1_10));
	/* 901L, 101L, 354L, 384L) */ if (/* 881L, 53L, 54L, 355L, 385L) */ ((stepLocal_0) < (/* 880L, 52L, 57L, 358L, 388L) */ ((/* 878L, 50L, 58L, 359L, 389L) */ ((var_1_12) - (var_1_11))) + (var_1_13))))) {
		/* 885L, 73L, 363L, 393L) */ var_1_9 = (
			var_1_14
		);
	} else {
		/* 900L, 99L, 367L, 397L) */ if (/* 889L, 78L, 79L, 368L, 398L) */ ((stepLocal_1) < (/* 888L, 77L, 81L, 370L, 400L) */ ((var_1_10) * (var_1_11))))) {
			/* 893L, 92L, 373L, 403L) */ var_1_9 = (
				var_1_14
			);
		} else {
			/* 899L, 98L, 377L, 407L) */ var_1_9 = (
				/* 898L, 97L, 380L, 410L) */ ((
					var_1_15
				) - (
					var_1_16
				))
			);
		}
	}


	// From: Req3Batch196Filler_PS_CO
	/* 907L, 138L, 475L, 495L) */ if (/* 908L, 113L, 114L, 476L, 496L) */ ((/* 909L, 111L, 115L, 477L, 497L) */ ((/* 910L, 109L, 116L, 478L, 498L) */ (min (/* 910L, 109L, 116L, 478L, 498L) */ (var_1_12) , (var_1_11)))) >> (var_1_18))) != (var_1_10))) {
		/* 915L, 133L, 483L, 503L) */ var_1_17 = (
			/* 918L, 132L, 486L, 506L) */ (min (
				/* 918L, 132L, 486L, 506L) */ (
					var_1_18
				) , (
					-100
				)
			))
		);
	} else {
		/* 921L, 137L, 489L, 509L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: Req4Batch196Filler_PS_CO
	signed short int stepLocal_2 = var_1_18;
	/* 943L, 167L, 554L, 571L) */ if (/* 930L, 148L, 149L, 555L, 572L) */ ((stepLocal_2) > (var_1_11))) {
		/* 942L, 166L, 558L, 575L) */ var_1_19 = (
			/* 941L, 165L, 561L, 578L) */ ((
				/* 937L, 161L, 562L, 579L) */ (max (
					/* 937L, 161L, 562L, 579L) */ (
						/* 935L, 159L, 563L, 580L) */ (max (
							/* 935L, 159L, 563L, 580L) */ (
								36708
							) , (
								41437
							)
						))
					) , (
						var_1_20
					)
				))
			) - (
				/* 940L, 164L, 567L, 584L) */ ((
					var_1_21
				) - (
					var_1_18
				))
			))
		);
	}


	// From: Req5Batch196Filler_PS_CO
	/* 948L, 217L, 623L, 649L) */ if (/* 949L, 177L, 178L, 624L, 650L) */ ((/* 950L, 175L, 179L, 625L, 651L) */ ((var_1_5) + (var_1_2))) >= (499.6))) {
		/* 954L, 211L, 629L, 655L) */ if (/* 955L, 192L, 193L, 630L, 656L) */ ((/* 956L, 190L, 194L, 631L, 657L) */ ((var_1_13) / (var_1_18))) >= (var_1_20))) {
			/* 960L, 206L, 635L, 661L) */ var_1_22 = (
				var_1_17
			);
		} else {
			/* 964L, 210L, 639L, 665L) */ var_1_22 = (
				var_1_21
			);
		}
	} else {
		/* 968L, 216L, 643L, 669L) */ var_1_22 = (
			var_1_17
		);
	}


	// From: Req6Batch196Filler_PS_CO
	/* 975L, 240L, 728L, 741L) */ if (/* 976L, 227L, 228L, 729L, 742L) */ ((var_1_18) >= (var_1_21))) {
		/* 979L, 239L, 732L, 745L) */ var_1_23 = (
			/* 982L, 238L, 735L, 748L) */ (min (
				/* 982L, 238L, 735L, 748L) */ (
					var_1_18
				) , (
					var_1_24
				)
			))
		);
	}


	// From: Req7Batch196Filler_PS_CO
	/* 987L, 253L, 779L, 785L) */ var_1_25 = (
		var_1_17
	);


	// From: Req8Batch196Filler_PS_CO
	/* 993L, 263L, 803L, 809L) */ var_1_26 = (
		var_1_24
	);


	// From: Req9Batch196Filler_PS_CO
	/* 999L, 273L, 827L, 833L) */ var_1_27 = (
		var_1_16
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 2147483647);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 4294967295);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 31);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 32767);
	assume_abort_if_not(var_1_20 <= 65534);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -127);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 16383);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 2147483647);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -16383);
	assume_abort_if_not(var_1_41 <= 16383);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 411L, 10L, 20L, 317L, 336L, 1005L) */ ((/* 412L, 4L, 21L, 318L, 337L, 1006L) */ ((var_1_2) + (3.25))) >= (/* 415L, 9L, 24L, 321L, 340L, 1009L) */ ((/* 416L, 7L, 25L, 322L, 341L, 1010L) */ (min (/* 416L, 7L, 25L, 322L, 341L, 1010L) */ (var_1_3) , (var_1_4)))) - (var_1_5))))) {
	}
	if (/* 430L, 53L, 62L, 415L, 445L, 1024L) */ ((/* 431L, 47L, 63L, 416L, 446L, 1025L) */ (~ (var_1_10))) < (/* 433L, 52L, 65L, 418L, 448L, 1027L) */ ((/* 434L, 50L, 66L, 419L, 449L, 1028L) */ ((var_1_12) - (var_1_11))) + (var_1_13))))) {
	} else {
		if (/* 443L, 78L, 84L, 428L, 458L, 1037L) */ ((var_1_12) < (/* 445L, 77L, 86L, 430L, 460L, 1039L) */ ((var_1_10) * (var_1_11))))) {
		} else {
		}
	}
	if (/* 461L, 113L, 121L, 516L, 536L, 1055L) */ ((/* 462L, 111L, 122L, 517L, 537L, 1056L) */ ((/* 463L, 109L, 123L, 518L, 538L, 1057L) */ (min (/* 463L, 109L, 123L, 518L, 538L, 1057L) */ (var_1_12) , (var_1_11)))) >> (var_1_18))) != (var_1_10))) {
	} else {
	}
	if (/* 480L, 148L, 152L, 589L, 606L, 1074L) */ ((var_1_18) > (var_1_11))) {
	}
	if (/* 498L, 177L, 183L, 676L, 702L, 1092L) */ ((/* 499L, 175L, 184L, 677L, 703L, 1093L) */ ((var_1_5) + (var_1_2))) >= (499.6))) {
		if (/* 504L, 192L, 198L, 682L, 708L, 1098L) */ ((/* 505L, 190L, 199L, 683L, 709L, 1099L) */ ((var_1_13) / (var_1_18))) >= (var_1_20))) {
		} else {
		}
	} else {
	}
	if (/* 525L, 227L, 231L, 755L, 768L, 1119L) */ ((var_1_18) >= (var_1_21))) {
	}
	return /* 560L) */ ((
	/* 559L) */ ((
		/* 558L) */ ((
			/* 557L) */ ((
				/* 556L) */ ((
					/* 555L) */ ((
						/* 554L) */ ((
							/* 553L) */ ((
								/* 410L, 38L, 316L, 335L, 1004L) */ ((
									/* 411L, 10L, 20L, 317L, 336L, 1005L) */ ((
										/* 412L, 4L, 21L, 318L, 337L, 1006L) */ ((
											var_1_2
										) + (
											3.25
										))
									) >= (
										/* 415L, 9L, 24L, 321L, 340L, 1009L) */ ((
											/* 416L, 7L, 25L, 322L, 341L, 1010L) */ (min (
												/* 416L, 7L, 25L, 322L, 341L, 1010L) */ (
													var_1_3
												) , (
													var_1_4
												)
											))
										) - (
											var_1_5
										))
									))
								) ? (
									/* 420L, 36L, 326L, 345L, 1014L) */ ((
										var_1_1
									) == (
										/* 420L, 36L, 326L, 345L, 1014L) */ ((unsigned char) (
											/* 423L, 35L, 329L, 348L, 1017L) */ ((
												var_1_6
											) || (
												/* 425L, 34L, 331L, 350L, 1019L) */ ((
													var_1_7
												) && (
													var_1_8
												))
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 429L, 102L, 414L, 444L, 1023L) */ ((
									/* 430L, 53L, 62L, 415L, 445L, 1024L) */ ((
										/* 431L, 47L, 63L, 416L, 446L, 1025L) */ (~ (
											var_1_10
										))
									) < (
										/* 433L, 52L, 65L, 418L, 448L, 1027L) */ ((
											/* 434L, 50L, 66L, 419L, 449L, 1028L) */ ((
												var_1_12
											) - (
												var_1_11
											))
										) + (
											var_1_13
										))
									))
								) ? (
									/* 438L, 73L, 423L, 453L, 1032L) */ ((
										var_1_9
									) == (
										/* 438L, 73L, 423L, 453L, 1032L) */ ((float) (
											var_1_14
										))
									))
								) : (
									/* 442L, 100L, 427L, 457L, 1036L) */ ((
										/* 443L, 78L, 84L, 428L, 458L, 1037L) */ ((
											var_1_12
										) < (
											/* 445L, 77L, 86L, 430L, 460L, 1039L) */ ((
												var_1_10
											) * (
												var_1_11
											))
										))
									) ? (
										/* 448L, 92L, 433L, 463L, 1042L) */ ((
											var_1_9
										) == (
											/* 448L, 92L, 433L, 463L, 1042L) */ ((float) (
												var_1_14
											))
										))
									) : (
										/* 452L, 98L, 437L, 467L, 1046L) */ ((
											var_1_9
										) == (
											/* 452L, 98L, 437L, 467L, 1046L) */ ((float) (
												/* 455L, 97L, 440L, 470L, 1049L) */ ((
													var_1_15
												) - (
													var_1_16
												))
											))
										))
									))
								))
							))
						) && (
							/* 460L, 139L, 515L, 535L, 1054L) */ ((
								/* 461L, 113L, 121L, 516L, 536L, 1055L) */ ((
									/* 462L, 111L, 122L, 517L, 537L, 1056L) */ ((
										/* 463L, 109L, 123L, 518L, 538L, 1057L) */ (min (
											/* 463L, 109L, 123L, 518L, 538L, 1057L) */ (
												var_1_12
											) , (
												var_1_11
											)
										))
									) >> (
										var_1_18
									))
								) != (
									var_1_10
								))
							) ? (
								/* 468L, 133L, 523L, 543L, 1062L) */ ((
									var_1_17
								) == (
									/* 468L, 133L, 523L, 543L, 1062L) */ ((signed short int) (
										/* 471L, 132L, 526L, 546L, 1065L) */ (min (
											/* 471L, 132L, 526L, 546L, 1065L) */ (
												var_1_18
											) , (
												-100
											)
										))
									))
								))
							) : (
								/* 474L, 137L, 529L, 549L, 1068L) */ ((
									var_1_17
								) == (
									/* 474L, 137L, 529L, 549L, 1068L) */ ((signed short int) (
										var_1_18
									))
								))
							))
						))
					) && (
						/* 479L, 168L, 588L, 605L, 1073L) */ ((
							/* 480L, 148L, 152L, 589L, 606L, 1074L) */ ((
								var_1_18
							) > (
								var_1_11
							))
						) ? (
							/* 483L, 166L, 592L, 609L, 1077L) */ ((
								var_1_19
							) == (
								/* 483L, 166L, 592L, 609L, 1077L) */ ((unsigned short int) (
									/* 486L, 165L, 595L, 612L, 1080L) */ ((
										/* 487L, 161L, 596L, 613L, 1081L) */ (max (
											/* 487L, 161L, 596L, 613L, 1081L) */ (
												/* 488L, 159L, 597L, 614L, 1082L) */ (max (
													/* 488L, 159L, 597L, 614L, 1082L) */ (
														36708
													) , (
														41437
													)
												))
											) , (
												var_1_20
											)
										))
									) - (
										/* 492L, 164L, 601L, 618L, 1086L) */ ((
											var_1_21
										) - (
											var_1_18
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 497L, 218L, 675L, 701L, 1091L) */ ((
						/* 498L, 177L, 183L, 676L, 702L, 1092L) */ ((
							/* 499L, 175L, 184L, 677L, 703L, 1093L) */ ((
								var_1_5
							) + (
								var_1_2
							))
						) >= (
							499.6
						))
					) ? (
						/* 503L, 212L, 681L, 707L, 1097L) */ ((
							/* 504L, 192L, 198L, 682L, 708L, 1098L) */ ((
								/* 505L, 190L, 199L, 683L, 709L, 1099L) */ ((
									var_1_13
								) / (
									var_1_18
								))
							) >= (
								var_1_20
							))
						) ? (
							/* 509L, 206L, 687L, 713L, 1103L) */ ((
								var_1_22
							) == (
								/* 509L, 206L, 687L, 713L, 1103L) */ ((signed long int) (
									var_1_17
								))
							))
						) : (
							/* 513L, 210L, 691L, 717L, 1107L) */ ((
								var_1_22
							) == (
								/* 513L, 210L, 691L, 717L, 1107L) */ ((signed long int) (
									var_1_21
								))
							))
						))
					) : (
						/* 517L, 216L, 695L, 721L, 1111L) */ ((
							var_1_22
						) == (
							/* 517L, 216L, 695L, 721L, 1111L) */ ((signed long int) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 524L, 241L, 754L, 767L, 1118L) */ ((
					/* 525L, 227L, 231L, 755L, 768L, 1119L) */ ((
						var_1_18
					) >= (
						var_1_21
					))
				) ? (
					/* 528L, 239L, 758L, 771L, 1122L) */ ((
						var_1_23
					) == (
						/* 528L, 239L, 758L, 771L, 1122L) */ ((signed char) (
							/* 531L, 238L, 761L, 774L, 1125L) */ (min (
								/* 531L, 238L, 761L, 774L, 1125L) */ (
									var_1_18
								) , (
									var_1_24
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 536L, 253L, 791L, 797L, 1130L) */ ((
				var_1_25
			) == (
				/* 536L, 253L, 791L, 797L, 1130L) */ ((signed short int) (
					var_1_17
				))
			))
		))
	) && (
		/* 542L, 263L, 815L, 821L, 1136L) */ ((
			var_1_26
		) == (
			/* 542L, 263L, 815L, 821L, 1136L) */ ((signed long int) (
				var_1_24
			))
		))
	))
) && (
	/* 548L, 273L, 839L, 845L, 1142L) */ ((
		var_1_27
	) == (
		/* 548L, 273L, 839L, 845L, 1142L) */ ((float) (
			var_1_16
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
