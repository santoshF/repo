
void graph(char *file){

char * cmd[] = {"set title \"Graph \"","set xlabel \" Number of \" ","set ylabel \" error \""};
FILE * temp = fopen("file","r");
FILE * gnuPlot= popen("gnuplot -persistent","w");
int i;
for(i=0;i<3;i++)
 {
  fprintf(gnuPlot,"%s \n",cmd[i]);
}
fprintf(gnuPlot,"plot '%s' using 2:4 w l \n",file);
//fprintf(gnuPlot,"save '%s.gnu' \n",file);
//fclose(fp);
//fprintf(gnuPlot,"quit \n");
//pclose(gnuPlot);
//fclose(gnuPlot);
//exit_p();
exit(0);
     
}
