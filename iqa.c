#include <gtk/gtk.h>
#include <stdlib.h>
#include "novo.h"

void entry_reset(GtkButton *buttonReset, GObject *object_entry){
    GtkEntry *data_entry1 = g_object_get_data (object_entry, "entry1");
    GtkEntry *data_entry2 = g_object_get_data (object_entry, "entry2");
    GtkEntry *data_entry3 = g_object_get_data (object_entry, "entry3");
    GtkEntry *data_entry4 = g_object_get_data (object_entry, "entry4");
    GtkEntry *data_entry5 = g_object_get_data (object_entry, "entry5");
    GtkEntry *data_entry6 = g_object_get_data (object_entry, "entry6");
    GtkEntry *data_entry7 = g_object_get_data (object_entry, "entry7");
    GtkEntry *data_entry8 = g_object_get_data (object_entry, "entry8");
    GtkEntry *data_entry9 = g_object_get_data (object_entry, "entry9");
    GtkEntry *data_entryPeso1 = g_object_get_data (object_entry, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (object_entry, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (object_entry, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (object_entry, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (object_entry, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (object_entry, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (object_entry, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (object_entry, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (object_entry, "entryPeso9");

    gtk_entry_set_text(GTK_ENTRY(data_entry1), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry2), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry3), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry4), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry5), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry6), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry7), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry8), "");
    gtk_entry_set_text(GTK_ENTRY(data_entry9), "");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso1), "0,15");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso2), "0,12");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso3), "0,10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso4), "0,10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso5), "0,10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso6), "0,10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso7), "0,08");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso8), "0,17");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso9), "0,08");
}

void btn_click (GtkButton *button, GObject *object_entry) {

    GtkEntry *data_entry1 = g_object_get_data (object_entry, "entry1");
    GtkEntry *data_entry2 = g_object_get_data (object_entry, "entry2");
    GtkEntry *data_entry3 = g_object_get_data (object_entry, "entry3");
    GtkEntry *data_entry4 = g_object_get_data (object_entry, "entry4");
    GtkEntry *data_entry5 = g_object_get_data (object_entry, "entry5");
    GtkEntry *data_entry6 = g_object_get_data (object_entry, "entry6");
    GtkEntry *data_entry7 = g_object_get_data (object_entry, "entry7");
    GtkEntry *data_entry8 = g_object_get_data (object_entry, "entry8");
    GtkEntry *data_entry9 = g_object_get_data (object_entry, "entry9");
    GtkEntry *data_entryPeso1 = g_object_get_data (object_entry, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (object_entry, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (object_entry, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (object_entry, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (object_entry, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (object_entry, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (object_entry, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (object_entry, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (object_entry, "entryPeso9");
    GtkLabel *result_iqa = g_object_get_data (object_entry, "resultLabel");

    double q1 = atof(gtk_entry_get_text(data_entry1));
    double q2 = atof(gtk_entry_get_text(data_entry2));
    double q3 = atof(gtk_entry_get_text(data_entry3));
    double q4 = atof(gtk_entry_get_text(data_entry4));
    double q5 = atof(gtk_entry_get_text(data_entry5));
    double q6 = atof(gtk_entry_get_text(data_entry6));
    double q7 = atof(gtk_entry_get_text(data_entry7));
    double q8 = atof(gtk_entry_get_text(data_entry8));
    double q9 = atof(gtk_entry_get_text(data_entry9));
    double peso1 = atof(gtk_entry_get_text(data_entryPeso1));
    double peso2 = atof(gtk_entry_get_text(data_entryPeso2));
    double peso3 = atof(gtk_entry_get_text(data_entryPeso3));
    double peso4 = atof(gtk_entry_get_text(data_entryPeso4));
    double peso5 = atof(gtk_entry_get_text(data_entryPeso5));
    double peso6 = atof(gtk_entry_get_text(data_entryPeso6));
    double peso7 = atof(gtk_entry_get_text(data_entryPeso7));
    double peso8 = atof(gtk_entry_get_text(data_entryPeso8));
    double peso9 = atof(gtk_entry_get_text(data_entryPeso9));

    double result = iqa(q1, q2, q3, q4, q5, q6, q7, q9, q8, peso1, peso2, peso3, peso4, peso5, peso6, peso7, peso8, peso9);
    printf("%.15lf\n", result);


    if(result <= 100 && result > 90) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Excelente \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
    } else if(result <= 90 && result > 70) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Bom \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
    } else if(result <= 70 && result > 50) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Médio \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
    } else if(result <= 50 && result > 25) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Ruim \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
    } else if(result <= 25 && result >= 0) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Muito Ruim \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
    }
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *label1, *label2, *label3, *label4, *label5, *label6, *label7, *label8, *label9, *labelPeso1, *labelPeso2, *labelPeso3, *labelPeso4, *labelPeso5, *labelPeso6, *labelPeso7, *labelPeso8, *labelPeso9, *spcLabel, *resultLabel, *qLabel;
    GtkWidget *entry1, *entry2, *entry3, *entry4, *entry5, *entry6, *entry7, *entry8, *entry9, *entryPeso1, *entryPeso2, *entryPeso3, *entryPeso4, *entryPeso5, *entryPeso6, *entryPeso7, *entryPeso8, *entryPeso9;
    GtkWidget *button, *buttonReset;

    GObject *object_entry;

    //Window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

    //Label
    label1 = gtk_label_new("Coliformes Fecais (NMP/100ml)");
    label2 = gtk_label_new("pH (unidades de ph)");
    label3 = gtk_label_new("DBO (mg/L)");
    label4 = gtk_label_new("Nitrogenio Total (mg/L)");
    label5 = gtk_label_new("Fosforo total (mg/L)");
    label6 = gtk_label_new("Temperatura");
    label7 = gtk_label_new("Turbidez (UNT)");
    label8 = gtk_label_new("Solidos totais mg/L");
    label9 = gtk_label_new("OD (%% saturacao)");
    labelPeso1 = gtk_label_new("Peso");
    labelPeso2 = gtk_label_new("Peso");
    labelPeso3 = gtk_label_new("Peso");
    labelPeso4 = gtk_label_new("Peso");
    labelPeso5 = gtk_label_new("Peso");
    labelPeso6 = gtk_label_new("Peso");
    labelPeso7 = gtk_label_new("Peso");
    labelPeso8 = gtk_label_new("Peso");
    labelPeso9 = gtk_label_new("Peso");
    spcLabel = gtk_label_new("");
    resultLabel = gtk_label_new("");
    qLabel = gtk_label_new("");

    //Entry
    entry1 = gtk_entry_new();
    entry2 = gtk_entry_new();
    entry3 = gtk_entry_new();
    entry4 = gtk_entry_new();
    entry5 = gtk_entry_new();
    entry6 = gtk_entry_new();
    entry7 = gtk_entry_new();
    entry8 = gtk_entry_new();
    entry9 = gtk_entry_new();
    entryPeso1 = gtk_entry_new();
    entryPeso2 = gtk_entry_new();
    entryPeso3 = gtk_entry_new();
    entryPeso4 = gtk_entry_new();
    entryPeso5 = gtk_entry_new();
    entryPeso6 = gtk_entry_new();
    entryPeso7 = gtk_entry_new();
    entryPeso8 = gtk_entry_new();
    entryPeso9 = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(entryPeso1), "0,15");
    gtk_entry_set_text(GTK_ENTRY(entryPeso2), "0,12");
    gtk_entry_set_text(GTK_ENTRY(entryPeso3), "0,10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso4), "0,10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso5), "0,10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso6), "0,10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso7), "0,08");
    gtk_entry_set_text(GTK_ENTRY(entryPeso8), "0,17");
    gtk_entry_set_text(GTK_ENTRY(entryPeso9), "0,08");

    //Button
    button = gtk_button_new_with_mnemonic("_Calcular");
    g_object_set_data(G_OBJECT(button), "entry1", entry1);
    g_object_set_data(G_OBJECT(button), "entry2", entry2);
    g_object_set_data(G_OBJECT(button), "entry3", entry3);
    g_object_set_data(G_OBJECT(button), "entry4", entry4);
    g_object_set_data(G_OBJECT(button), "entry5", entry5);
    g_object_set_data(G_OBJECT(button), "entry6", entry6);
    g_object_set_data(G_OBJECT(button), "entry7", entry7);
    g_object_set_data(G_OBJECT(button), "entry8", entry8);
    g_object_set_data(G_OBJECT(button), "entry9", entry9);
    g_object_set_data(G_OBJECT(button), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(button), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(button), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(button), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(button), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(button), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(button), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(button), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(button), "entryPeso9", entryPeso9);
    g_object_set_data(G_OBJECT(button), "resultLabel", resultLabel);
    g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(btn_click), button);

    //Button Reset
    buttonReset = gtk_button_new_with_mnemonic("_Reset");
    g_object_set_data(G_OBJECT(buttonReset), "entry1", entry1);
    g_object_set_data(G_OBJECT(buttonReset), "entry2", entry2);
    g_object_set_data(G_OBJECT(buttonReset), "entry3", entry3);
    g_object_set_data(G_OBJECT(buttonReset), "entry4", entry4);
    g_object_set_data(G_OBJECT(buttonReset), "entry5", entry5);
    g_object_set_data(G_OBJECT(buttonReset), "entry6", entry6);
    g_object_set_data(G_OBJECT(buttonReset), "entry7", entry7);
    g_object_set_data(G_OBJECT(buttonReset), "entry8", entry8);
    g_object_set_data(G_OBJECT(buttonReset), "entry9", entry9);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(buttonReset), "entryPeso9", entryPeso9);
    g_signal_connect(GTK_BUTTON(buttonReset), "clicked", G_CALLBACK(entry_reset), buttonReset);

    //Grid
    grid = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid), 20);
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_attach(GTK_GRID(grid), spcLabel, 0, 9, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label1, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry1, 2, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label2, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry2, 2, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label3, 1, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry3, 2, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label4, 1, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry4, 2, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label5, 1, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry5, 2, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label6, 1, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry6, 2, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label7, 1, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry7, 2, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label8, 1, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry8, 2, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), label9, 1, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry9, 2, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso1, 3, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso2, 3, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso3, 3, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso4, 3, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso5, 3, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso6, 3, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso7, 3, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso8, 3, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), labelPeso9, 3, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso1, 4, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso2, 4, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso3, 4, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso4, 4, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso5, 4, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso6, 4, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso7, 4, 6, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso8, 4, 7, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso9, 4, 8, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button, 4, 9, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), buttonReset, 2, 9, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), resultLabel, 2, 10, 1, 1);

    gtk_container_add(GTK_CONTAINER(window), grid);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
