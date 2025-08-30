import pandas as pd
import matplotlib.pyplot as plt
df = pd.read_csv("movies_data.csv")
print(df["imdb_rating"].mean())
print(df["budget"].mean())
print(df["revenue"].mean())
print(df["imdb_rating"].median())
print(df["budget"].median())
print(df["revenue"].median())
df["imdb_rating"].hist()
plt.show()
df.plot.scatter(x="budget", y="budget")
plt.show()
df.to_csv("output.csv", index=False)
