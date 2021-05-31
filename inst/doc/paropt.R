## ----setup, include=FALSE-----------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)

## ---- echo = FALSE------------------------------------------------------------
states <- data.frame(time = seq(0, 24, 2), predator = c(10, runif(12) ), prey = c(10, runif(5), NA, runif(6)) ) 
knitr::kable(states, "html", caption = "Example for states")

## ---- echo = FALSE------------------------------------------------------------
lb <- data.frame(time = seq(0, 24, 2), const = c(1, rep(NA, 12)), variable = 1:13)
ub <- data.frame(time = seq(0, 24, 2), const = c(2, rep(NA, 12)), variable = 20)


knitr::kable(lb, "html", caption = "Example for the lower boundaries")
knitr::kable(ub, "html", caption = "Example for the upper boundaries")

## ---- results of optimization1, fig.cap = "Result for the predator data. Black: in silico values, Red: measured values", eval = T, echo = F, out.width = "\\textwidth", out.height = "\\textheight", ,fig.width=7, fig.height=5----
path <- system.file("examples", package = "paropt")
df <- read.table(paste(path, "/final_stateoutput.txt", sep = ""), header = T)
states <- read.table(paste(path,"/states_LV.txt", sep = ""), header = T)
plot(states$time, df[,1], pch = 19, type = 'l', ylab = "predator", xlab = "time")
points(states$time, states$n1, pch = 19, col = "darkred", type = 'l')

## ---- results of optimization2, fig.cap = "Result for the prey data. Black: in silico values, Red: measured values", eval = T, echo = F, out.width = "\\textwidth", out.height = "\\textheight", ,fig.width=7, fig.height=5----
path <- system.file("examples", package = "paropt")
df <- read.table(paste(path, "/final_stateoutput.txt", sep = ""), header = T)
states <- read.table(paste(path,"/states_LV.txt", sep = ""), header = T)
plot(states$time, df[,2], pch = 19, type = 'l', ylab = "prey", xlab = "time")
points(states$time, states$n2, pch = 19, col = "darkred", type = 'l')

## ---- optimizer, eval = F, echo = T-------------------------------------------
#  optimizer(integration_times, ode_system,
#            relative_tolerance, absolute_tolerances,
#            lb, ub, states,
#            npop, ngen, error, solvertype)

