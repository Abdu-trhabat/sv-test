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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch20Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 5;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 128;
unsigned char var_1_4 = 2;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 32;
signed long int var_1_7 = 128;
unsigned short int var_1_8 = 100;
float var_1_9 = 255.75;
signed char var_1_10 = 64;
signed char var_1_11 = 32;
signed char var_1_12 = 4;
float var_1_13 = 0.0;
float var_1_14 = 7.25;
float var_1_15 = 8.125;
float var_1_16 = 24.5;
signed short int var_1_17 = -256;
double var_1_18 = 31.5;
double var_1_20 = 127.5;
float var_1_21 = 255.2;
float var_1_22 = 5.5;
signed long int var_1_23 = -8;
double var_1_24 = 0.5;
unsigned short int var_1_25 = 200;
unsigned char var_1_26 = 0;
float var_1_27 = 127.9;
double var_1_28 = 1.8;
unsigned char var_1_29 = 1;
double var_1_30 = 5.65;
unsigned short int var_1_31 = 8;
signed short int var_1_32 = -64;
signed long int var_1_33 = 1000;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 8;
unsigned short int var_1_38 = 2;
unsigned char var_1_39 = 1;
unsigned short int var_1_40 = 5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 10;
void initially(void) {
}
void step(void) {
                              if (var_1_2) {
                               var_1_1 = (
                               ((
    var_1_3
   ) - (
    var_1_4
   ))
  );
 } else {
                               var_1_1 = (
                                ((
    var_1_4
   ) + (
    var_1_5
   ))
  );
 }
 signed long int stepLocal_0 = ((64) + ( ((var_1_5) / (var_1_3))));
                               if ( ((stepLocal_0) != ( ((var_1_1) - ( ((var_1_4) + (var_1_7))))))) {
                               var_1_6 = (
   var_1_4
  );
 } else {
                                var_1_6 = (
   128
  );
 }
 signed long int stepLocal_1 = ((var_1_6) + (var_1_1));
                                if ( ((stepLocal_1) >= ( ((var_1_3) - (var_1_5))))) {
                                var_1_8 = (
                                 ((((( var_1_1 )) > (( var_1_3 ))) ? (( var_1_1 )) : (( var_1_3 ))))
  );
 } else {
                                 var_1_8 = (
   var_1_1
  );
 }
                                if ( (( (( ((var_1_10) - (var_1_11))) - ( ((16) + (var_1_12))))) != (var_1_5))) {
                                 var_1_9 = (
                                  ((
    64.8f
   ) - (
                                   ((
     var_1_13
    ) - (
     var_1_14
    ))
   ))
  );
 } else {
                                 var_1_9 = (
   var_1_13
  );
 }
                                var_1_15 = (
                                 ((
   var_1_14
  ) + (
   var_1_16
  ))
 );
                                if (var_1_2) {
                                 var_1_17 = (
                                  ((
    var_1_3
   ) + (
    var_1_12
   ))
  );
 } else {
                                 if ( ((var_1_14) == ( (( (((((99.8f)) < ((var_1_16))) ? ((99.8f)) : ((var_1_16))))) / ( (((((255.6f)) > ((var_1_13))) ? ((255.6f)) : ((var_1_13))))))))) {
                                  var_1_17 = (
    var_1_4
   );
  } else {
                                  var_1_17 = (
                                   ((
     var_1_5
    ) - (
     var_1_3
    ))
   );
  }
 }
                                if ( (( ((var_1_2) || ( ((var_1_16) > (var_1_13))))) && ( ((var_1_3) < (var_1_8))))) {
                                 if ( (( (- (var_1_8))) > (var_1_5))) {
                                  var_1_18 = (
    var_1_20
   );
  }
 } else {
                                 var_1_18 = (
   1.000000075E7
  );
 }
           var_1_21 = (
  var_1_22
 );
            var_1_23 = (
  -16
 );
            var_1_24 = (
  var_1_22
 );
            if (var_1_26) {
             if ( ((var_1_21) > ( ((var_1_24) / ( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))))) {
              var_1_25 = (
    100
   );
  } else {
              var_1_25 = (
    10
   );
  }
 }
             if ( ((var_1_21) > (var_1_22))) {
             var_1_28 = (
   var_1_22
  );
 } else {
              if ( (( ((var_1_26) || (var_1_29))) || ( (( (- (var_1_24))) <= (var_1_30))))) {
               var_1_28 = (
                ((((( 9.99999999739E8 )) < (( var_1_22 ))) ? (( 9.99999999739E8 )) : (( var_1_22 ))))
   );
  }
 }
             if ( ((var_1_29) || ( ((var_1_21) <= (var_1_28))))) {
              if ( (( ((var_1_25) | ( ((var_1_23) * (var_1_32))))) == ( (((((var_1_33)) < ((-32))) ? ((var_1_33)) : ((-32))))))) {
               var_1_31 = (
                ((((( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) )) > (( var_1_35 ))) ? (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) )) : (( var_1_35 ))))
   );
  } else {
               var_1_31 = (
                ((((((((( var_1_34 )) < (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ))) ? (( var_1_34 )) : (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ))))) < 0 ) ? -(((((( var_1_34 )) < (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ))) ? (( var_1_34 )) : (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ))))) : (((((( var_1_34 )) < (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ))) ? (( var_1_34 )) : (( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) )))))))
   );
  }
 } else {
              var_1_31 = (
               ((
    var_1_36
   ) + (
                ((
                 ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
    ) + (
     var_1_38
    ))
   ))
  );
 }
             if ( ((var_1_26) || ( ((var_1_25) <= ( ((var_1_35) / (var_1_40))))))) {
              var_1_39 = (
               ((
    var_1_41
   ) || (
    var_1_42
   ))
  );
 }
             if ( (( ((var_1_33) + ( (((((var_1_35)) < ((var_1_36))) ? ((var_1_35)) : ((var_1_36))))))) <= (var_1_31))) {
              if (var_1_29) {
               var_1_43 = (
    var_1_36
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 127);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 64);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 63);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 4611686.018427383000e+12F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 assume_abort_if_not(var_1_27 != 0.0F);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32768);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 16384);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 16383);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 65535);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_2) {
 } else {
 }
 if ( (( ((64) + ( ((var_1_5) / (var_1_3))))) != ( ((var_1_1) - ( ((var_1_4) + (var_1_7))))))) {
 } else {
 }
 if ( (( ((var_1_6) + (var_1_1))) >= ( ((var_1_3) - (var_1_5))))) {
 } else {
 }
 if ( (( (( ((var_1_10) - (var_1_11))) - ( ((16) + (var_1_12))))) != (var_1_5))) {
 } else {
 }
 if (var_1_2) {
 } else {
  if ( ((var_1_14) == ( (( (((((99.8f)) < ((var_1_16))) ? ((99.8f)) : ((var_1_16))))) / ( (((((255.6f)) > ((var_1_13))) ? ((255.6f)) : ((var_1_13))))))))) {
  } else {
  }
 }
 if ( (( ((var_1_2) || ( ((var_1_16) > (var_1_13))))) && ( ((var_1_3) < (var_1_8))))) {
  if ( (( (- (var_1_8))) > (var_1_5))) {
  }
 } else {
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
                                            ((unsigned char) (
                                            ((
          var_1_3
         ) - (
          var_1_4
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_4
         ) + (
          var_1_5
         ))
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
                                                 ((
         64
        ) + (
                                                  ((
          var_1_5
         ) / (
          var_1_3
         ))
        ))
       ) != (
                                                 ((
         var_1_1
        ) - (
                                                  ((
          var_1_4
         ) + (
          var_1_7
         ))
        ))
       ))
      ) ? (
                                           ((
        var_1_6
       ) == (
                                            ((unsigned char) (
         var_1_4
        ))
       ))
      ) : (
                                           ((
        var_1_6
       ) == (
                                            ((unsigned char) (
         128
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
                                                ((
        var_1_6
       ) + (
        var_1_1
       ))
      ) >= (
                                                ((
        var_1_3
       ) - (
        var_1_5
       ))
      ))
     ) ? (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned short int) (
                                            ((((( var_1_1 )) > (( var_1_3 ))) ? (( var_1_1 )) : (( var_1_3 ))))
       ))
      ))
     ) : (
                                           ((
       var_1_8
      ) == (
                                            ((unsigned short int) (
        var_1_1
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
                                                  ((
        var_1_10
       ) - (
        var_1_11
       ))
      ) - (
                                                  ((
        16
       ) + (
        var_1_12
       ))
      ))
     ) != (
      var_1_5
     ))
    ) ? (
                                          ((
      var_1_9
     ) == (
                                           ((float) (
                                            ((
        64.8f
       ) - (
                                             ((
         var_1_13
        ) - (
         var_1_14
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_9
     ) == (
                                           ((float) (
       var_1_13
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_15
   ) == (
                                         ((float) (
                                          ((
      var_1_14
     ) + (
      var_1_16
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_2
  ) ? (
                                        ((
    var_1_17
   ) == (
                                         ((signed short int) (
                                          ((
      var_1_3
     ) + (
      var_1_12
     ))
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_14
    ) == (
                                                ((
                                                 ((((( 99.8f )) < (( var_1_16 ))) ? (( 99.8f )) : (( var_1_16 ))))
     ) / (
                                                 ((((( 255.6f )) > (( var_1_13 ))) ? (( 255.6f )) : (( var_1_13 ))))
     ))
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((signed short int) (
      var_1_4
     ))
    ))
   ) : (
                                         ((
     var_1_17
    ) == (
                                          ((signed short int) (
                                           ((
       var_1_5
      ) - (
       var_1_3
      ))
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_2
   ) || (
                                               ((
     var_1_16
    ) > (
     var_1_13
    ))
   ))
  ) && (
                                              ((
    var_1_3
   ) < (
    var_1_8
   ))
  ))
 ) ? (
                                       ((
                                              ((
                                               (- (
     var_1_8
    ))
   ) > (
    var_1_5
   ))
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((double) (
     var_1_20
    ))
   ))
  ) : (
   1
  ))
 ) : (
                                       ((
   var_1_18
  ) == (
                                        ((double) (
    1.000000075E7
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
