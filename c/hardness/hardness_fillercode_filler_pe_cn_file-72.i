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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 16;
double var_1_2 = 4.125;
double var_1_3 = 2.75;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 100;
unsigned long int var_1_6 = 0;
signed short int var_1_7 = 64;
signed short int var_1_8 = -128;
signed short int var_1_9 = 1;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 64.3;
double var_1_15 = 100.25;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned long int var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
signed long int var_1_30 = -64;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 100;
unsigned short int var_1_36 = 50;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
unsigned long int var_1_39 = 16;
unsigned long int var_1_40 = 2753961414;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 25;
signed short int var_1_43 = -50;
signed char var_1_44 = -1;
signed char var_1_45 = 4;
signed char var_1_46 = -1;
double var_1_47 = 255.2;
double var_1_48 = 0.09999999999999998;
double var_1_49 = 49.875;
double var_1_50 = 50.4;
double var_1_51 = 49.25;
double var_1_52 = 1000000.4;
double var_1_53 = 256.2;
signed char var_1_54 = -8;
signed char var_1_55 = 25;
void initially(void) {
}
void step(void) {
                                if ( (( ((var_1_4) * (var_1_5))) <= (var_1_6))) {
                                var_1_10 = (
                                 ((
    var_1_11
   ) + (
    10
   ))
  );
 } else {
                                 if ( ((var_1_12) || (var_1_13))) {
                                  if ( (( (( ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) - (var_1_14))) == ( ((var_1_3) + (var_1_15))))) {
                                   var_1_10 = (
                                    ((
      var_1_11
     ) + (
      var_1_16
     ))
    );
   } else {
                                   var_1_10 = (
     var_1_11
    );
   }
  } else {
                                  var_1_10 = (
    var_1_16
   );
  }
 }
                                var_1_17 = (
                                 ((
   var_1_18
  ) && (
   var_1_19
  ))
 );
                                if ( (! (var_1_18))) {
                                 var_1_20 = (
                                  ((((( var_1_21 )) > (( var_1_22 ))) ? (( var_1_21 )) : (( var_1_22 ))))
  );
 }
                                 if ( (( ((var_1_4) + (var_1_5))) > (var_1_24))) {
                                  var_1_23 = (
   var_1_25
  );
 }
                                  if ( ((256) >= (var_1_7))) {
                                   if ( ((var_1_17) && ( ((var_1_25) >= ( ((var_1_27) - (var_1_28))))))) {
                                    var_1_26 = (
    16
   );
  } else {
                                    var_1_26 = (
    var_1_28
   );
  }
 } else {
                                   var_1_26 = (
   var_1_25
  );
 }
                                  var_1_29 = (
  var_1_30
 );
                                  var_1_31 = (
  var_1_26
 );
 unsigned long int stepLocal_0 = ((var_1_4) * (var_1_5));
                               if ( (( (((((var_1_20)) < ((63.5))) ? ((var_1_20)) : ((63.5))))) > ( ((2.4) * (var_1_20))))) {
                                if ( ((stepLocal_0) <= ( (~ (var_1_6))))) {
                                 var_1_1 = (
                                  ((
                                   ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
    ) + (
     var_1_9
    ))
   );
  } else {
                                 var_1_1 = (
    var_1_8
   );
  }
 } else {
                                var_1_1 = (
   -50
  );
 }
            if ( ((var_1_33) && (var_1_34))) {
             if ( ((var_1_35) <= (var_1_36))) {
              var_1_32 = (
               ((
                ((((( var_1_37 )) < (( ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) ))) ? (( var_1_37 )) : (( ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38))) ))))
    ) - (
     var_1_35
    ))
   );
  }
 }
            if ( (( (- (var_1_38))) <= ( (- (var_1_37))))) {
             var_1_39 = (
              ((
    2368197193u
   ) - (
    var_1_36
   ))
  );
 } else {
             if (var_1_34) {
              var_1_39 = (
               ((((( var_1_37 )) < (( (( ((((( var_1_38 )) > (( var_1_40 ))) ? (( var_1_38 )) : (( var_1_40 )))) ) - ( var_1_35 )) ))) ? (( var_1_37 )) : (( (( ((((( var_1_38 )) > (( var_1_40 ))) ? (( var_1_38 )) : (( var_1_40 )))) ) - ( var_1_35 )) ))))
   );
  } else {
              var_1_39 = (
    var_1_40
   );
  }
 }
            var_1_41 = (
  var_1_42
 );
             if ( ((var_1_37) <= ( (((((var_1_39)) > ((var_1_32))) ? ((var_1_39)) : ((var_1_32))))))) {
              var_1_43 = (
   var_1_42
  );
 }
             if ( ((var_1_43) <= ( (((((-8)) > (( ((var_1_37) ^ (var_1_40))))) ? ((-8)) : (( ((var_1_37) ^ (var_1_40))))))))) {
              if (var_1_34) {
               var_1_44 = (
                ((((( var_1_45 )) > (( var_1_46 ))) ? (( var_1_45 )) : (( var_1_46 ))))
   );
  }
 } else {
              var_1_44 = (
   64
  );
 }
             if ( ((var_1_34) || (var_1_33))) {
              if ( ((var_1_45) >= (var_1_46))) {
               var_1_47 = (
    var_1_48
   );
  }
 } else {
              if (var_1_33) {
               var_1_47 = (
                ((((( var_1_48 )) > (( var_1_49 ))) ? (( var_1_48 )) : (( var_1_49 ))))
   );
  } else {
               if ( ((var_1_38) >= (var_1_42))) {
                var_1_47 = (
                 ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))
    );
   } else {
                var_1_47 = (
                 ((
      var_1_50
     ) - (
                  ((((( var_1_51 )) < (( var_1_52 ))) ? (( var_1_51 )) : (( var_1_52 ))))
     ))
    );
   }
  }
 }
             var_1_53 = (
  5.5
 );
             var_1_54 = (
  var_1_55
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -16383);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -16383);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -63);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967295);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 255);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65535);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65535);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 2147483647);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -127);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= -922337.2036854766000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_55 >= -127);
 assume_abort_if_not(var_1_55 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (((((var_1_20)) < ((63.5))) ? ((var_1_20)) : ((63.5))))) > ( ((2.4) * (var_1_20))))) {
  if ( (( ((var_1_4) * (var_1_5))) <= ( (~ (var_1_6))))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_4) * (var_1_5))) <= (var_1_6))) {
 } else {
  if ( ((var_1_12) || (var_1_13))) {
   if ( (( (( ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))) - (var_1_14))) == ( ((var_1_3) + (var_1_15))))) {
   } else {
   }
  } else {
  }
 }
 if ( (! (var_1_18))) {
 }
 if ( (( ((var_1_4) + (var_1_5))) > (var_1_24))) {
 }
 if ( ((256) >= (var_1_7))) {
  if ( ((var_1_17) && ( ((var_1_25) >= ( ((var_1_27) - (var_1_28))))))) {
  } else {
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
                                           ((
                                                ((
                                                 ((((( var_1_20 )) < (( 63.5 ))) ? (( var_1_20 )) : (( 63.5 ))))
        ) > (
                                                 ((
          2.4
         ) * (
          var_1_20
         ))
        ))
       ) ? (
                                            ((
                                                  ((
                                                   ((
           var_1_4
          ) * (
           var_1_5
          ))
         ) <= (
                                                   (~ (
           var_1_6
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
                                               ((
                                                ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
           ) + (
            var_1_9
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
           var_1_8
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
          -50
         ))
        ))
       ))
      ) && (
                                            ((
                                                 ((
                                                  ((
          var_1_4
         ) * (
          var_1_5
         ))
        ) <= (
         var_1_6
        ))
       ) ? (
                                            ((
         var_1_10
        ) == (
                                             ((signed char) (
                                              ((
           var_1_11
          ) + (
           10
          ))
         ))
        ))
       ) : (
                                             ((
                                                  ((
          var_1_12
         ) || (
          var_1_13
         ))
        ) ? (
                                              ((
                                                     ((
                                                     ((
                                                      ((((var_1_2) < 0 ) ? -(var_1_2) : (var_1_2)))
           ) - (
            var_1_14
           ))
          ) == (
                                                      ((
            var_1_3
           ) + (
            var_1_15
           ))
          ))
         ) ? (
                                               ((
           var_1_10
          ) == (
                                                ((signed char) (
                                                 ((
             var_1_11
            ) + (
             var_1_16
            ))
           ))
          ))
         ) : (
                                               ((
           var_1_10
          ) == (
                                                ((signed char) (
            var_1_11
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_10
         ) == (
                                               ((signed char) (
           var_1_16
          ))
         ))
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_17
      ) == (
                                            ((unsigned char) (
                                             ((
         var_1_18
        ) && (
         var_1_19
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 (! (
       var_1_18
      ))
     ) ? (
                                           ((
       var_1_20
      ) == (
                                            ((double) (
                                             ((((( var_1_21 )) > (( var_1_22 ))) ? (( var_1_21 )) : (( var_1_22 ))))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                           ((
                                                  ((
                                                   ((
       var_1_4
      ) + (
       var_1_5
      ))
     ) > (
      var_1_24
     ))
    ) ? (
                                            ((
      var_1_23
     ) == (
                                             ((unsigned char) (
       var_1_25
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                          ((
                                                 ((
     256
    ) >= (
     var_1_7
    ))
   ) ? (
                                           ((
                                                  ((
      var_1_17
     ) && (
                                                   ((
       var_1_25
      ) >= (
                                                    ((
        var_1_27
       ) - (
        var_1_28
       ))
      ))
     ))
    ) ? (
                                            ((
      var_1_26
     ) == (
                                             ((unsigned short int) (
       16
      ))
     ))
    ) : (
                                            ((
      var_1_26
     ) == (
                                             ((unsigned short int) (
       var_1_28
      ))
     ))
    ))
   ) : (
                                           ((
     var_1_26
    ) == (
                                            ((unsigned short int) (
      var_1_25
     ))
    ))
   ))
  ))
 ) && (
                                         ((
   var_1_29
  ) == (
                                          ((signed long int) (
    var_1_30
   ))
  ))
 ))
) && (
                                        ((
  var_1_31
 ) == (
                                         ((unsigned long int) (
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
