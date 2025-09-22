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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Filler_PR_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = 10;
signed long int var_1_2 = -500;
signed char var_1_3 = 1;
signed char var_1_4 = 100;
signed char var_1_5 = 5;
signed char var_1_6 = 32;
signed char var_1_7 = 32;
unsigned short int var_1_8 = 8;
unsigned short int var_1_9 = 25;
unsigned short int var_1_10 = 21451;
unsigned short int var_1_11 = 16;
unsigned char var_1_12 = 8;
unsigned short int var_1_13 = 16;
signed long int var_1_15 = 0;
unsigned short int var_1_16 = 53444;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
double var_1_19 = 1.2;
signed char var_1_20 = 1;
double var_1_21 = 10.5;
double var_1_22 = 0.0;
double var_1_23 = 10.4;
double var_1_24 = 50.5;
unsigned short int var_1_25 = 2;
signed long int var_1_26 = 500;
unsigned char var_1_27 = 0;
signed short int var_1_28 = -5;
signed short int var_1_29 = -10;
signed short int var_1_30 = -32;
float var_1_31 = 99.375;
signed short int var_1_32 = 32;
float var_1_33 = 7.5;
unsigned char var_1_34 = 8;
unsigned char var_1_35 = 32;
signed long int var_1_36 = 1;
double var_1_37 = 100.5;
double var_1_38 = 63.25;
double var_1_39 = 16.4;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 1;
unsigned short int var_1_44 = 0;
unsigned short int var_1_45 = 63602;
double var_1_46 = 1.75;
double var_1_47 = 99.25;
double var_1_48 = 32.2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_8 = 8;
unsigned char last_1_var_1_12 = 8;
unsigned char last_1_var_1_17 = 0;
unsigned short int last_1_var_1_25 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch21Filler_PR_CN
	/* 20L, 228L, 735L, 755L, 872L, 1032L) */ if (/* 7L, 205L, 206L, 736L, 756L, 859L, 1033L) */ ((/* 4L, 203L, 207L, 737L, 757L, 856L, 1034L) */ ((last_1_var_1_8) < (last_1_var_1_12))) || (last_1_var_1_17))) {
		/* 15L, 223L, 741L, 761L, 867L, 1041L) */ var_1_25 = (
			/* 14L, 222L, 744L, 764L, 866L, 1044L) */ ((
				/* 12L, 220L, 745L, 765L, 864L, 1045L) */ (max (
					/* 12L, 220L, 745L, 765L, 864L, 1045L) */ (
						var_1_11
					) , (
						var_1_9
					)
				))
			) + (
				var_1_7
			))
		);
	} else {
		/* 19L, 227L, 749L, 769L, 871L, 1049L) */ var_1_25 = (
			var_1_7
		);
	}


	// From: Req5Batch21Filler_PR_CN
	/* 993L, 160L, 560L, 577L, 829L) */ if (/* 994L, 137L, 138L, 561L, 578L, 824L) */ ((/* 995L, 133L, 139L, 562L, 579L, 819L) */ (min (/* 995L, 133L, 139L, 562L, 579L, 819L) */ (/* 996L, 131L, 140L, 563L, 580L, 816L) */ (max (/* 996L, 131L, 140L, 563L, 580L, 816L) */ (var_1_11) , (var_1_6)))) , (last_1_var_1_25)))) > (/* 1001L, 136L, 144L, 567L, 584L, 823L) */ ((var_1_3) * (last_1_var_1_25))))) {
		/* 1005L, 159L, 570L, 587L, 828L) */ var_1_17 = (
			var_1_18
		);
	}


	// From: CodeObject2
	/* 138L) */ if (/* 85L, 84L) */ ((var_1_26) < (var_1_30))) {
		/* 136L) */ if (/* 94L, 93L) */ ((var_1_26) <= (var_1_28))) {
			/* 134L) */ if (/* 106L, 105L) */ ((/* 107L, 103L) */ ((/* 108L, 101L) */ (abs (var_1_28))) * (5))) < (var_1_30))) {
				/* 132L) */ if (/* 121L, 120L) */ ((var_1_28) < (var_1_32))) {
					/* 131L) */ var_1_31 = (
						/* 130L) */ (abs (
							var_1_33
						))
					);
				}
			}
		}
	}


	// From: Req4Batch21Filler_PR_CN
	signed long int stepLocal_2 = var_1_15;
	/* 987L, 121L, 418L, 453L) */ if (var_1_17) {
		/* 980L, 113L, 420L, 455L) */ if (/* 961L, 80L, 81L, 421L, 456L) */ ((/* 960L, 78L, 82L, 422L, 457L) */ ((/* 958L, 76L, 83L, 423L, 458L) */ ((var_1_10) + (var_1_9))) << (var_1_5))) < (stepLocal_2))) {
			/* 971L, 104L, 428L, 463L) */ var_1_13 = (
				/* 970L, 103L, 431L, 466L) */ (min (
					/* 970L, 103L, 431L, 466L) */ (
						var_1_7
					) , (
						/* 969L, 102L, 433L, 468L) */ (max (
							/* 969L, 102L, 433L, 468L) */ (
								var_1_25
							) , (
								/* 968L, 101L, 435L, 470L) */ (min (
									/* 968L, 101L, 435L, 470L) */ (
										var_1_9
									) , (
										var_1_6
									)
								))
							)
						))
					)
				))
			);
		} else {
			/* 979L, 112L, 438L, 473L) */ var_1_13 = (
				/* 978L, 111L, 441L, 476L) */ ((
					var_1_16
				) - (
					/* 977L, 110L, 443L, 478L) */ ((
						var_1_9
					) + (
						var_1_11
					))
				))
			);
		}
	} else {
		/* 986L, 120L, 446L, 481L) */ var_1_13 = (
			/* 985L, 119L, 449L, 484L) */ ((
				var_1_16
			) - (
				var_1_10
			))
		);
	}


	// From: CodeObject6
	/* 186L) */ if (/* 171L, 170L) */ ((var_1_31) < (var_1_37))) {
		/* 185L) */ var_1_40 = (
			/* 184L) */ (! (
				/* 183L) */ ((
					/* 181L) */ ((
						var_1_41
					) && (
						var_1_42
					))
				) && (
					var_1_43
				))
			))
		);
	}


	// From: Req3Batch21Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_13;
	/* 948L, 67L, 378L, 388L) */ if (/* 942L, 55L, 56L, 379L, 389L) */ ((stepLocal_1) == (var_1_2))) {
		/* 947L, 66L, 382L, 392L) */ var_1_12 = (
			/* 946L, 65L, 385L, 395L) */ (abs (
				var_1_7
			))
		);
	}


	// From: CodeObject1
	/* 78L) */ if (/* 55L, 54L) */ ((var_1_27) && (/* 57L, 53L) */ ((var_1_28) > (/* 59L, 52L) */ ((var_1_29) / (var_1_30))))))) {
		/* 76L) */ if (var_1_27) {
			/* 75L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: CodeObject7
	/* 248L) */ if (/* 204L, 203L) */ ((/* 205L, 199L) */ ((25) & (var_1_35))) < (/* 208L, 202L) */ ((var_1_34) - (25))))) {
		/* 246L) */ if (/* 225L, 224L) */ ((/* 226L, 222L) */ (min (/* 226L, 222L) */ (/* 227L, 220L) */ ((var_1_29) & (var_1_36))) , (25)))) > (-64))) {
			/* 245L) */ var_1_44 = (
				/* 244L) */ (abs (
					/* 243L) */ ((
						var_1_45
					) - (
						var_1_35
					))
				))
			);
		}
	}


	// From: Req1Batch21Filler_PR_CN
	signed long int stepLocal_0 = -1000000;
	/* 919L, 27L, 234L, 255L) */ if (/* 902L, 4L, 5L, 235L, 256L) */ ((var_1_2) >= (stepLocal_0))) {
		/* 908L, 16L, 238L, 259L) */ var_1_1 = (
			/* 907L, 15L, 241L, 262L) */ (min (
				/* 907L, 15L, 241L, 262L) */ (
					var_1_3
				) , (
					var_1_4
				)
			))
		);
	} else {
		/* 918L, 26L, 244L, 265L) */ var_1_1 = (
			/* 917L, 25L, 247L, 268L) */ ((
				var_1_5
			) - (
				/* 916L, 24L, 249L, 270L) */ ((
					/* 914L, 22L, 250L, 271L) */ ((
						var_1_6
					) - (
						8
					))
				) + (
					var_1_7
				))
			))
		);
	}


	// From: CodeObject3
	/* 145L) */ var_1_34 = (
		var_1_35
	);


	// From: CodeObject4
	/* 153L) */ var_1_36 = (
		var_1_29
	);


	// From: CodeObject5
	/* 163L) */ var_1_37 = (
		/* 162L) */ ((
			var_1_38
		) + (
			var_1_39
		))
	);


	// From: Req2Batch21Filler_PR_CN
	/* 925L, 44L, 320L, 335L) */ var_1_8 = (
		/* 928L, 43L, 323L, 338L) */ ((
			/* 929L, 39L, 324L, 339L) */ ((
				/* 930L, 37L, 325L, 340L) */ ((
					var_1_7
				) + (
					var_1_6
				))
			) + (
				var_1_9
			))
		) + (
			/* 934L, 42L, 329L, 344L) */ ((
				var_1_10
			) - (
				var_1_11
			))
		))
	);


	// From: CodeObject8
	/* 294L) */ if (/* 259L, 258L) */ ((5u) < (/* 261L, 257L) */ ((var_1_34) ^ (var_1_45))))) {
		/* 288L) */ if (var_1_40) {
			/* 283L) */ var_1_46 = (
				/* 282L) */ (max (
					/* 282L) */ (
						/* 280L) */ (min (
							/* 280L) */ (
								/* 276L) */ ((
									var_1_47
								) - (
									var_1_48
								))
							) , (
								/* 279L) */ ((
									var_1_39
								) + (
									var_1_38
								))
							)
						))
					) , (
						var_1_33
					)
				))
			);
		} else {
			/* 287L) */ var_1_46 = (
				var_1_38
			);
		}
	} else {
		/* 293L) */ var_1_46 = (
			var_1_33
		);
	}


	// From: Req6Batch21Filler_PR_CN
	signed long int stepLocal_3 = /* 1011L, 173L, 177L, 629L, 646L) */ ((var_1_5) - (var_1_20));
	/* 1027L, 195L, 626L, 643L) */ if (/* 1016L, 174L, 175L, 627L, 644L) */ ((var_1_25) >= (stepLocal_3))) {
		/* 1026L, 194L, 632L, 649L) */ var_1_19 = (
			/* 1025L, 193L, 635L, 652L) */ ((
				/* 1023L, 191L, 636L, 653L) */ (min (
					/* 1023L, 191L, 636L, 653L) */ (
						var_1_21
					) , (
						/* 1022L, 190L, 638L, 655L) */ ((
							var_1_22
						) - (
							var_1_23
						))
					)
				))
			) - (
				var_1_24
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 31);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 16383);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32768);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -32768);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32768);
	assume_abort_if_not(var_1_30 <= 32767);
	assume_abort_if_not(var_1_30 != 0);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= -32768);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= -461168.6018427383000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_25 = var_1_25;
}

int property(void) {
	if (/* 297L, 4L, 8L, 277L, 298L, 1055L) */ ((var_1_2) >= (-1000000))) {
	} else {
	}
	if (/* 333L, 55L, 59L, 399L, 409L, 1091L) */ ((var_1_13) == (var_1_2))) {
	}
	if (var_1_17) {
		if (/* 345L, 80L, 88L, 491L, 526L, 1103L) */ ((/* 346L, 78L, 89L, 492L, 527L, 1104L) */ ((/* 347L, 76L, 90L, 493L, 528L, 1105L) */ ((var_1_10) + (var_1_9))) << (var_1_5))) < (var_1_15))) {
		} else {
		}
	} else {
	}
	if (/* 380L, 137L, 147L, 595L, 612L, 843L, 1138L) */ ((/* 381L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (min (/* 381L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (/* 382L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (max (/* 382L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (var_1_11) , (var_1_6)))) , (last_1_var_1_25)))) > (/* 387L, 136L, 153L, 601L, 618L, 842L, 1145L) */ ((var_1_3) * (last_1_var_1_25))))) {
	}
	if (/* 397L, 174L, 180L, 661L, 678L, 1155L) */ ((var_1_25) >= (/* 399L, 173L, 182L, 663L, 680L, 1157L) */ ((var_1_5) - (var_1_20))))) {
	}
	if (/* 415L, 205L, 211L, 776L, 796L, 882L, 1173L, 30L) */ ((/* 416L, 203L, 212L, 777L, 797L, 879L, 1174L, 27L) */ ((last_1_var_1_8) < (last_1_var_1_12))) || (last_1_var_1_17))) {
	} else {
	}
	return /* 441L) */ ((
	/* 440L) */ ((
		/* 439L) */ ((
			/* 438L) */ ((
				/* 437L) */ ((
					/* 436L) */ ((
						/* 296L, 28L, 276L, 297L, 1054L) */ ((
							/* 297L, 4L, 8L, 277L, 298L, 1055L) */ ((
								var_1_2
							) >= (
								-1000000
							))
						) ? (
							/* 300L, 16L, 280L, 301L, 1058L) */ ((
								var_1_1
							) == (
								/* 300L, 16L, 280L, 301L, 1058L) */ ((signed char) (
									/* 303L, 15L, 283L, 304L, 1061L) */ (min (
										/* 303L, 15L, 283L, 304L, 1061L) */ (
											var_1_3
										) , (
											var_1_4
										)
									))
								))
							))
						) : (
							/* 306L, 26L, 286L, 307L, 1064L) */ ((
								var_1_1
							) == (
								/* 306L, 26L, 286L, 307L, 1064L) */ ((signed char) (
									/* 309L, 25L, 289L, 310L, 1067L) */ ((
										var_1_5
									) - (
										/* 311L, 24L, 291L, 312L, 1069L) */ ((
											/* 312L, 22L, 292L, 313L, 1070L) */ ((
												var_1_6
											) - (
												8
											))
										) + (
											var_1_7
										))
									))
								))
							))
						))
					) && (
						/* 319L, 44L, 350L, 365L, 1077L) */ ((
							var_1_8
						) == (
							/* 319L, 44L, 350L, 365L, 1077L) */ ((unsigned short int) (
								/* 322L, 43L, 353L, 368L, 1080L) */ ((
									/* 323L, 39L, 354L, 369L, 1081L) */ ((
										/* 324L, 37L, 355L, 370L, 1082L) */ ((
											var_1_7
										) + (
											var_1_6
										))
									) + (
										var_1_9
									))
								) + (
									/* 328L, 42L, 359L, 374L, 1086L) */ ((
										var_1_10
									) - (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 332L, 68L, 398L, 408L, 1090L) */ ((
						/* 333L, 55L, 59L, 399L, 409L, 1091L) */ ((
							var_1_13
						) == (
							var_1_2
						))
					) ? (
						/* 336L, 66L, 402L, 412L, 1094L) */ ((
							var_1_12
						) == (
							/* 336L, 66L, 402L, 412L, 1094L) */ ((unsigned char) (
								/* 339L, 65L, 405L, 415L, 1097L) */ (abs (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 342L, 122L, 488L, 523L, 1100L) */ ((
					var_1_17
				) ? (
					/* 344L, 114L, 490L, 525L, 1102L) */ ((
						/* 345L, 80L, 88L, 491L, 526L, 1103L) */ ((
							/* 346L, 78L, 89L, 492L, 527L, 1104L) */ ((
								/* 347L, 76L, 90L, 493L, 528L, 1105L) */ ((
									var_1_10
								) + (
									var_1_9
								))
							) << (
								var_1_5
							))
						) < (
							var_1_15
						))
					) ? (
						/* 352L, 104L, 498L, 533L, 1110L) */ ((
							var_1_13
						) == (
							/* 352L, 104L, 498L, 533L, 1110L) */ ((unsigned short int) (
								/* 355L, 103L, 501L, 536L, 1113L) */ (min (
									/* 355L, 103L, 501L, 536L, 1113L) */ (
										var_1_7
									) , (
										/* 357L, 102L, 503L, 538L, 1115L) */ (max (
											/* 357L, 102L, 503L, 538L, 1115L) */ (
												var_1_25
											) , (
												/* 359L, 101L, 505L, 540L, 1117L) */ (min (
													/* 359L, 101L, 505L, 540L, 1117L) */ (
														var_1_9
													) , (
														var_1_6
													)
												))
											)
										))
									)
								))
							))
						))
					) : (
						/* 362L, 112L, 508L, 543L, 1120L) */ ((
							var_1_13
						) == (
							/* 362L, 112L, 508L, 543L, 1120L) */ ((unsigned short int) (
								/* 365L, 111L, 511L, 546L, 1123L) */ ((
									var_1_16
								) - (
									/* 367L, 110L, 513L, 548L, 1125L) */ ((
										var_1_9
									) + (
										var_1_11
									))
								))
							))
						))
					))
				) : (
					/* 370L, 120L, 516L, 551L, 1128L) */ ((
						var_1_13
					) == (
						/* 370L, 120L, 516L, 551L, 1128L) */ ((unsigned short int) (
							/* 373L, 119L, 519L, 554L, 1131L) */ ((
								var_1_16
							) - (
								var_1_10
							))
						))
					))
				))
			))
		) && (
			/* 379L, 161L, 594L, 611L, 848L, 1137L) */ ((
				/* 380L, 137L, 147L, 595L, 612L, 843L, 1138L) */ ((
					/* 381L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (min (
						/* 381L, 133L, 148L, 596L, 613L, 838L, 1139L) */ (
							/* 382L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (max (
								/* 382L, 131L, 149L, 597L, 614L, 835L, 1140L) */ (
									var_1_11
								) , (
									var_1_6
								)
							))
						) , (
							last_1_var_1_25
						)
					))
				) > (
					/* 387L, 136L, 153L, 601L, 618L, 842L, 1145L) */ ((
						var_1_3
					) * (
						last_1_var_1_25
					))
				))
			) ? (
				/* 391L, 159L, 604L, 621L, 847L, 1149L) */ ((
					var_1_17
				) == (
					/* 391L, 159L, 604L, 621L, 847L, 1149L) */ ((unsigned char) (
						var_1_18
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 396L, 196L, 660L, 677L, 1154L) */ ((
			/* 397L, 174L, 180L, 661L, 678L, 1155L) */ ((
				var_1_25
			) >= (
				/* 399L, 173L, 182L, 663L, 680L, 1157L) */ ((
					var_1_5
				) - (
					var_1_20
				))
			))
		) ? (
			/* 402L, 194L, 666L, 683L, 1160L) */ ((
				var_1_19
			) == (
				/* 402L, 194L, 666L, 683L, 1160L) */ ((double) (
					/* 405L, 193L, 669L, 686L, 1163L) */ ((
						/* 406L, 191L, 670L, 687L, 1164L) */ (min (
							/* 406L, 191L, 670L, 687L, 1164L) */ (
								var_1_21
							) , (
								/* 408L, 190L, 672L, 689L, 1166L) */ ((
									var_1_22
								) - (
									var_1_23
								))
							)
						))
					) - (
						var_1_24
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 414L, 229L, 775L, 795L, 895L, 1172L, 43L) */ ((
		/* 415L, 205L, 211L, 776L, 796L, 882L, 1173L, 30L) */ ((
			/* 416L, 203L, 212L, 777L, 797L, 879L, 1174L, 27L) */ ((
				last_1_var_1_8
			) < (
				last_1_var_1_12
			))
		) || (
			last_1_var_1_17
		))
	) ? (
		/* 423L, 223L, 781L, 801L, 890L, 1181L, 38L) */ ((
			var_1_25
		) == (
			/* 423L, 223L, 781L, 801L, 890L, 1181L, 38L) */ ((unsigned short int) (
				/* 426L, 222L, 784L, 804L, 889L, 1184L, 37L) */ ((
					/* 427L, 220L, 785L, 805L, 887L, 1185L, 35L) */ (max (
						/* 427L, 220L, 785L, 805L, 887L, 1185L, 35L) */ (
							var_1_11
						) , (
							var_1_9
						)
					))
				) + (
					var_1_7
				))
			))
		))
	) : (
		/* 431L, 227L, 789L, 809L, 894L, 1189L, 42L) */ ((
			var_1_25
		) == (
			/* 431L, 227L, 789L, 809L, 894L, 1189L, 42L) */ ((unsigned short int) (
				var_1_7
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
