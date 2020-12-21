distKm = 10.0
distMi = (distKm * (1.0 / 1.61))
seconds = ((43.0 * 60.0) + 30.0)
hours = (43.5 / 60.0)

def timePerMile(distMi, seconds):
   print (seconds / distMi, 'seconds per mile')

def avgSpeed(distMi, hours):
   print (distMi / hours, 'miles per hour')

if __name__ == "__main__":

    timePerMile(distMi, seconds)
    avgSpeed(distMi, hours)
