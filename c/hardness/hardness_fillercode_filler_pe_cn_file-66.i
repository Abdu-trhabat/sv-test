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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 50;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 43463;
unsigned short int var_1_10 = 52427;
float var_1_11 = 256.8;
float var_1_12 = 199.8;
signed short int var_1_13 = 32;
signed short int var_1_14 = -50;
float var_1_15 = 4.5;
double var_1_16 = 0.7;
signed long int var_1_17 = -8;
unsigned char var_1_18 = 1;
signed long int var_1_19 = 5;
signed long int var_1_20 = -128;
unsigned long int var_1_21 = 10;
unsigned long int var_1_22 = 5;
signed long int var_1_23 = -10000;
signed long int var_1_24 = -1263929197;
signed long int var_1_25 = 500;
signed short int var_1_26 = 1;
signed short int var_1_27 = 256;
signed short int var_1_28 = 4;
signed short int var_1_29 = -256;
signed short int var_1_30 = 32;
unsigned char var_1_31 = 32;
signed char var_1_32 = 10;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 50;
unsigned long int var_1_37 = 16;
void initially(void) {
}
void step(void) {
                              if (var_1_2) {
                               var_1_1 = (
                               ((
    var_1_3
   ) + (
    var_1_4
   ))
  );
 }
                              if ( ((var_1_4) >= ( ((var_1_6) - (var_1_7))))) {
                               if (var_1_2) {
                                var_1_5 = (
    8.25
   );
  }
 }
 signed long int stepLocal_0 = -25;
                              if ( ((stepLocal_0) == ( ((var_1_3) * ( ((-5) * (var_1_6))))))) {
                               var_1_8 = (
                                (((((( var_1_9 ) - ( var_1_7 ))) < 0 ) ? -((( var_1_9 ) - ( var_1_7 ))) : ((( var_1_9 ) - ( var_1_7 )))))
  );
 } else {
                               var_1_8 = (
                                ((((( var_1_9 )) > (( (( var_1_10 ) - ( var_1_7 )) ))) ? (( var_1_9 )) : (( (( var_1_10 ) - ( var_1_7 )) ))))
  );
 }
                               if ( (! (var_1_2))) {
                                if ( (( ((var_1_8) * (16))) >= (var_1_3))) {
                                 var_1_11 = (
    var_1_12
   );
  }
 }
                               if ( ((var_1_9) < ( (- (var_1_10))))) {
                                var_1_13 = (
                                 ((
    var_1_3
   ) + (
                                  ((
     var_1_6
    ) + (
     var_1_7
    ))
   ))
  );
 } else {
                                var_1_13 = (
                                 ((
    var_1_6
   ) - (
    var_1_7
   ))
  );
 }
 signed long int stepLocal_1 = (((((var_1_3)) > ((var_1_4))) ? ((var_1_3)) : ((var_1_4))));
                               if ( ((stepLocal_1) > ( ((var_1_13) / (var_1_10))))) {
                                if ( (( ((((( ((var_1_11) + (var_1_12)))) > ((1.0000000000002E12f))) ? (( ((var_1_11) + (var_1_12)))) : ((1.0000000000002E12f))))) <= ( ((var_1_5) / ( (((((127.5f)) < ((var_1_15))) ? ((127.5f)) : ((var_1_15))))))))) {
                                 var_1_14 = (
    var_1_3
   );
  } else {
                                 var_1_14 = (
    var_1_7
   );
  }
 } else {
                                var_1_14 = (
   var_1_3
  );
 }
                               if ( ((var_1_15) != ( (((((var_1_12)) < (( ((var_1_5) * (var_1_11))))) ? ((var_1_12)) : (( ((var_1_5) * (var_1_11))))))))) {
                                var_1_16 = (
   var_1_12
  );
 }
            if ( ((var_1_19) > (var_1_20))) {
             if (var_1_18) {
              var_1_17 = (
    8
   );
  }
 }
            var_1_21 = (
  var_1_22
 );
            if ( (( ((((-256) < 0 ) ? -(-256) : (-256)))) < (var_1_20))) {
             var_1_23 = (
              ((
    5
   ) - (
               ((
                ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))
    ) - (
     var_1_25
    ))
   ))
  );
 } else {
             var_1_23 = (
   var_1_25
  );
 }
             if ( ((var_1_21) > (var_1_24))) {
              if ( ((var_1_19) < (var_1_24))) {
               if ( ((var_1_19) <= ( ((-64) & (var_1_21))))) {
                var_1_26 = (
                 ((((( var_1_27 )) > (( ((((( 8 )) < (( var_1_28 ))) ? (( 8 )) : (( var_1_28 )))) ))) ? (( var_1_27 )) : (( ((((( 8 )) < (( var_1_28 ))) ? (( 8 )) : (( var_1_28 )))) ))))
    );
   } else {
                var_1_26 = (
                 ((
      var_1_29
     ) + (
                  ((((( 4 )) > (( var_1_30 ))) ? (( 4 )) : (( var_1_30 ))))
     ))
    );
   }
  }
 }
             if ( (( (( ((64) - (var_1_32))) << (10))) > (var_1_25))) {
              var_1_31 = (
               ((((( (( var_1_33 ) - ( (( var_1_34 ) - ( var_1_32 )) )) )) > (( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) ))) ? (( (( var_1_33 ) - ( (( var_1_34 ) - ( var_1_32 )) )) )) : (( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) ))))
  );
 } else {
              var_1_31 = (
   var_1_34
  );
 }
             if ( ((var_1_35) >= (var_1_20))) {
              if ( (( (( ((var_1_29) ^ (var_1_36))) / (var_1_34))) <= ( (( ((-1) | (var_1_19))) ^ (var_1_20))))) {
               var_1_37 = (
                ((((( var_1_32 )) > (( ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < 0 ) ? -(((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ))) ? (( var_1_32 )) : (( ((((((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) < 0 ) ? -(((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) : (((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) ))))
   );
  }
 } else {
              if (var_1_18) {
               var_1_37 = (
    var_1_31
   );
  } else {
               var_1_37 = (
    var_1_36
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(var_1_15 != 0.0F);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= -2147483648);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -2147483648);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483646);
 assume_abort_if_not(var_1_24 <= -1073741823);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 1073741823);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32767);
 assume_abort_if_not(var_1_27 <= 32766);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32767);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -16383);
 assume_abort_if_not(var_1_29 <= 16383);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -16383);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 63);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 127);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 63);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_2) {
 }
 if ( ((var_1_4) >= ( ((var_1_6) - (var_1_7))))) {
  if (var_1_2) {
  }
 }
 if ( ((-25) == ( ((var_1_3) * ( ((-5) * (var_1_6))))))) {
 } else {
 }
 if ( (! (var_1_2))) {
  if ( (( ((var_1_8) * (16))) >= (var_1_3))) {
  }
 }
 if ( ((var_1_9) < ( (- (var_1_10))))) {
 } else {
 }
 if ( (( (((((var_1_3)) > ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) > ( ((var_1_13) / (var_1_10))))) {
  if ( (( ((((( ((var_1_11) + (var_1_12)))) > ((1.0000000000002E12f))) ? (( ((var_1_11) + (var_1_12)))) : ((1.0000000000002E12f))))) <= ( ((var_1_5) / ( (((((127.5f)) < ((var_1_15))) ? ((127.5f)) : ((var_1_15))))))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_15) != ( (((((var_1_12)) < (( ((var_1_5) * (var_1_11))))) ? ((var_1_12)) : (( ((var_1_5) * (var_1_11))))))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                         ((
       var_1_2
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((signed char) (
                                           ((
          var_1_3
         ) + (
          var_1_4
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                         ((
                                               ((
        var_1_4
       ) >= (
                                                ((
         var_1_6
        ) - (
         var_1_7
        ))
       ))
      ) ? (
                                          ((
        var_1_2
       ) ? (
                                            ((
         var_1_5
        ) == (
                                             ((double) (
          8.25
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                         ((
                                               ((
       -25
      ) == (
                                                ((
        var_1_3
       ) * (
                                                 ((
         -5
        ) * (
         var_1_6
        ))
       ))
      ))
     ) ? (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned short int) (
                                            (((((( var_1_9 ) - ( var_1_7 ))) < 0 ) ? -((( var_1_9 ) - ( var_1_7 ))) : ((( var_1_9 ) - ( var_1_7 )))))
       ))
      ))
     ) : (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned short int) (
                                            ((((( var_1_9 )) > (( (( var_1_10 ) - ( var_1_7 )) ))) ? (( var_1_9 )) : (( (( var_1_10 ) - ( var_1_7 )) ))))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                               (! (
      var_1_2
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
        var_1_8
       ) * (
        16
       ))
      ) >= (
       var_1_3
      ))
     ) ? (
                                           ((
       var_1_11
      ) == (
                                            ((float) (
        var_1_12
       ))
      ))
     ) : (
      1
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_9
    ) < (
                                                (- (
      var_1_10
     ))
    ))
   ) ? (
                                         ((
     var_1_13
    ) == (
                                          ((signed short int) (
                                           ((
       var_1_3
      ) + (
                                            ((
        var_1_6
       ) + (
        var_1_7
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_13
    ) == (
                                          ((signed short int) (
                                           ((
       var_1_6
      ) - (
       var_1_7
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
   ) > (
                                               ((
     var_1_13
    ) / (
     var_1_10
    ))
   ))
  ) ? (
                                        ((
                                               ((
                                                ((((( (( var_1_11 ) + ( var_1_12 )) )) > (( 1.0000000000002E12f ))) ? (( (( var_1_11 ) + ( var_1_12 )) )) : (( 1.0000000000002E12f ))))
    ) <= (
                                                ((
      var_1_5
     ) / (
                                                 ((((( 127.5f )) < (( var_1_15 ))) ? (( 127.5f )) : (( var_1_15 ))))
     ))
    ))
   ) ? (
                                         ((
     var_1_14
    ) == (
                                          ((signed short int) (
      var_1_3
     ))
    ))
   ) : (
                                         ((
     var_1_14
    ) == (
                                          ((signed short int) (
      var_1_7
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_14
   ) == (
                                         ((signed short int) (
     var_1_3
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_15
  ) != (
                                              ((((( var_1_12 )) < (( (( var_1_5 ) * ( var_1_11 )) ))) ? (( var_1_12 )) : (( (( var_1_5 ) * ( var_1_11 )) ))))
  ))
 ) ? (
                                       ((
   var_1_16
  ) == (
                                        ((double) (
    var_1_12
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
