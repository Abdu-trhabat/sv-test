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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch16Filler_PS_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = -50;
signed long int var_1_3 = 64;
unsigned char var_1_4 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = 64;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 2;
signed long int var_1_10 = 1441729073;
unsigned short int var_1_11 = 32;
double var_1_12 = 7.6;
double var_1_13 = 127.8;
signed char var_1_14 = 32;
signed char var_1_15 = 50;
signed char var_1_16 = 0;
signed char var_1_17 = 16;
float var_1_18 = 0.4;
unsigned char var_1_19 = 0;
float var_1_20 = 24.4;
float var_1_21 = 500.5;
float var_1_22 = 99.324;
unsigned short int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
double var_1_26 = 10.4;
signed char var_1_27 = 8;
signed char var_1_28 = -8;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 25;
unsigned short int var_1_36 = 10;
unsigned long int var_1_37 = 4179266779;
unsigned char var_1_38 = 64;
double var_1_40 = 49.4;
double var_1_41 = 10.95;
signed char var_1_42 = 32;
signed char var_1_43 = 8;
signed char var_1_44 = 8;
signed char var_1_46 = -10;
signed char var_1_47 = -32;
unsigned short int var_1_48 = 41179;
signed long int var_1_49 = 2019307118;
signed long int var_1_50 = 1355662084;
signed char var_1_51 = -25;
signed short int var_1_52 = 10;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 8;
signed long int last_1_var_1_9 = 2;
unsigned short int last_1_var_1_23 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 305L, 55L) */ var_1_24 = (
		var_1_25
	);


	// From: CodeObject2
	/* 310L, 63L) */ var_1_26 = (
		0.1
	);


	// From: CodeObject3
	/* 315L, 71L) */ var_1_27 = (
		var_1_28
	);


	// From: CodeObject4
	/* 319L, 111L) */ if (/* 320L, 82L, 83L) */ ((/* 321L, 79L, 84L) */ (abs (/* 322L, 78L, 85L) */ (max (/* 322L, 78L, 85L) */ (var_1_12) , (3.1)))))) < (/* 325L, 81L, 88L) */ (abs (255.5))))) {
		/* 327L, 106L) */ var_1_29 = (
			/* 330L, 105L) */ ((
				var_1_30
			) && (
				/* 332L, 104L) */ ((
					/* 333L, 102L) */ ((
						var_1_31
					) && (
						var_1_32
					))
				) && (
					var_1_33
				))
			))
		);
	} else {
		/* 337L, 110L) */ var_1_29 = (
			var_1_34
		);
	}


	// From: CodeObject5
	/* 341L, 152L) */ if (/* 342L, 121L, 122L) */ ((/* 343L, 119L, 123L) */ ((/* 344L, 117L, 124L) */ ((var_1_25) / (var_1_36))) ^ (var_1_23))) > (var_1_14))) {
		/* 349L, 150L) */ if (var_1_34) {
			/* 351L, 145L) */ var_1_35 = (
				/* 354L, 144L) */ ((
					var_1_37
				) - (
					/* 356L, 143L) */ (abs (
						var_1_36
					))
				))
			);
		} else {
			/* 358L, 149L) */ var_1_35 = (
				var_1_36
			);
		}
	}


	// From: CodeObject6
	/* 381L, 197L) */ if (/* 382L, 159L, 160L) */ ((/* 383L, 157L, 161L) */ (abs (var_1_11))) < (var_1_9))) {
		/* 386L, 195L) */ if (/* 387L, 174L, 175L) */ ((/* 388L, 172L, 176L) */ ((/* 389L, 170L, 177L) */ ((var_1_26) + (var_1_40))) / (1.000000000002E11))) > (var_1_41))) {
			/* 394L, 194L) */ var_1_38 = (
				/* 397L, 193L) */ (abs (
					/* 398L, 192L) */ (abs (
						var_1_25
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 402L, 205L) */ var_1_42 = (
		/* 405L, 204L) */ (abs (
			var_1_43
		))
	);


	// From: CodeObject8
	/* 407L, 286L) */ if (/* 408L, 223L, 224L) */ ((var_1_28) == (/* 410L, 222L, 226L) */ ((/* 411L, 220L, 227L) */ ((var_1_36) / (var_1_46))) % (var_1_47))))) {
		/* 415L, 242L) */ var_1_44 = (
			/* 418L, 241L) */ (abs (
				-10
			))
		);
	} else {
		/* 420L, 284L) */ if (/* 421L, 253L, 254L) */ ((/* 422L, 245L, 255L) */ ((var_1_48) - (var_1_9))) <= (/* 425L, 252L, 258L) */ ((/* 426L, 248L, 259L) */ ((var_1_49) - (var_1_9))) - (/* 429L, 251L, 262L) */ ((var_1_50) - (var_1_25))))))) {
			/* 432L, 279L) */ var_1_44 = (
				var_1_28
			);
		} else {
			/* 436L, 283L) */ var_1_44 = (
				var_1_43
			);
		}
	}


	// From: CodeObject9
	/* 441L, 293L) */ var_1_51 = (
		var_1_28
	);


	// From: CodeObject10
	/* 446L, 301L) */ var_1_52 = (
		5
	);


	// From: Req4Batch16Filler_PS_CO
	signed long int stepLocal_2 = /* 3L, 97L, 105L, 503L, 524L, 841L, 937L) */ ((var_1_5) | (var_1_6));
	/* 24L, 130L, 496L, 517L, 853L, 959L) */ if (/* 13L, 98L, 99L, 497L, 518L, 842L, 948L) */ ((/* 11L, 94L, 100L, 498L, 519L, 838L, 947L) */ ((/* 9L, 92L, 101L, 499L, 520L, 836L, 945L) */ ((last_1_var_1_23) + (last_1_var_1_9))) * (var_1_3))) < (stepLocal_2))) {
		/* 19L, 124L, 506L, 527L, 848L, 954L) */ if (var_1_4) {
			/* 18L, 123L, 508L, 529L, 847L, 953L) */ var_1_11 = (
				var_1_8
			);
		}
	} else {
		/* 23L, 129L, 512L, 533L, 852L, 958L) */ var_1_11 = (
			var_1_8
		);
	}


	// From: Req8Batch16Filler_PS_CO
	/* 1025L, 248L, 781L, 794L) */ if (/* 1026L, 231L, 232L, 782L, 795L) */ ((var_1_4) && (/* 1028L, 230L, 234L, 784L, 797L) */ ((/* 1029L, 228L, 235L, 785L, 798L) */ (abs (var_1_11))) > (var_1_5))))) {
		/* 1032L, 247L, 788L, 801L) */ var_1_23 = (
			var_1_6
		);
	}


	// From: Req2Batch16Filler_PS_CO
	signed short int stepLocal_1 = var_1_6;
	/* 917L, 57L, 346L, 358L) */ if (/* 910L, 44L, 45L, 347L, 359L) */ ((last_1_var_1_7) < (stepLocal_1))) {
		/* 916L, 56L, 351L, 363L) */ var_1_7 = (
			/* 915L, 55L, 354L, 366L) */ ((
				var_1_6
			) + (
				var_1_8
			))
		);
	}


	// From: Req3Batch16Filler_PS_CO
	/* 923L, 80L, 396L, 411L) */ if (/* 924L, 65L, 66L, 397L, 412L) */ ((var_1_6) > (128))) {
		/* 927L, 79L, 400L, 415L) */ var_1_9 = (
			/* 930L, 78L, 403L, 418L) */ ((
				var_1_8
			) - (
				/* 932L, 77L, 405L, 420L) */ ((
					var_1_10
				) - (
					var_1_7
				))
			))
		);
	}


	// From: Req5Batch16Filler_PS_CO
	unsigned short int stepLocal_4 = var_1_7;
	unsigned short int stepLocal_3 = var_1_8;
	/* 985L, 169L, 580L, 600L) */ if (/* 971L, 139L, 140L, 581L, 601L) */ ((stepLocal_4) < (/* 970L, 138L, 142L, 583L, 603L) */ (- (var_1_10))))) {
		/* 980L, 163L, 585L, 605L) */ if (/* 973L, 150L, 151L, 586L, 606L) */ ((stepLocal_3) <= (var_1_11))) {
			/* 979L, 162L, 589L, 609L) */ var_1_12 = (
				/* 978L, 161L, 592L, 612L) */ ((
					var_1_13
				) - (
					63.75
				))
			);
		}
	} else {
		/* 984L, 168L, 595L, 615L) */ var_1_12 = (
			var_1_13
		);
	}


	// From: Req6Batch16Filler_PS_CO
	signed long int stepLocal_5 = var_1_9;
	/* 1005L, 194L, 660L, 675L) */ if (/* 994L, 177L, 178L, 661L, 676L) */ ((stepLocal_5) <= (var_1_8))) {
		/* 1004L, 193L, 664L, 679L) */ var_1_14 = (
			/* 1003L, 192L, 667L, 682L) */ ((
				/* 1001L, 190L, 668L, 683L) */ ((
					/* 999L, 188L, 669L, 684L) */ (max (
						/* 999L, 188L, 669L, 684L) */ (
							var_1_15
						) , (
							var_1_16
						)
					))
				) - (
					var_1_17
				))
			) + (
				-2
			))
		);
	}


	// From: Req7Batch16Filler_PS_CO
	/* 1010L, 216L, 721L, 736L) */ if (/* 1011L, 200L, 201L, 722L, 737L) */ ((var_1_4) || (var_1_19))) {
		/* 1014L, 215L, 725L, 740L) */ var_1_18 = (
			/* 1017L, 214L, 728L, 743L) */ (abs (
				/* 1018L, 213L, 729L, 744L) */ ((
					var_1_20
				) + (
					/* 1020L, 212L, 731L, 746L) */ ((
						var_1_21
					) + (
						var_1_22
					))
				))
			))
		);
	}


	// From: Req1Batch16Filler_PS_CO
	signed long int stepLocal_0 = /* 879L, 4L, 8L, 256L, 279L) */ ((var_1_23) / (-50));
	/* 901L, 36L, 254L, 277L) */ if (/* 884L, 6L, 7L, 255L, 278L) */ ((stepLocal_0) >= (var_1_9))) {
		/* 896L, 30L, 260L, 283L) */ if (var_1_4) {
			/* 891L, 25L, 262L, 285L) */ var_1_1 = (
				/* 890L, 24L, 265L, 288L) */ ((
					var_1_5
				) - (
					var_1_6
				))
			);
		} else {
			/* 895L, 29L, 268L, 291L) */ var_1_1 = (
				var_1_5
			);
		}
	} else {
		/* 900L, 35L, 272L, 295L) */ var_1_1 = (
			var_1_5
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65535);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -126);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -128);
	assume_abort_if_not(var_1_46 <= 127);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -128);
	assume_abort_if_not(var_1_47 <= 127);
	assume_abort_if_not(var_1_47 != 0);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65535);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 451L, 6L, 12L, 301L, 324L, 1038L) */ ((/* 452L, 4L, 13L, 302L, 325L, 1039L) */ ((var_1_23) / (-50))) >= (var_1_9))) {
		if (var_1_4) {
		} else {
		}
	} else {
	}
	if (/* 474L, 44L, 48L, 371L, 383L, 1061L) */ ((last_1_var_1_7) < (var_1_6))) {
	}
	if (/* 488L, 65L, 69L, 427L, 442L, 1075L) */ ((var_1_6) > (128))) {
	}
	if (/* 501L, 98L, 108L, 539L, 560L, 865L, 1088L, 37L) */ ((/* 502L, 94L, 109L, 540L, 561L, 861L, 1089L, 33L) */ ((/* 503L, 92L, 110L, 541L, 562L, 859L, 1090L, 31L) */ ((last_1_var_1_23) + (last_1_var_1_9))) * (var_1_3))) < (/* 509L, 97L, 114L, 545L, 566L, 864L, 1096L, 36L) */ ((var_1_5) | (var_1_6))))) {
		if (var_1_4) {
		}
	} else {
	}
	if (/* 524L, 139L, 144L, 621L, 641L, 1111L) */ ((var_1_7) < (/* 526L, 138L, 146L, 623L, 643L, 1113L) */ (- (var_1_10))))) {
		if (/* 529L, 150L, 154L, 626L, 646L, 1116L) */ ((var_1_8) <= (var_1_11))) {
		}
	} else {
	}
	if (/* 544L, 177L, 181L, 691L, 706L, 1131L) */ ((var_1_9) <= (var_1_8))) {
	}
	if (/* 560L, 200L, 204L, 752L, 767L, 1147L) */ ((var_1_4) || (var_1_19))) {
	}
	if (/* 575L, 231L, 238L, 808L, 821L, 1162L) */ ((var_1_4) && (/* 577L, 230L, 240L, 810L, 823L, 1164L) */ ((/* 578L, 228L, 241L, 811L, 824L, 1165L) */ (abs (var_1_11))) > (var_1_5))))) {
	}
	return /* 592L) */ ((
	/* 591L) */ ((
		/* 590L) */ ((
			/* 589L) */ ((
				/* 588L) */ ((
					/* 587L) */ ((
						/* 586L) */ ((
							/* 450L, 37L, 300L, 323L, 1037L) */ ((
								/* 451L, 6L, 12L, 301L, 324L, 1038L) */ ((
									/* 452L, 4L, 13L, 302L, 325L, 1039L) */ ((
										var_1_23
									) / (
										-50
									))
								) >= (
									var_1_9
								))
							) ? (
								/* 456L, 31L, 306L, 329L, 1043L) */ ((
									var_1_4
								) ? (
									/* 458L, 25L, 308L, 331L, 1045L) */ ((
										var_1_1
									) == (
										/* 458L, 25L, 308L, 331L, 1045L) */ ((signed short int) (
											/* 461L, 24L, 311L, 334L, 1048L) */ ((
												var_1_5
											) - (
												var_1_6
											))
										))
									))
								) : (
									/* 464L, 29L, 314L, 337L, 1051L) */ ((
										var_1_1
									) == (
										/* 464L, 29L, 314L, 337L, 1051L) */ ((signed short int) (
											var_1_5
										))
									))
								))
							) : (
								/* 468L, 35L, 318L, 341L, 1055L) */ ((
									var_1_1
								) == (
									/* 468L, 35L, 318L, 341L, 1055L) */ ((signed short int) (
										var_1_5
									))
								))
							))
						) && (
							/* 473L, 58L, 370L, 382L, 1060L) */ ((
								/* 474L, 44L, 48L, 371L, 383L, 1061L) */ ((
									last_1_var_1_7
								) < (
									var_1_6
								))
							) ? (
								/* 478L, 56L, 375L, 387L, 1065L) */ ((
									var_1_7
								) == (
									/* 478L, 56L, 375L, 387L, 1065L) */ ((unsigned short int) (
										/* 481L, 55L, 378L, 390L, 1068L) */ ((
											var_1_6
										) + (
											var_1_8
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 487L, 81L, 426L, 441L, 1074L) */ ((
							/* 488L, 65L, 69L, 427L, 442L, 1075L) */ ((
								var_1_6
							) > (
								128
							))
						) ? (
							/* 491L, 79L, 430L, 445L, 1078L) */ ((
								var_1_9
							) == (
								/* 491L, 79L, 430L, 445L, 1078L) */ ((signed long int) (
									/* 494L, 78L, 433L, 448L, 1081L) */ ((
										var_1_8
									) - (
										/* 496L, 77L, 435L, 450L, 1083L) */ ((
											var_1_10
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 500L, 131L, 538L, 559L, 876L, 1087L, 48L) */ ((
						/* 501L, 98L, 108L, 539L, 560L, 865L, 1088L, 37L) */ ((
							/* 502L, 94L, 109L, 540L, 561L, 861L, 1089L, 33L) */ ((
								/* 503L, 92L, 110L, 541L, 562L, 859L, 1090L, 31L) */ ((
									last_1_var_1_23
								) + (
									last_1_var_1_9
								))
							) * (
								var_1_3
							))
						) < (
							/* 509L, 97L, 114L, 545L, 566L, 864L, 1096L, 36L) */ ((
								var_1_5
							) | (
								var_1_6
							))
						))
					) ? (
						/* 512L, 125L, 548L, 569L, 871L, 1099L, 43L) */ ((
							var_1_4
						) ? (
							/* 514L, 123L, 550L, 571L, 870L, 1101L, 42L) */ ((
								var_1_11
							) == (
								/* 514L, 123L, 550L, 571L, 870L, 1101L, 42L) */ ((unsigned short int) (
									var_1_8
								))
							))
						) : (
							1
						))
					) : (
						/* 518L, 129L, 554L, 575L, 875L, 1105L, 47L) */ ((
							var_1_11
						) == (
							/* 518L, 129L, 554L, 575L, 875L, 1105L, 47L) */ ((unsigned short int) (
								var_1_8
							))
						))
					))
				))
			) && (
				/* 523L, 170L, 620L, 640L, 1110L) */ ((
					/* 524L, 139L, 144L, 621L, 641L, 1111L) */ ((
						var_1_7
					) < (
						/* 526L, 138L, 146L, 623L, 643L, 1113L) */ (- (
							var_1_10
						))
					))
				) ? (
					/* 528L, 164L, 625L, 645L, 1115L) */ ((
						/* 529L, 150L, 154L, 626L, 646L, 1116L) */ ((
							var_1_8
						) <= (
							var_1_11
						))
					) ? (
						/* 532L, 162L, 629L, 649L, 1119L) */ ((
							var_1_12
						) == (
							/* 532L, 162L, 629L, 649L, 1119L) */ ((double) (
								/* 535L, 161L, 632L, 652L, 1122L) */ ((
									var_1_13
								) - (
									63.75
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 538L, 168L, 635L, 655L, 1125L) */ ((
						var_1_12
					) == (
						/* 538L, 168L, 635L, 655L, 1125L) */ ((double) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 543L, 195L, 690L, 705L, 1130L) */ ((
				/* 544L, 177L, 181L, 691L, 706L, 1131L) */ ((
					var_1_9
				) <= (
					var_1_8
				))
			) ? (
				/* 547L, 193L, 694L, 709L, 1134L) */ ((
					var_1_14
				) == (
					/* 547L, 193L, 694L, 709L, 1134L) */ ((signed char) (
						/* 550L, 192L, 697L, 712L, 1137L) */ ((
							/* 551L, 190L, 698L, 713L, 1138L) */ ((
								/* 552L, 188L, 699L, 714L, 1139L) */ (max (
									/* 552L, 188L, 699L, 714L, 1139L) */ (
										var_1_15
									) , (
										var_1_16
									)
								))
							) - (
								var_1_17
							))
						) + (
							-2
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 559L, 217L, 751L, 766L, 1146L) */ ((
			/* 560L, 200L, 204L, 752L, 767L, 1147L) */ ((
				var_1_4
			) || (
				var_1_19
			))
		) ? (
			/* 563L, 215L, 755L, 770L, 1150L) */ ((
				var_1_18
			) == (
				/* 563L, 215L, 755L, 770L, 1150L) */ ((float) (
					/* 566L, 214L, 758L, 773L, 1153L) */ (abs (
						/* 567L, 213L, 759L, 774L, 1154L) */ ((
							var_1_20
						) + (
							/* 569L, 212L, 761L, 776L, 1156L) */ ((
								var_1_21
							) + (
								var_1_22
							))
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 574L, 249L, 807L, 820L, 1161L) */ ((
		/* 575L, 231L, 238L, 808L, 821L, 1162L) */ ((
			var_1_4
		) && (
			/* 577L, 230L, 240L, 810L, 823L, 1164L) */ ((
				/* 578L, 228L, 241L, 811L, 824L, 1165L) */ (abs (
					var_1_11
				))
			) > (
				var_1_5
			))
		))
	) ? (
		/* 581L, 247L, 814L, 827L, 1168L) */ ((
			var_1_23
		) == (
			/* 581L, 247L, 814L, 827L, 1168L) */ ((unsigned short int) (
				var_1_6
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
